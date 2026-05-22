/*
 * XREFs of ?IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBV1@@Z @ 0x1800B78BC
 * Callers:
 *     ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800B7BF4 (-TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@.c)
 * Callees:
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800B9988 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

bool __fastcall HidLampAttributesResponseReportParser::IsParserValid(
        const struct HidLampAttributesResponseReportParser *a1,
        __int64 a2)
{
  char IsValid; // al
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // al
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // al
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // al
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // al
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // al
  __int64 v22; // r8
  HidChannelValueInfo *v23; // r10
  char v24; // al

  LOBYTE(a2) = 0;
  if ( !*((_BYTE *)a1 + 888) && !*((_BYTE *)a1 + 889) && !*((_BYTE *)a1 + 890) )
    return 0;
  if ( *((_BYTE *)a1 + 17) == 2 )
  {
    IsValid = HidChannelValueInfo::IsValid(
                (const struct HidLampAttributesResponseReportParser *)((char *)a1 + 24),
                a2,
                0x7FFFFFFFLL);
    if ( IsValid != (_BYTE)a2 )
    {
      v6 = HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v5 + 96), a2, v4);
      if ( v6 != (_BYTE)a2 )
      {
        v9 = HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v8 + 168), a2, v7);
        if ( v9 != (_BYTE)a2 )
        {
          v12 = HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v11 + 240), a2, v10);
          if ( v12 != (_BYTE)a2 )
          {
            v15 = HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v14 + 312), a2, v13);
            if ( v15 != (_BYTE)a2 )
            {
              v18 = HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v17 + 384), a2, v16);
              if ( v18 != (_BYTE)a2 )
              {
                v21 = HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v20 + 456), a2, v19);
                if ( v21 != (_BYTE)a2 )
                {
                  v24 = HidChannelValueInfo::IsValid(v23, a2, v22);
                  if ( v24 != (_BYTE)a2 )
                    LOBYTE(a2) = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return a2;
}
