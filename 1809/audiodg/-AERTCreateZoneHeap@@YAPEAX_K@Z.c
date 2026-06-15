/*
 * XREFs of ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140012328
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXI_J3PEA_K4@Z @ 0x14000F420 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXI_J3PEA_K4@Z.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x1400551D0 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14005FFD4 (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x140061020 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     WPP_SF_ @ 0x140032818 (WPP_SF_.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z @ 0x140062008 (-AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z.c)
 */

void *__fastcall AERTCreateZoneHeap(unsigned __int64 a1)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned __int64 v4; // rdi
  void *v5; // rdx
  unsigned __int64 v7; // [rsp+40h] [rbp-28h]
  unsigned __int64 v8; // [rsp+48h] [rbp-20h]
  void *v9; // [rsp+78h] [rbp+10h] BYREF

  v9 = 0LL;
  v2 = RtlCreateMemoryZone(&v9, a1, 0LL);
  v4 = v2;
  v5 = (void *)(v2 & 0xC0000000);
  if ( (_DWORD)v5 == -1073741824 )
  {
    v3 = (unsigned int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_c553bd3a27e539e4ab650ec0a4fc27b6_Traceguids);
    }
  }
  AEWMILOG_MEMORY(v3, v5, 4u, 3u, v9, a1, 0LL, 0LL, v7, v8, v4);
  return v9;
}
