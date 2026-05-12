/*
 * XREFs of RaidUnitFreeResources @ 0x1C0012418
 * Callers:
 *     RaidDeleteUnit @ 0x1C0012390 (RaidDeleteUnit.c)
 *     RaidUnitAllocateResources @ 0x1C001542C (RaidUnitAllocateResources.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x1C00064A0 (StorFreeContiguousIoResources.c)
 *     StorDeleteScsiIdentity @ 0x1C0015150 (StorDeleteScsiIdentity.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001ED44 (RaidAdapterPoFxIdleComponent.c)
 *     StorpUninititalizePerUnitPerfTelemetry @ 0x1C00229B8 (StorpUninititalizePerUnitPerfTelemetry.c)
 *     RaDeleteTagList @ 0x1C006AB90 (RaDeleteTagList.c)
 */

__int64 __fastcall RaidUnitFreeResources(__int64 a1)
{
  unsigned int v2; // esi
  unsigned int HighestNodeNumber; // r8d
  __int64 v4; // rdx
  void *v5; // rcx
  void *v6; // rcx
  struct _IO_WORKITEM *v7; // rcx
  struct _IO_WORKITEM *v8; // rcx
  struct _IO_WORKITEM *v9; // rcx
  __int64 v10; // rcx
  char v11; // al
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx

  KeCancelTimer((PKTIMER)(a1 + 696));
  KeCancelTimer((PKTIMER)(a1 + 824));
  KeFlushQueuedDpcs();
  v2 = *(_DWORD *)(a1 + 1440);
  if ( v2 != -1 )
  {
    HighestNodeNumber = KeQueryHighestNodeNumber();
    if ( v2 / *(_DWORD *)(a1 + 328) < HighestNodeNumber + 1 )
      HighestNodeNumber = v2 / *(_DWORD *)(a1 + 328);
    ExpInterlockedPushEntrySList(
      (PSLIST_HEADER)(*(_QWORD *)(a1 + 256) + ((unsigned __int64)HighestNodeNumber << 6)),
      (PSLIST_ENTRY)(*(_QWORD *)(a1 + 320) + 16LL * v2));
  }
  v4 = *(_QWORD *)(a1 + 1456);
  if ( v4 )
    StorFreeContiguousIoResources(*(_QWORD *)(a1 + 24), v4 - 32);
  v5 = *(void **)(a1 + 216);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x51506152u);
    *(_QWORD *)(a1 + 216) = 0LL;
  }
  StorDeleteScsiIdentity((void *)(a1 + 104));
  RaDeleteTagList(a1 + 256);
  v6 = *(void **)(a1 + 16);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x45556152u);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( *(_DWORD *)(a1 + 1944) )
    StorpUninititalizePerUnitPerfTelemetry(a1);
  if ( (*(_BYTE *)(a1 + 160) & 0x10) != 0 )
  {
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
    *(_BYTE *)(a1 + 160) &= ~0x10u;
  }
  v7 = *(struct _IO_WORKITEM **)(a1 + 1592);
  if ( v7 )
  {
    IoFreeWorkItem(v7);
    *(_QWORD *)(a1 + 1592) = 0LL;
  }
  v8 = *(struct _IO_WORKITEM **)(a1 + 1608);
  if ( v8 )
  {
    IoFreeWorkItem(v8);
    *(_QWORD *)(a1 + 1608) = 0LL;
  }
  v9 = *(struct _IO_WORKITEM **)(a1 + 1632);
  if ( v9 )
  {
    IoFreeWorkItem(v9);
    *(_QWORD *)(a1 + 1632) = 0LL;
  }
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 )
  {
    if ( *(_QWORD *)(v10 + 5024) )
    {
      v11 = *(_BYTE *)(a1 + 161);
      if ( (v11 & 8) != 0 )
      {
        *(_BYTE *)(a1 + 161) = v11 & 0xF7;
        RaidAdapterPoFxIdleComponent(v10, 0LL, 0LL);
      }
    }
  }
  v12 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 1480);
  if ( v12 )
  {
    ExFreeCacheAwareRundownProtection(v12);
    *(_QWORD *)(a1 + 1480) = 0LL;
  }
  v13 = *(void **)(a1 + 1496);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x57506152u);
    *(_QWORD *)(a1 + 1496) = 0LL;
  }
  v14 = *(void **)(a1 + 2784);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0x54536152u);
    *(_QWORD *)(a1 + 2784) = 0LL;
  }
  return 0LL;
}
