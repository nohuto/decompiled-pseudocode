/*
 * XREFs of PsLookupProcessByProcessId @ 0x140646C40
 * Callers:
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     PsOpenProcess @ 0x1406467E0 (PsOpenProcess.c)
 *     PfpCopyEvent @ 0x140669C40 (PfpCopyEvent.c)
 *     PfpRpControlRequestUpdate @ 0x14069DDE0 (PfpRpControlRequestUpdate.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B6964 (PspOneDirectionSecurityDomainCombine.c)
 *     PopDiagTraceAppPowerMessage @ 0x1406E0ED8 (PopDiagTraceAppPowerMessage.c)
 *     PiUEventHandleVetoEvent @ 0x1406FF7F0 (PiUEventHandleVetoEvent.c)
 *     EtwpProcessThreadImageRundown @ 0x1407263D0 (EtwpProcessThreadImageRundown.c)
 *     SeAuditProcessCreation @ 0x1407495D0 (SeAuditProcessCreation.c)
 *     CmpDumpOneKeyBody @ 0x1407F0EC4 (CmpDumpOneKeyBody.c)
 *     PnpLogVetoInformation @ 0x1408330F0 (PnpLogVetoInformation.c)
 *     EtwpUpdatePerProcessTracing @ 0x1408B5894 (EtwpUpdatePerProcessTracing.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408BFE44 (EtwpGetPrivateSessionTraceHandle.c)
 *     ViCreateProcessCallbackInternal @ 0x140938564 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsIsProcessInSilo @ 0x1400CB0E8 (PsIsProcessInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14012F2E0 (ExfAcquireReleasePushLockExclusive.c)
 *     PspReferenceCidTableEntry @ 0x140646D30 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupProcessByProcessId(HANDLE ProcessId, PEPROCESS *Process)
{
  PEPROCESS *v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 CurrentServerSilo; // rax
  __int64 v7; // rbp
  bool v8; // zf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = Process;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  LOBYTE(Process) = 3;
  v5 = PspReferenceCidTableEntry(ProcessId, Process);
  if ( v5 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    v7 = CurrentServerSilo;
    if ( (*(_DWORD *)(v5 + 772) & 0x4000000) != 0 )
    {
      if ( PsIsProcessInSilo((struct _KPROCESS *)v5, CurrentServerSilo) )
        goto LABEL_4;
LABEL_14:
      ObfDereferenceObjectWithTag((PVOID)v5, 0x746C6644u);
      v5 = 0LL;
      goto LABEL_4;
    }
    _InterlockedOr(v10, 0);
    if ( (*(_QWORD *)(v5 + 728) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v5 + 728));
    if ( (*(_DWORD *)(v5 + 772) & 0x4000000) == 0 || !PsIsProcessInSilo((struct _KPROCESS *)v5, v7) )
      goto LABEL_14;
  }
LABEL_4:
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v4);
  if ( !v5 )
    return -1073741813;
  *v2 = (PEPROCESS)v5;
  return 0;
}
