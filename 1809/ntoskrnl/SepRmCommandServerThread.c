/*
 * XREFs of SepRmCommandServerThread @ 0x1407402C0
 * Callers:
 *     <none>
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14000FBB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14000FBD0 (PsAttachSiloToCurrentThread.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     PsGetHostSilo @ 0x140091C70 (PsGetHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x14009238C (PsGetServerSiloGlobals.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     PsIsHostSilo @ 0x1400B8A60 (PsIsHostSilo.c)
 *     KeInitializeEvent @ 0x1400B8E50 (KeInitializeEvent.c)
 *     SepRmProcessCreationCommandLineAuditSettingsWrkr @ 0x14013E3E0 (SepRmProcessCreationCommandLineAuditSettingsWrkr.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwReplyWaitReceivePort @ 0x1401B82D0 (ZwReplyWaitReceivePort.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     SepAdtInitLsaDeadEventForNonPagedList @ 0x1402FE20C (SepAdtInitLsaDeadEventForNonPagedList.c)
 *     SepRmCreateLogonSessionWrkr @ 0x1406AE1D0 (SepRmCreateLogonSessionWrkr.c)
 *     SepRmAddLogonSessionInfoWrkr @ 0x1406BC770 (SepRmAddLogonSessionInfoWrkr.c)
 *     SepRmInteractiveLogoffLogonSessionCompletedWrkr @ 0x1406E1620 (SepRmInteractiveLogoffLogonSessionCompletedWrkr.c)
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x1406E2760 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x140704620 (SepRmDeleteLogonSessionWrkr.c)
 *     SepRmCapUpdateWrkr @ 0x140736D70 (SepRmCapUpdateWrkr.c)
 *     SepRmGlobalSaclSetWrkr @ 0x140736E60 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmLsaConnectRequest @ 0x140740414 (SepRmLsaConnectRequest.c)
 *     PoRequestShutdownEvent @ 0x140740740 (PoRequestShutdownEvent.c)
 *     SepRmSetAuditEventWrkr @ 0x140755FB0 (SepRmSetAuditEventWrkr.c)
 *     SepRmCleanupRmLsaState @ 0x14089B798 (SepRmCleanupRmLsaState.c)
 *     SepRmMakeLogonSessionsSiblingsWrkr @ 0x1408A2C30 (SepRmMakeLogonSessionsSiblingsWrkr.c)
 *     SepRmSetSharedUserSessionWrkr @ 0x1408A2C70 (SepRmSetSharedUserSessionWrkr.c)
 *     SepRmValidateProcUniqueLuidWrkr @ 0x1408A2CB0 (SepRmValidateProcUniqueLuidWrkr.c)
 *     SepAuditFailed @ 0x1408A47A0 (SepAuditFailed.c)
 */

void __fastcall SepRmCommandServerThread(PVOID StartContext)
{
  NTSTATUS v1; // ebx
  struct _PORT_MESSAGE *v2; // rdi
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
  struct _PORT_MESSAGE ReceiveMessage; // [rsp+88h] [rbp-80h] BYREF
  int v19; // [rsp+B0h] [rbp-58h]
  _DWORD v20[2]; // [rsp+288h] [rbp+180h] BYREF
  $2D0B67CF8EA78C27280E97D53725B597 v21; // [rsp+290h] [rbp+188h]
  unsigned int MessageId; // [rsp+2A0h] [rbp+198h]

  SepRmLsaCallProcess = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
  ObfReferenceObject((PVOID)SepRmLsaCallProcess);
  v1 = PoRequestShutdownEvent(0LL);
  if ( v1 < 0 )
  {
    ZwClose(PortHandle);
    PortHandle = 0LL;
    SepAuditFailed((unsigned int)v1);
  }
  else
  {
    ReceiveMessage.u2.ZeroInit = 0;
    v20[1] = 0;
    v2 = 0LL;
    ReceiveMessage.u1.Length = 33554904;
    v20[0] = 33554904;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            v3 = ZwReplyWaitReceivePort(PortHandle, &PortContext, v2, &ReceiveMessage);
            v2 = 0LL;
          }
          while ( v3 < 0 && (v3 == -1073741823 || v3 == -1073741813 || v3 == -1073741281) );
          HostSilo = (struct _LIST_ENTRY *)PortContext;
          if ( PortContext == (PVOID)-8LL )
          {
            HostSilo = (struct _LIST_ENTRY *)PsGetHostSilo();
            PortContext = HostSilo;
          }
          v5 = ReceiveMessage.u2.s2.Type & 0x7FFF;
          ReceiveMessage.u2.s2.Type = v5;
          if ( v5 != 1 )
            break;
          if ( (unsigned int)(v19 - 1) <= 0xB )
          {
            v6 = PsAttachSiloToCurrentThread(HostSilo);
            ((void (__fastcall *)(struct _PORT_MESSAGE *, _DWORD *))SepRmCommandDispatch[v19])(&ReceiveMessage, v20);
            PsDetachSiloFromCurrentThread(v6);
            v2 = (struct _PORT_MESSAGE *)v20;
            MessageId = ReceiveMessage.MessageId;
            v21 = ReceiveMessage.8;
          }
        }
        if ( v5 == 5 )
          break;
        if ( v5 == 10 )
          SepRmLsaConnectRequest(&ReceiveMessage);
      }
      if ( PsIsHostSilo((__int64)HostSilo) )
      {
        SepRmAuditingEnabled = 0;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        KeInitializeEvent(&v17, NotificationEvent, 0);
        KeInitializeEvent(&Object, NotificationEvent, 0);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&stru_140440220, 1u);
        qword_1404402C0 = (__int64)&Event;
        v8 = SepLsaAuditQueueInfo == (_QWORD)&SepLsaAuditQueueInfo;
        ExReleaseResourceLite(&stru_140440220);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        inited = SepAdtInitLsaDeadEventForNonPagedList((__int64)&Object);
        v10 = KeGetCurrentThread();
        v11 = inited;
        --v10->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&stru_1404400E0, 1u);
        qword_140440180 = (__int64)&v17;
        v12 = SepLsaDeletedLogonQueueInfo == (_QWORD)&SepLsaDeletedLogonQueueInfo;
        ExReleaseResourceLite(&stru_1404400E0);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
