/*
 * XREFs of MiFreeClonePool @ 0x1402C9FE8
 * Callers:
 *     MiProcessDereferenceList @ 0x140154050 (MiProcessDereferenceList.c)
 *     MiDereferenceSegmentThread @ 0x1401875A0 (MiDereferenceSegmentThread.c)
 *     MiDeletePartitionResources @ 0x1402D0FAC (MiDeletePartitionResources.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x14013A2C8 (MiUnlockPagedAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C53D0 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall MiFreeClonePool(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // rbp
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v5; // rbx

  v1 = a1 + 111;
  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList(v1);
    v5 = result;
    if ( !result )
      break;
    v2 = *((_QWORD *)&result[1].Next + 1);
    if ( v2 )
    {
      v3 = (unsigned __int64)result;
      do
      {
        MiUnlockPagedAddress(v3);
        v3 += 4096LL;
        --v2;
      }
      while ( v2 );
    }
    ExFreePoolWithTag(v5, 0);
  }
  return result;
}
