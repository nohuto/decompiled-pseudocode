/*
 * XREFs of MiAllocateModWriterEntry @ 0x140029B74
 * Callers:
 *     MiMappedPageWriter @ 0x140180780 (MiMappedPageWriter.c)
 *     MiAllocateMappedWriterMdls @ 0x14019117C (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x14074CB40 (MiCreatePagefile.c)
 * Callees:
 *     MiChargeForWriteInProgressPage @ 0x14002CEBC (MiChargeForWriteInProgressPage.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
