/*
 * XREFs of Isoch_WdfEvtRingEmptyTimer @ 0x1C002DF30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Isoch_WdfEvtRingEmptyTimer(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  char result; // al

  v1 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2568))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  v2 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v1,
         off_1C004F360);
  result = WPP_RECORDER_SF_(
             *(_QWORD *)(*(_QWORD *)(v2 + 56) + 80LL),
             4u,
             0xEu,
             0xBu,
             (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids);
  if ( *(_DWORD *)(v2 + 108) == 4 )
  {
    result = KdRefreshDebuggerNotPresent();
    if ( !result )
      __debugbreak();
  }
  return result;
}
