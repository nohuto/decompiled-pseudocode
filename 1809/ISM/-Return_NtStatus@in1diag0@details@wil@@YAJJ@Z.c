/*
 * XREFs of ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x18009FD68
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NPEAXAEAPEAVSipcPort@@@Z @ 0x18009FFE0 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NPEAXAEAPEAVSipcPort@@@Z.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800A01D0 (-AcceptClientConnection@AlpcPort@@UEAAJPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 *     ?CreateSection@AlpcPort@@UEAAJ_KAEAPEAXAEA_K@Z @ 0x1800A09A0 (-CreateSection@AlpcPort@@UEAAJ_KAEAPEAXAEA_K@Z.c)
 *     ?FreeSectionListEntry@AlpcPort@@AEAAJPEAUSectionListEntry@1@@Z @ 0x1800A0BC8 (-FreeSectionListEntry@AlpcPort@@AEAAJPEAUSectionListEntry@1@@Z.c)
 *     ?ShareSection@AlpcPort@@UEAAJPEAX@Z @ 0x1800A0CF0 (-ShareSection@AlpcPort@@UEAAJPEAX@Z.c)
 *     ?GetNextEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800A0E60 (-GetNextEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x18000AC98 (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

__int64 __fastcall wil::details::in1diag0::Return_NtStatus(
        wil::details::in1diag0 *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_NtStatus(0LL, 0, 0LL, a4, v5, retaddr, 1, (unsigned int)this);
}
