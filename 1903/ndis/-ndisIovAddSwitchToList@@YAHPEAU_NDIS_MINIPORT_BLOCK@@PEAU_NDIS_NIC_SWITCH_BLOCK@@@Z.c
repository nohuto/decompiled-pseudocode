/*
 * XREFs of ?ndisIovAddSwitchToList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_BLOCK@@@Z @ 0x1C00AF6C0
 * Callers:
 *     ?ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00B0760 (-ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_ND.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIovAddSwitchToList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_NIC_SWITCH_BLOCK *a2)
{
  unsigned int v4; // esi
  KIRQL v5; // r9
  _LIST_ENTRY *Flink; // rax
  unsigned int SwitchId; // edx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v9; // rax

  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  Flink = a1->NicSwitchList.Flink;
  if ( Flink == &a1->NicSwitchList )
  {
LABEL_6:
    Blink = Flink->Blink;
    v9 = Blink->Flink;
    if ( Blink->Flink->Blink != Blink )
      __fastfail(3u);
    a2->AdapterLink.Flink = v9;
    a2->AdapterLink.Blink = Blink;
    v9->Blink = &a2->AdapterLink;
    Blink->Flink = &a2->AdapterLink;
    ++a1->NumSwitches;
  }
  else
  {
    SwitchId = a2->SwitchId;
    while ( HIDWORD(Flink[2].Flink) != SwitchId )
    {
      if ( HIDWORD(Flink[2].Flink) <= SwitchId )
      {
        Flink = Flink->Flink;
        if ( Flink != &a1->NicSwitchList )
          continue;
      }
      goto LABEL_6;
    }
    v4 = -1073741270;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v5);
  return v4;
}
