/*
 * XREFs of SeInitServerSilo @ 0x1408D9F44
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1408C57C0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsIsHostSilo @ 0x14000A920 (PsIsHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008BD60 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008BD80 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     SepReferenceLogonSessionSilo @ 0x14061B754 (SepReferenceLogonSessionSilo.c)
 *     SepCreateLogonSessionTrack @ 0x1406D223C (SepCreateLogonSessionTrack.c)
 *     SepDeleteLogonSessionTrack @ 0x140729F9C (SepDeleteLogonSessionTrack.c)
 *     SepInitializationPhase1 @ 0x140758140 (SepInitializationPhase1.c)
 */

__int64 __fastcall SeInitServerSilo(__int64 a1)
{
  __int64 *ServerSiloGlobals; // rsi
  struct _LIST_ENTRY *v3; // rcx
  struct _LIST_ENTRY *v4; // rbp
  signed int LogonSessionTrack; // ebx

  if ( PsIsHostSilo(a1) )
    KeBugCheckEx(0x33u, 0LL, 0LL, 0LL, 0LL);
  ServerSiloGlobals = (__int64 *)PsGetServerSiloGlobals(a1);
  v4 = PsAttachSiloToCurrentThread(v3);
  LogonSessionTrack = SepCreateLogonSessionTrack((__int64)&SeSystemAuthenticationId);
  if ( LogonSessionTrack >= 0 )
  {
    LogonSessionTrack = SepReferenceLogonSessionSilo(&SeSystemAuthenticationId, a1, ServerSiloGlobals + 92);
    if ( LogonSessionTrack >= 0 )
    {
      LogonSessionTrack = SepCreateLogonSessionTrack((__int64)&SeAnonymousAuthenticationId);
      if ( LogonSessionTrack < 0 )
        goto LABEL_9;
      LogonSessionTrack = SepReferenceLogonSessionSilo(&SeAnonymousAuthenticationId, a1, ServerSiloGlobals + 93);
      if ( LogonSessionTrack >= 0 )
      {
        LogonSessionTrack = SepInitializationPhase1() == 0 ? 0xC0000001 : 0;
        goto LABEL_9;
      }
    }
    SepDeleteLogonSessionTrack(&SeSystemAuthenticationId, 0);
  }
LABEL_9:
  PsDetachSiloFromCurrentThread(v4);
  return (unsigned int)LogonSessionTrack;
}
