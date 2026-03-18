/*
 * XREFs of ACPIBuildPowerResourceRequest @ 0x1C002CD60
 * Callers:
 *     OSNotifyCreatePowerResource @ 0x1C002CD14 (OSNotifyCreatePowerResource.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C001C1C4 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIBuildPowerResourceRequest(__int64 a1)
{
  PVOID v2; // rax
  __int64 v3; // rbx
  __int64 *v4; // rax

  v2 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
  v3 = (__int64)v2;
  if ( !v2 )
    return 3221225626LL;
  memset(v2, 0, 0x88uLL);
  *(_DWORD *)(v3 + 48) = 0;
  *(_QWORD *)(v3 + 64) = 0LL;
  *(_QWORD *)(v3 + 72) = 0LL;
  *(_QWORD *)(v3 + 128) = &AcpiBuildPowerResourceList;
  *(_DWORD *)(v3 + 16) = 1599293264;
  *(_DWORD *)(v3 + 24) = 3;
  *(_QWORD *)(v3 + 40) = a1;
  *(_DWORD *)(v3 + 20) = 4096;
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  if ( AcpiTableLoadDelta )
    *(_DWORD *)(v3 + 20) |= 0x40u;
  v4 = (__int64 *)qword_1C00803F8;
  if ( *(__int64 **)qword_1C00803F8 != &AcpiBuildQueueList )
    __fastfail(3u);
  *(_QWORD *)v3 = &AcpiBuildQueueList;
  *(_QWORD *)(v3 + 8) = v4;
  *v4 = v3;
  qword_1C00803F8 = v3;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
  return 259LL;
}
