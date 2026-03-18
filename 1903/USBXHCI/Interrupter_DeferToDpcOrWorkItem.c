/*
 * XREFs of Interrupter_DeferToDpcOrWorkItem @ 0x1C001E454
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001E4C4 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_IoWorkItemRequeueDpc @ 0x1C001F250 (Interrupter_IoWorkItemRequeueDpc.c)
 *     Interrupter_WdfEvtInterruptIsr @ 0x1C001F5E0 (Interrupter_WdfEvtInterruptIsr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Interrupter_DeferToDpcOrWorkItem(__int64 a1)
{
  if ( *(_BYTE *)(*(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                                WPP_MAIN_CB.Dpc.ProcessorHistory,
                                a1,
                                off_1C0056310)
                            + 8)
                + 537LL) )
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3328))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a1);
  else
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 1136))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a1);
}
