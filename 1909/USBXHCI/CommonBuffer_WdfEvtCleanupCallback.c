/*
 * XREFs of CommonBuffer_WdfEvtCleanupCallback @ 0x1C000CF30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     XilCoreCommonBuffer_Cleanup @ 0x1C0047EA8 (XilCoreCommonBuffer_Cleanup.c)
 */

__int64 __fastcall CommonBuffer_WdfEvtCleanupCallback(__int64 a1)
{
  _QWORD *v2; // rbx
  struct _PCW_INSTANCE *v3; // rcx

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   a1,
                   off_1C0056298);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_i(
      *(_QWORD *)(*v2 + 72LL),
      5u,
      8u,
      0xDu,
      (__int64)&WPP_69dd49c7a64d37eeaa5b7723d8723313_Traceguids,
      a1);
  v3 = (struct _PCW_INSTANCE *)v2[2];
  if ( v3 )
    PcwCloseInstance(v3);
  return XilCoreCommonBuffer_Cleanup(v2 + 11);
}
