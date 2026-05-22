/*
 * XREFs of ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000AA20
 * Callers:
 *     ?CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800059E0 (-CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 *     ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x18003FD94 (-Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x1800419C0 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x18004CFF4 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ?Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18006ADD0 (-Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 *     ?StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x18006B80C (-StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 *     ?StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x18006BBD4 (-StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAVWGIRawInputProvider@@@Z @ 0x18006D044 (-RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRa.c)
 *     ?Create@InputSiteTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@@Z @ 0x180091754 (-Create@InputSiteTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$ComPtr@VInputSite@@@.c)
 *     ?Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ @ 0x1800CDF68 (-Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ.c)
 *     ?get_MPCConstantManagerClient@MPCManagerClient@@UEAAJPEAPEAUIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x1800DAA60 (-get_MPCConstantManagerClient@MPCManagerClient@@UEAAJPEAPEAUIMPCConstantManagerClient@MPCManager.c)
 *     ?add_ServerConnectionChanged@MPCManagerClient@@UEAAJPEAU?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVServerConnectionArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1800DAB70 (-add_ServerConnectionChanged@MPCManagerClient@@UEAAJPEAU-$ITypedEventHandler@PEAVMPCManagerClien.c)
 *     ?OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ @ 0x1800DAD04 (-OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ.c)
 *     ?OnInteractiveIntentGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@AEBULegacyDeviceInfo@@IIII_KI@Z @ 0x1800DF220 (-OnInteractiveIntentGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@AEBULe.c)
 *     ?OnHomeGestureDetected@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@II_KI@Z @ 0x1800DF730 (-OnHomeGestureDetected@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@II_KI@Z.c)
 *     ?OnButtonsChangedDuringHomeGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@III_KI@Z @ 0x1800DF7F0 (-OnButtonsChangedDuringHomeGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x1800033AC (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_FailFast_NullAlloc(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 3, 0x8007000E);
}
