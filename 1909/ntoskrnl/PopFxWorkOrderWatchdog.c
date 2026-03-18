/*
 * XREFs of PopFxWorkOrderWatchdog @ 0x1402F5A20
 * Callers:
 *     <none>
 * Callees:
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 */

void __fastcall __noreturn PopFxWorkOrderWatchdog(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ULONG_PTR v4; // r8

  v4 = 0LL;
  if ( DeferredContext )
    v4 = DeferredContext[21];
  PopFxBugCheck(0x618uLL, (ULONG_PTR)DeferredContext, v4, 0LL);
}
