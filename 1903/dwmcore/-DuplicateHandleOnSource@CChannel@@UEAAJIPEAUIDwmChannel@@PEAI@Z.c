/*
 * XREFs of ?DuplicateHandleOnSource@CChannel@@UEAAJIPEAUIDwmChannel@@PEAI@Z @ 0x180040170
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z @ 0x180040BB0 (-DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CChannel::DuplicateHandleOnSource(
        CChannel *this,
        unsigned int a2,
        struct IDwmChannel *a3,
        unsigned int *a4)
{
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  char *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  if ( *((_QWORD *)a3 + 6) == *((_QWORD *)this + 6) )
  {
    v9 = CHandleTable::DuplicateHandle((CChannel *)((char *)this + 16), this, a2, a3, a4);
    v11 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x30Bu, 0LL);
  }
  else
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x305u, 0LL);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v11;
}
