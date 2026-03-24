/*
 * XREFs of ExLockUserBuffer @ 0x14069E918
 * Callers:
 *     ExpGetLookasideInformation @ 0x1403190C0 (ExpGetLookasideInformation.c)
 *     NtQueryInformationProcess @ 0x14066DB70 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x14069E4B4 (ExGetSessionPoolTagInformation.c)
 *     KdSystemDebugControl @ 0x1408422B0 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x14084C4A0 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x14085CD54 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408B9360 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x1408CB33C (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x1408CB75C (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1408CB7F4 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1408CB88C (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1408CB900 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1408D0DA8 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1408D24A0 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x1408D38D0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1408D3F20 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1408D43D0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x1408D46E0 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x1408D4C50 (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x1408DA830 (NtSystemDebugControl.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140040380 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B7670 (ExAllocatePoolWithQuotaTag.c)
 *     ExUnlockUserBuffer @ 0x14011A718 (ExUnlockUserBuffer.c)
 *     MmSizeOfMdl @ 0x14011A740 (MmSizeOfMdl.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExLockUserBuffer(
        unsigned __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        LOCK_OPERATION a4,
        _QWORD *P,
        struct _MDL **a6)
{
  __int64 v8; // r13
  SIZE_T v10; // rax
  struct _MDL *PoolWithQuotaTag; // rax
  struct _MDL *v12; // rbx
  PVOID MappedSystemVa; // rax

  v8 = a2;
  *P = 0LL;
  *a6 = 0LL;
  v10 = MmSizeOfMdl((PVOID)a1, a2);
  PoolWithQuotaTag = (struct _MDL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v10, 0x6F666E49u);
  v12 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    PoolWithQuotaTag->Next = 0LL;
    PoolWithQuotaTag->Size = 8 * ((((a1 & 0xFFF) + v8 + 4095) >> 12) + 6);
    PoolWithQuotaTag->MdlFlags = 0;
    PoolWithQuotaTag->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
    PoolWithQuotaTag->ByteOffset = a1 & 0xFFF;
    PoolWithQuotaTag->ByteCount = v8;
    MmProbeAndLockPages(PoolWithQuotaTag, a3, a4);
    v12->MdlFlags |= 0x2000u;
    if ( (v12->MdlFlags & 5) != 0 )
      MappedSystemVa = v12->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, 0x40000020u);
    *P = MappedSystemVa;
    if ( MappedSystemVa )
    {
      *a6 = v12;
      return 0LL;
    }
    ExUnlockUserBuffer(v12);
  }
  return 3221225626LL;
}
