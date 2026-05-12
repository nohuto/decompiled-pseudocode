/*
 * XREFs of RaidUnitHierarchicalReset @ 0x1C0048AD4
 * Callers:
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0037530 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0047C70 (RaidHierarchicalResetWorkRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C0035EBC (RaidAdapterResetBus.c)
 *     McTemplateK0quj @ 0x1C0044C5C (McTemplateK0quj.c)
 *     RaUnitSetHierarchicalResetSrbTimeoutCountdown @ 0x1C0045E18 (RaUnitSetHierarchicalResetSrbTimeoutCountdown.c)
 *     RaidUnitResetTarget @ 0x1C00491DC (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C0049498 (RaidUnitResetUnit.c)
 *     StorIsEventQueueEmpty @ 0x1C004A098 (StorIsEventQueueEmpty.c)
 */

__int64 __fastcall RaidUnitHierarchicalReset(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // esi
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8

  if ( *(_BYTE *)(a1 + 2976) )
  {
    v2 = *(_DWORD *)(a1 + 2996);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 1288);
    if ( v2 < 0x1E )
      v2 = 30;
  }
  v3 = 2 * v2;
  RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 2 * v2);
  v4 = RaidUnitResetUnit(a1);
  if ( v4 < 0 )
  {
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, v3);
    v4 = RaidUnitResetTarget(a1);
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
    if ( v4 < 0 )
    {
      if ( (byte_1C0062743 & 0x40) != 0 )
        McTemplateK0quj(
          *(struct _MCGEN_TRACE_CONTEXT **)(a1 + 24),
          v5,
          v6,
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 96),
          a1 + 1976);
      if ( *(_BYTE *)(a1 + 2976) && (unsigned __int8)StorIsEventQueueEmpty(*(_QWORD *)(a1 + 504)) )
      {
        v4 = 0;
      }
      else
      {
        v4 = RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 96));
        if ( v4 >= 0 )
          ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4768LL);
      }
    }
    else
    {
      ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4772LL);
    }
  }
  else
  {
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4776LL);
  }
  *(_QWORD *)(a1 + 3024) = KeQueryUnbiasedInterruptTime();
  return (unsigned int)v4;
}
