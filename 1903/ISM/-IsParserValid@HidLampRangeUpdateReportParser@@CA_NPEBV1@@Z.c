/*
 * XREFs of ?IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBV1@@Z @ 0x1800B92F8
 * Callers:
 *     ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800B9384 (-TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 * Callees:
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800B9AD8 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampRangeUpdateReportParser::IsParserValid(const struct HidLampRangeUpdateReportParser *a1)
{
  char v1; // r9
  char IsValid; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  char v6; // al
  __int64 v7; // rdx
  char v8; // al

  v1 = 0;
  if ( !*((_BYTE *)a1 + 528) && !*((_BYTE *)a1 + 529) && !*((_BYTE *)a1 + 530)
    || *((_QWORD *)a1 + 16) != *((_QWORD *)a1 + 25) )
  {
    return 0;
  }
  if ( *((_BYTE *)a1 + 17) == 2 )
  {
    IsValid = HidChannelValueInfo::IsValid(
                (const struct HidLampRangeUpdateReportParser *)((char *)a1 + 96),
                (__int64)a1,
                0x7FFFFFFFLL);
    if ( IsValid != v1 )
    {
      v6 = HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v4 + 168), v4, v5);
      if ( v6 != v1 )
      {
        v8 = HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v7 + 24), v7, 0xFFFFFFFFLL);
        if ( v8 != v1 )
          return 1;
      }
    }
  }
  return v1;
}
