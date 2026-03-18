/*
 * XREFs of ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C00C2A48
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BD788 (xxxUpdatePerUserSystemParameters.c)
 *     UserOnGreTextReady @ 0x1C00C2B5C (UserOnGreTextReady.c)
 * Callees:
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00BEEB0 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C0111088 (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 */

void __fastcall UserReinitializeStockFonts(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 SessionDpiServerInfo; // rbx
  int v13; // r9d

  GreReinitializeStockFonts();
  v7 = Get96DpiServerInfo(v5, v4, v6);
  *(_QWORD *)(v7 + 24) = GreGetSystemFont(0LL);
  GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
  v8 = 1;
  if ( !a3 )
    v8 = gbGreTextReady;
  *(_DWORD *)(v7 + 32) = GetCharDimensionsInternal(
                           *(HDC *)(gpDispInfo + 64LL),
                           (struct tagTEXTMETRICW *)(v7 + 40),
                           (int *)(v7 + 36),
                           v8);
  SessionDpiServerInfo = GetSessionDpiServerInfo(v10, v9, v11);
  *(_QWORD *)(SessionDpiServerInfo + 24) = GreGetSystemFont(1LL);
  GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
  GreSelectFont(*(HDC *)(gpDispInfo + 72LL));
  v13 = 1;
  if ( !a3 )
    v13 = gbGreTextReady;
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensionsInternal(
                                             *(HDC *)(gpDispInfo + 64LL),
                                             (struct tagTEXTMETRICW *)(SessionDpiServerInfo + 40),
                                             (int *)(SessionDpiServerInfo + 36),
                                             v13);
  UpdateDpiMetricsCacheDPISERVERINFO();
}
