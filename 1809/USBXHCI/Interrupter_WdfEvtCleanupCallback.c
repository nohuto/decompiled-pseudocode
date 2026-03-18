/*
 * XREFs of Interrupter_WdfEvtCleanupCallback @ 0x1C001BEB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0012A94 (WPP_RECORDER_SF_qq.c)
 */

void __fastcall Interrupter_WdfEvtCleanupCallback(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  struct _PCW_INSTANCE *v4; // rcx

  v2 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F2E8);
  v3 = v2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
      5u,
      9u,
      0x25u,
      (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids,
      a1,
      v2);
  v4 = *(struct _PCW_INSTANCE **)(v3 + 88);
  if ( v4 )
    PcwCloseInstance(v4);
  if ( !*(_DWORD *)(v3 + 32) )
    (*(void (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      a1,
      off_1C004F158);
}
