/*
 * XREFs of SepRmCommandServerThread @ 0x1407683E0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsHostSilo @ 0x14000A9B0 (PsIsHostSilo.c)
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     PsGetHostSilo @ 0x140015DF0 (PsGetHostSilo.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008D060 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008D080 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     SepRmProcessCreationCommandLineAuditSettingsWrkr @ 0x14013EB90 (SepRmProcessCreationCommandLineAuditSettingsWrkr.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwReplyWaitReceivePort @ 0x1401C0DB0 (ZwReplyWaitReceivePort.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SepAdtInitLsaDeadEventForNonPagedList @ 0x14031BF24 (SepAdtInitLsaDeadEventForNonPagedList.c)
 *     SepRmCreateLogonSessionWrkr @ 0x1406D1570 (SepRmCreateLogonSessionWrkr.c)
 *     SepRmAddLogonSessionInfoWrkr @ 0x1406E4720 (SepRmAddLogonSessionInfoWrkr.c)
 *     SepRmInteractiveLogoffLogonSessionCompletedWrkr @ 0x140729E20 (SepRmInteractiveLogoffLogonSessionCompletedWrkr.c)
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x14072B200 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x14072CBF0 (SepRmDeleteLogonSessionWrkr.c)
 *     SepRmLsaConnectRequest @ 0x14076854C (SepRmLsaConnectRequest.c)
 *     PoRequestShutdownEvent @ 0x1407688A0 (PoRequestShutdownEvent.c)
 *     SepRmSetAuditEventWrkr @ 0x14077E770 (SepRmSetAuditEventWrkr.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14077E890 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmCapUpdateWrkr @ 0x140787280 (SepRmCapUpdateWrkr.c)
 *     SepRmCleanupRmLsaState @ 0x1408D97F8 (SepRmCleanupRmLsaState.c)
 *     SepRmMakeLogonSessionsSiblingsWrkr @ 0x1408E0E20 (SepRmMakeLogonSessionsSiblingsWrkr.c)
 *     SepRmSetSharedUserSessionWrkr @ 0x1408E0E60 (SepRmSetSharedUserSessionWrkr.c)
 *     SepRmValidateProcUniqueLuidWrkr @ 0x1408E0EA0 (SepRmValidateProcUniqueLuidWrkr.c)
 *     SepAuditFailed @ 0x1408E27D0 (SepAuditFailed.c)
 */

void __fastcall SepRmCommandServerThread(PVOID StartContext)
{
  NTSTATUS v1; // ebx
  _PORT_MESSAGE *v2; // rdi
  NTSTATUS v3; // eax
  struct _LIST_ENTRY *HostSilo; // rbx
  __int16 v5; // ax
  struct _LIST_ENTRY *v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  bool v8; // bl
  bool inited; // al
  struct _KTHREAD *v10; // rcx
  bool v11; // si
  bool v12; // r14
  char *ServerSiloGlobals; // rax
  PVOID PortContext; // [rsp+38h] [rbp-D0h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-C8h] BYREF
  struct _KEVENT Object; // [rsp+58h] [rbp-B0h] BYREF
  struct _KEVENT v17; // [rsp+70h] [rbp-98h] BYREF
  _BYTE ReceiveMessage[512]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v19[64]; // [rsp+288h] [rbp+180h] BYREF

  memset(ReceiveMessage, 0, sizeof(ReceiveMessage));
  memset(v19, 0, sizeof(v19));
  SepRmLsaCallProcess = KeGetCurrentThread()->ApcState.Process;
  ObfReferenceObject(SepRmLsaCallProcess);
  v1 = PoRequestShutdownEvent(0LL);
  if ( v1 < 0 )
  {
    ZwClose(PortHandle);
    PortHandle = 0LL;
    SepAuditFailed((unsigned int)v1);
  }
  else
  {
    *(_DWORD *)ReceiveMessage = 33554904;
    v2 = 0LL;
    LODWORD(v19[0]) = 33554904;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            v3 = ZwReplyWaitReceivePort(PortHandle, &PortContext, v2, (PPORT_MESSAGE)ReceiveMessage);
            v2 = 0LL;
          }
          while ( v3 < 0 && (v3 == -1073741823 || v3 == -1073741813 || v3 == -1073741281) );
          HostSilo = (struct _LIST_ENTRY *)PortContext;
          if ( PortContext == (PVOID)-8LL )
          {
            HostSilo = (struct _LIST_ENTRY *)PsGetHostSilo();
            PortContext = HostSilo;
          }
          v5 = *(_WORD *)&ReceiveMessage[4] & 0x7FFF;
          *(_WORD *)&ReceiveMessage[4] = v5;
          if ( v5 != 1 )
            break;
          if ( (unsigned int)(*(_DWORD *)&ReceiveMessage[40] - 1) <= 0xB )
          {
            v6 = PsAttachSiloToCurrentThread(HostSilo);
            ((void (__fastcall *)(_BYTE *, _QWORD *))SepRmCommandDispatch[*(int *)&ReceiveMessage[40]])(
              ReceiveMessage,
              v19);
            PsDetachSiloFromCurrentThread(v6);
            v2 = (_PORT_MESSAGE *)v19;
            LODWORD(v19[3]) = *(_DWORD *)&ReceiveMessage[24];
            *(_OWORD *)&v19[1] = *(_OWORD *)&ReceiveMessage[8];
          }
        }
        if ( v5 == 5 )
          break;
        if ( v5 == 10 )
          SepRmLsaConnectRequest((PPORT_MESSAGE)ReceiveMessage);
      }
      if ( PsIsHostSilo((__int64)HostSilo) )
      {
        SepRmAuditingEnabled = 0;
        memset(&Event, 0, sizeof(Event));
        memset(&v17, 0, sizeof(v17));
        memset(&Object, 0, sizeof(Object));
        KeInitializeEvent(&Event, NotificationEvent, 0);
        KeInitializeEvent(&v17, NotificationEvent, 0);
        KeInitializeEvent(&Object, NotificationEvent, 0);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&stru_14046BD60, 1u);
        qword_14046BE00 = (__int64)&Event;
        v8 = SepLsaAuditQueueInfo == (_QWORD)&SepLsaAuditQueueInfo;
        ExReleaseResourceLite(&stru_14046BD60);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        inited = SepAdtInitLsaDeadEventForNonPagedList((__int64)&Object);
        v10 = KeGetCurrentThread();
        v11 = inited;
        --v10->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&stru_14046BC20, 1u);
        qword_14046BCC0 = (__int64)&v17;
        v12 = SepLsaDeletedLogonQueueInfo == (_QWORD)&SepLsaDeletedLogonQueueInfo;
        ExReleaseResourceLite(&stru_14046BC20);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( !v8 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        if ( v11 )
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        if ( !v12 )
          KeWaitForSingleObject(&v17, Executive, 0, 0, 0LL);
        ZwClose(PortHandle);
        PortHandle = 0LL;
        HostSilo = (struct _LIST_ENTRY *)PortContext;
      }
      ServerSiloGlobals = (char *)PsGetServerSiloGlobals((__int64)HostSilo);
      SepRmCleanupRmLsaState(ServerSiloGlobals + 784);
      if ( PsIsHostSilo((__int64)PortContext) )
        break;
      ObfDereferenceObjectWithTag(PortContext, 0x74536553u);
      PortContext = MmBadPointer;
    }
  }
}
