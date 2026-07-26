/*
 * XREFs of ndisIovGetNicSwitchList @ 0x1C001E4F8
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0104790 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0032B4C (ndisIovNicSwitchWithoutIovSupported.c)
 *     ?ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@@Z @ 0x1C00AFCB4 (-ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIovGetNicSwitchList(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rsi
  unsigned int v4; // edi
  KIRQL v5; // r13
  __int64 v6; // rax
  int v7; // edx
  _BYTE *PoolWithTag; // rax
  __int64 v10; // rax
  struct _NDIS_NIC_SWITCH_BLOCK *Flink; // rsi
  struct _NDIS_NIC_SWITCH_INFO *v12; // rbp
  unsigned int i; // r14d

  v2 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      26,
      85,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1);
  }
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *v2 = 0LL;
  if ( (unsigned __int8)ndisIovNicSwitchWithoutIovSupported(a1)
    || (v6 = *(_QWORD *)(a1 + 4608)) != 0 && *(_QWORD *)(a1 + 3568) && (*(_BYTE *)(v6 + 8) & 3) == 3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(572 * *(_DWORD *)(a1 + 4688) + 16), 0x6F69444Eu);
    *v2 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0x80;
      *(_BYTE *)(*v2 + 1) = 1;
      *(_WORD *)(*v2 + 2) = 16;
      *(_DWORD *)(*v2 + 4) = 16;
      *(_DWORD *)(*v2 + 8) = *(_DWORD *)(a1 + 4688);
      *(_DWORD *)(*v2 + 12) = 572;
      v10 = *v2;
      Flink = *(struct _NDIS_NIC_SWITCH_BLOCK **)(a1 + 4696);
      v12 = (struct _NDIS_NIC_SWITCH_INFO *)(v10 + *(unsigned int *)(v10 + 4));
      for ( i = 0; Flink != (struct _NDIS_NIC_SWITCH_BLOCK *)(a1 + 4696) && i < *(_DWORD *)(a1 + 4688); ++i )
      {
        ndisIovCopyNicSwitchInfo(v12, Flink);
        Flink = (struct _NDIS_NIC_SWITCH_BLOCK *)Flink->AdapterLink.Flink;
        v12 = (struct _NDIS_NIC_SWITCH_INFO *)((char *)v12 + 572);
      }
    }
    else
    {
      v4 = -1073741670;
    }
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      26,
      86,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1,
      v4);
  }
  return v4;
}
