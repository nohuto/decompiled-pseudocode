/*
 * XREFs of ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x180070C84
 * Callers:
 *     ?Hide@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1800709F0 (-Hide@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?PrepareForAppTransition@CortanaSharedExperienceManager@@UEAAJW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180070A70 (-PrepareForAppTransition@CortanaSharedExperienceManager@@UEAAJW4CortanaAppTransitionType@Experie.c)
 *     ?ShowWithStart@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x180070B20 (-ShowWithStart@CortanaSharedExperienceManager@@UEAAJE@Z.c)
 *     ?TakeKeyboardFocus@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180070BD0 (-TakeKeyboardFocus@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?Uncloak@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180070C30 (-Uncloak@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?MinimizeToBoxMode@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1801528F0 (-MinimizeToBoxMode@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?get_IsExplicitDismissEnabled@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x180155980 (-get_IsExplicitDismissEnabled@CortanaSharedExperienceManager@@UEAAJPEAE@Z.c)
 *     ?get_SuggestionsShowing@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x1801559E0 (-get_SuggestionsShowing@CortanaSharedExperienceManager@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall CortanaSharedExperienceManager::TryGetDesktopViewIfActive(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  void (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+8h] BYREF
  __int64 *v6; // [rsp+48h] [rbp+10h]

  v6 = a2;
  *a2 = 0LL;
  v5 = 0LL;
  v3 = *(_QWORD *)(a1 + 400);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  if ( (*(int (__fastcall **)(__int64, void (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v3 + 8LL))(
         v3,
         &v5) >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
    (**v5)(v5, &GUID_c2f00e7e_94c0_4da2_8530_103a4f231f12, a2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  return a2;
}
