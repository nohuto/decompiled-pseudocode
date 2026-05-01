/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180004E78
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180005164 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s @ 0x180001970 (memcpy_s.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180004A34 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     _invalid_parameter_noinfo @ 0x180043B2A (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x1800443A7 (memcmp_0.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  _DWORD *v6; // rdi
  char v7; // bl
  int v8; // r12d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  _WORD *v15; // rax
  unsigned __int64 v16; // rsi
  size_t v17; // rdi
  __int64 v18; // rax
  unsigned __int8 *v19; // r8
  int v20; // ecx
  unsigned __int8 *v21; // r8
  __int64 v22; // rcx
  int v23; // esi
  unsigned __int8 *v24; // r8
  bool v25; // zf
  _WORD *v26; // rax
  bool v27; // di
  __int16 v28; // r8
  unsigned __int8 *v30; // [rsp+20h] [rbp-50h]
  __int16 v31; // [rsp+28h] [rbp-48h] BYREF
  char v32; // [rsp+2Ah] [rbp-46h]
  int Source; // [rsp+2Ch] [rbp-44h] BYREF
  unsigned __int16 v34; // [rsp+30h] [rbp-40h]
  void *Destination[2]; // [rsp+38h] [rbp-38h]
  __int16 v36; // [rsp+48h] [rbp-28h] BYREF
  char v37; // [rsp+4Ah] [rbp-26h]
  int v38; // [rsp+4Ch] [rbp-24h]
  unsigned __int16 v39; // [rsp+50h] [rbp-20h]
  void *Buf2[2]; // [rsp+58h] [rbp-18h]
  unsigned __int8 *v41; // [rsp+B0h] [rbp+40h] BYREF
  void *Buf1; // [rsp+C8h] [rbp+58h]

  Buf1 = a4;
  v6 = (_DWORD *)((char *)a2 + 4);
  v7 = 0;
  v31 = *((_WORD *)this + 3);
  v8 = -1;
  v32 = *((_BYTE *)this + 8);
  Source = 0;
  v34 = 0;
  *(_OWORD *)Destination = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    v12 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
    v13 = (unsigned int)*v6;
    if ( v13 > v12 && (_DWORD)v13 != (_DWORD)v12 )
    {
      v25 = *((_BYTE *)a2 + 2) == 1;
      *v6 = v12;
      if ( v25 )
      {
        v14 = (unsigned __int16)v12;
        v15 = (_WORD *)*((_QWORD *)a2 + 2);
        if ( v15 )
        {
          *v15 = v14;
        }
        else
        {
          *(_DWORD *)_o__errno(v14) = 22;
          invalid_parameter_noinfo();
        }
      }
      else if ( *((_BYTE *)a2 + 2) == 2 )
      {
        memcpy_s(*((void *const *)a2 + 2), 4uLL, v6, 4uLL);
      }
    }
    v16 = (unsigned int)*v6;
    v17 = Size;
    v18 = v16 * *((_QWORD *)this + 2);
    *(_OWORD *)Buf2 = 0LL;
    v38 = 0;
    v39 = 0;
    v30 = &a3[v18];
    v36 = *((_WORD *)this + 3);
    v37 = *((_BYTE *)this + 8);
    while ( v16 )
    {
      v19 = (unsigned __int8 *)*((_QWORD *)this + 4);
      v41 = &a3[(v16 >> 1) * *((_QWORD *)this + 2)];
      wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v36, &v41, v19);
      if ( v17 == v39 )
        v20 = memcmp_0(Buf1, Buf2[1], v17);
      else
        v20 = v17 - v39;
      if ( v20 <= 0 )
      {
        v16 >>= 1;
      }
      else
      {
        a3 = v41;
        v16 += -1LL - (v16 >> 1);
      }
    }
    if ( a3 < v30 )
    {
      v21 = (unsigned __int8 *)*((_QWORD *)this + 4);
      v41 = a3;
      wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v31, &v41, v21);
      if ( v17 == v34 )
        v8 = memcmp_0(Buf1, Destination[1], v17);
      else
        v8 = v17 - v34;
      goto LABEL_37;
    }
    return a3;
  }
  v23 = 0;
  if ( !*v6 )
    return a3;
  while ( 1 )
  {
    v24 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v41 = a3;
    if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v31, &v41, v24) )
      break;
    if ( Size == v34 )
    {
      v8 = memcmp_0(Buf1, Destination[1], Size);
    }
    else
    {
      v22 = (unsigned int)Size - v34;
      v8 = Size - v34;
    }
    v25 = v8 == 0;
    if ( v8 <= 0 )
      goto LABEL_38;
    a3 = v41;
    if ( (unsigned int)++v23 >= *v6 )
      goto LABEL_37;
  }
  if ( *v6 != v23 )
  {
    v25 = *((_BYTE *)a2 + 2) == 1;
    *v6 = v23;
    if ( v25 )
    {
      v26 = (_WORD *)*((_QWORD *)a2 + 2);
      v22 = (unsigned __int16)v23;
      if ( v26 )
      {
        *v26 = v23;
      }
      else
      {
        *(_DWORD *)_o__errno((unsigned __int16)v23) = 22;
        invalid_parameter_noinfo();
      }
    }
    else if ( *((_BYTE *)a2 + 2) == 2 )
    {
      memcpy_s(*((void *const *)a2 + 2), 4uLL, v6, 4uLL);
    }
  }
LABEL_37:
  v25 = v8 == 0;
LABEL_38:
  if ( !v25 )
    return a3;
  v27 = v32 != 0;
  if ( v32 )
  {
    v28 = Source + a6;
    if ( Source != Source + a6 )
    {
      Source += a6;
      if ( v32 == 1 )
      {
        if ( Destination[0] )
        {
          *(_WORD *)Destination[0] = v28;
        }
        else
        {
          *(_DWORD *)_o__errno(v22) = 22;
          invalid_parameter_noinfo();
        }
      }
      else if ( v32 == 2 )
      {
        memcpy_s(Destination[0], 4uLL, &Source, 4uLL);
      }
    }
  }
  if ( v27 || *((_BYTE *)this + 56) )
    v7 = 1;
  *((_BYTE *)this + 56) = v7;
  return 0LL;
}
