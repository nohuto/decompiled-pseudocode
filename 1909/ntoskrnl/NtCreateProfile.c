/*
 * XREFs of NtCreateProfile @ 0x140917A10
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryGroupAffinity @ 0x1401353A0 (KeQueryGroupAffinity.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExpProfileCreate @ 0x140917374 (ExpProfileCreate.c)
 */

NTSTATUS __stdcall NtCreateProfile(
        PHANDLE ProfileHandle,
        HANDLE ProcessHandle,
        PVOID ImageBase,
        SIZE_T ImageSize,
        ULONG Granularity,
        PVOID Buffer,
        ULONG ProfilingSize,
        KPROFILE_SOURCE Source,
        KAFFINITY ProcessorMask)
{
  USHORT Group; // cx
  KAFFINITY GroupAffinity; // rax
  KAFFINITY v16; // [rsp+60h] [rbp-48h] BYREF
  __int64 v17; // [rsp+68h] [rbp-40h]

  v17 = 0LL;
  Group = KeGetCurrentPrcb()->Group;
  GroupAffinity = ProcessorMask;
  LOWORD(v17) = Group;
  if ( ProcessorMask == -1LL )
    GroupAffinity = KeQueryGroupAffinity(Group);
  v16 = GroupAffinity;
  return ExpProfileCreate(
           (unsigned __int64)ProfileHandle,
           ProcessHandle,
           (unsigned __int64)ImageBase,
           ImageSize,
           Granularity,
           Buffer,
           ProfilingSize,
           Source,
           1u,
           (unsigned __int64)&v16,
           1);
}
