/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1800ABA58
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1800AB6F8 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x180021E88 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x1800AB530 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x1800AB648 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x1800ABD68 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800ABD9C (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x1800ABF5C (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     _invalid_parameter_noinfo @ 0x1800E7EEE (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        unsigned __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  char *v10; // rbx
  unsigned __int8 *v11; // r8
  int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // edx
  void *v16; // r12
  int v18; // r14d
  char v19; // r13
  __int16 v20; // cx
  unsigned __int64 Size; // rax
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r8
  __int64 v24; // rdx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  char *v27; // rcx
  size_t v28; // r9
  size_t v29; // r8
  char *v30; // r8
  unsigned int v31; // esi
  char v32; // al
  unsigned int v33; // r14d
  void *Src; // [rsp+30h] [rbp-50h] BYREF
  __int16 v35; // [rsp+38h] [rbp-48h] BYREF
  char v36; // [rsp+3Ah] [rbp-46h]
  unsigned int v37; // [rsp+3Ch] [rbp-44h]
  __int16 v38; // [rsp+40h] [rbp-40h]
  __int128 v39; // [rsp+48h] [rbp-38h]
  __int16 v40; // [rsp+58h] [rbp-28h] BYREF
  char v41; // [rsp+5Ah] [rbp-26h]
  unsigned int v42; // [rsp+5Ch] [rbp-24h]
  __int16 v43; // [rsp+60h] [rbp-20h]
  __int128 v44; // [rsp+68h] [rbp-18h]

  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    return 0;
  v35 = *((_WORD *)this + 1);
  v10 = (char *)(v6 + 10);
  v36 = *((_BYTE *)this + 4);
  v37 = 0;
  v38 = 0;
  v39 = 0LL;
  while ( 1 )
  {
    v11 = (unsigned __int8 *)*((_QWORD *)this + 4);
    Src = v10;
    if ( !wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v35,
            (unsigned __int8 **)&Src,
            v11) )
    {
      v10 = (char *)Src;
      *((_QWORD *)this + 4) = Src;
LABEL_13:
      *(_QWORD *)&v39 = 0LL;
      v18 = 1;
      v38 = a3;
      v37 = 1;
      *((_QWORD *)&v39 + 1) = a2;
      wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v35);
      v16 = a4;
      v19 = 0;
      goto LABEL_14;
    }
    v12 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v35, a2, a3);
    if ( v12 < 0 )
    {
      Src = v10;
      goto LABEL_13;
    }
    if ( !v12 )
      break;
    v13 = *((_QWORD *)this + 2);
    v10 = (char *)Src;
    if ( v13 )
    {
      v14 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / v13;
      v15 = v37;
      if ( v37 > v14 )
      {
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v35, v14);
        v13 = *((_QWORD *)this + 2);
        v15 = v37;
      }
      v10 += v13 * v15;
    }
    else
    {
      v31 = 0;
      v40 = *((_WORD *)this + 3);
      v32 = *((_BYTE *)this + 8);
      v42 = 0;
      v43 = 0;
      v33 = v37;
      v41 = v32;
      v44 = 0LL;
      if ( v37 )
      {
        do
        {
          if ( !wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v40,
                  (unsigned __int8 **)&Src,
                  *((unsigned __int8 **)this + 4)) )
            break;
          ++v31;
        }
        while ( v31 < v33 );
        v10 = (char *)Src;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v35, v31);
    }
  }
  v16 = a4;
  Src = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
          this,
          (struct wil::details_abi::UsageIndexProperty *)&v35,
          (unsigned __int8 *)Src,
          a4,
          a5,
          a6);
  v10 = (char *)Src;
  if ( !Src )
    return 1;
  v19 = 1;
  v18 = v37;
LABEL_14:
  v20 = *((_WORD *)this + 3);
  *(_QWORD *)&v44 = 0LL;
  v40 = v20;
  v41 = *((_BYTE *)this + 8);
  v42 = a6;
  v43 = a5;
  *((_QWORD *)&v44 + 1) = v16;
  Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v40);
  v22 = *((_QWORD *)this + 5);
  v23 = *((_QWORD *)this + 4);
  v25 = v24 + Size;
  v26 = v22 - v23;
  if ( ((v22 - v23) & -(__int64)(v23 < v22)) >= v25 )
  {
    v27 = &v10[v25];
    v28 = v22 - v25 - (_QWORD)v10;
    v29 = v23 - (_QWORD)v10;
    if ( !v29 )
    {
LABEL_16:
      v30 = (char *)(v25 + *((_QWORD *)this + 4));
      *((_QWORD *)this + 4) = v30;
      if ( v19 )
      {
        if ( v36 )
          wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v35, v18 + 1);
      }
      else
      {
        wil::details_abi::UsageIndexProperty::Write((wil::details_abi::UsageIndexProperty *)&v35, (char **)&Src, v30);
      }
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v40,
        (char **)&Src,
        *((char **)this + 4));
      *((_BYTE *)this + 56) = 1;
      return 1;
    }
    if ( v27 && v10 )
    {
      if ( v28 >= v29 )
      {
        memmove_0(v27, v10, v29);
        goto LABEL_16;
      }
      *(_DWORD *)_o__errno(v27, v26, v29, v28) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(v27, v26, v29, v28) = 22;
    }
    invalid_parameter_noinfo();
    goto LABEL_16;
  }
  return 0;
}
