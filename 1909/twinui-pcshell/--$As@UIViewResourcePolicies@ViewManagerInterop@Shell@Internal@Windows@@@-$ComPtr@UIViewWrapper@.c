/*
 * XREFs of ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180013D64
 * Callers:
 *     ?UnboostPriority@PriorityBoostHelper@@UEAAJXZ @ 0x180016C40 (-UnboostPriority@PriorityBoostHelper@@UEAAJXZ.c)
 *     ?BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ @ 0x180016DFC (-BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ.c)
 *     ?_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180071F18 (-_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ApplyPriorityUnboostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180072030 (-_ApplyPriorityUnboostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180072140 (-_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x180073A30 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ??$_GetViewWrapperAs@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@CortanaSharedExperienceManager@@AEAAJAEAV?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18019BBBC (--$_GetViewWrapperAs@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@CortanaS.c)
 *     ?ApplyPriorityBoostIfNeeded@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ @ 0x1801A233C (-ApplyPriorityBoostIfNeeded@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ.c)
 *     ?OnPriorityUnboostRequested@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801A27E0 (-OnPriorityUnboostRequested@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShel.c)
 *     ?OnViewCreated@PriorityBoostHelper@@QEAAJXZ @ 0x1801DFA98 (-OnViewCreated@PriorityBoostHelper@@QEAAJXZ.c)
 *     ?ResetActivationTimeoutPolicy@PriorityBoostHelper@@AEAAXXZ @ 0x1801DFDA0 (-ResetActivationTimeoutPolicy@PriorityBoostHelper@@AEAAXXZ.c)
 *     ?BoostPriority@KBViewInfo@@QEAAXXZ @ 0x18032D348 (-BoostPriority@KBViewInfo@@QEAAXXZ.c)
 *     ?UnboostPriority@KBViewInfo@@QEAAXXZ @ 0x180338968 (-UnboostPriority@KBViewInfo@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rsi

  v2 = *a1;
  v4 = *a2;
  v5 = **v2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v5(v2, &GUID_35f1648c_265f_402c_b575_c9a325451df5, a2);
}
