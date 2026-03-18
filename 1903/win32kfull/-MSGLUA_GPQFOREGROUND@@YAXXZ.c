/*
 * XREFs of ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C013A088
 * Callers:
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C0010C50 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxInternalKeyEventDirect @ 0x1C001D6E4 (xxxInternalKeyEventDirect.c)
 *     EditionIsGpqForegroundAccessibleCurrent @ 0x1C001D9B0 (EditionIsGpqForegroundAccessibleCurrent.c)
 *     EditionLLMouseButtonHook @ 0x1C00B5980 (EditionLLMouseButtonHook.c)
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1C0117D60 (EditionForegroundQAccessibleToMouseProducer.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C011C2DC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     EditionReportMouseBreakToAccessibility @ 0x1C0133F60 (EditionReportMouseBreakToAccessibility.c)
 *     EditionLLMouseWheelHook @ 0x1C01DC7F0 (EditionLLMouseWheelHook.c)
 *     xxxInjectTouchInput @ 0x1C01DF914 (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

void __fastcall MSGLUA_GPQFOREGROUND(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 436LL), 1);
}
