/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180005164
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180004D3C (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s @ 0x180001970 (memcpy_s.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18000493C (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180004A34 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180004E78 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     _invalid_parameter_noinfo @ 0x1800439AA (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x180044227 (memcmp_0.c)
 *     memmove_0 @ 0x18004423F (memmove_0.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *Buf1,
        size_t Size,
        void *a4,
        size_t a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  char *v10; // rdi
  char v11; // r13
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned int v14; // esi
  unsigned int v15; // r14d
  unsigned int v16; // esi
  unsigned __int8 *v17; // r8
  char v19; // si
  __int64 v20; // rcx
  int v21; // r13d
  _WORD *v22; // r14
  __int64 v24; // rax
  char v25; // dl
  unsigned __int64 v26; // rdx
  __int64 v27; // r15
  unsigned __int64 v28; // r8
  char *v29; // rcx
  size_t v30; // rdx
  size_t v31; // r8
  unsigned __int8 *v32; // r8
  void *Src; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 v34; // [rsp+38h] [rbp-48h] BYREF
  char v35; // [rsp+3Ah] [rbp-46h]
  unsigned int Source; // [rsp+3Ch] [rbp-44h] BYREF
  unsigned __int16 v37; // [rsp+40h] [rbp-40h]
  void *Buf2[2]; // [rsp+48h] [rbp-38h]
  __int16 v39; // [rsp+58h] [rbp-28h] BYREF
  char v40; // [rsp+5Ah] [rbp-26h]
  unsigned int v41; // [rsp+5Ch] [rbp-24h]
  __int16 v42; // [rsp+60h] [rbp-20h]
  __int128 v43; // [rsp+68h] [rbp-18h]
  char v44; // [rsp+C0h] [rbp+40h]

  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    v34 = *((_WORD *)this + 1);
    v10 = (char *)(v6 + 10);
    v11 = 0;
    v35 = *((_BYTE *)this + 4);
    Source = 0;
    v37 = 0;
    *(_OWORD *)Buf2 = 0LL;
    v44 = 0;
    while ( 1 )
    {
      v17 = (unsigned __int8 *)*((_QWORD *)this + 4);
      Src = v10;
      if ( !wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v34,
              (unsigned __int8 **)&Src,
              v17) )
      {
        v10 = (char *)Src;
        *((_QWORD *)this + 4) = Src;
        goto LABEL_32;
      }
      if ( Size == v37 )
        v12 = (unsigned int)memcmp_0(Buf1, Buf2[1], Size);
      else
        v12 = (unsigned int)Size - v37;
      if ( (int)v12 < 0 )
      {
        Src = v10;
        goto LABEL_32;
      }
      if ( !(_DWORD)v12 )
        break;
      v10 = (char *)Src;
      if ( *((_QWORD *)this + 2) )
      {
        v13 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
        v14 = Source;
        if ( Source > v13 && Source != (_DWORD)v13 )
        {
          v14 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
          Source = v14;
          if ( v35 == 1 )
          {
            if ( Buf2[0] )
            {
              *(_WORD *)Buf2[0] = v13;
            }
            else
            {
              *(_DWORD *)_o__errno((unsigned __int16)v13) = 22;
              invalid_parameter_noinfo();
            }
          }
          else if ( v35 == 2 )
          {
            memcpy_s(Buf2[0], 4uLL, &Source, 4uLL);
            v14 = Source;
          }
        }
        v10 += *((_QWORD *)this + 2) * v14;
      }
      else
      {
        v15 = Source;
        v16 = 0;
        v39 = *((_WORD *)this + 3);
        v40 = *((_BYTE *)this + 8);
        v41 = 0;
        v42 = 0;
        v43 = 0LL;
        if ( Source )
        {
          v11 = 0;
          do
          {
            if ( !wil::details_abi::UsageIndexProperty::Read(
                    (wil::details_abi::UsageIndexProperty *)&v39,
                    (unsigned __int8 **)&Src,
                    *((unsigned __int8 **)this + 4)) )
              break;
            ++v16;
          }
          while ( v16 < v15 );
          v10 = (char *)Src;
        }
        if ( v15 != v16 )
        {
          Source = v16;
          if ( v35 == 1 )
          {
            if ( Buf2[0] )
            {
              *(_WORD *)Buf2[0] = v16;
            }
            else
            {
              *(_DWORD *)_o__errno(v12) = 22;
              invalid_parameter_noinfo();
            }
          }
          else if ( v35 == 2 )
          {
            memcpy_s(Buf2[0], 4uLL, &Source, 4uLL);
          }
        }
      }
    }
    Src = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
            this,
            (struct wil::details_abi::UsageIndexProperty *)&v34,
            (unsigned __int8 *)Src,
            a4,
            a5,
            a6);
    v10 = (char *)Src;
    if ( !Src )
      return 1;
    v11 = 1;
    v44 = 1;
LABEL_32:
    v19 = v35;
    v20 = 0LL;
    if ( v11 )
    {
      v22 = Buf2[0];
      v21 = Source;
    }
    else
    {
      v21 = 1;
      Source = 1;
      v22 = 0LL;
      v37 = Size;
      Buf2[0] = 0LL;
      Buf2[1] = Buf1;
      v20 = v34 ? v34 : (unsigned __int16)Size + 2LL;
      if ( v35 == 1 )
      {
        v20 += 2LL;
      }
      else if ( v35 == 2 )
      {
        v20 += 4LL;
      }
    }
    LOWORD(v24) = *((_WORD *)this + 3);
    v25 = *((_BYTE *)this + 8);
    v41 = a6;
    v42 = a5;
    v39 = v24;
    v40 = v25;
    *(_QWORD *)&v43 = 0LL;
    *((_QWORD *)&v43 + 1) = a4;
    v24 = (_WORD)v24 ? (unsigned __int16)v24 : (unsigned __int16)a5 + 2LL;
    if ( v25 == 1 )
    {
      v24 += 2LL;
    }
    else if ( v25 == 2 )
    {
      v24 += 4LL;
    }
    v26 = *((_QWORD *)this + 5);
    v27 = v24 + v20;
    v28 = *((_QWORD *)this + 4);
    if ( ((v26 - v28) & -(__int64)(v28 < v26)) >= v24 + v20 )
    {
      v29 = &v10[v27];
      v30 = v26 - v27 - (_QWORD)v10;
      v31 = v28 - (_QWORD)v10;
      if ( v31 )
      {
        if ( v29 && v10 )
        {
          if ( v30 >= v31 )
          {
            memmove_0(v29, v10, v31);
            goto LABEL_61;
          }
          *(_DWORD *)_o__errno(v29) = 34;
        }
        else
        {
          *(_DWORD *)_o__errno(v29) = 22;
        }
        invalid_parameter_noinfo();
      }
LABEL_61:
      v32 = (unsigned __int8 *)(*((_QWORD *)this + 4) + v27);
      *((_QWORD *)this + 4) = v32;
      if ( v44 )
      {
        if ( v19 )
        {
          Source = v21 + 1;
          if ( v19 == 1 )
          {
            if ( v22 )
            {
              *v22 = v21 + 1;
            }
            else
            {
              *(_DWORD *)_o__errno(v29) = 22;
              invalid_parameter_noinfo();
            }
          }
          else if ( v19 == 2 )
          {
            memcpy_s(v22, 4uLL, &Source, 4uLL);
          }
        }
      }
      else
      {
        wil::details_abi::UsageIndexProperty::Write(
          (wil::details_abi::UsageIndexProperty *)&v34,
          (unsigned __int8 **)&Src,
          v32);
      }
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v39,
        (unsigned __int8 **)&Src,
        *((unsigned __int8 **)this + 4));
      *((_BYTE *)this + 56) = 1;
      return 1;
    }
  }
  return 0;
}
