/*
 * XREFs of ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x18016A650
 * Callers:
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180164920 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180151860 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4Rep.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a5fd20ec656c6250dae9aa58fde1c803___ @ 0x18015FDDC (Windows--Internal--ComTaskPool--QueueTask__lambda_a5fd20ec656c6250dae9aa58fde1c803___.c)
 *     ??0ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x18016076C (--0ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ??_GChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAPEAXI@Z @ 0x1801613DC (--_GChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAPEAX.c)
 *     ?GetNextChainLinks@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAPEAU?$IVectorView@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@Collections@Foundation@5@@Z @ 0x180163EC0 (-GetNextChainLinks@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAPEA.c)
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x1801676B0 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::_RemoveFromChain(CImmersiveApp *this, __int64 a2, __int64 a3)
{
  char *v4; // rdi
  __int64 v5; // r8
  char v6; // bl
  void *v7; // rax
  __int64 v8; // r8
  _DWORD *v9; // rbx
  __int64 v10; // rcx
  _DWORD *v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsageToService((__int64)this, a2, a3);
  v12 = 0LL;
  v4 = (char *)this + 176;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  if ( (int)Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::GetNextChainLinks(
              (__int64)this + 176,
              &v12,
              v5) < 0
    || (*(int (__fastcall **)(__int64, _DWORD **))(*(_QWORD *)v12 + 56LL))(v12, &v11) < 0
    || (v6 = 1, !(_DWORD)v11) )
  {
    v6 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  if ( v6 )
  {
    v7 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v7
       ? (_DWORD *)Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::ChainLinkNotifier((__int64)v7)
       : 0LL;
    if ( v9 )
    {
      Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainInternal(
        (__int64)v4,
        (__int64)v9,
        v8);
      *v9 = 1;
      v11 = v9;
      if ( (int)Windows::Internal::ComTaskPool::QueueTask__lambda_a5fd20ec656c6250dae9aa58fde1c803___(v10, &v11) >= 0 )
        v9 = 0LL;
      if ( v9 )
        Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::`scalar deleting destructor'(v9);
    }
  }
}
