/*
 * XREFs of ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140015C94
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXI_J3PEA_K4@Z @ 0x14000F420 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXI_J3PEA_K4@Z.c)
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140015934 (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x1400551D0 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140059AA4 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x140059BEC (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x140059C78 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14005FFD4 (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x140061020 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     WPP_SF_ @ 0x140032818 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140037F04 (WPP_SF_q.c)
 */

void __fastcall AERTDestroyZoneHeap(void *a1)
{
  _QWORD *v2; // rcx
  int v3; // edi
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+28h] [rbp-29h] BYREF
  __int64 v5; // [rsp+58h] [rbp+7h]
  int v6; // [rsp+60h] [rbp+Fh]
  void *v7; // [rsp+68h] [rbp+17h]
  __int64 v8; // [rsp+70h] [rbp+1Fh]
  __int64 v9; // [rsp+78h] [rbp+27h]
  __int64 v10; // [rsp+80h] [rbp+2Fh]
  __int64 v11; // [rsp+88h] [rbp+37h]
  __int64 v12; // [rsp+90h] [rbp+3Fh]
  __int64 v13; // [rsp+98h] [rbp+47h]

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_c553bd3a27e539e4ab650ec0a4fc27b6_Traceguids, a1);
    v2 = WPP_GLOBAL_Control;
  }
  if ( a1 )
  {
    v3 = RtlDestroyMemoryZone(a1);
    if ( (v3 & 0xC0000000) != 0xC0000000 )
    {
LABEL_5:
      v2 = WPP_GLOBAL_Control;
      goto LABEL_6;
    }
    v2 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_c553bd3a27e539e4ab650ec0a4fc27b6_Traceguids, a1);
      goto LABEL_5;
    }
  }
  else
  {
    v3 = 0;
  }
LABEL_6:
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v5 = 0LL;
    v6 = 0;
    v11 = 0LL;
    v12 = 0LL;
    v8 = 0LL;
    v10 = 0LL;
    v9 = 0LL;
    EventTrace.Size = 120;
    v13 = v3;
    EventTrace.UserTime = 0x20000;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_MEMORY;
    LOWORD(EventTrace.Version) = 1028;
    v7 = a1;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
    v2 = WPP_GLOBAL_Control;
  }
  if ( v2 != &WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x40000) != 0 && *((_BYTE *)v2 + 25) >= 4u )
    WPP_SF_(v2[2], 53LL, &WPP_c553bd3a27e539e4ab650ec0a4fc27b6_Traceguids);
}
