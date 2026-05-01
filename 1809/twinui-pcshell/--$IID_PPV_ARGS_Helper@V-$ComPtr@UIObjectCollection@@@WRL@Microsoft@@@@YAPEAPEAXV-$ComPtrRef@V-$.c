/*
 * XREFs of ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180080A50
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_f50e41e2a94bb9c65f89ee2429a9e4ef___ @ 0x180089594 (ShellPositionerHelpers--PerformCallbackOnView__lambda_f50e41e2a94bb9c65f89ee2429a9e4ef___.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_824e0001d4003052e3151e6c6489077e___ @ 0x18008A81C (ShellPositionerHelpers--PerformCallbackOnView__lambda_824e0001d4003052e3151e6c6489077e___.c)
 *     _lambda_824e0001d4003052e3151e6c6489077e_::operator() @ 0x18008AB00 (_lambda_824e0001d4003052e3151e6c6489077e_--operator().c)
 *     _lambda_830bb74467276d48148af287ccc5d12f_::operator() @ 0x18008CED8 (_lambda_830bb74467276d48148af287ccc5d12f_--operator().c)
 *     _lambda_da9ca9c5cbe2ebf305b53c7e4a21d9d4_::operator() @ 0x18008CF90 (_lambda_da9ca9c5cbe2ebf305b53c7e4a21d9d4_--operator().c)
 *     _lambda_8477647376d1ac227fe70683c35b05e3_::operator() @ 0x18008D54C (_lambda_8477647376d1ac227fe70683c35b05e3_--operator().c)
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_4a41105171a7dcf0697434a48a681187___ @ 0x180095310 (ShellPositionerManager--DoWorkForEachMonitor__lambda_4a41105171a7dcf0697434a48a681187___.c)
 *     _lambda_4a41105171a7dcf0697434a48a681187_::operator() @ 0x1800956EC (_lambda_4a41105171a7dcf0697434a48a681187_--operator().c)
 *     _lambda_8f06f521b4af2551e491113924647167_::operator() @ 0x18009582C (_lambda_8f06f521b4af2551e491113924647167_--operator().c)
 *     _lambda_8c85894c38574ac9f74aa209c69d94d2_::operator() @ 0x18009A9F0 (_lambda_8c85894c38574ac9f74aa209c69d94d2_--operator().c)
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x18012B618 (--1CApplicationViewManager@@EEAA@XZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18012D5A0 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 *     ??1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ @ 0x18012EC64 (--1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ.c)
 *     ?GetOnComplete@?$AsyncBase@U?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1801A9C00 (-GetOnComplete@-$AsyncBase@U-$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewMana.c)
 *     ??1PeoplePaneViewManager@@UEAA@XZ @ 0x1801C7898 (--1PeoplePaneViewManager@@UEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@_K1@Z @ 0x1801CC27C (-_Change_array@-$vector@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIAp.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@0@Z @ 0x1801CC340 (-_Destroy@-$vector@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIApplica.c)
 *     ?erase@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1801CC414 (-erase@-$vector@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIApplicatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IObjectCollection>>(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  return a1;
}
