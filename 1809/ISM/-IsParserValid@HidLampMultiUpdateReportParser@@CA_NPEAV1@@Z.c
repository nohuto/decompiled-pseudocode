/*
 * XREFs of ?IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEAV1@@Z @ 0x1800800CC
 * Callers:
 *     ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x18007FB34 (-TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 * Callees:
 *     ?IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@_J1PEAH@Z @ 0x1800803DC (-IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV-$vector@VHidChannelValueInfo@@V-$alloc.c)
 */

char __fastcall HidLampMultiUpdateReportParser::IsParserValid(struct HidLampMultiUpdateReportParser *a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // r15
  _QWORD *v4; // r13
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  char v15; // r11
  __int64 v16; // r9
  char v17; // r8
  unsigned __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+28h] [rbp-50h]
  char IsChannelsValid; // [rsp+80h] [rbp+8h]
  char v22; // [rsp+88h] [rbp+10h]
  char v23; // [rsp+90h] [rbp+18h]
  char v24; // [rsp+98h] [rbp+20h]

  v2 = (_QWORD *)((char *)a1 + 200);
  v3 = (_QWORD *)((char *)a1 + 232);
  v4 = (_QWORD *)((char *)a1 + 264);
  v5 = (__int64)((unsigned __int128)((__int64)(*((_QWORD *)a1 + 26) - *((_QWORD *)a1 + 25))
                                   * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  v19 = (v5 >> 63) + v5;
  v6 = (v3[1] - *v3) / 72LL;
  v7 = (*((_QWORD *)a1 + 34) - *((_QWORD *)a1 + 33)) / 72LL;
  v20 = (*((_QWORD *)a1 + 38) - *((_QWORD *)a1 + 37)) / 72LL;
  IsChannelsValid = HidLampMultiUpdateReportParser::IsChannelsValid(
                      (char *)a1 + 168,
                      (unsigned __int128)((__int64)(*((_QWORD *)a1 + 38) - *((_QWORD *)a1 + 37))
                                        * (__int128)0xE38E38E38E38E39LL) >> 64,
                      0x7FFFFFFFLL,
                      (char *)a1 + 192);
  v22 = HidLampMultiUpdateReportParser::IsChannelsValid(v2, v8, 255LL, (char *)a1 + 224);
  v23 = HidLampMultiUpdateReportParser::IsChannelsValid(v3, v9, v10, (char *)a1 + 256);
  v24 = HidLampMultiUpdateReportParser::IsChannelsValid(v4, v11, v12, (char *)a1 + 288);
  v15 = HidLampMultiUpdateReportParser::IsChannelsValid((char *)a1 + 296, v13, v14, (char *)a1 + 320);
  if ( !v19 && !v6 && !v7 )
    return 0;
  if ( !IsChannelsValid )
    return 0;
  v16 = *((unsigned int *)a1 + 14);
  if ( (*((_QWORD *)a1 + 22) - *((_QWORD *)a1 + 21)) / 72LL != v16 )
    return 0;
  v17 = 1;
  if ( v19 )
  {
    if ( !v22 || (v2[1] - *v2) / 72LL != v16 )
      return 0;
    *((_BYTE *)a1 + 324) = 1;
  }
  if ( v6 )
  {
    if ( !v23 || (v3[1] - *v3) / 72LL != v16 )
      return 0;
    *((_BYTE *)a1 + 325) = 1;
  }
  if ( v7 )
  {
    if ( !v24 || (v4[1] - *v4) / 72LL != v16 )
      return 0;
    *((_BYTE *)a1 + 326) = 1;
  }
  if ( !v20 )
    goto LABEL_22;
  if ( !v15 || (*((_QWORD *)a1 + 38) - *((_QWORD *)a1 + 37)) / 72LL != v16 )
    return 0;
  *((_BYTE *)a1 + 327) = 1;
LABEL_22:
  if ( *((_BYTE *)a1 + 17) != 2
    || !*((_DWORD *)a1 + 7)
    || !*((_DWORD *)a1 + 6)
    || *((_QWORD *)a1 + 6)
    || (unsigned __int64)(*((_QWORD *)a1 + 7) - 1LL) > 0x7FFFFFFE
    || !*((_DWORD *)a1 + 25)
    || !*((_DWORD *)a1 + 24)
    || *((_QWORD *)a1 + 15)
    || (unsigned __int64)(*((_QWORD *)a1 + 16) - 1LL) > 0xFFFFFFFE )
  {
    return 0;
  }
  return v17;
}
