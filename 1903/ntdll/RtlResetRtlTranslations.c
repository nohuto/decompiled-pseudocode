/*
 * XREFs of RtlResetRtlTranslations @ 0x1800E3890
 * Callers:
 *     sub_1800D24F8 @ 0x1800D24F8 (sub_1800D24F8.c)
 * Callees:
 *     memset @ 0x1800A3600 (memset.c)
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
    qword_180166540 = 0LL;
    MultiByteTable = 0LL;
    qword_180166530 = 0LL;
    v14 = 0LL;
    qword_180166528 = 0LL;
    qword_180166950 = 0LL;
    byte_180162797 = 1;
    byte_180162796 = 1;
  }
  else
  {
    v2 = 4LL;
    NlsAnsiCodePage = TableInfo->AnsiTableInfo.CodePage;
    v3 = word_180163EE0;
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
      memset(word_180163EE0, 0, sizeof(word_180163EE0));
    }
    v7 = word_1801640E0;
    v8 = TableInfo->AnsiTableInfo.DBCSCodePage == 0;
    qword_180166540 = (__int64)TableInfo->AnsiTableInfo.DBCSOffsets;
    qword_180166530 = (__int64)TableInfo->AnsiTableInfo.MultiByteTable;
    WideCharTable = TableInfo->AnsiTableInfo.WideCharTable;
    NlsMbCodePageTag = !v8;
    qword_180166528 = (__int64)WideCharTable;
    qword_180166950 = (__int64)WideCharTable;
    byte_180162797 = 0;
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
      memset(word_1801640E0, 0, sizeof(word_1801640E0));
    }
    v8 = TableInfo->OemTableInfo.DBCSCodePage == 0;
    v12 = TableInfo->OemTableInfo.WideCharTable;
    MultiByteTable = TableInfo->OemTableInfo.MultiByteTable;
    v14 = TableInfo->OemTableInfo.DBCSOffsets;
    byte_180162796 = 0;
    v15 = !v8;
  }
  NlsMbOemCodePageTag = v15;
  qword_180166548 = (__int64)v12;
  qword_180166948 = (__int64)v12;
  word_180162794 = TableInfo->OemTableInfo.DefaultChar;
  word_1801627D0 = TableInfo->OemTableInfo.TransDefaultChar;
  qword_180166510 = (__int64)TableInfo->UpperCaseTable;
  qword_180166520 = (__int64)TableInfo->LowerCaseTable;
  qword_180166940 = (__int64)v14;
  qword_180166538 = (__int64)MultiByteTable;
}
