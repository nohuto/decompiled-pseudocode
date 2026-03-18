/*
 * XREFs of SyncEvalObject @ 0x1C0003F70
 * Callers:
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0011EC4 (AMLIEvalPackageElement.c)
 * Callees:
 *     AsyncEvalObject @ 0x1C0005370 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x1C0023478 (GetObjectPath.c)
 *     RestartContext @ 0x1C00237D0 (RestartContext.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     LogSchedEvent @ 0x1C0064328 (LogSchedEvent.c)
 *     NestAsyncEvalObject @ 0x1C0065EDC (NestAsyncEvalObject.c)
 */

__int64 __fastcall SyncEvalObject(__int64 a1, int a2, int a3, int a4)
{
  char v8; // si
  int v9; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KTHREAD *v16; // r9
  __int64 v17; // r10
  __int64 CurrentIrql; // r8
  unsigned __int32 v19; // ebx
  unsigned int v20; // ebx
  __int64 v21; // rdx
  unsigned int restarted; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // ebx
  __int64 result; // rax
  __int64 v28; // rdx
  NTSTATUS v29; // ebx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // rax
  __int64 ObjectPath; // rax
  void *v34; // rdx
  void *v35; // rdi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-88h]
  __int64 *v37; // [rsp+40h] [rbp-68h] BYREF
  __int64 v38; // [rsp+48h] [rbp-60h] BYREF
  int v39; // [rsp+50h] [rbp-58h]
  unsigned int v40; // [rsp+58h] [rbp-50h] BYREF
  __int64 v41; // [rsp+60h] [rbp-48h]
  struct _KEVENT Event; // [rsp+68h] [rbp-40h] BYREF
  int v43; // [rsp+B0h] [rbp+8h] BYREF

  v38 = a1 + 120;
  v39 = 8;
  v37 = &v38;
  v8 = 0;
  v9 = EmClientRuleEvaluate(&GUID_EM_RULE_AMLI_ALLOW_INVALID_RECLAIM_MEMORY_MAP_ON_EVAL, &v37, 1LL, &v43);
  if ( v9 >= 0 && v43 == 2 || v9 == -1073741818 && v43 )
  {
    v8 = 1;
    _InterlockedIncrement(&gAllowInvalidReclaimMemoryMap);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  byte_1C0080710 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v12 = RunningContextListHead - 392;
  if ( &RunningContextListHead != (__int64 *)RunningContextListHead )
  {
    while ( *(struct _KTHREAD **)(v12 + 408) != CurrentThread )
    {
      v32 = *(__int64 **)(v12 + 392);
      v12 = (__int64)(v32 - 49);
      if ( &RunningContextListHead == v32 )
        goto LABEL_5;
    }
    v11 = v12;
  }
LABEL_5:
  KeReleaseSpinLock(&SpinLock, byte_1C0080710);
  if ( !v11 )
  {
    v16 = KeGetCurrentThread();
    v17 = (unsigned int)gReadyQueue;
    CurrentIrql = KeGetCurrentIrql();
    if ( (gDebugger & 0x8000) != 0 && qword_1C0080840 )
    {
      v19 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0080838 + 1, 1u);
      if ( (_DWORD)qword_1C0080838 == 204 )
        v20 = v19 % 0xCC;
      else
        v20 = v19 % (unsigned int)qword_1C0080838;
      v21 = 72LL * v20;
      *(_QWORD *)((char *)qword_1C0080840 + v21 + 8) = MEMORY[0xFFFFF78000000008];
      *(_DWORD *)((char *)qword_1C0080840 + v21) = 1398361667;
      *(_QWORD *)((char *)qword_1C0080840 + v21 + 16) = v16;
      *(_QWORD *)((char *)qword_1C0080840 + v21 + 24) = 0LL;
      *(_QWORD *)((char *)qword_1C0080840 + v21 + 32) = 0LL;
      *(_QWORD *)((char *)qword_1C0080840 + v21 + 40) = v17;
      *(_QWORD *)((char *)qword_1C0080840 + v21 + 48) = CurrentIrql;
      *(_QWORD *)((char *)qword_1C0080840 + v21 + 56) = a1;
      *(_QWORD *)((char *)qword_1C0080840 + v21 + 64) = 0LL;
    }
    restarted = AsyncEvalObject(a1, a2, a3, a4, (__int64)EvalMethodComplete, (__int64)&v40, 0);
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(v11 + 64) & 0x100) != 0 )
  {
    LogError(3222536198LL, v13, v14, v15);
    AcpiDiagTraceAmlError(v11, 3222536198LL);
    PrintDebugMessage(179, 0, 0, 0, 0LL);
    v26 = -1072431098;
  }
  else
  {
    LogSchedEvent(1314085198, v11, KeGetCurrentIrql(), a1, 0LL);
    v26 = NestAsyncEvalObject(a1, a2, a3, a4, (__int64)Timeout, (__int64)&v40);
    if ( v26 == 32772 )
    {
      restarted = RestartContext(v11, 0LL);
LABEL_12:
      v26 = restarted;
    }
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    if ( v26 == 32772 )
    {
      LogError(3222536198LL, v23, v24, v25);
      AcpiDiagTraceAmlError(v11, 3222536198LL);
      ObjectPath = GetObjectPath(a1);
      v34 = &unk_1C006E28A;
      if ( ObjectPath )
        LODWORD(v34) = ObjectPath;
      v35 = (void *)ObjectPath;
      PrintDebugMessage(181, (_DWORD)v34, 0, 0, 0LL);
      v26 = -1072431098;
      if ( v35 )
        ExFreePoolWithTag(v35, 0);
    }
  }
  else if ( v26 == 32772 )
  {
    while ( 1 )
    {
      v29 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( v29 )
        break;
      v26 = v40;
      if ( v40 == 32771 )
        v26 = RestartContext(v41, 0LL);
      if ( v26 != 32772 )
        goto LABEL_15;
    }
    LogError(3222536198LL, v28, v30, v31);
    AcpiDiagTraceAmlError(v11, 3222536198LL);
    PrintDebugMessage(180, v29, 0, 0, 0LL);
    v26 = -1072431098;
  }
LABEL_15:
  result = v26;
  if ( v8 )
    _InterlockedDecrement(&gAllowInvalidReclaimMemoryMap);
  return result;
}
