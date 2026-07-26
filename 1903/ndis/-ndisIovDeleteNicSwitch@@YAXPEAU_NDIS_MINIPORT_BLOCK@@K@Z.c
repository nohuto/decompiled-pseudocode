/*
 * XREFs of ?ndisIovDeleteNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B030C
 * Callers:
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C00B1844 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C00B2420 (ndisOidPostIovDeleteNicSwitch.c)
 * Callees:
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B08E0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisIovDeleteNicSwitch(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  struct _NDIS_NIC_SWITCH_BLOCK *SwitchBySwitchId; // rbx
  KIRQL v4; // al
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rdx

  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(a1, a2);
  if ( SwitchBySwitchId )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    Flink = SwitchBySwitchId->AdapterLink.Flink;
    if ( (struct _NDIS_NIC_SWITCH_BLOCK *)SwitchBySwitchId->AdapterLink.Flink->Blink != SwitchBySwitchId
      || (Blink = SwitchBySwitchId->AdapterLink.Blink, (struct _NDIS_NIC_SWITCH_BLOCK *)Blink->Flink != SwitchBySwitchId) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    --a1->NumSwitches;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v4);
    ExFreePoolWithTag(SwitchBySwitchId, 0);
  }
}
