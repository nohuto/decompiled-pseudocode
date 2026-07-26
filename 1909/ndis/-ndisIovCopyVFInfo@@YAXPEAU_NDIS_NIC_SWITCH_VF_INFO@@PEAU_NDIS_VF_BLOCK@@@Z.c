/*
 * XREFs of ?ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z @ 0x1C00AFDDC
 * Callers:
 *     ndisOidPreIovEnumVFs @ 0x1C00B38B0 (ndisOidPreIovEnumVFs.c)
 * Callees:
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

void __fastcall ndisIovCopyVFInfo(struct _NDIS_NIC_SWITCH_VF_INFO *a1, struct _NDIS_VF_BLOCK *a2)
{
  _OWORD *v4; // rcx
  _IF_COUNTED_STRING_LH *p_VMFriendlyName; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int128 v8; // xmm1
  __int64 v9; // r8
  _OWORD *v10; // rcx
  _IF_COUNTED_STRING_LH *p_VMName; // rax
  __int128 v12; // xmm1
  _OWORD *v13; // rcx
  _IF_COUNTED_STRING_LH *p_NicName; // rax
  __int128 v15; // xmm1

  memset((char *)a1 + 4, 0, 0x65CuLL);
  *(_DWORD *)a1 = 106955136;
  v4 = (_OWORD *)((char *)a1 + 528);
  *((_DWORD *)a1 + 1) = a2->VFParameters.Flags;
  p_VMFriendlyName = &a2->VFParameters.VMFriendlyName;
  *((_DWORD *)a1 + 2) = a2->NicSwitch->SwitchId;
  v6 = 4LL;
  v7 = 4LL;
  do
  {
    *v4 = *(_OWORD *)&p_VMFriendlyName->Length;
    v4[1] = *(_OWORD *)&p_VMFriendlyName->String[7];
    v4[2] = *(_OWORD *)&p_VMFriendlyName->String[15];
    v4[3] = *(_OWORD *)&p_VMFriendlyName->String[23];
    v4[4] = *(_OWORD *)&p_VMFriendlyName->String[31];
    v4[5] = *(_OWORD *)&p_VMFriendlyName->String[39];
    v4[6] = *(_OWORD *)&p_VMFriendlyName->String[47];
    v4 += 8;
    v8 = *(_OWORD *)&p_VMFriendlyName->String[55];
    p_VMFriendlyName = (_IF_COUNTED_STRING_LH *)((char *)p_VMFriendlyName + 128);
    *(v4 - 1) = v8;
    --v7;
  }
  while ( v7 );
  v9 = 4LL;
  *(_DWORD *)v4 = *(_DWORD *)&p_VMFriendlyName->Length;
  v10 = (_OWORD *)((char *)a1 + 12);
  p_VMName = &a2->VFParameters.VMName;
  do
  {
    *v10 = *(_OWORD *)&p_VMName->Length;
    v10[1] = *(_OWORD *)&p_VMName->String[7];
    v10[2] = *(_OWORD *)&p_VMName->String[15];
    v10[3] = *(_OWORD *)&p_VMName->String[23];
    v10[4] = *(_OWORD *)&p_VMName->String[31];
    v10[5] = *(_OWORD *)&p_VMName->String[39];
    v10[6] = *(_OWORD *)&p_VMName->String[47];
    v10 += 8;
    v12 = *(_OWORD *)&p_VMName->String[55];
    p_VMName = (_IF_COUNTED_STRING_LH *)((char *)p_VMName + 128);
    *(v10 - 1) = v12;
    --v9;
  }
  while ( v9 );
  *(_DWORD *)v10 = *(_DWORD *)&p_VMName->Length;
  v13 = (_OWORD *)((char *)a1 + 1044);
  p_NicName = &a2->VFParameters.NicName;
  do
  {
    *v13 = *(_OWORD *)&p_NicName->Length;
    v13[1] = *(_OWORD *)&p_NicName->String[7];
    v13[2] = *(_OWORD *)&p_NicName->String[15];
    v13[3] = *(_OWORD *)&p_NicName->String[23];
    v13[4] = *(_OWORD *)&p_NicName->String[31];
    v13[5] = *(_OWORD *)&p_NicName->String[39];
    v13[6] = *(_OWORD *)&p_NicName->String[47];
    v13 += 8;
    v15 = *(_OWORD *)&p_NicName->String[55];
    p_NicName = (_IF_COUNTED_STRING_LH *)((char *)p_NicName + 128);
    *(v13 - 1) = v15;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)v13 = *(_DWORD *)&p_NicName->Length;
  *((_WORD *)a1 + 780) = a2->VFParameters.MacAddressLength;
  memmove((char *)a1 + 1562, a2->VFParameters.PermanentMacAddress, a2->VFParameters.MacAddressLength);
  memmove((char *)a1 + 1594, a2->VFParameters.CurrentMacAddress, a2->VFParameters.MacAddressLength);
  *((_WORD *)a1 + 813) = a2->VFParameters.VFId;
  *((_DWORD *)a1 + 407) = a2->VFParameters.RequestorId;
}
