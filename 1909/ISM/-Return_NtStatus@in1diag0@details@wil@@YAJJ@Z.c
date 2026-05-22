/*
 * XREFs of ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x1800D6A6C
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x180022190 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800D4500 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x1800D4DB0 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z.c)
 *     ?DestroySection@AlpcSectionListEntry@AlpcPort@@UEAAJXZ @ 0x1800D5080 (-DestroySection@AlpcSectionListEntry@AlpcPort@@UEAAJXZ.c)
 *     ?DiscardAttributes@AlpcMessage@@QEAAJPEAX@Z @ 0x1800D51DC (-DiscardAttributes@AlpcMessage@@QEAAJPEAX@Z.c)
 *     ?ShareSection@AlpcPort@@UEAAJPEAX@Z @ 0x1800D6B00 (-ShareSection@AlpcPort@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x180055908 (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
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
