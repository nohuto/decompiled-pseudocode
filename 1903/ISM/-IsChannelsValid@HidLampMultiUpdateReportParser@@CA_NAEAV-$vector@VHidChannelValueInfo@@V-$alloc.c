/*
 * XREFs of ?IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@_J1PEAH@Z @ 0x1800B88A4
 * Callers:
 *     ?IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEAV1@@Z @ 0x1800B8918 (-IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEAV1@@Z.c)
 * Callees:
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800B9AD8 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampMultiUpdateReportParser::IsChannelsValid(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r11
  unsigned __int64 v5; // r10
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // r10

  *a4 = 0;
  v4 = *a1;
  v5 = 0LL;
  v7 = *a1 + 12;
  v8 = (a1[1] - *a1) / 72;
  while ( v5 < v8 )
  {
    if ( !HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v7 - 12), v8, a3) )
      return 0;
    v5 = v10 + 1;
    v7 = v9 + 72;
  }
  if ( v8 )
    *a4 = *(_DWORD *)(v4 + 32);
  return 1;
}
