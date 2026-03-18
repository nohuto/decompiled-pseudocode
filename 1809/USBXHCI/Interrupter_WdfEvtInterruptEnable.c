/*
 * XREFs of Interrupter_WdfEvtInterruptEnable @ 0x1C001C010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Interrupter_InterruptEnable @ 0x1C001BBA8 (Interrupter_InterruptEnable.c)
 */

__int64 __fastcall Interrupter_WdfEvtInterruptEnable(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx

  v1 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F2E8);
  Interrupter_InterruptEnable(v1);
  v2 = *(_QWORD *)(v1 + 8);
  if ( *(_DWORD *)(v2 + 564) == 1 )
  {
    v3 = *(_QWORD *)(v2 + 128);
    if ( *(_QWORD *)(v3 + 40) == v1 )
      Interrupter_InterruptEnable(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL * *(unsigned int *)(v3 + 64)));
  }
  return 0LL;
}
