/*
 * XREFs of ??1?$MakeAllocator@VCGameEntry@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18004107C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CQueryKnownGameList_CQueryKnownGameList_unsigned_short_const_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1800450D0 (_Microsoft--WRL--Details--MakeAndInitialize_CQueryKnownGameList_CQueryKnownGameList_unsigned_sho.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CGameEntry_KnownGameList::IGameEntry_KnownGameList::IGameEntry_____ptr64__::_1_::dtor$0 @ 0x1800450E2 (_Microsoft--WRL--Details--MakeAndInitialize_CGameEntry_KnownGameList--IGameEntry_KnownGameList--.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18004339C (--3@YAXPEAX@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CGameEntry>::~MakeAllocator<CGameEntry>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
