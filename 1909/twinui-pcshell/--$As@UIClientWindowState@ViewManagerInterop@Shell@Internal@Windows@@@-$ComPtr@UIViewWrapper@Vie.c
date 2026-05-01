/*
 * XREFs of ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800394C0
 * Callers:
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x180012FEC (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800149C0 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180014F24 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ??$_GetViewWrapperAs@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@ShellFeedsExperienceManagerImpl@@AEAAJAEAV?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x180092648 (--$_GetViewWrapperAs@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@ShellFeedsE.c)
 *     ?GetViewWindow@CBaseTrayFlyoutExperienceManager@@QEAAJPEAPEAUHWND__@@@Z @ 0x180098120 (-GetViewWindow@CBaseTrayFlyoutExperienceManager@@QEAAJPEAPEAUHWND__@@@Z.c)
 *     ?OnViewCreated@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800992D0 (-OnViewCreated@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180099540 (-OnViewDestroyed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::operator() @ 0x18014D784 (_lambda_73bca28b4d92a1291c49cf8f8a9be4e0_--operator().c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x180157BF4 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?PresentFramedView@FrameWrapper@@UEAAJXZ @ 0x18016C1C0 (-PresentFramedView@FrameWrapper@@UEAAJXZ.c)
 *     ??$_GetViewWrapperAs@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@CortanaSharedExperienceManager@@AEAAJAEAV?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18019BAF8 (--$_GetViewWrapperAs@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@CortanaShar.c)
 *     ?OnViewCreated@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801AF1D0 (-OnViewCreated@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B1C90 (-OnViewCreated@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C16A0 (-OnViewCreated@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C19A0 (-OnViewDestroyed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CortanaStoreAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DCDA8 (-OnViewCreated@CortanaStoreAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?OnViewDestroyed@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DD2BC (-OnViewDestroyed@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?UnsubscribeFromServicesInternal@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DEC90 (-UnsubscribeFromServicesInternal@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180353FD0 (-_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@I.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
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
  return v5(v2, &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e, a2);
}
