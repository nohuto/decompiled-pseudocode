/*
 * XREFs of ndisFSetRestartAttributes @ 0x1C002E024
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C002DCB0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028648 (WPP_RECORDER_SF_Zq.c)
 *     ndisAllocOrFreeIterativeDataPathTrackerIfNeeded @ 0x1C002E1A4 (ndisAllocOrFreeIterativeDataPathTrackerIfNeeded.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memcmp @ 0x1C0041250 (memcmp.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FF6D4 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B3C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01278A0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisFSetRestartAttributes(__int64 a1, _OWORD *Buf2, __int64 a3)
{
  _OWORD *v3; // rbx
  unsigned int v5; // edi
  int v7; // edx
  char v8[160]; // [rsp+40h] [rbp-D8h] BYREF

  v3 = Buf2;
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Buf2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Buf2,
      1,
      33,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      a1);
  }
  if ( v3 )
  {
    if ( *(_BYTE *)(a1 + 1) == 1 )
    {
      if ( *((_WORD *)v3 + 1) < 0x30u )
      {
        v5 = -1073676283;
      }
      else if ( *((_QWORD *)v3 + 1) || !*((_QWORD *)v3 + 3) )
      {
        LOBYTE(a3) = 1;
        v5 = ndisAllocOrFreeIterativeDataPathTrackerIfNeeded(a1, v3, a3);
        if ( !v5 )
        {
          if ( memcmp((const void *)(a1 + 576), v3, 0x30uLL) )
          {
            Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(a1 + 32) + 5104LL));
            if ( Ndis::BindState::SetPause(
                   (Ndis::BindState *)(*(_QWORD *)(a1 + 32) + 5032LL),
                   DatapathPaused,
                   (enum NDIS_PAUSE_REASON)(v5 + 32)) )
            {
              memset(v8, 0, sizeof(v8));
              if ( (unsigned __int8)byte_1C00E677B >= 4u )
              {
                ndisGetBindLinkNameForTracing(
                  *(struct NDIS_BIND_FILTER_LINK **)(a1 + 760),
                  (struct NDIS_PNPTRACE_LOCALS *)v8);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_Zq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v7,
                    0x1Cu,
                    0x22u,
                    (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
                    *(unsigned __int16 **)&v8[8],
                    *(_QWORD *)v8);
              }
            }
            Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(a1 + 32) + 5104LL));
          }
          *(_OWORD *)(a1 + 576) = *v3;
          *(_OWORD *)(a1 + 592) = v3[1];
          *(_OWORD *)(a1 + 608) = v3[2];
        }
      }
      else
      {
        v5 = -1073741811;
      }
    }
    else
    {
      v5 = -1073741637;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Buf2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Buf2,
      1,
      35,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      a1);
  }
  return v5;
}
