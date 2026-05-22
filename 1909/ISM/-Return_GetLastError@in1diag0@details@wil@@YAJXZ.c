/*
 * XREFs of ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1800D3D28
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x180022190 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z.c)
 *     ?InitializeSectionState@SipcPort@@IEAAJI@Z @ 0x1800222F8 (-InitializeSectionState@SipcPort@@IEAAJI@Z.c)
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800D558C (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z @ 0x1800D5844 (-GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z.c)
 *     ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x1800D623C (-Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z.c)
 *     ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z @ 0x1800D6368 (-OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z.c)
 *     ?ProtectSectionMemory@SipcPort@@CAJPEAX_KK@Z @ 0x1800D6550 (-ProtectSectionMemory@SipcPort@@CAJPEAX_KK@Z.c)
 * Callees:
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x1800510C8 (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 */

__int64 __fastcall wil::details::in1diag0::Return_GetLastError(
        wil::details::in1diag0 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr(0LL, 0LL, 0LL, a4, v5, retaddr);
}
