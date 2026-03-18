/*
 * XREFs of VmCallSkSvc @ 0x140329440
 * Callers:
 *     <none>
 * Callees:
 *     VslSvcEnterIumSecureMode @ 0x1402909C4 (VslSvcEnterIumSecureMode.c)
 */

NTSTATUS __fastcall VmCallSkSvc(__int128 *a1)
{
  return VslSvcEnterIumSecureMode(a1);
}
