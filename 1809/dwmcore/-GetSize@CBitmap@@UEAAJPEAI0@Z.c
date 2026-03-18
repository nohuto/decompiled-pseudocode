/*
 * XREFs of ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x1800973C0
 * Callers:
 *     ?GetSize@CBitmap@@WBI@EAAJPEAI0@Z @ 0x1800F0480 (-GetSize@CBitmap@@WBI@EAAJPEAI0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::GetSize(CBitmap *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  char *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = (char *)this + 104;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v6 = 0;
  if ( a2 && a3 )
  {
    *a2 = *((_DWORD *)this + 38);
    *a3 = *((_DWORD *)this + 39);
  }
  else
  {
    v6 = -2147024809;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v6;
}
