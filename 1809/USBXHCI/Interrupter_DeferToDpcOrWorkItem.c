/*
 * XREFs of Interrupter_DeferToDpcOrWorkItem @ 0x1C001B040
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001B0B0 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_IoWorkItemRequeueDpc @ 0x1C001BD10 (Interrupter_IoWorkItemRequeueDpc.c)
 *     Interrupter_WdfEvtInterruptIsr @ 0x1C001C080 (Interrupter_WdfEvtInterruptIsr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Interrupter_DeferToDpcOrWorkItem(__int64 a1)
{
  if ( *(_BYTE *)(*(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                                WPP_MAIN_CB.Dpc.ProcessorHistory,
                                a1,
                                off_1C004F2E8)
                            + 8)
                + 473LL) )
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3328))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a1);
  else
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 1136))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a1);
}
