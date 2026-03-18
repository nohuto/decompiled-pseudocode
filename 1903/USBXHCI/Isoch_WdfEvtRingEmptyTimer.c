/*
 * XREFs of Isoch_WdfEvtRingEmptyTimer @ 0x1C0032BD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Isoch_WdfEvtRingEmptyTimer(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  _UNKNOWN **v3; // rax

  v1 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2568))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  v2 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v1,
         off_1C0056388);
  v3 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    LOBYTE(v3) = WPP_RECORDER_SF_(
                   *(_QWORD *)(*(_QWORD *)(v2 + 56) + 80LL),
                   4u,
                   0xEu,
                   0xBu,
                   (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids);
  if ( *(_DWORD *)(v2 + 108) == 4 )
  {
    LOBYTE(v3) = KdRefreshDebuggerNotPresent();
    if ( !(_BYTE)v3 )
      __debugbreak();
  }
  return (char)v3;
}
