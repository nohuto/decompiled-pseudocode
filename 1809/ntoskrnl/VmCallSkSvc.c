/*
 * XREFs of VmCallSkSvc @ 0x14030B650
 * Callers:
 *     <none>
 * Callees:
 *     VslSvcEnterIumSecureMode @ 0x14027C078 (VslSvcEnterIumSecureMode.c)
 */

NTSTATUS __fastcall VmCallSkSvc(_OWORD *a1)
{
  return VslSvcEnterIumSecureMode(a1);
}
