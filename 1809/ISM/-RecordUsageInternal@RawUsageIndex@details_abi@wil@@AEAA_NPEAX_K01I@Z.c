/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18002D5D0
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18002D184 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18002CD58 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18002CE58 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18002D2E8 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     memcpy_s_0 @ 0x180032764 (memcpy_s_0.c)
 *     _invalid_parameter_noinfo @ 0x18012BEBA (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x18012DB53 (memcmp_0.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // esi
  unsigned int v17; // r14d
  unsigned int v18; // esi
  unsigned __int8 *v19; // r8
  char v21; // si
  __int64 v22; // rcx
  int v23; // r13d
  _WORD *v24; // r14
  __int64 v26; // rax
  char v27; // dl
  unsigned __int64 v28; // rdx
  __int64 v29; // r15
  unsigned __int64 v30; // r8
  char *v31; // rcx
  size_t v32; // rdx
  size_t v33; // r8
  unsigned __int8 *v34; // r8
  void *Src; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 v36; // [rsp+38h] [rbp-48h] BYREF
  char v37; // [rsp+3Ah] [rbp-46h]
  unsigned int Source; // [rsp+3Ch] [rbp-44h] BYREF
  unsigned __int16 v39; // [rsp+40h] [rbp-40h]
  void *Buf2[2]; // [rsp+48h] [rbp-38h]
  __int16 v41; // [rsp+58h] [rbp-28h] BYREF
  char v42; // [rsp+5Ah] [rbp-26h]
  unsigned int v43; // [rsp+5Ch] [rbp-24h]
  __int16 v44; // [rsp+60h] [rbp-20h]
  __int128 v45; // [rsp+68h] [rbp-18h]
  char v46; // [rsp+C0h] [rbp+40h]

  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    v36 = *((_WORD *)this + 1);
    v10 = (char *)(v6 + 10);
    v11 = 0;
    v37 = *((_BYTE *)this + 4);
    Source = 0;
    v39 = 0;
    *(_OWORD *)Buf2 = 0LL;
    v46 = 0;
    while ( 1 )
    {
      v19 = (unsigned __int8 *)*((_QWORD *)this + 4);
      Src = v10;
      if ( !wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v36,
              (unsigned __int8 **)&Src,
              v19) )
      {
        v10 = (char *)Src;
        *((_QWORD *)this + 4) = Src;
        goto LABEL_32;
      }
      if ( Size == v39 )
        v13 = (unsigned int)memcmp_0(Buf1, Buf2[1], Size);
      else
        v13 = (unsigned int)Size - v39;
      if ( (int)v13 < 0 )
      {
        Src = v10;
        goto LABEL_32;
      }
      if ( !(_DWORD)v13 )
        break;
      v10 = (char *)Src;
      if ( *((_QWORD *)this + 2) )
      {
        v14 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
        v15 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) % *((_QWORD *)this + 2);
        v16 = Source;
        if ( Source > v14 && Source != (_DWORD)v14 )
        {
          v16 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
          Source = v16;
          if ( v37 == 1 )
          {
            if ( Buf2[0] )
            {
              *(_WORD *)Buf2[0] = v14;
            }
            else
            {
              *(_DWORD *)_o__errno((unsigned __int16)v14, v15) = 22;
              invalid_parameter_noinfo();
            }
          }
          else if ( v37 == 2 )
          {
            memcpy_s_0(Buf2[0], 4uLL, &Source, 4uLL);
            v16 = Source;
          }
        }
        v10 += *((_QWORD *)this + 2) * v16;
      }
      else
      {
        v17 = Source;
        v18 = 0;
        v41 = *((_WORD *)this + 3);
        v42 = *((_BYTE *)this + 8);
        v43 = 0;
        v44 = 0;
        v45 = 0LL;
        if ( Source )
        {
          v11 = 0;
          do
          {
            if ( !wil::details_abi::UsageIndexProperty::Read(
                    (wil::details_abi::UsageIndexProperty *)&v41,
                    (unsigned __int8 **)&Src,
                    *((unsigned __int8 **)this + 4)) )
              break;
            ++v18;
          }
          while ( v18 < v17 );
          v10 = (char *)Src;
        }
        if ( v17 != v18 )
        {
          Source = v18;
          if ( v37 == 1 )
          {
            if ( Buf2[0] )
            {
              *(_WORD *)Buf2[0] = v18;
            }
            else
            {
              *(_DWORD *)_o__errno(v13, v12) = 22;
              invalid_parameter_noinfo();
            }
          }
          else if ( v37 == 2 )
          {
            memcpy_s_0(Buf2[0], 4uLL, &Source, 4uLL);
          }
        }
      }
    }
    Src = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
            this,
            (struct wil::details_abi::UsageIndexProperty *)&v36,
            (unsigned __int8 *)Src,
            a4,
            a5,
            a6);
    v10 = (char *)Src;
    if ( !Src )
      return 1;
    v11 = 1;
    v46 = 1;
LABEL_32:
    v21 = v37;
    v22 = 0LL;
    if ( v11 )
    {
      v24 = Buf2[0];
      v23 = Source;
    }
    else
    {
      v23 = 1;
      Source = 1;
      v24 = 0LL;
      v39 = Size;
      Buf2[0] = 0LL;
      Buf2[1] = Buf1;
      v22 = v36 ? v36 : (unsigned __int16)Size + 2LL;
      if ( v37 == 1 )
      {
        v22 += 2LL;
      }
      else if ( v37 == 2 )
      {
        v22 += 4LL;
      }
    }
    LOWORD(v26) = *((_WORD *)this + 3);
    v27 = *((_BYTE *)this + 8);
    v43 = a6;
    v44 = a5;
    v41 = v26;
    v42 = v27;
    *(_QWORD *)&v45 = 0LL;
    *((_QWORD *)&v45 + 1) = a4;
    v26 = (_WORD)v26 ? (unsigned __int16)v26 : (unsigned __int16)a5 + 2LL;
    if ( v27 == 1 )
    {
      v26 += 2LL;
    }
    else if ( v27 == 2 )
    {
      v26 += 4LL;
    }
    v28 = *((_QWORD *)this + 5);
    v29 = v26 + v22;
    v30 = *((_QWORD *)this + 4);
    if ( ((v28 - v30) & -(__int64)(v30 < v28)) >= v26 + v22 )
    {
      v31 = &v10[v29];
      v32 = v28 - v29 - (_QWORD)v10;
      v33 = v30 - (_QWORD)v10;
      if ( v33 )
      {
        if ( v31 && v10 )
        {
          if ( v32 >= v33 )
          {
            memmove_0(v31, v10, v33);
            goto LABEL_61;
          }
          *(_DWORD *)_o__errno(v31, v32) = 34;
        }
        else
        {
          *(_DWORD *)_o__errno(v31, v32) = 22;
        }
        invalid_parameter_noinfo();
      }
LABEL_61:
      v34 = (unsigned __int8 *)(*((_QWORD *)this + 4) + v29);
      *((_QWORD *)this + 4) = v34;
      if ( v46 )
      {
        if ( v21 )
        {
          Source = v23 + 1;
          if ( v21 == 1 )
          {
            if ( v24 )
            {
              *v24 = v23 + 1;
            }
            else
            {
              *(_DWORD *)_o__errno(v31, v32) = 22;
              invalid_parameter_noinfo();
            }
          }
          else if ( v21 == 2 )
          {
            memcpy_s_0(v24, 4uLL, &Source, 4uLL);
          }
        }
      }
      else
      {
        wil::details_abi::UsageIndexProperty::Write(
          (wil::details_abi::UsageIndexProperty *)&v36,
          (unsigned __int8 **)&Src,
          v34);
      }
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v41,
        (unsigned __int8 **)&Src,
        *((unsigned __int8 **)this + 4));
      *((_BYTE *)this + 56) = 1;
      return 1;
    }
  }
  return 0;
}
