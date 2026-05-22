/*
 * XREFs of ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x18009FD04
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NPEAXAEAPEAVSipcPort@@@Z @ 0x18009FFE0 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NPEAXAEAPEAVSipcPort@@@Z.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800A01D0 (-AcceptClientConnection@AlpcPort@@UEAAJPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 *     ?CreateSection@AlpcPort@@UEAAJ_KAEAPEAXAEA_K@Z @ 0x1800A09A0 (-CreateSection@AlpcPort@@UEAAJ_KAEAPEAXAEA_K@Z.c)
 *     ?FreeSection@AlpcPort@@UEAAJPEAX@Z @ 0x1800A0B80 (-FreeSection@AlpcPort@@UEAAJPEAX@Z.c)
 *     ?ShareSection@AlpcPort@@UEAAJPEAX@Z @ 0x1800A0CF0 (-ShareSection@AlpcPort@@UEAAJPEAX@Z.c)
 *     ?GetNextEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800A0E60 (-GetNextEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 *     ?InitializeSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800A11EC (-InitializeSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2P6AX2PEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@ZP6AX232_K@Z2PEAPEAV1@@Z @ 0x1800A1514 (-CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2P6AX2PEAUISIPCEndpoint.c)
 *     ?CreateBuffer@SipcEndpoint@@UEAAJ_KPEAPEAXPEA_K@Z @ 0x1800A1730 (-CreateBuffer@SipcEndpoint@@UEAAJ_KPEAPEAXPEA_K@Z.c)
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NP6AXPEAXPEAUISIPCServer@@KK@Z33PEAPEAU4@@Z @ 0x1800A1B14 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NP6AXPEAXPEAUISIPCServer@@KK@Z33PEAP.c)
 *     ?AcceptClientConnection@SipcServer@@UEAAJP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@ZP6AX010_K@Z0PEAPEAU2@@Z @ 0x1800A1D70 (-AcceptClientConnection@SipcServer@@UEAAJP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@ZP6.c)
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x1800A1F30 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x1800033AC (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag0::Return_Hr(wil::details::in1diag0 *this)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(0LL, 0, 0LL, 0LL, 0LL, retaddr, 1, (unsigned int)this);
}
