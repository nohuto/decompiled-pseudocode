/*
 * XREFs of Interrupter_WdfEvtCleanupCallback @ 0x1C001F400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0015494 (WPP_RECORDER_SF_qq.c)
 */

void __fastcall Interrupter_WdfEvtCleanupCallback(__int64 a1)
{
  __int64 v2; // rbx
  struct _PCW_INSTANCE *v3; // rcx

  v2 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C0056310);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
      5u,
      9u,
      0x25u,
      (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
      a1,
      v2);
  v3 = *(struct _PCW_INSTANCE **)(v2 + 88);
  if ( v3 )
    PcwCloseInstance(v3);
  if ( !*(_DWORD *)(v2 + 32) )
    (*(void (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      a1,
      off_1C0056180);
}
