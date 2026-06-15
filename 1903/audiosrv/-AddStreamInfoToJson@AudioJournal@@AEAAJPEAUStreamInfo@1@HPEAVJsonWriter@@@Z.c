/*
 * XREFs of ?AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z @ 0x180102E30
 * Callers:
 *     _lambda_7e9488ee95e6f7ac44c162998ae46b34_::operator() @ 0x180102A2C (_lambda_7e9488ee95e6f7ac44c162998ae46b34_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddKeyArray@JsonWriter@@QEAAJPEBG@Z @ 0x1801450F0 (-AddKeyArray@JsonWriter@@QEAAJPEBG@Z.c)
 *     ?AddKeyObject@JsonWriter@@QEAAJPEBG@Z @ 0x1801451A4 (-AddKeyObject@JsonWriter@@QEAAJPEBG@Z.c)
 *     ?AddKeyValue@JsonWriter@@QEAAJPEBG0@Z @ 0x180145254 (-AddKeyValue@JsonWriter@@QEAAJPEBG0@Z.c)
 *     ?AddKeyValue@JsonWriter@@QEAAJPEBGH@Z @ 0x180145304 (-AddKeyValue@JsonWriter@@QEAAJPEBGH@Z.c)
 *     ?AddKeyValue@JsonWriter@@QEAAJPEBGN@Z @ 0x1801453E0 (-AddKeyValue@JsonWriter@@QEAAJPEBGN@Z.c)
 *     ?AddKeyValue@JsonWriter@@QEAAJPEBG_K@Z @ 0x1801454B0 (-AddKeyValue@JsonWriter@@QEAAJPEBG_K@Z.c)
 *     ?EndArray@JsonWriter@@QEAAJXZ @ 0x1801455F0 (-EndArray@JsonWriter@@QEAAJXZ.c)
 *     ?EndObject@JsonWriter@@QEAAJXZ @ 0x180145648 (-EndObject@JsonWriter@@QEAAJXZ.c)
 */

__int64 __fastcall AudioJournal::AddStreamInfoToJson(
        AudioJournal *this,
        struct AudioJournal::StreamInfo *a2,
        int a3,
        struct JsonWriter *a4)
{
  int v4; // r15d
  unsigned int *i; // rdi
  const unsigned __int16 *v9; // rdx
  int v10; // esi
  const unsigned __int16 *v11; // rdx
  int v12; // r14d
  unsigned int *v13; // rsi
  int v14; // ebp
  __int64 v16; // rdx
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  if ( a3 <= 0 )
    return 0LL;
  for ( i = (unsigned int *)((char *)a2 + 148); !*i; i += 50 )
  {
LABEL_21:
    if ( ++v4 >= a3 )
      return 0LL;
  }
  v10 = JsonWriter::AddKeyObject(a4, L"item");
  if ( v10 < 0 )
  {
    v17 = 605LL;
    goto LABEL_38;
  }
  v10 = JsonWriter::AddKeyValue(a4, v9, (const unsigned __int16 *)a2 + 100 * v4);
  if ( v10 < 0 )
  {
    v17 = 607LL;
    goto LABEL_38;
  }
  v10 = JsonWriter::AddKeyValue(a4, L"formfactor", *(i - 1));
  if ( v10 < 0 )
  {
    v17 = 608LL;
    goto LABEL_38;
  }
  v10 = JsonWriter::AddKeyValue(a4, L"streamcount", *i);
  if ( v10 < 0 )
  {
    v17 = 609LL;
    goto LABEL_38;
  }
  v10 = JsonWriter::AddKeyValue(a4, L"initerrorcount", i[1]);
  if ( v10 < 0 )
  {
    v17 = 610LL;
    goto LABEL_38;
  }
  v10 = JsonWriter::AddKeyValue(a4, L"createerrorcount", i[2]);
  if ( v10 < 0 )
  {
    v17 = 611LL;
    goto LABEL_38;
  }
  v10 = JsonWriter::AddKeyValue(a4, L"starterrorcount", i[3]);
  if ( v10 < 0 )
  {
    v17 = 612LL;
    goto LABEL_38;
  }
  v10 = JsonWriter::AddKeyValue(a4, L"stoperrorcount", i[4]);
  if ( v10 < 0 )
  {
    v17 = 613LL;
    goto LABEL_38;
  }
  v10 = JsonWriter::AddKeyValue(a4, v11, *(double *)(i + 5));
  if ( v10 < 0 )
  {
    v17 = 614LL;
    goto LABEL_38;
  }
  v10 = JsonWriter::AddKeyArray(a4, L"errors");
  if ( v10 < 0 )
  {
    v17 = 616LL;
    goto LABEL_38;
  }
  v12 = 0;
  v13 = i + 7;
  do
  {
    if ( !*v13 )
      goto LABEL_18;
    v14 = JsonWriter::AddKeyValue(a4, L"hr", *v13);
    if ( v14 < 0 )
    {
      v16 = 623LL;
      goto LABEL_25;
    }
    v14 = JsonWriter::AddKeyValue(a4, L"count", v13[1]);
    if ( v14 < 0 )
    {
      v16 = 624LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
        (const char *)(unsigned int)v14);
      return (unsigned int)v14;
    }
LABEL_18:
    ++v12;
    v13 += 2;
  }
  while ( v12 < 3 );
  v10 = JsonWriter::EndArray(a4);
  if ( v10 < 0 )
  {
    v17 = 626LL;
  }
  else
  {
    v10 = JsonWriter::EndObject(a4);
    if ( v10 >= 0 )
      goto LABEL_21;
    v17 = 627LL;
  }
LABEL_38:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
    (const char *)(unsigned int)v10);
  return (unsigned int)v10;
}
