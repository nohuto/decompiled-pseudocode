/*
 * XREFs of IopLoadDriverImage @ 0x140135570
 * Callers:
 *     NtLoadDriver @ 0x1406C79D0 (NtLoadDriver.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140135748 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     IopLoadUnloadDriver @ 0x1406C79F0 (IopLoadUnloadDriver.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopLoadDriverImage(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v4; // rax
  int v5; // edx
  void *v6; // rcx
  unsigned __int64 v7; // rdx
  void *PoolWithQuota_1; // rbx
  void *Src[2]; // [rsp+38h] [rbp-70h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+50h] [rbp-58h] BYREF
  __int16 Object; // [rsp+70h] [rbp-38h] BYREF
  char v13; // [rsp+72h] [rbp-36h]
  int v14; // [rsp+74h] [rbp-34h]
  _QWORD v15[4]; // [rsp+78h] [rbp-30h] BYREF
  unsigned int v16; // [rsp+98h] [rbp-10h]

  if ( !a1 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( PsIsCurrentThreadInServerSilo() )
      return 0LL;
    v4 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v4 = (__int64)a1;
    v5 = *(_DWORD *)v4;
    LODWORD(Src[0]) = v5;
    v6 = *(void **)(v4 + 8);
    Src[1] = v6;
    if ( !(_WORD)v5 )
      return 3221225485LL;
    if ( ((unsigned __int8)v6 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (unsigned __int64)v6 + (unsigned __int16)v5;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < (unsigned __int64)v6 )
      MEMORY[0x7FFFFFFF0000] = 0;
    PoolWithQuota_1 = (void *)IopVerifierExAllocatePoolWithQuota_1(v6, LOWORD(Src[0]));
    memmove(PoolWithQuota_1, Src[1], LOWORD(Src[0]));
    Src[1] = PoolWithQuota_1;
  }
  else
  {
    *(_OWORD *)Src = *a1;
    PoolWithQuota_1 = 0LL;
  }
  Object = 0;
  v13 = 6;
  v14 = 0;
  v15[1] = v15;
  v15[0] = v15;
  v15[2] = 0LL;
  v15[3] = Src;
  if ( CurrentThread->ApcState.Process == PsInitialSystemProcess )
  {
    IopLoadUnloadDriver(&WorkItem);
  }
  else
  {
    WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
    WorkItem.Parameter = &WorkItem;
    WorkItem.List.Flink = 0LL;
    ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(&Object, UserRequest, 0, 0, 0LL);
  }
  if ( PoolWithQuota_1 )
    ExFreePoolWithTag(PoolWithQuota_1, 0);
  return v16;
}
