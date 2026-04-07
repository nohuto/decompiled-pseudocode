/*
 * XREFs of ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x1800B8ED0
 * Callers:
 *     ?GetSize@CBitmap@@WBI@EAAJPEAI0@Z @ 0x18004FC80 (-GetSize@CBitmap@@WBI@EAAJPEAI0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800498B4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::GetSize(CBitmap *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v4; // ebx
  char *v5; // rcx
  char *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (char *)this + 96;
  v9 = v5;
  if ( v5[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 8));
  if ( a2 && a3 )
  {
    *a2 = *((_DWORD *)this + 42);
    *a3 = *((_DWORD *)this + 43);
  }
  else
  {
    v4 = -2147024809;
  }
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v9);
  return v4;
}
