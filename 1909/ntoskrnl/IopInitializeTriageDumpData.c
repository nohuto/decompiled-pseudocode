/*
 * XREFs of IopInitializeTriageDumpData @ 0x1407830B8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14017AAF0 (KeRegisterBugCheckReasonCallback.c)
 *     KeAddTriageDumpDataBlock @ 0x14019A3D0 (KeAddTriageDumpDataBlock.c)
 *     KeInitializeTriageDumpDataArray @ 0x14019A5D0 (KeInitializeTriageDumpDataArray.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void IopInitializeTriageDumpData()
{
  struct _KTRIAGE_DUMP_DATA_ARRAY *PoolWithTag; // rax
  struct _KTRIAGE_DUMP_DATA_ARRAY *v1; // rbx
  SIZE_T v2; // r9
  unsigned int v3; // edi

  if ( !IopTriageDumpDataArray )
  {
    PoolWithTag = (struct _KTRIAGE_DUMP_DATA_ARRAY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x4030uLL, 0x72546F49u);
    IopTriageDumpDataArray = PoolWithTag;
    v1 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( KeInitializeTriageDumpDataArray(PoolWithTag, 0x4030u) < 0 )
        goto LABEL_9;
      if ( IopNumTriageDumpDataBlocks )
      {
        v3 = 0;
        do
        {
          KeAddTriageDumpDataBlock(
            v1,
            IopTriageDumpDataBlocks[2 * v3],
            (PVOID)(_mm_srli_si128(*(__m128i *)&IopTriageDumpDataBlocks[2 * v3], 8).m128i_u64[0]
                  - IopTriageDumpDataBlocks[2 * v3]),
            v2);
          ++v3;
        }
        while ( v3 < IopNumTriageDumpDataBlocks );
      }
      IopBugCheckTriageDumpDataCallbackRecord.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &IopBugCheckTriageDumpDataCallbackRecord,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)IoBugCheckTriageDumpDataCallback,
              KbCallbackTriageDumpData,
              (PUCHAR)"IoTriageDumpData") )
      {
LABEL_9:
        if ( IopTriageDumpDataArray )
        {
          ExFreePoolWithTag(IopTriageDumpDataArray, 0x72546F49u);
          IopTriageDumpDataArray = 0LL;
        }
      }
    }
  }
}
