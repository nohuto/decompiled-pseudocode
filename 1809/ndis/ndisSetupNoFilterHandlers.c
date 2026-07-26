/*
 * XREFs of ndisSetupNoFilterHandlers @ 0x1C0024B54
 * Callers:
 *     ndisSetupLwfMiniportHandlers @ 0x1C001B3F8 (ndisSetupLwfMiniportHandlers.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetupNoFilterHandlers(__int64 a1)
{
  bool v2; // zf
  unsigned __int8 v3; // dl
  __int64 v4; // rcx
  void (__stdcall *v5)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // r8
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 result; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(61LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
  v2 = (*(_DWORD *)(a1 + 120) & 0x20000000) == 0;
  v3 = *(_BYTE *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 2480);
  *(_QWORD *)(a1 + 2040) = *(_QWORD *)(a1 + 2048);
  *(_QWORD *)(a1 + 2624) = *(_QWORD *)(a1 + 2440);
  *(_QWORD *)(a1 + 2504) = *(_QWORD *)(a1 + 2320);
  *(_QWORD *)(a1 + 2576) = *(_QWORD *)(a1 + 2392);
  if ( v2 )
  {
    v5 = ndisFakeMiniportCancelSendPackets;
    v6 = (v3 < 6u) + 1;
  }
  else
  {
    *(_QWORD *)(a1 + 656) = v4;
    v5 = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisOpenCancelSendNetBufferLists;
    v6 = (v3 < 6u) + 1;
    *(_DWORD *)(a1 + 2684) = v6;
  }
  *(_DWORD *)(a1 + 2688) = v6;
  *(_QWORD *)(a1 + 680) = v4;
  *(_QWORD *)(a1 + 184) = v5;
  v7 = *(_QWORD *)(a1 + 2456);
  v8 = *(_QWORD *)(a1 + 2328);
  *(_QWORD *)(a1 + 2656) = *(_QWORD *)(a1 + 2472);
  *(_QWORD *)(a1 + 2544) = *(_QWORD *)(a1 + 2360);
  *(_QWORD *)(a1 + 2552) = *(_QWORD *)(a1 + 2368);
  *(_QWORD *)(a1 + 2560) = *(_QWORD *)(a1 + 2376);
  *(_QWORD *)(a1 + 2632) = *(_QWORD *)(a1 + 2448);
  *(_QWORD *)(a1 + 2592) = *(_QWORD *)(a1 + 2408);
  *(_QWORD *)(a1 + 2600) = *(_QWORD *)(a1 + 2416);
  *(_QWORD *)(a1 + 2608) = *(_QWORD *)(a1 + 2424);
  *(_QWORD *)(a1 + 2520) = *(_QWORD *)(a1 + 2336);
  result = *(_QWORD *)(a1 + 2344);
  *(_QWORD *)(a1 + 2528) = result;
  *(_QWORD *)(a1 + 2616) = a1;
  *(_QWORD *)(a1 + 2672) = a1;
  *(_QWORD *)(a1 + 2640) = v7;
  *(_QWORD *)(a1 + 2512) = v8;
  *(_QWORD *)(a1 + 2648) = v7;
  *(_QWORD *)(a1 + 2536) = v8;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    return WPP_SF_q(62LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
  return result;
}
