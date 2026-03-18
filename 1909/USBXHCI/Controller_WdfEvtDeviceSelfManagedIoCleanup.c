/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C0064020
 * Callers:
 *     <none>
 * Callees:
 *     XilCommonBuffer_ReleaseBuffer @ 0x1C000260C (XilCommonBuffer_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1C000FEDC (Controller_ReleaseWdfPowerReferenceForDebugger.c)
 *     Controller_UpdateSqmDatapoints @ 0x1C0063260 (Controller_UpdateSqmDatapoints.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoCleanup(__int64 a1)
{
  __int64 *v2; // rbx
  void *v3; // rcx

  v2 = *(__int64 **)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                       WPP_MAIN_CB.Dpc.ProcessorHistory,
                       a1,
                       off_1C00563D8)
                   + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_i(v2[9], 5u, 4u, 0x3Bu, (__int64)&Context.Logger + 4, a1);
  v3 = (void *)v2[66];
  if ( v3 )
  {
    PoUnregisterPowerSettingCallback(v3);
    v2[66] = 0LL;
  }
  Controller_ReleaseWdfPowerReferenceForDebugger((__int64)v2);
  if ( v2[57] )
  {
    XilCommonBuffer_ReleaseBuffer();
    v2[57] = 0LL;
  }
  Controller_UpdateSqmDatapoints(v2);
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 1664))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v2[1]);
}
