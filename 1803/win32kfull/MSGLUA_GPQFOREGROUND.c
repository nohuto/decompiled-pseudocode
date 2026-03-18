/*
 * XREFs of MSGLUA_GPQFOREGROUND @ 0x1C0135EDC
 * Callers:
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C00077F0 (EditionChangeForegroundQueueForMouseInput.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C005B7C4 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInternalKeyEventDirect @ 0x1C005D7AC (xxxInternalKeyEventDirect.c)
 *     EditionIsGpqForegroundInaccessible @ 0x1C005DA20 (EditionIsGpqForegroundInaccessible.c)
 *     EditionLLMouseButtonHook @ 0x1C00D73E0 (EditionLLMouseButtonHook.c)
 *     EditionKeyEventLLHook @ 0x1C00D7DB0 (EditionKeyEventLLHook.c)
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1C00F5A30 (EditionForegroundQAccessibleToMouseProducer.c)
 *     EditionIsGpqForegroundInaccessibleExplicit @ 0x1C00FD1B0 (EditionIsGpqForegroundInaccessibleExplicit.c)
 *     EditionHandleAltTabCancel @ 0x1C0101500 (EditionHandleAltTabCancel.c)
 *     EditionReportMouseBreakToAccessibility @ 0x1C0108830 (EditionReportMouseBreakToAccessibility.c)
 *     EditionIsGpqForegroundAccessible @ 0x1C01A19C0 (EditionIsGpqForegroundAccessible.c)
 *     EditionLLMouseWheelHook @ 0x1C01A6E90 (EditionLLMouseWheelHook.c)
 *     xxxInjectTouchInput @ 0x1C01A9474 (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall MSGLUA_GPQFOREGROUND(__int64 a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  return EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 428LL), 1);
}
