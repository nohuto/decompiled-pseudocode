/*
 * XREFs of MiAllocateDriverPage @ 0x140654BD4
 * Callers:
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB490 (MiMakeDriverPagesPrivate.c)
 *     MiPrivateFixup @ 0x140125F10 (MiPrivateFixup.c)
 *     MiFillPerSessionProtos @ 0x14085D65C (MiFillPerSessionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x1409B8C6C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiGetNextPageColor @ 0x140031260 (MiGetNextPageColor.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     MiPreInitializeSystemImagePage @ 0x1400DBE28 (MiPreInitializeSystemImagePage.c)
 *     MiUseSlabAllocatorForDriverPage @ 0x1400DBEB0 (MiUseSlabAllocatorForDriverPage.c)
 *     MiGetSlabPage @ 0x1402C2BCC (MiGetSlabPage.c)
 *     MiWaitForFreePage @ 0x1402CB694 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateDriverPage(ULONG_PTR *a1, char a2)
{
  char v3; // dl
  __int64 Page; // rbx
  __int16 v5; // ax
  unsigned int NextPageColor; // esi
  unsigned int i; // edx
  _BYTE v9[16]; // [rsp+60h] [rbp-18h] BYREF
  __int64 SlabPage; // [rsp+90h] [rbp+18h] BYREF

  SlabPage = -1LL;
  if ( !(unsigned int)MiUseSlabAllocatorForDriverPage((__int64)a1, a2)
    || (SlabPage = MiGetSlabPage((__int64)a1, v3, (__int64 *)0xFFFFFFFFFFFFFFFFLL), Page = SlabPage, SlabPage == -1) )
  {
    if ( (int)MiFindContiguousPages(
                (__int64)a1,
                0LL,
                qword_140439F90,
                0LL,
                1uLL,
                1u,
                0x80000000,
                0x80000000,
                0x20000000,
                0LL,
                &SlabPage) < 0 )
    {
      qword_140439F90 = -1LL;
      MiInitializePageColorBase(0LL, 0, (__int64)v9);
      NextPageColor = MiGetNextPageColor((__int64)v9);
      for ( i = NextPageColor; ; i = NextPageColor )
      {
        Page = MiGetPage((__int64)a1, i, 0);
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
      v5 = ++qword_140439FD8;
      if ( a1 == &MiSystemPartition )
      {
        if ( (v5 & 0x1FF) != 0 )
          qword_140439F90 = SlabPage - 1;
        else
          qword_140439F90 = -1LL;
      }
      MiPreInitializeSystemImagePage(48 * SlabPage - 0x58000000000LL);
    }
  }
  return Page;
}
