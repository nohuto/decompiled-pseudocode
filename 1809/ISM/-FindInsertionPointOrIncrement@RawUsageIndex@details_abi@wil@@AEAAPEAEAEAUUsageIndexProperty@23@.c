/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18002D2E8
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18002D5D0 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18002CE58 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     memcpy_s_0 @ 0x180032764 (memcpy_s_0.c)
 *     _invalid_parameter_noinfo @ 0x18012BEBA (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x18012DB53 (memcmp_0.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  _DWORD *v6; // rsi
  char v7; // bl
  int v8; // r12d
  unsigned __int8 *v9; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  _WORD *v15; // rcx
  unsigned __int64 v16; // rsi
  size_t v17; // rdi
  __int64 v18; // rax
  unsigned __int8 *v19; // r8
  int v20; // ecx
  unsigned __int8 *v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // edi
  unsigned __int8 *v25; // r8
  bool v26; // zf
  _WORD *v27; // rax
  bool v28; // di
  __int16 v29; // r8
  unsigned __int8 *v31; // [rsp+20h] [rbp-50h]
  __int16 v32; // [rsp+28h] [rbp-48h] BYREF
  char v33; // [rsp+2Ah] [rbp-46h]
  int Source; // [rsp+2Ch] [rbp-44h] BYREF
  unsigned __int16 v35; // [rsp+30h] [rbp-40h]
  void *Destination[2]; // [rsp+38h] [rbp-38h]
  __int16 v37; // [rsp+48h] [rbp-28h] BYREF
  char v38; // [rsp+4Ah] [rbp-26h]
  int v39; // [rsp+4Ch] [rbp-24h]
  unsigned __int16 v40; // [rsp+50h] [rbp-20h]
  void *Buf2[2]; // [rsp+58h] [rbp-18h]
  unsigned __int8 *v42; // [rsp+B0h] [rbp+40h] BYREF
  void *Buf1; // [rsp+C8h] [rbp+58h]

  Buf1 = a4;
  v6 = (_DWORD *)((char *)a2 + 4);
  v7 = 0;
  v32 = *((_WORD *)this + 3);
  v8 = -1;
  v33 = *((_BYTE *)this + 8);
  v9 = a3;
  Source = 0;
  v35 = 0;
  *(_OWORD *)Destination = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    v12 = (*((_QWORD *)this + 4) - (_QWORD)a3) / *((_QWORD *)this + 2);
    v13 = (*((_QWORD *)this + 4) - (_QWORD)a3) % *((_QWORD *)this + 2);
    v14 = (unsigned int)*v6;
    if ( v14 > v12 && (_DWORD)v14 != (_DWORD)v12 )
    {
      v26 = *((_BYTE *)a2 + 2) == 1;
      *v6 = v12;
      if ( v26 )
      {
        v15 = (_WORD *)*((_QWORD *)a2 + 2);
        if ( v15 )
        {
          *v15 = v12;
        }
        else
        {
          *(_DWORD *)_o__errno(0LL, v13) = 22;
          invalid_parameter_noinfo();
        }
      }
      else if ( *((_BYTE *)a2 + 2) == 2 )
      {
        memcpy_s_0(*((void *const *)a2 + 2), 4uLL, v6, 4uLL);
      }
    }
    v16 = (unsigned int)*v6;
    v17 = Size;
    v18 = v16 * *((_QWORD *)this + 2);
    *(_OWORD *)Buf2 = 0LL;
    v39 = 0;
    v40 = 0;
    v31 = &v9[v18];
    v37 = *((_WORD *)this + 3);
    v38 = *((_BYTE *)this + 8);
    while ( v16 )
    {
      v19 = (unsigned __int8 *)*((_QWORD *)this + 4);
      v42 = &v9[(v16 >> 1) * *((_QWORD *)this + 2)];
      wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v37, &v42, v19);
      if ( v17 == v40 )
        v20 = memcmp_0(Buf1, Buf2[1], v17);
      else
        v20 = v17 - v40;
      if ( v20 <= 0 )
      {
        v16 >>= 1;
      }
      else
      {
        v9 = v42;
        v16 += -1LL - (v16 >> 1);
      }
    }
    if ( v9 < v31 )
    {
      v21 = (unsigned __int8 *)*((_QWORD *)this + 4);
      v42 = v9;
      wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v32, &v42, v21);
      if ( v17 == v35 )
        v8 = memcmp_0(Buf1, Destination[1], v17);
      else
        v8 = v17 - v35;
      goto LABEL_37;
    }
    return v9;
  }
  v24 = 0;
  if ( !*v6 )
    return v9;
  while ( 1 )
  {
    v25 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v42 = v9;
    if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v32, &v42, v25) )
      break;
    if ( Size == v35 )
    {
      v8 = memcmp_0(Buf1, Destination[1], Size);
    }
    else
    {
      v23 = (unsigned int)Size - v35;
      v8 = Size - v35;
    }
    v26 = v8 == 0;
    if ( v8 <= 0 )
      goto LABEL_38;
    v9 = v42;
    if ( (unsigned int)++v24 >= *v6 )
      goto LABEL_37;
  }
  if ( *v6 != v24 )
  {
    v26 = *((_BYTE *)a2 + 2) == 1;
    *v6 = v24;
    if ( v26 )
    {
      v27 = (_WORD *)*((_QWORD *)a2 + 2);
      if ( v27 )
      {
        *v27 = v24;
      }
      else
      {
        *(_DWORD *)((__int64 (*)(void))_o__errno)() = 22;
        invalid_parameter_noinfo();
      }
    }
    else if ( *((_BYTE *)a2 + 2) == 2 )
    {
      memcpy_s_0(*((void *const *)a2 + 2), 4uLL, v6, 4uLL);
    }
  }
LABEL_37:
  v26 = v8 == 0;
LABEL_38:
  if ( !v26 )
    return v9;
  LOBYTE(v22) = v33;
  v28 = v33 != 0;
  if ( v33 )
  {
    v29 = Source + a6;
    if ( Source != Source + a6 )
    {
      Source += a6;
      if ( v33 == 1 )
      {
        if ( Destination[0] )
        {
          *(_WORD *)Destination[0] = v29;
        }
        else
        {
          *(_DWORD *)_o__errno(v23, v22) = 22;
          invalid_parameter_noinfo();
        }
      }
      else if ( v33 == 2 )
      {
        memcpy_s_0(Destination[0], 4uLL, &Source, 4uLL);
      }
    }
  }
  if ( v28 || *((_BYTE *)this + 56) )
    v7 = 1;
  *((_BYTE *)this + 56) = v7;
  return 0LL;
}
