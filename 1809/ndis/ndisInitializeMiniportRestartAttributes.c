/*
 * XREFs of ndisInitializeMiniportRestartAttributes @ 0x1C00BE6A8
 * Callers:
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00BE800 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00C34A0 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00CF8F8 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 */

__int64 __fastcall ndisInitializeMiniportRestartAttributes(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  int v6; // edx
  unsigned int v7; // eax
  PVOID PoolWithTag; // rax
  __int64 result; // rax

  *(_DWORD *)(a2 + 8) = 66077;
  *(_DWORD *)(a2 + 16) = 5767586;
  v4 = 0;
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 12) = 88;
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(*(_QWORD *)(a1 + 4072) + 1120LL);
  v5 = a2 + 112;
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 2288);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 2296);
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 596);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 568);
  v6 = *(_DWORD *)(a1 + 2304);
  *(_DWORD *)(a2 + 48) = v6;
  *(_DWORD *)(a2 + 52) = *(_DWORD *)(a1 + 584);
  *(_QWORD *)(a2 + 56) = v5;
  *(_OWORD *)v5 = *(_OWORD *)(a1 + 2708);
  *(_DWORD *)(v5 + 16) = *(_DWORD *)(a1 + 2724);
  if ( (*(_BYTE *)(a1 + 4992) & 1) != 0 )
    *(_DWORD *)(a2 + 48) = v6 | 0x20;
  *(_DWORD *)(a2 + 64) = *(_DWORD *)(*(_QWORD *)(a1 + 4072) + 528LL);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(*(_QWORD *)(a1 + 4072) + 536LL);
  *(_DWORD *)(a2 + 76) = *(_DWORD *)(a1 + 2704);
  *(_DWORD *)(a2 + 80) = *(_DWORD *)(a1 + 3024);
  *(_DWORD *)(a2 + 84) = *(_DWORD *)(a1 + 3028);
  v7 = *(_DWORD *)(a1 + 200);
  if ( v7 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x6D61444Eu);
    *(_QWORD *)(a2 + 88) = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(a1 + 496), *(unsigned int *)(a1 + 200));
      *(_DWORD *)(a2 + 96) = *(_DWORD *)(a1 + 200);
    }
    else
    {
      v4 = -1073741670;
    }
  }
  *(_DWORD *)(a2 + 136) = 3670435;
  result = v4;
  *(_QWORD *)(a2 + 160) = a2;
  return result;
}
