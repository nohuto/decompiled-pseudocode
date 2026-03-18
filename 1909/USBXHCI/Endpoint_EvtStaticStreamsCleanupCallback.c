/*
 * XREFs of Endpoint_EvtStaticStreamsCleanupCallback @ 0x1C0018F60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0017360 (XilEndpoint_FreeStreamContextArray.c)
 *     WPP_RECORDER_SF_ddqqq @ 0x1C001DE78 (WPP_RECORDER_SF_ddqqq.c)
 */

void __fastcall Endpoint_EvtStaticStreamsCleanupCallback(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   a1,
                   off_1C0056338);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddqqq(
      *(_QWORD *)(*v1 + 80LL),
      *(_DWORD *)(*v1 + 144LL),
      *(unsigned __int8 *)(*(_QWORD *)(*v1 + 16LL) + 135LL),
      103);
  XilEndpoint_FreeStreamContextArray(v1);
}
