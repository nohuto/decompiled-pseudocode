/*
 * XREFs of ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800D3F90
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x1800164BC (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x180022670 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z.c)
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x1800279A0 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?AddGamepadInfo@GameInputDeviceInfoBuilder@@UEAAJPEBUGameInputGamepadInfo@@@Z @ 0x1800D3B60 (-AddGamepadInfo@GameInputDeviceInfoBuilder@@UEAAJPEBUGameInputGamepadInfo@@@Z.c)
 *     ?Create@GameInputDeviceInfoBuilder@@SAJGGW4GameInputDeviceFamily@@PEBUAppLocalDeviceId@@1PEAPEAUIGameInputDeviceInfoBuilder@@@Z @ 0x1800D3C88 (-Create@GameInputDeviceInfoBuilder@@SAJGGW4GameInputDeviceFamily@@PEBUAppLocalDeviceId@@1PEAPEAU.c)
 *     ?Make@GameInputDeviceInfoBuilder@@UEAAJPEAPEAUGameInputDeviceInfo@@@Z @ 0x1800D3D30 (-Make@GameInputDeviceInfoBuilder@@UEAAJPEAPEAUGameInputDeviceInfo@@@Z.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800D4740 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 *     ?AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z0PEAPEAU2@@Z @ 0x1800D4A80 (-AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z0.c)
 *     ?CreateBuffer@SipcEndpoint@@UEAAJ_K0PEBXPEAPEAX@Z @ 0x1800D4F70 (-CreateBuffer@SipcEndpoint@@UEAAJ_K0PEBXPEAPEAX@Z.c)
 *     ?CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AX2PEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z2PEAPEAV1@@Z @ 0x1800D51D0 (-CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AX2PEAUISIPCEndpoi.c)
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800D57CC (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?FreeSection@SipcPort@@QEAAJPEAX@Z @ 0x1800D59A8 (-FreeSection@SipcPort@@QEAAJPEAX@Z.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800D5C20 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 *     ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x1800D647C (-Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z.c)
 *     ?ProtectBuffer@SipcEndpoint@@UEAAJPEAX_K1@Z @ 0x1800D66F0 (-ProtectBuffer@SipcEndpoint@@UEAAJPEAX_K1@Z.c)
 *     ?ProtectSection@SipcPort@@QEAAJPEAX_K1@Z @ 0x1800D6730 (-ProtectSection@SipcPort@@QEAAJPEAX_K1@Z.c)
 *     ?ShareBuffer@SipcEndpoint@@UEAAJPEAX@Z @ 0x1800D6D00 (-ShareBuffer@SipcEndpoint@@UEAAJPEAX@Z.c)
 *     ?ShareSection@AlpcPort@@UEAAJPEAX@Z @ 0x1800D6D40 (-ShareSection@AlpcPort@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180011008 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag0::Return_Hr(wil::details::in1diag0 *this)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(0LL, 0LL, 0LL, 0LL, 0LL, retaddr);
}
