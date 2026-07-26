/*
 * XREFs of ?ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0031700
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017A6C (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisMSetOffloadAttributes @ 0x1C00312E0 (ndisMSetOffloadAttributes.c)
 *     ndisGetMiniportOffloadCapability @ 0x1C00AB118 (ndisGetMiniportOffloadCapability.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisMAllocateMiniportOffload(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // ebx
  _NDIS_MINIPORT_OFFLOAD *PoolWithTag; // rax

  v2 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      12,
      (struct _GUID *)&WPP_0f86ec8ab8323576aba22cac554c0387_Traceguids,
      (char)a1);
  PoolWithTag = (_NDIS_MINIPORT_OFFLOAD *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x538uLL, 0x666F444Eu);
  a1->Offload = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(_NDIS_MINIPORT_OFFLOAD));
    v2 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      13,
      (struct _GUID *)&WPP_0f86ec8ab8323576aba22cac554c0387_Traceguids,
      (char)a1->Offload);
  return v2;
}
