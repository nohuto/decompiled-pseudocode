/*
 * XREFs of ?IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@_J1PEAH@Z @ 0x1800803DC
 * Callers:
 *     ?IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEAV1@@Z @ 0x1800800CC (-IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall HidLampMultiUpdateReportParser::IsChannelsValid(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r11
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdx
  __int64 v7; // rax

  *a4 = 0;
  v4 = *a1;
  v5 = 0LL;
  v6 = (a1[1] - *a1) / 72;
  if ( v6 )
  {
    v7 = v4 + 4;
    while ( *(_DWORD *)v7
         && *(_DWORD *)(v7 - 4)
         && !*(_QWORD *)(v7 + 20)
         && *(_QWORD *)(v7 + 28) <= a3
         && *(__int64 *)(v7 + 28) > 0 )
    {
      ++v5;
      v7 += 72LL;
      if ( v5 >= v6 )
        goto LABEL_9;
    }
    return 0;
  }
  else
  {
LABEL_9:
    if ( v6 )
      *a4 = *(_DWORD *)(v4 + 32);
    return 1;
  }
}
