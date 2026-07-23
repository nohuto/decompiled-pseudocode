/*
 * XREFs of ZwCreateProfileEx @ 0x1401C2330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateProfileEx(
        PHANDLE ProfileHandle,
        HANDLE Process,
        PVOID ProfileBase,
        SIZE_T ProfileSize,
        ULONG BucketSize,
        PULONG Buffer,
        ULONG BufferSize,
        KPROFILE_SOURCE ProfileSource,
        USHORT GroupCount,
        PGROUP_AFFINITY GroupAffinity)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProfileHandle);
}
