/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x1800072A4
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180007560 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180006E10 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     memcmp_0 @ 0x1800C72C1 (memcmp_0.c)
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
  int v7; // r12d
  char v8; // bl
  unsigned __int8 *v9; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int8 **v14; // r8
  rsize_t v15; // r9
  rsize_t v16; // rdx
  unsigned __int64 v17; // rsi
  size_t v18; // rdi
  __int64 v19; // rax
  unsigned __int8 *v20; // r8
  int v21; // ecx
  unsigned __int8 *v22; // r8
  int v23; // esi
  unsigned __int8 *v24; // r8
  bool v25; // zf
  char v26; // al
  unsigned __int8 **v27; // r8
  rsize_t v28; // r9
  bool v29; // di
  __int16 v30; // r9
  unsigned __int8 **p_Source; // r8
  rsize_t v32; // r9
  unsigned __int8 *v34; // [rsp+20h] [rbp-50h]
  __int16 v35; // [rsp+28h] [rbp-48h] BYREF
  char v36; // [rsp+2Ah] [rbp-46h]
  int Source; // [rsp+2Ch] [rbp-44h] BYREF
  unsigned __int16 v38; // [rsp+30h] [rbp-40h]
  void *Destination[2]; // [rsp+38h] [rbp-38h]
  __int16 v40; // [rsp+48h] [rbp-28h] BYREF
  char v41; // [rsp+4Ah] [rbp-26h]
  int v42; // [rsp+4Ch] [rbp-24h]
  unsigned __int16 v43; // [rsp+50h] [rbp-20h]
  void *Buf2[2]; // [rsp+58h] [rbp-18h]
  unsigned __int8 *v45; // [rsp+B0h] [rbp+40h] BYREF
  void *Buf1; // [rsp+C8h] [rbp+58h]

  Buf1 = a4;
  v6 = (_DWORD *)((char *)a2 + 4);
  v7 = -1;
  v35 = *((_WORD *)this + 3);
  v8 = 0;
  v36 = *((_BYTE *)this + 8);
  v9 = a3;
  Source = 0;
  v38 = 0;
  *(_OWORD *)Destination = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    v12 = (*((_QWORD *)this + 4) - (_QWORD)a3) / *((_QWORD *)this + 2);
    v13 = (unsigned int)*v6;
    if ( v13 <= v12 || (_DWORD)v13 == (_DWORD)v12 )
      goto LABEL_9;
    v25 = *((_BYTE *)a2 + 2) == 1;
    *v6 = v12;
    if ( v25 )
    {
      LOWORD(v45) = v12;
      v14 = &v45;
      v15 = 2LL;
      v16 = 2LL;
    }
    else
    {
      if ( *((_BYTE *)a2 + 2) != 2 )
      {
LABEL_9:
        v17 = (unsigned int)*v6;
        v18 = Size;
        v19 = v17 * *((_QWORD *)this + 2);
        *(_OWORD *)Buf2 = 0LL;
        v42 = 0;
        v43 = 0;
        v34 = &v9[v19];
        v40 = *((_WORD *)this + 3);
        v41 = *((_BYTE *)this + 8);
        while ( v17 )
        {
          v20 = (unsigned __int8 *)*((_QWORD *)this + 4);
          v45 = &v9[(v17 >> 1) * *((_QWORD *)this + 2)];
          wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v40, &v45, v20);
          if ( v18 == v43 )
            v21 = memcmp_0(Buf1, Buf2[1], v18);
          else
            v21 = v18 - v43;
          if ( v21 <= 0 )
          {
            v17 >>= 1;
          }
          else
          {
            v9 = v45;
            v17 += -1LL - (v17 >> 1);
          }
        }
        if ( v9 < v34 )
        {
          v22 = (unsigned __int8 *)*((_QWORD *)this + 4);
          v45 = v9;
          wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v35, &v45, v22);
          if ( v18 == v38 )
            v7 = memcmp_0(Buf1, Destination[1], v18);
          else
            v7 = v18 - v38;
          goto LABEL_35;
        }
        return v9;
      }
      v15 = 4LL;
      v14 = (unsigned __int8 **)((char *)a2 + 4);
      v16 = 4LL;
    }
    memcpy_s(*((void *const *)a2 + 2), v16, v14, v15);
    goto LABEL_9;
  }
  v23 = 0;
  if ( !*v6 )
    return v9;
  while ( 1 )
  {
    v24 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v45 = v9;
    if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v35, &v45, v24) )
      break;
    if ( Size == v38 )
      v7 = memcmp_0(Buf1, Destination[1], Size);
    else
      v7 = Size - v38;
    v25 = v7 == 0;
    if ( v7 <= 0 )
      goto LABEL_36;
    v9 = v45;
    if ( (unsigned int)++v23 >= *v6 )
      goto LABEL_35;
  }
  if ( *v6 != v23 )
  {
    v26 = *((_BYTE *)a2 + 2);
    *v6 = v23;
    if ( v26 == 1 )
    {
      LOWORD(v45) = v23;
      v27 = &v45;
      v28 = 2LL;
LABEL_34:
      memcpy_s(*((void *const *)a2 + 2), v28, v27, v28);
      goto LABEL_35;
    }
    if ( v26 == 2 )
    {
      v28 = 4LL;
      v27 = (unsigned __int8 **)v6;
      goto LABEL_34;
    }
  }
LABEL_35:
  v25 = v7 == 0;
LABEL_36:
  if ( !v25 )
    return v9;
  v29 = v36 != 0;
  if ( !v36 )
    goto LABEL_44;
  v30 = Source + a6;
  if ( Source == Source + a6 )
    goto LABEL_44;
  Source += a6;
  if ( v36 == 1 )
  {
    LOWORD(v45) = v30;
    p_Source = &v45;
    v32 = 2LL;
  }
  else
  {
    if ( v36 != 2 )
      goto LABEL_44;
    v32 = 4LL;
    p_Source = (unsigned __int8 **)&Source;
  }
  memcpy_s(Destination[0], v32, p_Source, v32);
LABEL_44:
  if ( v29 || *((_BYTE *)this + 56) )
    v8 = 1;
  *((_BYTE *)this + 56) = v8;
  return 0LL;
}
