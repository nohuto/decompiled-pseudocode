/*
 * XREFs of ExLockUserBuffer @ 0x1406A49BC
 * Callers:
 *     ExpGetLookasideInformation @ 0x14033751C (ExpGetLookasideInformation.c)
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x1406A468C (ExGetSessionPoolTagInformation.c)
 *     KdSystemDebugControl @ 0x14087D3F0 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1408871F8 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x140899158 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5828 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x14090873C (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x140908B84 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x140908C1C (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x140908CB4 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x140908D28 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14090E040 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14090F774 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x140910C00 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140911240 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1409116F0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x140911A00 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x140911F70 (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x140918020 (NtSystemDebugControl.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FE40 (MmMapLockedPagesSpecifyCache.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     MmProbeAndLockPages @ 0x1400CBF50 (MmProbeAndLockPages.c)
 *     ExUnlockUserBuffer @ 0x1400F4860 (ExUnlockUserBuffer.c)
 *     MmSizeOfMdl @ 0x1400F75A0 (MmSizeOfMdl.c)
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
