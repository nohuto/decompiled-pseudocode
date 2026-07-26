/*
 * XREFs of ?ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C0022720
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C002F6B0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     ndisIovInitVf @ 0x1C00B1A78 (ndisIovInitVf.c)
 */

__int64 __fastcall ndisMSetSriovAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *a2)
{
  struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *v2; // rbp
  unsigned int LocallyUniqueId; // ebx
  _NDIS_SRIOV_CAPABILITIES *HardwareSriovCapabilities; // rax
  size_t v6; // rsi
  _NDIS_SRIOV_CAPABILITIES *CurrentSriovCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchHwCapabilities; // rax
  _NDIS_SRIOV_CAPABILITIES *PoolWithTag; // rax
  _NDIS_SRIOV_CAPABILITIES *v10; // rdx
  USHORT Size; // ax
  size_t v12; // r8
  _NDIS_SRIOV_CAPABILITIES *v13; // rax
  _NDIS_SRIOV_CAPABILITIES *v14; // rax
  _NDIS_SRIOV_CAPABILITIES *v15; // rdx
  USHORT v16; // ax
  _NDIS_SRIOV_CAPABILITIES *v17; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovHwCapabilities; // rcx
  char v22; // [rsp+30h] [rbp-18h]

  v2 = a2;
  LocallyUniqueId = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      140,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      v22);
  }
  HardwareSriovCapabilities = v2->HardwareSriovCapabilities;
  if ( !HardwareSriovCapabilities->Header.Revision || (v6 = 12LL, HardwareSriovCapabilities->Header.Size < 0xCu) )
  {
    LocallyUniqueId = -1073741811;
LABEL_36:
    if ( (int)(LocallyUniqueId + 0x80000000) < 0 || LocallyUniqueId == -1073676283 )
      goto LABEL_22;
    goto LABEL_38;
  }
  CurrentSriovCapabilities = v2->CurrentSriovCapabilities;
  if ( !CurrentSriovCapabilities->Header.Revision
    || CurrentSriovCapabilities->Header.Size < 0xCu
    || (HardwareSriovCapabilities->SriovCapabilities & 3) == 3
    && ((NicSwitchHwCapabilities = a1->NicSwitchHwCapabilities) == 0LL || NicSwitchHwCapabilities->Header.Revision < 2u)
    || (CurrentSriovCapabilities->SriovCapabilities & 3) == 3
    && ((NicSwitchCurrentCapabilities = a1->NicSwitchCurrentCapabilities) == 0LL
     || NicSwitchCurrentCapabilities->Header.Revision < 2u) )
  {
    LocallyUniqueId = -1073741811;
LABEL_38:
    SriovCurrentCapabilities = a1->SriovCurrentCapabilities;
    if ( SriovCurrentCapabilities )
    {
      ExFreePoolWithTag(SriovCurrentCapabilities, 0);
      a1->SriovCurrentCapabilities = 0LL;
    }
    SriovHwCapabilities = a1->SriovHwCapabilities;
    if ( SriovHwCapabilities )
    {
      ExFreePoolWithTag(SriovHwCapabilities, 0);
      a1->SriovHwCapabilities = 0LL;
    }
    goto LABEL_22;
  }
  if ( a1->SriovCurrentCapabilities || a1->SriovHwCapabilities )
  {
    LocallyUniqueId = -1073676283;
    goto LABEL_22;
  }
  PoolWithTag = (_NDIS_SRIOV_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xCuLL, 0x6F69444Eu);
  a1->SriovHwCapabilities = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_29:
    LocallyUniqueId = -1073741670;
    goto LABEL_38;
  }
  *(_QWORD *)&PoolWithTag->Header.Type = 0LL;
  PoolWithTag->SriovCapabilities = 0;
  v10 = v2->HardwareSriovCapabilities;
  Size = v10->Header.Size;
  v12 = Size;
  if ( Size >= 0xCu )
    v12 = 12LL;
  memmove(a1->SriovHwCapabilities, v10, v12);
  v13 = v2->CurrentSriovCapabilities;
  LODWORD(a2) = v13->SriovCapabilities & 3;
  if ( (v13->SriovCapabilities & 3) != 3 || ndisSystemSupportsSriov )
  {
    v14 = (_NDIS_SRIOV_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xCuLL, 0x6F69444Eu);
    a1->SriovCurrentCapabilities = v14;
    if ( v14 )
    {
      *(_QWORD *)&v14->Header.Type = 0LL;
      v14->SriovCapabilities = 0;
      v15 = v2->CurrentSriovCapabilities;
      v16 = v15->Header.Size;
      if ( v16 < 0xCu )
        v6 = v16;
      memmove(a1->SriovCurrentCapabilities, v15, v6);
      LocallyUniqueId = ZwAllocateLocallyUniqueId(&a1->SriovLuid);
      if ( !LocallyUniqueId )
      {
        v17 = v2->CurrentSriovCapabilities;
        LODWORD(a2) = v17->SriovCapabilities & 5;
        if ( (v17->SriovCapabilities & 5) != 5 )
          goto LABEL_22;
        LocallyUniqueId = ndisIovInitVf(a1);
        if ( !LocallyUniqueId )
          goto LABEL_22;
      }
      goto LABEL_36;
    }
    goto LABEL_29;
  }
LABEL_22:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      141,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      (char)v2,
      LocallyUniqueId);
  }
  return LocallyUniqueId;
}
