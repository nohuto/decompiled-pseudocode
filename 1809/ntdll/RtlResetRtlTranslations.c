/*
 * XREFs of RtlResetRtlTranslations @ 0x1800E6610
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800D3F74 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     memset @ 0x1800A7100 (memset.c)
 */

void __cdecl RtlResetRtlTranslations(PNLSTABLEINFO TableInfo)
{
  __int64 v2; // rsi
  _OWORD *v3; // rcx
  PUSHORT DBCSOffsets; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm1
  __int16 *v7; // rcx
  bool v8; // zf
  PVOID WideCharTable; // rax
  PUSHORT v10; // rax
  __int128 v11; // xmm1
  PVOID v12; // rax
  PUSHORT MultiByteTable; // rcx
  PUSHORT v14; // rdx
  BOOLEAN v15; // di

  if ( TableInfo->AnsiTableInfo.CodePage == 0xFDE9 || TableInfo->OemTableInfo.CodePage == 0xFDE9 )
  {
    v15 = 0;
    NlsAnsiCodePage = -535;
    NlsMbCodePageTag = 0;
    v12 = 0LL;
    NlsMbAnsiCodePageTables = 0LL;
    MultiByteTable = 0LL;
    NlsAnsiToUnicodeData = 0LL;
    v14 = 0LL;
    NlsUnicodeToMbAnsiData = 0LL;
    NlsActiveCodePageIsUTF8 = 1;
    NlsOemCodePageIsUTF8 = 1;
  }
  else
  {
    v2 = 4LL;
    NlsAnsiCodePage = TableInfo->AnsiTableInfo.CodePage;
    v3 = NlsLeadByteInfoTable;
    if ( TableInfo->AnsiTableInfo.DBCSCodePage )
    {
      DBCSOffsets = TableInfo->AnsiTableInfo.DBCSOffsets;
      v5 = 4LL;
      do
      {
        *v3 = *(_OWORD *)DBCSOffsets;
        v3[1] = *((_OWORD *)DBCSOffsets + 1);
        v3[2] = *((_OWORD *)DBCSOffsets + 2);
        v3[3] = *((_OWORD *)DBCSOffsets + 3);
        v3[4] = *((_OWORD *)DBCSOffsets + 4);
        v3[5] = *((_OWORD *)DBCSOffsets + 5);
        v3[6] = *((_OWORD *)DBCSOffsets + 6);
        v3 += 8;
        v6 = *((_OWORD *)DBCSOffsets + 7);
        DBCSOffsets += 64;
        *(v3 - 1) = v6;
        --v5;
      }
      while ( v5 );
    }
    else
    {
      memset(NlsLeadByteInfoTable, 0, sizeof(NlsLeadByteInfoTable));
    }
    v7 = NlsOemLeadByteInfoTable;
    v8 = TableInfo->AnsiTableInfo.DBCSCodePage == 0;
    NlsMbAnsiCodePageTables = (__int64)TableInfo->AnsiTableInfo.DBCSOffsets;
    NlsAnsiToUnicodeData = (__int64)TableInfo->AnsiTableInfo.MultiByteTable;
    WideCharTable = TableInfo->AnsiTableInfo.WideCharTable;
    NlsMbCodePageTag = !v8;
    NlsUnicodeToAnsiData = (__int64)WideCharTable;
    NlsUnicodeToMbAnsiData = (__int64)WideCharTable;
    NlsActiveCodePageIsUTF8 = 0;
    if ( TableInfo->OemTableInfo.DBCSCodePage )
    {
      v10 = TableInfo->OemTableInfo.DBCSOffsets;
      do
      {
        *(_OWORD *)v7 = *(_OWORD *)v10;
        *((_OWORD *)v7 + 1) = *((_OWORD *)v10 + 1);
        *((_OWORD *)v7 + 2) = *((_OWORD *)v10 + 2);
        *((_OWORD *)v7 + 3) = *((_OWORD *)v10 + 3);
        *((_OWORD *)v7 + 4) = *((_OWORD *)v10 + 4);
        *((_OWORD *)v7 + 5) = *((_OWORD *)v10 + 5);
        *((_OWORD *)v7 + 6) = *((_OWORD *)v10 + 6);
        v7 += 64;
        v11 = *((_OWORD *)v10 + 7);
        v10 += 64;
        *((_OWORD *)v7 - 1) = v11;
        --v2;
      }
      while ( v2 );
    }
    else
    {
      memset(NlsOemLeadByteInfoTable, 0, sizeof(NlsOemLeadByteInfoTable));
    }
    v8 = TableInfo->OemTableInfo.DBCSCodePage == 0;
    v12 = TableInfo->OemTableInfo.WideCharTable;
    MultiByteTable = TableInfo->OemTableInfo.MultiByteTable;
    v14 = TableInfo->OemTableInfo.DBCSOffsets;
    NlsOemCodePageIsUTF8 = 0;
    v15 = !v8;
  }
  NlsMbOemCodePageTag = v15;
  NlsUnicodeToOemData = (__int64)v12;
  NlsUnicodeToMbOemData = (__int64)v12;
  OemDefaultChar = TableInfo->OemTableInfo.DefaultChar;
  OemTransUniDefaultChar = TableInfo->OemTableInfo.TransDefaultChar;
  Nls844UnicodeUpcaseTable = (__int64)TableInfo->UpperCaseTable;
  Nls844UnicodeLowercaseTable = (__int64)TableInfo->LowerCaseTable;
  NlsMbOemCodePageTables = (__int64)v14;
  NlsOemToUnicodeData = (__int64)MultiByteTable;
}
