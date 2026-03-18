/*
 * XREFs of ?WaitForWinstaRundown@@YAXPEAU_KEVENT@@@Z @ 0x1C011BEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WaitForWinstaRundown(struct _KEVENT *StartContext)
{
  if ( StartContext )
    KeSetEvent(StartContext, 1, 0);
  ExWaitForRundownProtectionRelease(gWinstaRunRef);
  ExRundownCompleted(gWinstaRunRef);
}
