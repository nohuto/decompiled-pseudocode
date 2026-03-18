/*
 * XREFs of MSGLUA_GPQFOREGROUND @ 0x1C0006948
 * Callers:
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C0007DD0 (EditionChangeForegroundQueueForMouseInput.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00ACE38 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInternalKeyEventDirect @ 0x1C00AF794 (xxxInternalKeyEventDirect.c)
 *     EditionIsGpqForegroundInaccessible @ 0x1C00AFB20 (EditionIsGpqForegroundInaccessible.c)
 *     EditionLLMouseButtonHook @ 0x1C00B47C0 (EditionLLMouseButtonHook.c)
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1C010E250 (EditionForegroundQAccessibleToMouseProducer.c)
 *     EditionIsGpqForegroundInaccessibleExplicit @ 0x1C011B940 (EditionIsGpqForegroundInaccessibleExplicit.c)
 *     EditionReportMouseBreakToAccessibility @ 0x1C0128650 (EditionReportMouseBreakToAccessibility.c)
 *     EditionIsGpqForegroundAccessible @ 0x1C01C3270 (EditionIsGpqForegroundAccessible.c)
 *     EditionLLMouseWheelHook @ 0x1C01C8ED0 (EditionLLMouseWheelHook.c)
 *     xxxInjectTouchInput @ 0x1C01CBA28 (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

__int64 MSGLUA_GPQFOREGROUND()
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  return EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 428LL), 1);
}
