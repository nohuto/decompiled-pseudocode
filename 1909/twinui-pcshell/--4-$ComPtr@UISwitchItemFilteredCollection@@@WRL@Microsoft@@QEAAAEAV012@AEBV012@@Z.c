/*
 * XREFs of ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A481C
 * Callers:
 *     _lambda_6f5f86943447a9eee0358fb4a1366934_::operator() @ 0x1800AAA78 (_lambda_6f5f86943447a9eee0358fb4a1366934_--operator().c)
 *     ?OnViewCreated@CortanaStoreAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DCDA8 (-OnViewCreated@CortanaStoreAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@3@@Z @ 0x180211180 (-Get@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Ac.c)
 *     ?Get@?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@23@@Z @ 0x180211248 (-Get@-$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Int.c)
 *     ?_GetVirtualMonitorSlateHost@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPEAPEAUIVirtualMonitorSlateHost@2345@@Z @ 0x180234C5C (-_GetVirtualMonitorSlateHost@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPE.c)
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18028C62C (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 *     _lambda_9f83fe393cfdaab87baa37a27426f58f_::operator() @ 0x1802B5D14 (_lambda_9f83fe393cfdaab87baa37a27426f58f_--operator().c)
 *     _lambda_243107b6e7951c22bf872808b8683140_::operator() @ 0x1802C5248 (_lambda_243107b6e7951c22bf872808b8683140_--operator().c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18032DE94 (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180338C30 (-UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180353630 (-UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x180353904 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x18036FD8C (-RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(*a2);
      v2 = *a1;
    }
    v6 = v2;
    *a1 = v4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  }
  return a1;
}
