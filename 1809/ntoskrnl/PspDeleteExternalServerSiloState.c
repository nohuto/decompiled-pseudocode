/*
 * XREFs of PspDeleteExternalServerSiloState @ 0x1408870F4
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140886D30 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x140887460 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14000FBB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14000FBD0 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x14009238C (PsGetServerSiloGlobals.c)
 *     PsGetPermanentSiloContext @ 0x14010A080 (PsGetPermanentSiloContext.c)
 *     CmCleanupThreadInfo @ 0x1401B2F1C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B2F5C (CmpInitializeThreadInfo.c)
 *     ExpTimeZoneCleanupSiloState @ 0x140583938 (ExpTimeZoneCleanupSiloState.c)
 *     EtwShutdown @ 0x1406DD260 (EtwShutdown.c)
 *     CmpStopSiloKeyLockTracker @ 0x1407F6050 (CmpStopSiloKeyLockTracker.c)
 *     SeShutdownServerSilo @ 0x14089B8D0 (SeShutdownServerSilo.c)
 */

__int64 __fastcall PspDeleteExternalServerSiloState(__int64 a1)
{
  struct _LIST_ENTRY *v2; // rcx
  _QWORD *ServerSiloGlobals; // rsi
  struct _LIST_ENTRY *v4; // rbx
  PVOID v6[3]; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  if ( ServerSiloGlobals[108] )
  {
    v4 = PsAttachSiloToCurrentThread(v2);
    EtwShutdown(0);
    PsDetachSiloFromCurrentThread(v4);
  }
  SeShutdownServerSilo(a1, ServerSiloGlobals + 92);
  CmpInitializeThreadInfo(v6);
  BugCheckParameter2 = 0LL;
  PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &BugCheckParameter2);
  if ( BugCheckParameter2 )
    CmpStopSiloKeyLockTracker(BugCheckParameter2);
  CmCleanupThreadInfo(v6);
  return ExpTimeZoneCleanupSiloState(a1);
}
