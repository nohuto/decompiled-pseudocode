/*
 * XREFs of PsLookupProcessByProcessId @ 0x1405D0AD0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     PsOpenProcess @ 0x1405D0200 (PsOpenProcess.c)
 *     PfpCopyEvent @ 0x14066DA70 (PfpCopyEvent.c)
 *     EtwpPsProvTraceProcess @ 0x140683C20 (EtwpPsProvTraceProcess.c)
 *     PfpRpControlRequestUpdate @ 0x1406A7F84 (PfpRpControlRequestUpdate.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B8720 (PspOneDirectionSecurityDomainCombine.c)
 *     EtwpProcessThreadImageRundown @ 0x140709534 (EtwpProcessThreadImageRundown.c)
 *     PopDiagTraceAppPowerMessage @ 0x140729478 (PopDiagTraceAppPowerMessage.c)
 *     PiUEventHandleVetoEvent @ 0x14072E5D0 (PiUEventHandleVetoEvent.c)
 *     SeAuditProcessCreation @ 0x14074A0D0 (SeAuditProcessCreation.c)
 *     CmpDumpOneKeyBody @ 0x14082A884 (CmpDumpOneKeyBody.c)
 *     PnpLogVetoInformation @ 0x14086D120 (PnpLogVetoInformation.c)
 *     EtwpUpdatePerProcessTracing @ 0x1408F2040 (EtwpUpdatePerProcessTracing.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408FC620 (EtwpGetPrivateSessionTraceHandle.c)
 *     ViCreateProcessCallbackInternal @ 0x140979E7C (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     PsIsProcessInSilo @ 0x140006528 (PsIsProcessInSilo.c)
 *     PsGetCurrentServerSilo @ 0x140006560 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140108CE8 (ExfAcquireReleasePushLockExclusive.c)
 *     PspReferenceCidTableEntry @ 0x1405D0B80 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupProcessByProcessId(HANDLE ProcessId, PEPROCESS *Process)
{
  PEPROCESS *v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned __int64 CurrentServerSilo; // rax
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
    if ( (*(_DWORD *)(v5 + 780) & 0x4000000) != 0 )
    {
      if ( PsIsProcessInSilo((struct _KPROCESS *)v5, CurrentServerSilo) )
        goto LABEL_4;
LABEL_14:
      ObfDereferenceObjectWithTag((PVOID)v5, 0x746C6644u);
      v5 = 0LL;
      goto LABEL_4;
    }
    _InterlockedOr(v10, 0);
    if ( (*(_QWORD *)(v5 + 736) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v5 + 736));
    if ( (*(_DWORD *)(v5 + 780) & 0x4000000) == 0 || !PsIsProcessInSilo((struct _KPROCESS *)v5, v7) )
      goto LABEL_14;
  }
LABEL_4:
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v4);
  if ( !v5 )
    return -1073741813;
  *v2 = (PEPROCESS)v5;
  return 0;
}
