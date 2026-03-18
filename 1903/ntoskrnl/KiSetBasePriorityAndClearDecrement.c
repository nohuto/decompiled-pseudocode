/*
 * XREFs of KiSetBasePriorityAndClearDecrement @ 0x1400E45FC
 * Callers:
 *     KiUpdateVPBackingThreadPriority @ 0x140011BD8 (KiUpdateVPBackingThreadPriority.c)
 *     KeRemovePriQueue @ 0x140059F90 (KeRemovePriQueue.c)
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x14006BA10 (KiDirectSwitchThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E40B8 (KeSetPriorityAndQuantumProcess.c)
 *     KiTryUnwaitThreadWithPriority @ 0x14010D5E8 (KiTryUnwaitThreadWithPriority.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x1401126E0 (KiAbQueueAutoBoostDpc.c)
 */

__int64 __fastcall KiSetBasePriorityAndClearDecrement(__int64 a1, char *a2, int a3)
{
  unsigned int v3; // r9d
  char v7; // al
  struct _KPRCB *CurrentPrcb; // rcx
  char v9; // al
  struct _SINGLE_LIST_ENTRY *v11; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8

  v3 = 0;
  if ( a2 )
  {
    v7 = *a2;
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *a2 < *(char *)(a1 + 563) )
    {
      if ( *(_BYTE *)(a1 + 1423) )
      {
        v11 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1384);
        if ( *(_QWORD *)(a1 + 1384) == 1LL )
        {
          p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
          if ( CurrentPrcb != (struct _KPRCB *)-25712LL )
          {
            v11->Next = p_AbSelfIoBoostsList->Next;
            p_AbSelfIoBoostsList->Next = v11;
            _InterlockedAdd16((volatile signed __int16 *)(a1 + 1420), 1u);
            KiAbQueueAutoBoostDpc(CurrentPrcb);
            v7 = *a2;
          }
        }
      }
    }
    *(_BYTE *)(a1 + 563) = v7;
    v3 = *(_DWORD *)a2;
  }
  v9 = *(_BYTE *)(a1 + 564);
  if ( v9 )
  {
    if ( (v9 & 0xF) != 0 )
      *(_DWORD *)(a1 + 1424) = MEMORY[0xFFFFF78000000320];
    if ( a3 )
    {
      v3 = *(char *)(a1 + 195) - (*(_BYTE *)(a1 + 564) & 0xF);
      *(_BYTE *)(a1 + 564) &= 0xF0u;
    }
    else
    {
      *(_BYTE *)(a1 + 564) = 0;
    }
  }
  return v3;
}
