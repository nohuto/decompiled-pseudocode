/*
 * XREFs of NtDeleteBootEntry @ 0x140910E80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     swprintf_s @ 0x1401A4BD0 (swprintf_s.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     IoGetEnvironmentVariableEx @ 0x14085B3D4 (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x14085B6C0 (IoSetEnvironmentVariableEx.c)
 */

NTSTATUS __stdcall NtDeleteBootEntry(ULONG Id)
{
  KPROCESSOR_MODE PreviousMode; // dl
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS EnvironmentVariable; // edi
  int v6; // [rsp+30h] [rbp-38h] BYREF
  wchar_t Dst[12]; // [rsp+38h] [rbp-30h] BYREF

  if ( dword_1404324F0 != 2 )
    return -1073741822;
  if ( Id > 0xFFFF )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
    return -1073741727;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  swprintf_s(Dst, 9uLL, L"Boot%04X", Id);
  v6 = 0;
  EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, 0LL, &v6, 0LL);
  if ( EnvironmentVariable != -1073741568 )
    goto LABEL_11;
  if ( ((2 * ((Id | (2 * Id)) & 0xC4444444)) & Id) != 0 )
  {
    swprintf_s(Dst, 9uLL, L"Boot%04x", Id);
    v6 = 0;
    EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, 0LL, &v6, 0LL);
LABEL_11:
    if ( !EnvironmentVariable || EnvironmentVariable == -1073741789 )
      EnvironmentVariable = IoSetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, 0LL, 0, 1);
  }
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return EnvironmentVariable;
}
