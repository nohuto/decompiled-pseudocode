/*
 * XREFs of ?ndisMSetHDSplitAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_HD_SPLIT_ATTRIBUTES@@@Z @ 0x1C00317F8
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C002F6B0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     NdisGetHypervisorInfo @ 0x1C0031B40 (NdisGetHypervisorInfo.c)
 */

__int64 __fastcall ndisMSetHDSplitAttributes(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_HD_SPLIT_ATTRIBUTES *a2)
{
  unsigned int v2; // esi
  struct _NDIS_HD_SPLIT_ATTRIBUTES *v3; // rbx
  _NDIS_HD_SPLIT_CURRENT_CONFIG *PoolWithTag; // rax
  char v7; // [rsp+30h] [rbp-28h]
  _NDIS_HYPERVISOR_INFO HypervisorInfo; // [rsp+40h] [rbp-18h] BYREF

  v2 = 0;
  v3 = a2;
  *(_QWORD *)&HypervisorInfo.Header.Revision = 0LL;
  *(_WORD *)((char *)&HypervisorInfo.PartitionType + 1) = 0;
  HIBYTE(HypervisorInfo.PartitionType) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      132,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      v7);
  }
  a1->PnPFlags &= ~0x40000000u;
  if ( v3 )
  {
    if ( v3->Header.Type == 0xAB && v3->Header.Revision && v3->Header.Size >= 0x18u )
    {
      PoolWithTag = (_NDIS_HD_SPLIT_CURRENT_CONFIG *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1CuLL, 0x666F444Eu);
      a1->HDSplitCurrentConfig = PoolWithTag;
      if ( PoolWithTag )
      {
        HypervisorInfo.Header = (NDIS_OBJECT_HEADER)786816;
        *(_QWORD *)&PoolWithTag->Header.Type = 0LL;
        *(_QWORD *)&PoolWithTag->CurrentCapabilities = 0LL;
        *(_QWORD *)&PoolWithTag->HDSplitCombineFlags = 0LL;
        PoolWithTag->MaxHeaderSize = 0;
        v2 = NdisGetHypervisorInfo(&HypervisorInfo);
        if ( !v2 )
        {
          if ( ((HypervisorInfo.Flags & 1) == 0 || HypervisorInfo.PartitionType != NdisHypervisorPartitionTypeMsHvParent)
            && (v3->CurrentCapabilities & 1) != 0 )
          {
            v3->HDSplitFlags = 1;
            v3->BackfillSize = 128;
            v3->MaxHeaderSize = 128;
            a1->PnPFlags |= 0x40000000u;
          }
          a1->HDSplitCurrentConfig->Header.Type = 0x80;
          a1->HDSplitCurrentConfig->Header.Revision = 1;
          a1->HDSplitCurrentConfig->Header.Size = 28;
          a1->HDSplitCurrentConfig->HardwareCapabilities = v3->HardwareCapabilities;
          a1->HDSplitCurrentConfig->CurrentCapabilities = v3->CurrentCapabilities;
          a1->HDSplitCurrentConfig->HDSplitFlags = v3->HDSplitFlags;
          a1->HDSplitCurrentConfig->HDSplitCombineFlags = 0;
          a1->HDSplitCurrentConfig->BackfillSize = v3->BackfillSize;
          a1->HDSplitCurrentConfig->MaxHeaderSize = v3->MaxHeaderSize;
        }
      }
      else
      {
        v2 = -1073741670;
      }
    }
    else
    {
      v2 = -1073741811;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      133,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      (char)v3,
      v2);
  }
  return v2;
}
