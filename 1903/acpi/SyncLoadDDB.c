/*
 * XREFs of SyncLoadDDB @ 0x1C00BD9D4
 * Callers:
 *     AMLILoadDDB @ 0x1C00BD8C8 (AMLILoadDDB.c)
 * Callees:
 *     RestartContext @ 0x1C001EAF0 (RestartContext.c)
 *     GetThreadCurrentContext @ 0x1C001ECA8 (GetThreadCurrentContext.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     FreeContext @ 0x1C0067BB4 (FreeContext.c)
 */

__int64 __fastcall SyncLoadDDB(struct _SLIST_ENTRY *Entry)
{
  char v2; // bp
  __int64 ThreadCurrentContext; // rbx
  KIRQL v4; // r10
  unsigned int restarted; // ebx
  NTSTATUS v7; // eax
  const void *v8; // rbx
  _OWORD v9[3]; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  if ( (int)EmClientQueryRuleState(&GUID_EM_RULE_AMLI_ALLOW_INVALID_RECLAIM_MEMORY_MAP_ON_LOAD, &v10) >= 0 && v10 == 2 )
  {
    v2 = 1;
    _InterlockedIncrement(&gAllowInvalidReclaimMemoryMap);
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
    PrintDebugMessage(184, 0LL, 0LL, 0LL, 0LL);
    *((_QWORD *)&Entry[5].Next + 1) = 0LL;
    restarted = -1072431098;
    FreeContext((char *)Entry);
  }
  else
  {
    byte_1C0082700 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    ThreadCurrentContext = GetThreadCurrentContext();
    KeReleaseSpinLock(&SpinLock, v4);
    if ( ThreadCurrentContext )
    {
      LogError(-1072431098);
      AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
      PrintDebugMessage(182, 0LL, 0LL, 0LL, 0LL);
      *((_QWORD *)&Entry[5].Next + 1) = 0LL;
      restarted = -1072431098;
      FreeContext((char *)Entry);
    }
    else
    {
      memset(v9, 0, 0x28uLL);
      KeInitializeEvent((PRKEVENT)&v9[1], SynchronizationEvent, 0);
      LODWORD(Entry[4].Next) |= 0x200u;
      *((_QWORD *)&Entry[10].Next + 1) = EvalMethodComplete;
      *((_QWORD *)&Entry[11].Next + 1) = v9;
      restarted = RestartContext(Entry, 0);
      while ( restarted == 32772 )
      {
        v7 = KeWaitForSingleObject(&v9[1], Executive, 0, 0, 0LL);
        v8 = (const void *)v7;
        if ( v7 )
        {
          LogError(-1072431098);
          AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
          PrintDebugMessage(183, v8, 0LL, 0LL, 0LL);
          restarted = -1072431098;
        }
        else
        {
          restarted = v9[0];
          if ( LODWORD(v9[0]) == 32771 )
            restarted = RestartContext(*((PSLIST_ENTRY *)&v9[0] + 1), 0);
        }
      }
    }
    if ( v2 )
      _InterlockedDecrement(&gAllowInvalidReclaimMemoryMap);
  }
  return restarted;
}
