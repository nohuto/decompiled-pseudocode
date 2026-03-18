/*
 * XREFs of ?AddRefResource@CChannel@@UEAAJI@Z @ 0x180099810
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18009A3F4 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::AddRefResource(CChannel *this, int a2)
{
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  char *v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v9 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  if ( a2 )
  {
    v5 = CHandleTable::CreateOrAddRefOnChannel((char *)this + 16, this, 0LL, &v10);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x2A4u);
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024809, 0x2A1u);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v7;
}
