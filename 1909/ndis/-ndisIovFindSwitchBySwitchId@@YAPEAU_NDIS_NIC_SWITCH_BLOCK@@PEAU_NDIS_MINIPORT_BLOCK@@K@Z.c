/*
 * XREFs of ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B0AB0
 * Callers:
 *     ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00AF9F8 (-ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00B00AC (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovDeleteNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B04DC (-ndisIovDeleteNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B0584 (-ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C00B1A14 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C00B2750 (ndisOidPostIovNicSwitchParameters.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00B3320 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovEnumVFs @ 0x1C00B38B0 (ndisOidPreIovEnumVFs.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C00B3BF0 (ndisOidPreIovEnumVPorts.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00B43C0 (ndisOidPreIovNicSwitchParameters.c)
 * Callees:
 *     <none>
 */

struct _NDIS_NIC_SWITCH_BLOCK *__fastcall ndisIovFindSwitchBySwitchId(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  _LIST_ENTRY *v3; // rbx
  KIRQL v5; // r8
  _LIST_ENTRY *i; // rax

  v3 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  for ( i = a1->NicSwitchList.Flink; i != &a1->NicSwitchList; i = i->Flink )
  {
    if ( HIDWORD(i[2].Flink) == a2 )
    {
      v3 = i;
      break;
    }
    if ( HIDWORD(i[2].Flink) > a2 )
      break;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v5);
  return (struct _NDIS_NIC_SWITCH_BLOCK *)v3;
}
