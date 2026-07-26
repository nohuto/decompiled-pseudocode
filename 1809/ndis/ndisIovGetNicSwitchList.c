/*
 * XREFs of ndisIovGetNicSwitchList @ 0x1C0014154
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BED24 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0016F10 (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisIovCopyNicSwitchInfo @ 0x1C006F444 (ndisIovCopyNicSwitchInfo.c)
 */

__int64 __fastcall ndisIovGetNicSwitchList(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  KIRQL v5; // r13
  __int64 v6; // rax
  _BYTE *PoolWithTag; // rax
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rbp
  unsigned int i; // r14d

  v4 = 0;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_q(85LL, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, a1);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1864) = 2890613;
  *a2 = 0LL;
  if ( (unsigned __int8)ndisIovNicSwitchWithoutIovSupported(a1)
    || (v6 = *(_QWORD *)(a1 + 4648)) != 0 && *(_QWORD *)(a1 + 3592) && (*(_BYTE *)(v6 + 8) & 3) == 3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(572 * *(_DWORD *)(a1 + 4728) + 16), 0x6F69444Eu);
    *a2 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0x80;
      *(_BYTE *)(*a2 + 1) = 1;
      *(_WORD *)(*a2 + 2) = 16;
      *(_DWORD *)(*a2 + 4) = 16;
      *(_DWORD *)(*a2 + 8) = *(_DWORD *)(a1 + 4728);
      *(_DWORD *)(*a2 + 12) = 572;
      v9 = *a2;
      v10 = *(_QWORD **)(a1 + 4736);
      v11 = v9 + *(unsigned int *)(v9 + 4);
      for ( i = 0; v10 != (_QWORD *)(a1 + 4736) && i < *(_DWORD *)(a1 + 4728); ++i )
      {
        ndisIovCopyNicSwitchInfo(v11, v10);
        v10 = (_QWORD *)*v10;
        v11 += 572LL;
      }
    }
    else
    {
      v4 = -1073741670;
    }
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qD(86LL, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, a1, v4);
  return v4;
}
