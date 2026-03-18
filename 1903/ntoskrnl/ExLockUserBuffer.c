/*
 * XREFs of ExLockUserBuffer @ 0x1406BF9BC
 * Callers:
 *     ExpGetLookasideInformation @ 0x140337ABC (ExpGetLookasideInformation.c)
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x1406BF68C (ExGetSessionPoolTagInformation.c)
 *     KdSystemDebugControl @ 0x14087DCF0 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1408879CC (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x140899938 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5EB8 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x140908CDC (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x140909124 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1409091BC (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x140909254 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1409092C8 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14090E5E0 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14090FD14 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x1409111A0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1409117E0 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140911C90 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x140911FA0 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x140912510 (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x1409185C0 (NtSystemDebugControl.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPages @ 0x14008E960 (MmProbeAndLockPages.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     ExUnlockUserBuffer @ 0x140116740 (ExUnlockUserBuffer.c)
 *     MmSizeOfMdl @ 0x140119480 (MmSizeOfMdl.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
