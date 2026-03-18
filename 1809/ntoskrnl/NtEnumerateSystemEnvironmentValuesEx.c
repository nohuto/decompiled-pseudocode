/*
 * XREFs of NtEnumerateSystemEnvironmentValuesEx @ 0x1408D43F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     ExUnlockUserBuffer @ 0x14011A6F8 (ExUnlockUserBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140629A60 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x14069E938 (ExLockUserBuffer.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x1408211CC (IoEnumerateEnvironmentVariablesEx.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtEnumerateSystemEnvironmentValuesEx(ULONG InformationClass, PVOID Buffer, ULONG BufferLength)
{
  _DWORD *v3; // rdi
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v8; // rcx
  unsigned int v9; // eax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v11; // ebx
  unsigned int v12; // [rsp+34h] [rbp-34h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(_DWORD **)&BufferLength;
  if ( dword_140409DD0 != 2 )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( *(_QWORD *)&BufferLength < 0x7FFFFFFF0000uLL )
      v8 = *(_QWORD *)&BufferLength;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    v9 = **(_DWORD **)&BufferLength;
    v12 = **(_DWORD **)&BufferLength;
    if ( !Buffer )
    {
      v12 = 0;
      v9 = 0;
    }
    if ( v9 )
      ProbeForWrite(Buffer, v9, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v12 = Buffer != 0LL ? **(_DWORD **)&BufferLength : 0;
  }
  if ( v12 )
  {
    result = ExLockUserBuffer((unsigned __int64)Buffer, v12, PreviousMode, IoWriteAccess, &v13, (struct _MDL **)&P);
    if ( result < 0 )
      return result;
  }
  else
  {
    v13 = 0LL;
    P = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v11 = IoEnumerateEnvironmentVariablesEx(InformationClass, 0LL, v13, &v12);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( P )
    ExUnlockUserBuffer((struct _MDL *)P);
  *v3 = v12;
  return v11;
}
