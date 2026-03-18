/*
 * XREFs of PspSetProcessPriorityClass @ 0x1406E6B9C
 * Callers:
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     PspApplyIFEOPerfOptions @ 0x1406EDDAC (PspApplyIFEOPerfOptions.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     SeCheckPrivilegedObject @ 0x1407489B8 (SeCheckPrivilegedObject.c)
 */

__int64 __fastcall PspSetProcessPriorityClass(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // bl
  __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rbp

  v4 = a2;
  if ( a2 > 6u )
    return 3221225485LL;
  if ( a2 == 4
    && *(_BYTE *)(a1 + 1119) != 4
    && !(a3
       ? ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
           SeIncreaseBasePriorityPrivilege,
           a3,
           512LL,
           a4)
       : SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a4)) )
  {
    return 3221225569LL;
  }
  v6 = *(_QWORD *)(a1 + 952);
  CurrentThread = KeGetCurrentThread();
  if ( v6 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 56), 1u);
    if ( (*(_DWORD *)(v6 + 848) & 0x20) != 0 )
      v4 = *(_BYTE *)(v6 + 872);
    ExReleaseResourceLite((PERESOURCE)(v6 + 56));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  *(_BYTE *)(a1 + 1119) = v4;
  return 0LL;
}
