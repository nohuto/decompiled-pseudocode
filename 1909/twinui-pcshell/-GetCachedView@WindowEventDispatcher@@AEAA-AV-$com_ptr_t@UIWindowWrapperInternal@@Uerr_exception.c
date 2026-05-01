/*
 * XREFs of ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x180018B70
 * Callers:
 *     ?WindowRemoved@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180018580 (-WindowRemoved@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Interna.c)
 *     ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x180018760 (-TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@W.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18001F810 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     _lambda_55c662481733b548f9656ca853e76ad4_::operator() @ 0x1800A7910 (_lambda_55c662481733b548f9656ca853e76ad4_--operator().c)
 *     ?AppViewConsolidateRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewRequestEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18029A870 (-AppViewConsolidateRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewRequestEventArgs@WindowMana.c)
 *     ?ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18029B410 (-ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowi.c)
 *     ?GetCachedWindowWrapper@WindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UAppViewId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18029CC20 (-GetCachedWindowWrapper@WindowEventDispatcher@@UEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_.c)
 *     ?SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1802A0568 (-SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@W.c)
 *     ?TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@W4ViewGroupingPreference@7895@PEAUIAsyncCallback@@@Z @ 0x1802A090C (-TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall WindowEventDispatcher::GetCachedView(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v5; // rbx
  __int64 *v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rcx

  *a2 = 0LL;
  v5 = *(__int64 **)(a1 + 352);
  v6 = *(__int64 **)(a1 + 360);
  while ( v5 != v6 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*v5 + 288LL))(*v5) == a3 )
    {
      v7 = *a2;
      v8 = *v5;
      *a2 = *v5;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      return a2;
    }
    ++v5;
  }
  return a2;
}
