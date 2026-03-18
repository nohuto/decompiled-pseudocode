/*
 * XREFs of NtSetDriverEntryOrder @ 0x1408D56D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 *     IoSetEnvironmentVariableEx @ 0x140821608 (IoSetEnvironmentVariableEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65E0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetDriverEntryOrder(PULONG Ids, PULONG Count)
{
  __int64 v2; // rdi
  PVOID PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  unsigned int v8; // r15d
  char *v9; // rcx
  unsigned int i; // eax
  ULONG v11; // edx
  struct _KTHREAD *v12; // rax
  NTSTATUS v13; // edi

  v2 = (unsigned int)Count;
  PoolWithTag = 0LL;
  if ( dword_140409DD0 != 2 )
    return -1073741822;
  if ( (unsigned int)Count > 0x3FFFFFFF )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, CurrentThread->PreviousMode) )
    return -1073741727;
  if ( (_DWORD)v2 )
  {
    v8 = v2;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 2 * v2, 0x72766E45u);
    if ( !PoolWithTag )
      return -1073741670;
    if ( PreviousMode && v8 * 4 )
    {
      if ( ((unsigned __int8)Ids & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = (char *)&Ids[v8];
      if ( (unsigned __int64)v9 > 0x7FFFFFFF0000LL || v9 < (char *)Ids )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    for ( i = 0; i < (unsigned int)v2; ++i )
    {
      v11 = Ids[i];
      if ( v11 > 0xFFFF )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        return -1073741811;
      }
      *((_WORD *)PoolWithTag + i) = v11;
    }
  }
  v12 = KeGetCurrentThread();
  --v12->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v13 = IoSetEnvironmentVariableEx(
          L"DriverOrder",
          (__int64)&EfiDriverVariablesGuid,
          (__int64)PoolWithTag,
          2 * (int)v2,
          1);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v13 == -1073741568 )
    v13 = 0;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v13;
}
