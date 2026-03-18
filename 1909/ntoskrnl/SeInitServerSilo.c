/*
 * XREFs of SeInitServerSilo @ 0x1408D9844
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1408C50A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsIsHostSilo @ 0x14000A9B0 (PsIsHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008D060 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008D080 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     SepReferenceLogonSessionSilo @ 0x14061D264 (SepReferenceLogonSessionSilo.c)
 *     SepCreateLogonSessionTrack @ 0x1406D159C (SepCreateLogonSessionTrack.c)
 *     SepDeleteLogonSessionTrack @ 0x14072BE34 (SepDeleteLogonSessionTrack.c)
 *     SepInitializationPhase1 @ 0x14075C9D4 (SepInitializationPhase1.c)
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
