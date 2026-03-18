/*
 * XREFs of ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C0114088
 * Callers:
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C000B0A0 (EditionChangeForegroundQueueForMouseInput.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C001B138 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInternalKeyEventDirect @ 0x1C001F0D0 (xxxInternalKeyEventDirect.c)
 *     EditionIsGpqForegroundAccessibleCurrent @ 0x1C001F3A0 (EditionIsGpqForegroundAccessibleCurrent.c)
 *     EditionLLMouseButtonHook @ 0x1C0056730 (EditionLLMouseButtonHook.c)
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1C00F1D20 (EditionForegroundQAccessibleToMouseProducer.c)
 *     EditionReportMouseBreakToAccessibility @ 0x1C010EA60 (EditionReportMouseBreakToAccessibility.c)
 *     EditionLLMouseWheelHook @ 0x1C01DC670 (EditionLLMouseWheelHook.c)
 *     xxxInjectTouchInput @ 0x1C01DF794 (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

void __fastcall MSGLUA_GPQFOREGROUND(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 436LL), 1);
}
