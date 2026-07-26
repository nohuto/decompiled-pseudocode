/*
 * XREFs of ?ndisIovCopyVPortInfo@@YAXPEAU_NDIS_NIC_SWITCH_VPORT_INFO@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00AFFA0
 * Callers:
 *     ndisOidPreIovEnumVPorts @ 0x1C00B3BF0 (ndisOidPreIovEnumVPorts.c)
 * Callees:
 *     memset @ 0x1C00416C0 (memset.c)
 */

void __fastcall ndisIovCopyVPortInfo(struct _NDIS_NIC_SWITCH_VPORT_INFO *a1, struct _NDIS_VPORT_BLOCK *a2)
{
  _OWORD *v4; // rcx
  __int64 v5; // rdx
  _IF_COUNTED_STRING_LH *p_VPortName; // rax
  __int128 v7; // xmm1

  memset((char *)a1 + 4, 0, 0x23CuLL);
  *(_DWORD *)a1 = 37749120;
  v4 = (_OWORD *)((char *)a1 + 16);
  *((_DWORD *)a1 + 1) = a2->VPortParams.VPortId;
  *((_DWORD *)a1 + 2) = a2->VPortParams.Flags & 3;
  v5 = 4LL;
  *((_DWORD *)a1 + 3) = a2->VPortParams.SwitchId;
  p_VPortName = &a2->VPortParams.VPortName;
  do
  {
    *v4 = *(_OWORD *)&p_VPortName->Length;
    v4[1] = *(_OWORD *)&p_VPortName->String[7];
    v4[2] = *(_OWORD *)&p_VPortName->String[15];
    v4[3] = *(_OWORD *)&p_VPortName->String[23];
    v4[4] = *(_OWORD *)&p_VPortName->String[31];
    v4[5] = *(_OWORD *)&p_VPortName->String[39];
    v4[6] = *(_OWORD *)&p_VPortName->String[47];
    v4 += 8;
    v7 = *(_OWORD *)&p_VPortName->String[55];
    p_VPortName = (_IF_COUNTED_STRING_LH *)((char *)p_VPortName + 128);
    *(v4 - 1) = v7;
    --v5;
  }
  while ( v5 );
  *(_DWORD *)v4 = *(_DWORD *)&p_VPortName->Length;
  *((_WORD *)a1 + 266) = a2->VPortParams.AttachedFunctionId;
  *((_DWORD *)a1 + 134) = a2->VPortParams.NumQueuePairs;
  *((_DWORD *)a1 + 135) = a2->VPortParams.InterruptModeration;
  *((_DWORD *)a1 + 136) = a2->VPortParams.VPortState;
  *(_GROUP_AFFINITY *)((char *)a1 + 552) = a2->VPortParams.ProcessorAffinity;
  *((_DWORD *)a1 + 142) = a2->VPortParams.LookaheadSize;
  *((_DWORD *)a1 + 143) = a2->NumFilters;
}
