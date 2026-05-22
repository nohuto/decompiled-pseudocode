/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180050AD8
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1800509BC (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x180002E10 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     _invalid_parameter_noinfo @ 0x18002C146 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18003788B (memmove_0.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18004F0E0 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18004F42C (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800504E4 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x180051D40 (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x180052190 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x1800524F8 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        size_t a3,
        void *a4,
        size_t a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  unsigned __int8 *v11; // rbx
  int v12; // eax
  int v14; // r14d
  char v15; // r15
  __int16 v16; // cx
  __int64 Size; // rax
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned __int8 *v23; // rcx
  size_t v24; // r9
  size_t v25; // r8
  unsigned __int8 *v26; // r8
  unsigned __int8 *InsertionPointOrIncrement; // [rsp+30h] [rbp-50h] BYREF
  const void *v28; // [rsp+38h] [rbp-48h] BYREF
  __int16 v29; // [rsp+40h] [rbp-40h]
  __int128 v30; // [rsp+48h] [rbp-38h]
  __int16 v31; // [rsp+58h] [rbp-28h] BYREF
  char v32; // [rsp+5Ah] [rbp-26h]
  unsigned int v33; // [rsp+5Ch] [rbp-24h]
  __int16 v34; // [rsp+60h] [rbp-20h]
  __int64 v35; // [rsp+68h] [rbp-18h]
  void *v36; // [rsp+70h] [rbp-10h]

  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    return 0;
  v11 = (unsigned __int8 *)(v6 + 10);
  LOWORD(v28) = *((_WORD *)this + 1);
  BYTE2(v28) = *((_BYTE *)this + 4);
  InsertionPointOrIncrement = v11;
  HIDWORD(v28) = 0;
  v29 = 0;
  v30 = 0LL;
  while ( 1 )
  {
    if ( !wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v28,
            &InsertionPointOrIncrement,
            *((unsigned __int8 **)this + 4)) )
    {
      v11 = InsertionPointOrIncrement;
      *((_QWORD *)this + 4) = InsertionPointOrIncrement;
      goto LABEL_12;
    }
    v12 = wil::details_abi::UsageIndexProperty::Compare(&v28, a2, a3);
    if ( v12 < 0 )
    {
      InsertionPointOrIncrement = v11;
LABEL_12:
      *(_QWORD *)&v30 = 0LL;
      v14 = 1;
      v29 = a3;
      HIDWORD(v28) = 1;
      *((_QWORD *)&v30 + 1) = a2;
      wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v28);
      v15 = 0;
      goto LABEL_13;
    }
    if ( !v12 )
      break;
    v11 = wil::details_abi::RawUsageIndex::SkipValues(
            this,
            (struct wil::details_abi::UsageIndexProperty *)&v28,
            InsertionPointOrIncrement);
    InsertionPointOrIncrement = v11;
  }
  InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                this,
                                (struct wil::details_abi::UsageIndexProperty *)&v28,
                                InsertionPointOrIncrement,
                                a4,
                                a5,
                                a6);
  v11 = InsertionPointOrIncrement;
  if ( !InsertionPointOrIncrement )
    return 1;
  v14 = HIDWORD(v28);
  v15 = 1;
LABEL_13:
  v16 = *((_WORD *)this + 3);
  v35 = 0LL;
  v31 = v16;
  v32 = *((_BYTE *)this + 8);
  v33 = a6;
  v34 = a5;
  v36 = a4;
  Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v31);
  v18 = *((_QWORD *)this + 5);
  v19 = *((_QWORD *)this + 4);
  v21 = v20 + Size;
  v22 = v18 - v19;
  if ( ((v18 - v19) & -(__int64)(v19 < v18)) >= v21 )
  {
    v23 = &v11[v21];
    v24 = v18 - v21 - (_QWORD)v11;
    v25 = v19 - (_QWORD)v11;
    if ( v25 )
    {
      if ( !v23 || !v11 )
      {
        *(_DWORD *)_o__errno(v23, v22, v25, v24) = 22;
        goto LABEL_17;
      }
      if ( v24 >= v25 )
      {
        memmove_0(v23, v11, v25);
      }
      else
      {
        *(_DWORD *)((__int64 (*)(void))_o__errno)() = 34;
LABEL_17:
        invalid_parameter_noinfo();
      }
    }
    v26 = (unsigned __int8 *)(*((_QWORD *)this + 4) + v21);
    *((_QWORD *)this + 4) = v26;
    if ( v15 )
    {
      if ( BYTE2(v28) )
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v28, v14 + 1);
    }
    else
    {
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v28,
        &InsertionPointOrIncrement,
        v26);
    }
    wil::details_abi::UsageIndexProperty::Write(
      (wil::details_abi::UsageIndexProperty *)&v31,
      &InsertionPointOrIncrement,
      *((unsigned __int8 **)this + 4));
    *((_BYTE *)this + 56) = 1;
    return 1;
  }
  return 0;
}
