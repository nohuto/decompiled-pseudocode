/*
 * XREFs of ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x180052E84
 * Callers:
 *     ?Hide@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180052B50 (-Hide@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?ShowWithStart@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x180052CD0 (-ShowWithStart@CortanaSharedExperienceManager@@UEAAJE@Z.c)
 *     ?TakeKeyboardFocus@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180052D80 (-TakeKeyboardFocus@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?Uncloak@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180052DE0 (-Uncloak@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?MinimizeToBoxMode@CortanaSharedExperienceManager@@UEAAJXZ @ 0x18017E6E0 (-MinimizeToBoxMode@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?PrepareForAppTransition@CortanaSharedExperienceManager@@UEAAJW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18017F7B0 (-PrepareForAppTransition@CortanaSharedExperienceManager@@UEAAJW4CortanaAppTransitionType@Experie.c)
 *     ?get_IsExplicitDismissEnabled@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x1801819B0 (-get_IsExplicitDismissEnabled@CortanaSharedExperienceManager@@UEAAJPEAE@Z.c)
 *     ?get_SuggestionsShowing@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x180181A10 (-get_SuggestionsShowing@CortanaSharedExperienceManager@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CortanaSharedExperienceManager::TryGetDesktopViewIfActive(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  int (__fastcall *v4)(__int64, void (__fastcall ****)(_QWORD, GUID *, _QWORD *)); // rbx
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall *v6)(_QWORD, GUID *, _QWORD *); // rdi
  void (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+48h] [rbp+10h]

  v9 = a2;
  *a2 = 0LL;
  v8 = 0LL;
  v3 = *(_QWORD *)(a1 + 424);
  v4 = *(int (__fastcall **)(__int64, void (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(*(_QWORD *)v3 + 8LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( v4(v3, &v8) >= 0 )
  {
    v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v8;
    v6 = **v8;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
    v6(v5, &GUID_c2f00e7e_94c0_4da2_8530_103a4f231f12, a2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return a2;
}
