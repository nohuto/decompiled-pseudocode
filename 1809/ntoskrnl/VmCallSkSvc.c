/*
 * XREFs of VmCallSkSvc @ 0x14030B940
 * Callers:
 *     <none>
 * Callees:
 *     VslSvcEnterIumSecureMode @ 0x14027C368 (VslSvcEnterIumSecureMode.c)
 */

NTSTATUS __fastcall VmCallSkSvc(_OWORD *a1)
{
  return VslSvcEnterIumSecureMode(a1);
}
