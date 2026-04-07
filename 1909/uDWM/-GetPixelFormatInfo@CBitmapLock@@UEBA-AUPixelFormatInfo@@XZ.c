/*
 * XREFs of ?GetPixelFormatInfo@CBitmapLock@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800494E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800498B4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapLock::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1 - 56;
  v7 = v4;
  if ( *(_BYTE *)(v4 + 48) )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  v5 = *(_DWORD *)(a1 + 52);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 44);
  *(_DWORD *)(a2 + 8) = v5;
  CGuard<CMTALock>::~CGuard<CMTALock>(&v7);
  return a2;
}
