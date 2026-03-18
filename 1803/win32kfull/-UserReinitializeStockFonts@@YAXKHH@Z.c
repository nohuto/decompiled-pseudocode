/*
 * XREFs of ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C005021C
 * Callers:
 *     UserOnGreTextReady @ 0x1C0050168 (UserOnGreTextReady.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0050D10 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C0053960 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C00FABFC (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 */

void __fastcall UserReinitializeStockFonts(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  int v9; // r9d
  __int64 SessionDpiServerInfo; // rbx
  int v11; // r9d

  GreReinitializeStockFonts();
  v8 = Get96DpiServerInfo(v5, v4, v6, v7);
  *(_QWORD *)(v8 + 24) = GreGetSystemFont(0LL);
  GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
  v9 = 1;
  if ( !a3 )
    v9 = gbGreTextReady;
  *(_DWORD *)(v8 + 32) = GetCharDimensionsInternal(
                           *(HDC *)(gpDispInfo + 64LL),
                           (struct tagTEXTMETRICW *)(v8 + 40),
                           (int *)(v8 + 36),
                           v9);
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  *(_QWORD *)(SessionDpiServerInfo + 24) = GreGetSystemFont(1LL);
  GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
  GreSelectFont(*(HDC *)(gpDispInfo + 72LL));
  v11 = 1;
  if ( !a3 )
    v11 = gbGreTextReady;
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensionsInternal(
                                             *(HDC *)(gpDispInfo + 64LL),
                                             (struct tagTEXTMETRICW *)(SessionDpiServerInfo + 40),
                                             (int *)(SessionDpiServerInfo + 36),
                                             v11);
  UpdateDpiMetricsCacheDPISERVERINFO();
}
