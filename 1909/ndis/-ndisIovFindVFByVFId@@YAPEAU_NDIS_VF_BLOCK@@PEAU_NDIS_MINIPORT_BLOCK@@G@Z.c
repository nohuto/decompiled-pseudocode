/*
 * XREFs of ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C00B0B48
 * Callers:
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00B00AC (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisOidPreIovBarResources @ 0x1C00B2D10 (ndisOidPreIovBarResources.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C00B3BF0 (ndisOidPreIovEnumVPorts.c)
 *     ndisOidPreIovFreeVF @ 0x1C00B4010 (ndisOidPreIovFreeVF.c)
 *     ndisOidPreIovGetVFVendorDeviceId @ 0x1C00B4180 (ndisOidPreIovGetVFVendorDeviceId.c)
 *     ndisOidPreIovReadVFConfigBlock @ 0x1C00B49A0 (ndisOidPreIovReadVFConfigBlock.c)
 *     ndisOidPreIovReadVFConfigSpace @ 0x1C00B4B10 (ndisOidPreIovReadVFConfigSpace.c)
 *     ndisOidPreIovResetVF @ 0x1C00B4C80 (ndisOidPreIovResetVF.c)
 *     ndisOidPreIovSetVFPowerState @ 0x1C00B4DC0 (ndisOidPreIovSetVFPowerState.c)
 *     ndisOidPreIovVFParameters @ 0x1C00B4F00 (ndisOidPreIovVFParameters.c)
 *     ndisOidPreIovWriteVFConfigBlock @ 0x1C00B5550 (ndisOidPreIovWriteVFConfigBlock.c)
 *     ndisOidPreIovWriteVFConfigSpace @ 0x1C00B56A0 (ndisOidPreIovWriteVFConfigSpace.c)
 *     ndisSriovInterfaceGetDeviceLocation @ 0x1C011AC00 (ndisSriovInterfaceGetDeviceLocation.c)
 * Callees:
 *     <none>
 */

struct _NDIS_VF_BLOCK *__fastcall ndisIovFindVFByVFId(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int16 a2)
{
  _LIST_ENTRY *p_VFList; // r9
  __int64 v3; // r8
  _LIST_ENTRY *i; // rax
  unsigned __int16 v5; // cx

  p_VFList = &a1->VFList;
  v3 = 0LL;
  for ( i = a1->VFList.Flink; i != p_VFList; i = i->Flink )
  {
    v5 = WORD1(i[107].Blink);
    if ( v5 == a2 )
      return (struct _NDIS_VF_BLOCK *)i;
    if ( v5 > a2 )
      return (struct _NDIS_VF_BLOCK *)v3;
  }
  return (struct _NDIS_VF_BLOCK *)v3;
}
