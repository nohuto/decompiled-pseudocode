/*
 * XREFs of RtlCloneUserProcess @ 0x1800D6770
 * Callers:
 *     sub_1800D6400 @ 0x1800D6400 (sub_1800D6400.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     sub_18002D7BC @ 0x18002D7BC (sub_18002D7BC.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlWakeAllConditionVariable @ 0x18006D270 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007D130 (RtlAcquireReleaseSRWLockExclusive.c)
 *     sub_180089DB0 @ 0x180089DB0 (sub_180089DB0.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800D4F38 @ 0x1800D4F38 (sub_1800D4F38.c)
 *     sub_1800D5668 @ 0x1800D5668 (sub_1800D5668.c)
 *     sub_1800D5D4C @ 0x1800D5D4C (sub_1800D5D4C.c)
 *     sub_1800DE328 @ 0x1800DE328 (sub_1800DE328.c)
 *     sub_1800DE3D0 @ 0x1800DE3D0 (sub_1800DE3D0.c)
 *     sub_1800EF084 @ 0x1800EF084 (sub_1800EF084.c)
 *     sub_1800EF8F8 @ 0x1800EF8F8 (sub_1800EF8F8.c)
 */

NTSTATUS __cdecl RtlCloneUserProcess(
        ULONG ProcessFlags,
        PSECURITY_DESCRIPTOR ProcessSecurityDescriptor,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        HANDLE DebugPort,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  int v8; // esi
  ULONG v9; // ebp
  ULONG v10; // r15d
  ULONG v11; // edi
  _RTL_SRWLOCK *v12; // rbx
  __int64 v13; // r14
  NTSTATUS v14; // ebx
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  NTSTATUS v17; // ebp
  unsigned int v18; // ebx
  __int64 v19; // rcx
  _QWORD v20[8]; // [rsp+30h] [rbp-68h] BYREF

  if ( (ProcessFlags & 0xFFFFFFF8) != 0 )
    return -1073741585;
  v8 = 2;
  v9 = 2 * (ProcessFlags & 2);
  v10 = ProcessFlags & 1;
  v11 = ProcessFlags & 4;
  if ( (ProcessFlags & 4) != 0 )
    goto LABEL_11;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return -1073741420;
  sub_18002E73C(0);
  sub_18002D7BC();
  RtlEnterCriticalSection(&stru_1801652C0);
  sub_1800DE3D0();
  RtlEnterCriticalSection(&stru_180164FE0);
  RtlAcquireSRWLockShared(&stru_1801661B8);
  v12 = &stru_1801661C8;
  v13 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v12);
    v12 += 2;
    --v13;
  }
  while ( v13 );
  RtlAcquireSRWLockExclusive(&stru_180166380);
  sub_1800D5D4C(0);
  v14 = sub_1800EF084();
  if ( v14 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_1801662F8);
    RtlAcquireSRWLockExclusive(&stru_1801662E8);
    v14 = 0;
    byte_180164EF9 = 1;
  }
  else
  {
    sub_1800D5D4C(2);
    RtlReleaseSRWLockExclusive(&stru_180166380);
    sub_1800D5668(0);
    RtlLeaveCriticalSection(&stru_180164FE0);
    sub_1800DE328(v15, 0LL);
    sub_1800D4F38(0);
  }
  if ( v14 < 0 )
    return v14;
LABEL_11:
  memset(v20, 0, 0x38uLL);
  v20[1] = ProcessSecurityDescriptor;
  LOWORD(v20[0]) = 1;
  v20[2] = ThreadSecurityDescriptor;
  v20[4] = DebugPort;
  v16 = sub_180089DB0(0LL, 0LL, v9, v10, (__int64)v20, (__int64)ProcessInformation);
  v17 = v16;
  if ( !v11 )
  {
    if ( v16 == 297 )
    {
      stru_1801662F8.Ptr = (PVOID)1;
      v18 = 1;
      v8 = 1;
      stru_180164FE0.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
      stru_180164FE0.LockCount = -2;
      stru_180164FE0.RecursionCount = 1;
      stru_180164FE0.LockSemaphore = 0LL;
    }
    else
    {
      byte_180164EF9 = 0;
      v18 = 0;
      RtlReleaseSRWLockExclusive(&stru_1801662E8);
    }
    RtlReleaseSRWLockExclusive(&stru_1801662F8);
    sub_1800D5D4C(v8);
    if ( v8 == 1 )
      stru_180166380.Ptr = (PVOID)1;
    else
      RtlReleaseSRWLockExclusive(&stru_180166380);
    sub_1800EF8F8(v18);
    sub_1800D5668(v18);
    RtlLeaveCriticalSection(&stru_180164FE0);
    sub_1800DE328(v19, v18);
    sub_1800D4F38(v18);
    if ( v18 )
    {
      byte_180164EF9 = 0;
      RtlAcquireReleaseSRWLockExclusive(&stru_1801662E8);
      RtlWakeAllConditionVariable(&ConditionVariable);
    }
  }
  return v17;
}
