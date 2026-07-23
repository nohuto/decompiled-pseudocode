/*
 * XREFs of MxMarkActiveDriverBits @ 0x1409B9D60
 * Callers:
 *     MiInitializeDriverImages @ 0x1409B7BDC (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x1409B9D60 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1400265A8 (MiSplitBitmapPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeZeroSinglePage @ 0x1401C0A50 (KeZeroSinglePage.c)
 *     MxMarkActiveDriverBits @ 0x1409B9D60 (MxMarkActiveDriverBits.c)
 */

unsigned __int64 __fastcall MxMarkActiveDriverBits(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  int v7; // r12d
  unsigned __int64 result; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbp

  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( a2 < *(_QWORD *)(a4 + 16LL * a5) )
    v5 = *(_QWORD *)(a4 + 16LL * a5);
  result = *(_QWORD *)(a4 + 16LL * a5 + 8);
  if ( a3 > result )
    v6 = *(_QWORD *)(a4 + 16LL * a5 + 8);
  for ( ; v5 <= v6; v5 += 8LL )
  {
    result = MI_READ_PTE_LOCK_FREE(v5);
    if ( (result & 1) != 0 )
    {
      v10 = (__int64)(v5 << 25) >> 16;
      if ( a5 == 1 )
      {
        v11 = ((v10 << 25 >> 16) - a1[4]) >> 21;
        v12 = a1[1] + (v11 >> 3);
        if ( (*(_DWORD *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0x800LL) == 0 )
        {
          MiSplitBitmapPages(0xCu, a1[1] + (v11 >> 3), (v11 & 7) + 1);
          KeZeroSinglePage((_OWORD *)(v12 & 0xFFFFFFFFFFFFF000uLL));
        }
        if ( *a1 <= v11 )
          *a1 = v11 + 1;
        result = a1[1];
        _bittestandset64((signed __int64 *)result, v11);
      }
      else
      {
        result = MxMarkActiveDriverBits((_DWORD)a1, (__int64)(v5 << 25) >> 16, (int)v10 + 4088, v7, a5 - 1);
      }
    }
  }
  return result;
}
