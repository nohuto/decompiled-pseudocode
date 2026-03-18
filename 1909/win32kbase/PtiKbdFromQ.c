/*
 * XREFs of PtiKbdFromQ @ 0x1C0183F68
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C004A650 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     GetCurrentKbdTables @ 0x1C0183530 (GetCurrentKbdTables.c)
 *     ProcessKeyboardInputWorker @ 0x1C01837A0 (ProcessKeyboardInputWorker.c)
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1C018F5DC (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtiKbdFromQ(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 128);
  if ( v1 )
    return *(_QWORD *)(v1 + 16);
  else
    return *(_QWORD *)(a1 + 104);
}
