/*
 * XREFs of Controller_UcxEvtEnableForwardProgress @ 0x1C0063090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_UcxEvtEnableForwardProgress(__int64 a1)
{
  *(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               a1,
               off_1C0056428)
           + 384) = 1;
  return 0LL;
}
