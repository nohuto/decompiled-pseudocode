/*
 * XREFs of ?ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B03B4
 * Callers:
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C00B1844 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C00B2420 (ndisOidPostIovDeleteNicSwitch.c)
 * Callees:
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B08E0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisIovFindVPortByVPortIdInternal @ 0x1C00B1A48 (ndisIovFindVPortByVPortIdInternal.c)
 */

void __fastcall ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  struct _NDIS_NIC_SWITCH_BLOCK *SwitchBySwitchId; // rax
  struct _NDIS_NIC_SWITCH_BLOCK *v4; // rsi
  _NDIS_PF_BLOCK *PFBlock; // rbp
  _QWORD *VPortByVPortIdInternal; // rax
  KIRQL v7; // r10
  _QWORD *v8; // rbx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rdx

  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(a1, a2);
  v4 = SwitchBySwitchId;
  if ( SwitchBySwitchId )
  {
    PFBlock = SwitchBySwitchId->PFBlock;
    KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    VPortByVPortIdInternal = (_QWORD *)ndisIovFindVPortByVPortIdInternal(a1, 0LL);
    v8 = VPortByVPortIdInternal;
    v9 = *VPortByVPortIdInternal;
    if ( *(_QWORD **)(*VPortByVPortIdInternal + 8LL) != VPortByVPortIdInternal )
      goto LABEL_10;
    v10 = (_QWORD *)VPortByVPortIdInternal[1];
    if ( (_QWORD *)*v10 != VPortByVPortIdInternal )
      goto LABEL_10;
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    --a1->NumActiveVPorts;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v7);
    a1->PFBlock = 0LL;
    v11 = v8[4];
    if ( *(_QWORD **)(v11 + 8) != v8 + 4
      || (v12 = (_QWORD *)v8[5], (_QWORD *)*v12 != v8 + 4)
      || (*v12 = v11, *(_QWORD *)(v11 + 8) = v12, --v4->NumActiveVPorts, v13 = v8[6], *(_QWORD **)(v13 + 8) != v8 + 6)
      || (v14 = (_QWORD *)v8[7], (_QWORD *)*v14 != v8 + 6) )
    {
LABEL_10:
      __fastfail(3u);
    }
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    --PFBlock->NumAttachedVPorts;
    ExFreePoolWithTag(v8, 0);
    ExFreePoolWithTag(PFBlock, 0);
  }
}
