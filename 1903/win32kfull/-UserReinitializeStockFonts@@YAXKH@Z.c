/*
 * XREFs of ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C01639E4
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00E1850 (xxxUpdatePerUserSystemParameters.c)
 *     UserOnGreTextReady @ 0x1C00E886C (UserOnGreTextReady.c)
 * Callees:
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00E3E80 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     GetCharDimensions @ 0x1C0142018 (GetCharDimensions.c)
 */

void __fastcall UserReinitializeStockFonts()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 SystemFont; // rax
  __int64 SessionDpiServerInfo; // rbx
  __int64 v6; // rax

  GreReinitializeStockFonts();
  v3 = Get96DpiServerInfo(v1, v0, v2);
  SystemFont = GreGetSystemFont(0LL);
  *(_QWORD *)(v3 + 24) = SystemFont;
  GreSelectFont(*(_QWORD *)(gpDispInfo + 64LL), SystemFont);
  *(_DWORD *)(v3 + 32) = GetCharDimensions(*(HDC *)(gpDispInfo + 64LL), v3 + 40, (_DWORD *)(v3 + 36));
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  v6 = GreGetSystemFont(1LL);
  *(_QWORD *)(SessionDpiServerInfo + 24) = v6;
  GreSelectFont(*(_QWORD *)(gpDispInfo + 64LL), v6);
  GreSelectFont(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(SessionDpiServerInfo + 24));
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensions(
                                             *(HDC *)(gpDispInfo + 64LL),
                                             SessionDpiServerInfo + 40,
                                             (_DWORD *)(SessionDpiServerInfo + 36));
  UpdateDpiMetricsCacheDPISERVERINFO();
}
