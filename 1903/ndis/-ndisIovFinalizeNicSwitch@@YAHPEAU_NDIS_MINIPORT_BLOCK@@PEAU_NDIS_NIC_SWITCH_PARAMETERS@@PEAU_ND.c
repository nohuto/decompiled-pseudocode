/*
 * XREFs of ?ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00B0760
 * Callers:
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00329D4 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisOidPostIovCreateNicSwitch @ 0x1C00B2030 (ndisOidPostIovCreateNicSwitch.c)
 * Callees:
 *     ?ndisIovAddSwitchToList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_BLOCK@@@Z @ 0x1C00AF6C0 (-ndisIovAddSwitchToList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIovFinalizeNicSwitch(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_NIC_SWITCH_PARAMETERS *a2,
        struct _NDIS_NIC_SWITCH_BLOCK *a3,
        struct _NDIS_PF_BLOCK *a4,
        struct _NDIS_VPORT_BLOCK *a5)
{
  __int64 v5; // rax
  _NDIS_NIC_SWITCH_PARAMETERS *p_SwitchParameters; // r10
  __int128 v10; // xmm1
  __int64 result; // rax
  _LIST_ENTRY *p_VPortList; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *p_SwitchLink; // rcx
  _LIST_ENTRY *p_AttachedVPortList; // rax
  _LIST_ENTRY *p_FunctionLink; // rcx
  _LIST_ENTRY *v17; // rdx
  KIRQL v18; // al
  _LIST_ENTRY *v19; // rdx
  _LIST_ENTRY *v20; // r8

  v5 = 4LL;
  p_SwitchParameters = &a3->SwitchParameters;
  do
  {
    *(_OWORD *)&p_SwitchParameters->Header.Type = *(_OWORD *)&a2->Header.Type;
    *(_OWORD *)&p_SwitchParameters->SwitchFriendlyName.Length = *(_OWORD *)&a2->SwitchFriendlyName.Length;
    *(_OWORD *)&p_SwitchParameters->SwitchFriendlyName.String[7] = *(_OWORD *)&a2->SwitchFriendlyName.String[7];
    *(_OWORD *)&p_SwitchParameters->SwitchFriendlyName.String[15] = *(_OWORD *)&a2->SwitchFriendlyName.String[15];
    *(_OWORD *)&p_SwitchParameters->SwitchFriendlyName.String[23] = *(_OWORD *)&a2->SwitchFriendlyName.String[23];
    *(_OWORD *)&p_SwitchParameters->SwitchFriendlyName.String[31] = *(_OWORD *)&a2->SwitchFriendlyName.String[31];
    *(_OWORD *)&p_SwitchParameters->SwitchFriendlyName.String[39] = *(_OWORD *)&a2->SwitchFriendlyName.String[39];
    p_SwitchParameters = (_NDIS_NIC_SWITCH_PARAMETERS *)((char *)p_SwitchParameters + 128);
    v10 = *(_OWORD *)&a2->SwitchFriendlyName.String[47];
    a2 = (struct _NDIS_NIC_SWITCH_PARAMETERS *)((char *)a2 + 128);
    *(_OWORD *)&p_SwitchParameters[-1].NdisReserved1 = v10;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)&p_SwitchParameters->Header.Type = *(_OWORD *)&a2->Header.Type;
  *(_OWORD *)&p_SwitchParameters->SwitchFriendlyName.Length = *(_OWORD *)&a2->SwitchFriendlyName.Length;
  *(_QWORD *)&p_SwitchParameters->SwitchFriendlyName.String[7] = *(_QWORD *)&a2->SwitchFriendlyName.String[7];
  result = ndisIovAddSwitchToList(a1, a3);
  if ( !(_DWORD)result )
  {
    p_VPortList = &a3->VPortList;
    Flink = a3->VPortList.Flink;
    p_SwitchLink = &a5->SwitchLink;
    if ( Flink->Blink != &a3->VPortList )
      goto LABEL_9;
    a5->SwitchLink.Blink = p_VPortList;
    p_SwitchLink->Flink = Flink;
    Flink->Blink = p_SwitchLink;
    p_VPortList->Flink = p_SwitchLink;
    p_AttachedVPortList = &a4->AttachedVPortList;
    ++a3->NumActiveVPorts;
    p_FunctionLink = &a5->FunctionLink;
    v17 = a4->AttachedVPortList.Flink;
    if ( v17->Blink != &a4->AttachedVPortList )
      goto LABEL_9;
    p_FunctionLink->Flink = v17;
    a5->FunctionLink.Blink = p_AttachedVPortList;
    v17->Blink = p_FunctionLink;
    p_AttachedVPortList->Flink = p_FunctionLink;
    ++a4->NumAttachedVPorts;
    a1->PFBlock = a4;
    v18 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    v19 = &a1->VPortList;
    a1->MiniportThread = KeGetCurrentThread();
    v20 = a1->VPortList.Flink;
    if ( v20->Blink != &a1->VPortList )
LABEL_9:
      __fastfail(3u);
    a5->AdapterLink.Blink = v19;
    a5->AdapterLink.Flink = v20;
    v20->Blink = &a5->AdapterLink;
    v19->Flink = &a5->AdapterLink;
    ++a1->NumActiveVPorts;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v18);
    return 0LL;
  }
  return result;
}
