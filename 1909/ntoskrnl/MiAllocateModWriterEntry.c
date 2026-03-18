/*
 * XREFs of MiAllocateModWriterEntry @ 0x1400CAADC
 * Callers:
 *     MiMappedPageWriter @ 0x14018CF20 (MiMappedPageWriter.c)
 *     MiAllocateMappedWriterMdls @ 0x14019BAC8 (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x1407747B8 (MiCreatePagefile.c)
 * Callees:
 *     MiChargeForWriteInProgressPage @ 0x1400CAB48 (MiChargeForWriteInProgressPage.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

PVOID __fastcall MiAllocateModWriterEntry(__int64 a1, __int64 a2, int a3)
{
  PVOID PoolWithTag; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * a2 + 264, 0x65576D4Du);
  if ( PoolWithTag )
  {
    if ( (unsigned int)MiChargeForWriteInProgressPage(a1, a3 != 0) )
      return PoolWithTag;
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return 0LL;
}
