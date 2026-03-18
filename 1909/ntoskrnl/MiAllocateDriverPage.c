/*
 * XREFs of MiAllocateDriverPage @ 0x140650F8C
 * Callers:
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400FABE4 (MiMakeDriverPagesPrivate.c)
 *     MiPrivateFixup @ 0x140126D84 (MiPrivateFixup.c)
 *     MiFillPerSessionProtos @ 0x1408987B4 (MiFillPerSessionProtos.c)
 *     MiHandleBootImage @ 0x1409EF61C (MiHandleBootImage.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiFindContiguousPages @ 0x1400B9E60 (MiFindContiguousPages.c)
 *     MiGetNextPageColor @ 0x1400BAD8C (MiGetNextPageColor.c)
 *     MiPreInitializeSystemImagePage @ 0x1400C4790 (MiPreInitializeSystemImagePage.c)
 *     MiUseSlabAllocatorForDriverPage @ 0x1400C4B00 (MiUseSlabAllocatorForDriverPage.c)
 *     MiGetSlabPage @ 0x1402DC244 (MiGetSlabPage.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateDriverPage(ULONG_PTR *a1, int a2)
{
  char v3; // dl
  __int64 v4; // rcx
  __int64 Page; // rbx
  __int16 v6; // ax
  unsigned int NextPageColor; // esi
  unsigned int i; // edx
  _QWORD v10[5]; // [rsp+60h] [rbp-28h] BYREF
  int v11; // [rsp+A0h] [rbp+18h] BYREF
  __int64 SlabPage; // [rsp+A8h] [rbp+20h] BYREF

  v10[0] = 0LL;
  v10[1] = 0LL;
  SlabPage = -1LL;
  if ( !(unsigned int)MiUseSlabAllocatorForDriverPage((__int64)a1, a2, &v11)
    || (SlabPage = MiGetSlabPage(v4, v3, v11, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0), Page = SlabPage, SlabPage == -1) )
  {
    if ( (int)MiFindContiguousPages(
                (__int64)a1,
                0LL,
                qword_1404645F0,
                0LL,
                1uLL,
                1,
                0x80000000,
                0x80000000,
                0x20000000,
                0LL,
                &SlabPage) < 0 )
    {
      qword_1404645F0 = -1LL;
      MiInitializePageColorBase(0LL, 0, (__int64)v10);
      NextPageColor = MiGetNextPageColor((__int64)v10);
      for ( i = NextPageColor; ; i = NextPageColor )
      {
        Page = MiGetPage((__int64)a1, i, 0LL);
        if ( Page != -1 )
          break;
        if ( KeGetCurrentIrql() == 2 )
          return -1LL;
        MiWaitForFreePage(a1);
      }
    }
    else
    {
      Page = SlabPage;
      v6 = ++qword_140464638;
      if ( a1 == &MiSystemPartition )
      {
        if ( (v6 & 0x1FF) != 0 )
          qword_1404645F0 = SlabPage - 1;
        else
          qword_1404645F0 = -1LL;
      }
      MiPreInitializeSystemImagePage(48 * SlabPage - 0x58000000000LL);
    }
  }
  return Page;
}
