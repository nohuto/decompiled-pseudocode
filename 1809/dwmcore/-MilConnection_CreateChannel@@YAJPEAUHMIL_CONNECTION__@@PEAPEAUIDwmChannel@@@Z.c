/*
 * XREFs of ?MilConnection_CreateChannel@@YAJPEAUHMIL_CONNECTION__@@PEAPEAUIDwmChannel@@@Z @ 0x180077EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x180077F38 (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall MilConnection_CreateChannel(struct HMIL_CONNECTION__ *this, struct IDwmChannel **a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // ebx
  unsigned int v7; // ecx
  char *v9; // [rsp+48h] [rbp+10h] BYREF
  struct CChannel *v10; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 )
  {
    if ( this )
    {
      v9 = (char *)this + 112;
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
      v4 = CConnection::CreateKernelChannel(this, &v10);
      v6 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x7Cu);
      CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x6Eu);
      else
        *a2 = v10;
    }
    else
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024809, 0x6Au);
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x69u);
  }
  return (unsigned int)v6;
}
