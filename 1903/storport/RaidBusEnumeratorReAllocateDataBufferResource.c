/*
 * XREFs of RaidBusEnumeratorReAllocateDataBufferResource @ 0x1C0037CB0
 * Callers:
 *     RaidBusEnumeratorGenericInquiry @ 0x1C001374C (RaidBusEnumeratorGenericInquiry.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006800 (RaidAllocatePool.c)
 *     RaidBusEnumeratorReleaseDataBufferResource @ 0x1C0037D58 (RaidBusEnumeratorReleaseDataBufferResource.c)
 */

__int64 __fastcall RaidBusEnumeratorReAllocateDataBufferResource(__int64 *a1, __int64 a2, ULONG a3)
{
  __int64 v3; // rbx
  PVOID Pool; // rax
  PMDL Mdl; // rax
  PMDL v9; // rbx

  v3 = *a1;
  RaidBusEnumeratorReleaseDataBufferResource(a1);
  Pool = RaidAllocatePool(NonPagedPoolNx, a3, 0x32316152u, *(_QWORD *)(v3 + 8));
  *(_QWORD *)(a2 + 32) = Pool;
  if ( !Pool )
    return 3221225495LL;
  *(_DWORD *)(a2 + 40) = a3;
  Mdl = IoAllocateMdl(Pool, a3, 0, 0, 0LL);
  *(_QWORD *)(a2 + 8) = Mdl;
  v9 = Mdl;
  if ( !Mdl )
    RaidBusEnumeratorReleaseDataBufferResource(a1);
  return v9 == 0LL ? 0xC0000017 : 0;
}
