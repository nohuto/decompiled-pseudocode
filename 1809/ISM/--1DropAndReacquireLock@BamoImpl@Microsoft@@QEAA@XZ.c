/*
 * XREFs of ??1DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010E2C
 * Callers:
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected_::_1_::dtor$2 @ 0x18012E719 (_Microsoft--BamoImpl--BaseBamoConnectionImpl--OnPeerConnected_--_1_--dtor$2.c)
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected_::_1_::dtor$3 @ 0x18012E72B (_Microsoft--BamoImpl--BaseBamoConnectionImpl--OnPeerConnected_--_1_--dtor$3.c)
 *     _IAsyncHRESULTPrincipal_Receive_BamoImpl::BamoAsyncHRESULTPrincipalImpl_::Thunk_SetOutcome_0_::_1_::dtor$0 @ 0x18012E773 (_IAsyncHRESULTPrincipal_Receive_BamoImpl--BamoAsyncHRESULTPrincipalImpl_--Thunk_SetOutcome_0_--_.c)
 *     _IMPCManagerClientPrincipal_Receive_BamoImpl::BamoMPCManagerClientPrincipalImpl_::Thunk_OnMenuPressed_64_::_1_::dtor$0 @ 0x18012E785 (_IMPCManagerClientPrincipal_Receive_BamoImpl--BamoMPCManagerClientPrincipalImpl_--Thunk_OnMenuPr.c)
 *     _ITestCommandsPrincipal_Receive_BamoImpl::BamoTestCommandsPrincipalImpl_::Thunk_RequestHitTest_3_::_1_::dtor$0 @ 0x18012E797 (_ITestCommandsPrincipal_Receive_BamoImpl--BamoTestCommandsPrincipalImpl_--Thunk_RequestHitTest_3.c)
 *     _BamoImpl::BamoAsyncHRESULTStubImpl::OnDisconnectedThunk_::_1_::dtor$0 @ 0x18012E7A9 (_BamoImpl--BamoAsyncHRESULTStubImpl--OnDisconnectedThunk_--_1_--dtor$0.c)
 *     _IMPCManagerProxy_Receive_BamoImpl::BamoMPCManagerProxyImpl_::Thunk_UpdateMPCConstantManagerClient_45_::_1_::dtor$0 @ 0x18012E843 (_IMPCManagerProxy_Receive_BamoImpl--BamoMPCManagerProxyImpl_--Thunk_UpdateMPCConstantManagerClie.c)
 *     _ISystemCursorControllerPrincipal_Receive_BamoImpl::BamoSystemCursorControllerPrincipalImpl_::Thunk_EnsureServiceAndRegisterClient_0_::_1_::dtor$0 @ 0x18012EAED (_ISystemCursorControllerPrincipal_Receive_BamoImpl--BamoSystemCursorControllerPrincipalImpl_--Th.c)
 *     _IMPCConstantManagerClientPrincipal_Receive_BamoImpl::BamoMPCConstantManagerClientPrincipalImpl_::Thunk_SetConstantForDeviceToDefault_36_::_1_::dtor$0 @ 0x18012EB72 (_IMPCConstantManagerClientPrincipal_Receive_BamoImpl--BamoMPCConstantManagerClientPrincipalImpl_.c)
 *     _IMPCConstantManagerClientPrincipal_Receive_BamoImpl::BamoMPCConstantManagerClientPrincipalImpl_::Thunk_UpdateConstantForDevice_8_::_1_::dtor$0 @ 0x18013055F (_IMPCConstantManagerClientPrincipal_Receive_BamoImpl--BamoMPCConstantManagerClientP_ea_18013055F.c)
 *     _IMPCConstantManagerClientPrincipal_Receive_BamoImpl::BamoMPCConstantManagerClientPrincipalImpl_::Thunk_UpdateConstantForType_17_::_1_::dtor$0 @ 0x180130571 (_IMPCConstantManagerClientPrincipal_Receive_BamoImpl--BamoMPCConstantManagerClientP_ea_180130571.c)
 *     _IMPCManagerClientPrincipal_Receive_BamoImpl::BamoMPCManagerClientPrincipalImpl_::Thunk_OnInteractiveIntentGesture_53_::_1_::dtor$0 @ 0x1801346AE (_IMPCManagerClientPrincipal_Receive_BamoImpl--BamoMPCManagerClientPrincipalImpl_--Thunk_OnIntera.c)
 *     _IMPCManagerClientPrincipal_Receive_BamoImpl::BamoMPCManagerClientPrincipalImpl_::Thunk_OnHomeGestureDetected_75_::_1_::dtor$0 @ 0x1801346C0 (_IMPCManagerClientPrincipal_Receive_BamoImpl--BamoMPCManagerClientPrincipalImpl_--Thunk_OnHomeGe.c)
 *     _IMPCManagerClientPrincipal_Receive_BamoImpl::BamoMPCManagerClientPrincipalImpl_::Thunk_OnButtonsChangedDuringHomeGesture_81_::_1_::dtor$0 @ 0x1801346D2 (_IMPCManagerClientPrincipal_Receive_BamoImpl--BamoMPCManagerClientPrincipalImpl_--Thunk_OnButton.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::BamoImpl::DropAndReacquireLock::~DropAndReacquireLock(
        Microsoft::BamoImpl::DropAndReacquireLock *this)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 96));
    *(_DWORD *)(v1 + 136) = GetCurrentThreadId();
  }
}
