/*
 * XREFs of PspDeleteExternalServerSiloState @ 0x1408C4D74
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1408C49B0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x1408C50A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14008D060 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008D080 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     PsGetPermanentSiloContext @ 0x140101B40 (PsGetPermanentSiloContext.c)
 *     EtwShutdown @ 0x140726708 (EtwShutdown.c)
 *     CmpStopSiloKeyLockTracker @ 0x14082ECB8 (CmpStopSiloKeyLockTracker.c)
 *     SeShutdownServerSilo @ 0x1408D9930 (SeShutdownServerSilo.c)
 */

ULONG_PTR *__fastcall PspDeleteExternalServerSiloState(__int64 a1)
{
  struct _LIST_ENTRY *v2; // rcx
  _QWORD *ServerSiloGlobals; // rsi
  struct _LIST_ENTRY *v4; // rbx
  ULONG_PTR *result; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp+10h] BYREF

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  if ( ServerSiloGlobals[108] )
  {
    v4 = PsAttachSiloToCurrentThread(v2);
    EtwShutdown(0);
    PsDetachSiloFromCurrentThread(v4);
  }
  SeShutdownServerSilo(a1, ServerSiloGlobals + 92);
  BugCheckParameter2 = 0LL;
  result = (ULONG_PTR *)PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &BugCheckParameter2);
  if ( BugCheckParameter2 )
    return CmpStopSiloKeyLockTracker(BugCheckParameter2);
  return result;
}
