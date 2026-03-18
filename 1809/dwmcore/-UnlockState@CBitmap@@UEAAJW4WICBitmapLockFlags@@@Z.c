/*
 * XREFs of ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x180097130
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::UnlockState(CBitmap *this, enum WICBitmapLockFlags a2)
{
  char v3; // di
  char *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  v5 = (char *)this + 88;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  if ( (v3 & 2) != 0 )
  {
    *((_DWORD *)this + 41) = 0;
  }
  else if ( (v3 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)this + 41);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v5);
  return 0LL;
}
