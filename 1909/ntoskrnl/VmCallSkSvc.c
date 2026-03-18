/*
 * XREFs of VmCallSkSvc @ 0x140328E90
 * Callers:
 *     <none>
 * Callees:
 *     VslSvcEnterIumSecureMode @ 0x140290724 (VslSvcEnterIumSecureMode.c)
 */

NTSTATUS __fastcall VmCallSkSvc(__int128 *a1)
{
  return VslSvcEnterIumSecureMode(a1);
}
