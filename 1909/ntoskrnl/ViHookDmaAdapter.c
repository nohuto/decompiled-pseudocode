/*
 * XREFs of ViHookDmaAdapter @ 0x14096C7A0
 * Callers:
 *     VfGetDmaAdapter @ 0x140969950 (VfGetDmaAdapter.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExInterlockedInsertHeadList @ 0x14010A2E0 (ExInterlockedInsertHeadList.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ViAllocateContiguousMemory @ 0x14096AE00 (ViAllocateContiguousMemory.c)
 *     ViCopyDeviceDescription @ 0x14096BAB8 (ViCopyDeviceDescription.c)
 *     ViGetAdapterInformationInternal @ 0x14096C0D8 (ViGetAdapterInformationInternal.c)
 */

struct _LIST_ENTRY *__fastcall ViHookDmaAdapter(struct _LIST_ENTRY *Object, __int64 a2, int a3, char a4)
{
  struct _LIST_ENTRY *AdapterInformationInternal; // rbx
  struct _LIST_ENTRY *PoolWithTag; // rax

  AdapterInformationInternal = ViGetAdapterInformationInternal((ULONG_PTR)Object, 0);
  if ( !AdapterInformationInternal )
  {
    PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x140uLL, 0x566C6148u);
    AdapterInformationInternal = PoolWithTag;
    if ( !PoolWithTag )
      return AdapterInformationInternal;
    memset(PoolWithTag, 0, 0x140uLL);
    AdapterInformationInternal[1].Flink = Object;
    ExInterlockedInsertHeadList(&ViAdapterList, AdapterInformationInternal, &qword_1409C7E08);
    ObfReferenceObject(Object);
    AdapterInformationInternal[4].Blink = 0LL;
    AdapterInformationInternal[4].Flink = (struct _LIST_ENTRY *)((char *)AdapterInformationInternal + 56);
    AdapterInformationInternal[3].Blink = (struct _LIST_ENTRY *)((char *)AdapterInformationInternal + 56);
    AdapterInformationInternal[6].Flink = 0LL;
    AdapterInformationInternal[5].Blink = AdapterInformationInternal + 5;
    AdapterInformationInternal[5].Flink = AdapterInformationInternal + 5;
    AdapterInformationInternal[7].Blink = 0LL;
    AdapterInformationInternal[7].Flink = (struct _LIST_ENTRY *)((char *)AdapterInformationInternal + 104);
    AdapterInformationInternal[6].Blink = (struct _LIST_ENTRY *)((char *)AdapterInformationInternal + 104);
    AdapterInformationInternal[9].Flink = 0LL;
    AdapterInformationInternal[8].Blink = AdapterInformationInternal + 8;
    AdapterInformationInternal[8].Flink = AdapterInformationInternal + 8;
    ViCopyDeviceDescription((__int64)&AdapterInformationInternal[12], (unsigned int *)a2);
    LODWORD(AdapterInformationInternal[9].Blink) = a3;
    if ( *(_DWORD *)(a2 + 20) == 1 && *(_DWORD *)(a2 + 16) < 8u || !*(_BYTE *)(a2 + 4) )
      BYTE2(AdapterInformationInternal[2].Flink) = 1;
    AdapterInformationInternal[17].Blink = 0LL;
    if ( *(_BYTE *)(a2 + 4) && *(_BYTE *)(a2 + 5) )
      ViAllocateContiguousMemory((__int64)AdapterInformationInternal);
    else
      BYTE1(AdapterInformationInternal[2].Flink) = 1;
    AdapterInformationInternal[3].Flink = Object->Blink;
    Object->Blink = (struct _LIST_ENTRY *)&ViDmaOperations;
  }
  if ( a4 )
    _InterlockedIncrement((volatile signed __int32 *)&AdapterInformationInternal[2].Flink + 1);
  return AdapterInformationInternal;
}
