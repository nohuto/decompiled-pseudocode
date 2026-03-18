/*
 * XREFs of ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x1802147D0
 * Callers:
 *     ?SetResolution@CBitmap@@WBA@EAAJNN@Z @ 0x1800F0530 (-SetResolution@CBitmap@@WBA@EAAJNN@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::SetResolution(CBitmap *this, double a2, double a3)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v4 = a2;
  v5 = a3;
  *((float *)this + 38) = v4;
  *((float *)this + 39) = v5;
  if ( (*((_DWORD *)this + 22))++ == -1 )
    ++*((_DWORD *)this + 22);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return 0LL;
}
