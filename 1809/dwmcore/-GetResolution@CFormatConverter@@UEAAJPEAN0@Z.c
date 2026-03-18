/*
 * XREFs of ?GetResolution@CFormatConverter@@UEAAJPEAN0@Z @ 0x1802156A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFormatConverter::GetResolution(CFormatConverter *this, double *a2, double *a3)
{
  int v6; // edi
  __int64 v7; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  v6 = -2003292404;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v7 = *((_QWORD *)this + 6);
  if ( !v7 || (v6 = (*(__int64 (__fastcall **)(__int64, double *, double *))(*(_QWORD *)v7 + 40LL))(v7, a2, a3), v6 < 0) )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x223u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return (unsigned int)v6;
}
