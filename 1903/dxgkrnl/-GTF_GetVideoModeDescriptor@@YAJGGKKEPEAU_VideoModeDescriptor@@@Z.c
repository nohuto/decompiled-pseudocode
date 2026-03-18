/*
 * XREFs of ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x1C0020F30
 * Callers:
 *     ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x1C0020E1C (-ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EP.c)
 *     ?ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PEAU_VideoModeDescriptor@@@Z @ 0x1C005886C (-ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PE.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C02CF09C (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?GTF_UsingVerticalRefreshFrequency_Stage1@MonDescParser@@YAXJJJJJPEAU_GTF_WORKSET@1@@Z @ 0x1C002108C (-GTF_UsingVerticalRefreshFrequency_Stage1@MonDescParser@@YAXJJJJJPEAU_GTF_WORKSET@1@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall GTF_GetVideoModeDescriptor(
        USHORT a1,
        USHORT a2,
        ULONG a3,
        ULONG a4,
        BOOLEAN a5,
        struct _VideoModeDescriptor *a6)
{
  __int64 v10; // r11
  int v11; // r8d
  signed int v12; // ecx
  int v13; // eax
  struct MonDescParser::_GTF_WORKSET *v15[30]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v15, 0, 0xE8uLL);
  if ( !a6 || !a1 || !a2 || !a3 || !a4 )
    return 3221225485LL;
  a6->IsInterlaced = a5;
  a6->VideoStandardType = 2;
  a6->HorizontalActivePixels = a1;
  a6->VerticalActivePixels = a2;
  a6->VerticalRefreshRateNumerator = a3;
  a6->VerticalRefreshRateDenominator = a4;
  MonDescParser::GTF_UsingVerticalRefreshFrequency_Stage1(
    (MonDescParser *)a5,
    a1,
    a2,
    a3,
    a4,
    (MonDescParser *)v15,
    v15[0]);
  v11 = 10000;
  v12 = abs32((int)(*(double *)&v15[5] * 10000.0));
  while ( 1 )
  {
    v12 %= v11;
    if ( !v12 )
      break;
    v11 %= v12;
    if ( !v11 )
      goto LABEL_11;
  }
  v12 = v11;
LABEL_11:
  *(_DWORD *)(v10 + 12) = (int)(*(double *)&v15[5] * 10000.0) / v12;
  v13 = (int)*(double *)&v15[13];
  *(_DWORD *)(v10 + 16) = (unsigned __int16)(10000 / v12);
  *(_DWORD *)v10 = v13;
  *(_WORD *)(v10 + 24) = (int)*(double *)&v15[4];
  *(_WORD *)(v10 + 26) = (int)*(double *)&v15[19];
  return 0LL;
}
