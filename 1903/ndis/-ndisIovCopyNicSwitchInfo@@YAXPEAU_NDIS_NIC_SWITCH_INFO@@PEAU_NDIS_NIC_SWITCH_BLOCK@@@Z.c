/*
 * XREFs of ?ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@@Z @ 0x1C00AFAE4
 * Callers:
 *     ndisIovGetNicSwitchList @ 0x1C001E4F8 (ndisIovGetNicSwitchList.c)
 *     ndisOidPreIovEnumNicSwitches @ 0x1C00B34B0 (ndisOidPreIovEnumNicSwitches.c)
 * Callees:
 *     memset @ 0x1C0041440 (memset.c)
 */

void __fastcall ndisIovCopyNicSwitchInfo(struct _NDIS_NIC_SWITCH_INFO *a1, struct _NDIS_NIC_SWITCH_BLOCK *a2)
{
  _OWORD *v4; // rcx
  _IF_COUNTED_STRING_LH *p_SwitchFriendlyName; // rax
  __int64 v6; // rdx
  __int128 v7; // xmm1
  unsigned int NumQueuePairsForDefaultVPort; // edx

  memset((char *)a1 + 4, 0, 0x238uLL);
  *(_DWORD *)a1 = 37486976;
  v4 = (_OWORD *)((char *)a1 + 16);
  *((_DWORD *)a1 + 2) = a2->SwitchParameters.SwitchType;
  *((_DWORD *)a1 + 3) = a2->SwitchId;
  p_SwitchFriendlyName = &a2->SwitchParameters.SwitchFriendlyName;
  v6 = 4LL;
  do
  {
    *v4 = *(_OWORD *)&p_SwitchFriendlyName->Length;
    v4[1] = *(_OWORD *)&p_SwitchFriendlyName->String[7];
    v4[2] = *(_OWORD *)&p_SwitchFriendlyName->String[15];
    v4[3] = *(_OWORD *)&p_SwitchFriendlyName->String[23];
    v4[4] = *(_OWORD *)&p_SwitchFriendlyName->String[31];
    v4[5] = *(_OWORD *)&p_SwitchFriendlyName->String[39];
    v4[6] = *(_OWORD *)&p_SwitchFriendlyName->String[47];
    v4 += 8;
    v7 = *(_OWORD *)&p_SwitchFriendlyName->String[55];
    p_SwitchFriendlyName = (_IF_COUNTED_STRING_LH *)((char *)p_SwitchFriendlyName + 128);
    *(v4 - 1) = v7;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)v4 = *(_DWORD *)&p_SwitchFriendlyName->Length;
  *((_DWORD *)a1 + 133) = a2->SwitchParameters.NumVFs;
  *((_DWORD *)a1 + 134) = a2->NumAllocatedVFs;
  *((_DWORD *)a1 + 135) = a2->Miniport->NicSwitchCurrentCapabilities->MaxNumVPorts;
  *((_DWORD *)a1 + 136) = a2->NumActiveVPorts;
  NumQueuePairsForDefaultVPort = a2->SwitchParameters.NumQueuePairsForDefaultVPort;
  *((_DWORD *)a1 + 137) = NumQueuePairsForDefaultVPort;
  *((_DWORD *)a1 + 138) = a2->Miniport->NicSwitchCurrentCapabilities->MaxNumQueuePairs - NumQueuePairsForDefaultVPort;
  *((_DWORD *)a1 + 139) = a2->NumActiveDefaultVPortMacAddresses;
  *((_DWORD *)a1 + 140) = a2->NumActiveNonDefaultVPortMacAddresses;
  *((_DWORD *)a1 + 141) = a2->NumActiveDefaultVPortVlanIds;
  *((_DWORD *)a1 + 142) = a2->NumActiveNonDefaultVPortVlanIds;
}
