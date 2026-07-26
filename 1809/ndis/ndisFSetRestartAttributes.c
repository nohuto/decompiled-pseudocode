/*
 * XREFs of ndisFSetRestartAttributes @ 0x1C00BD8B0
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C00BD790 (NdisSetOptionalHandlers.c)
 * Callees:
 *     ndisAllocOrFreeIterativeDataPathTrackerIfNeeded @ 0x1C0016224 (ndisAllocOrFreeIterativeDataPathTrackerIfNeeded.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memcmp @ 0x1C0026D30 (memcmp.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BD9F0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01074D8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisFSetRestartAttributes(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 v6; // rbx
  _QWORD v7[20]; // [rsp+20h] [rbp-C8h] BYREF

  v4 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x21u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 1) == 1 )
    {
      if ( *(_WORD *)(a2 + 2) < 0x30u )
      {
        v4 = -1073676283;
      }
      else if ( *(_QWORD *)(a2 + 8) || !*(_QWORD *)(a2 + 24) )
      {
        v4 = ndisAllocOrFreeIterativeDataPathTrackerIfNeeded((struct _NDIS_FILTER_BLOCK *)a1, (_QWORD *)a2, 1);
        if ( !v4 )
        {
          if ( memcmp((const void *)(a1 + 584), (const void *)a2, 0x30uLL) )
          {
            v6 = *(_QWORD *)(a1 + 32);
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v6 + 5168, 0LL);
            if ( Ndis::BindState::SetPause(
                   (Ndis::BindState *)(*(_QWORD *)(a1 + 32) + 5072LL),
                   DatapathPaused,
                   PauseReason_RestartNeeded)
              && (unsigned __int8)byte_1C00A026B >= 4u )
            {
              ndisGetBindLinkNameForTracing(
                *(struct NDIS_BIND_FILTER_LINK **)(a1 + 768),
                (struct NDIS_PNPTRACE_LOCALS *)v7);
              if ( (unsigned __int8)byte_1C00A026B >= 4u )
                WPP_SF_Zq(0x22u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, (const wchar_t *)v7[1], v7[0]);
            }
            Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(a1 + 32) + 5144LL));
          }
          *(_OWORD *)(a1 + 584) = *(_OWORD *)a2;
          *(_OWORD *)(a1 + 600) = *(_OWORD *)(a2 + 16);
          *(_OWORD *)(a1 + 616) = *(_OWORD *)(a2 + 32);
        }
      }
      else
      {
        v4 = -1073741811;
      }
    }
    else
    {
      v4 = -1073741637;
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x23u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
  return v4;
}
