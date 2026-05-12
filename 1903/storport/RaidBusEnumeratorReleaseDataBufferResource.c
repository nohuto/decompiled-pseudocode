/*
 * XREFs of RaidBusEnumeratorReleaseDataBufferResource @ 0x1C0037D58
 * Callers:
 *     RaidBusEnumeratorGenericInquiry @ 0x1C001374C (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorReAllocateDataBufferResource @ 0x1C0037CB0 (RaidBusEnumeratorReAllocateDataBufferResource.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidBusEnumeratorReleaseDataBufferResource(__int64 a1)
{
  void *v2; // rcx
  struct _MDL *v3; // rcx

  v2 = *(void **)(a1 + 40);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x32316152u);
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_DWORD *)(a1 + 48) = 0;
  }
  v3 = *(struct _MDL **)(a1 + 16);
  if ( v3 )
  {
    IoFreeMdl(v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
