/*
 * XREFs of ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x180121CD4
 * Callers:
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x18011CC10 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e5f0854e2d49c9821f8031fdfacb73ef___ @ 0x180118DDC (Windows--Internal--ComTaskPool--QueueTask__lambda_e5f0854e2d49c9821f8031fdfacb73ef___.c)
 *     ??0ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x180119238 (--0ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ??_GChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAPEAXI@Z @ 0x180119F6C (--_GChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAPEAX.c)
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x18011F160 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 */

void __fastcall CImmersiveApp::_RemoveFromChain(CImmersiveApp *this)
{
  void *v2; // rax
  _DWORD *v3; // rbx
  __int64 v4; // rcx
  _DWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 25) )
  {
    v2 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    v3 = v2
       ? (_DWORD *)Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::ChainLinkNotifier((__int64)v2)
       : 0LL;
    if ( v3 )
    {
      Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainInternal(
        (__int64)this + 176,
        (__int64)v3);
      *v3 = 1;
      v5 = v3;
      if ( (int)Windows::Internal::ComTaskPool::QueueTask__lambda_e5f0854e2d49c9821f8031fdfacb73ef___(v4, &v5) >= 0 )
        v3 = 0LL;
      if ( v3 )
        Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::`scalar deleting destructor'(v3);
    }
  }
}
