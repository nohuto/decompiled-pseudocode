/*
 * XREFs of ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140040A90
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBGPEAXI_J3PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140004120 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBGPEAXI_J3PEAUICrossPro.c)
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x14004D940 (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x140052980 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEv.c)
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140057C38 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x140057DA4 (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x140057E30 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14005E04C (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x14005F0C0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     WPP_SF_ @ 0x14002BF00 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140032A98 (WPP_SF_q.c)
 *     McTemplateU0pqpqqqqqq @ 0x140041190 (McTemplateU0pqpqqqqqq.c)
 */

void __fastcall AERTDestroyZoneHeap(void *a1, int a2, int a3)
{
  _UNKNOWN **v4; // rcx

  v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x33u, (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids, a1);
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( a1 )
  {
    if ( (RtlDestroyMemoryZone(a1) & 0xC0000000) != 0xC0000000 )
    {
LABEL_11:
      v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
      goto LABEL_12;
    }
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x34u,
        (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids,
        a1);
      goto LABEL_11;
    }
  }
LABEL_12:
  if ( (byte_140087281 & 4) != 0 )
  {
    McTemplateU0pqpqqqqqq((_DWORD)v4, a2, a3, 4, (char)a1, 0, 0, 0);
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v4 != &WPP_GLOBAL_Control && (*((_DWORD *)v4 + 7) & 0x40000) != 0 && *((_BYTE *)v4 + 25) >= 4u )
    WPP_SF_((__int64)v4[2], 0x35u, (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids);
}
