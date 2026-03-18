/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x140096360
 * Callers:
 *     RtlIsNameInExpression @ 0x140096220 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1400962B0 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     RtlDoesNameContainWildCards @ 0x1400967E0 (RtlDoesNameContainWildCards.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // bp
  unsigned __int16 *v9; // r11
  __int16 v11; // r15
  int v13; // r8d
  __int16 v14; // r15
  __int16 *v15; // r12
  unsigned __int16 v16; // r10
  unsigned __int64 v17; // rcx
  __int64 v18; // rsi
  unsigned int v19; // ebx
  unsigned int v20; // r14d
  __int64 v21; // rax
  unsigned int v22; // edi
  __int16 v23; // ax
  _OWORD *v24; // r9
  unsigned __int16 v25; // dx
  __int16 v26; // bp
  unsigned __int16 v27; // r15
  char v28; // al
  __int64 v29; // rax
  __int64 v30; // rbx
  __int16 v31; // bp
  bool v32; // zf
  unsigned __int16 v33; // cx
  __int64 v34; // rax
  __int64 v35; // rax
  __int16 v36; // bx
  unsigned __int16 v38; // cx
  __int64 v39; // rax
  __m128i v40; // xmm0
  __int16 v41; // eax^2
  __int16 v42; // di
  unsigned __int64 v43; // xmm0_8
  unsigned __int16 v44; // di
  unsigned __int64 v45; // r9
  unsigned __int16 v46; // di
  unsigned __int16 v47; // cx
  _OWORD *PoolWithTag; // rax
  _OWORD *v49; // rcx
  __int128 v50; // xmm1
  __int16 *v51; // rcx
  __int128 v52; // xmm1
  char v53; // [rsp+20h] [rbp-B8h]
  __int16 v54; // [rsp+22h] [rbp-B6h]
  unsigned __int16 v56; // [rsp+26h] [rbp-B2h]
  unsigned __int16 v58; // [rsp+30h] [rbp-A8h]
  unsigned int v59; // [rsp+34h] [rbp-A4h]
  UNICODE_STRING Name; // [rsp+38h] [rbp-A0h] BYREF
  unsigned __int16 *v61; // [rsp+48h] [rbp-90h]
  PVOID P; // [rsp+50h] [rbp-88h]
  int v63; // [rsp+58h] [rbp-80h]
  __int16 v64; // [rsp+60h] [rbp-78h] BYREF
  char v65; // [rsp+80h] [rbp-58h] BYREF

  v5 = *a2;
  v6 = 0;
  v53 = 0;
  v61 = a2;
  v9 = a2;
  v56 = 0;
  P = 0LL;
  if ( !v5 )
    return *a1 + v5 == 0;
  v11 = *a1;
  if ( !*a1 )
    return *a1 + v5 == 0;
  if ( v11 == 2 && **((_WORD **)a1 + 1) == 42 )
    return 1;
  if ( **((_WORD **)a1 + 1) == 42 )
  {
    v40 = *(__m128i *)a1;
    *(_DWORD *)(&Name.MaximumLength + 1) = HIDWORD(*(_QWORD *)a1);
    v41 = v40.m128i_i16[1];
    v42 = v40.m128i_i16[0];
    v43 = _mm_srli_si128(v40, 8).m128i_u64[0];
    v44 = v42 - 2;
    Name.Length = v44;
    Name.MaximumLength = v41 - 2;
    Name.Buffer = (wchar_t *)(v43 + 2);
    if ( !RtlDoesNameContainWildCards(&Name) )
    {
      if ( v5 < (unsigned __int16)(v11 - 2) )
        return 0;
      v45 = (v5 - (unsigned __int64)v44) >> 1;
      if ( !a3 )
        return memcmp((const void *)(v43 + 2), (const void *)(*((_QWORD *)v61 + 1) + 2LL * (unsigned int)v45), v44) == 0;
      v46 = v44 >> 1;
      if ( v46 )
      {
        do
        {
          v47 = *(_WORD *)(v43 + 2 + 2LL * v6);
          if ( a4 )
            v47 = *(_WORD *)(a5 + 2LL * v47);
          if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v61 + 1) + 2LL * ((unsigned int)v45 + v6))) != v47 )
            return 0;
          ++v6;
        }
        while ( v6 < v46 );
      }
      return 1;
    }
    v9 = v61;
  }
  v64 = 0;
  v13 = 1;
  *(_QWORD *)&Name.Length = &v65;
  v14 = 2 * v11;
  v59 = 1;
  v54 = v14;
  v15 = &v64;
  v16 = 0;
  v58 = 0;
  while ( 2 )
  {
    if ( v16 >= *v9 )
    {
      v53 = 1;
      if ( v15[v13 - 1] == v14 )
      {
LABEL_43:
        v36 = v15[v13 - 1];
        if ( P )
          ExFreePoolWithTag(P, 0);
        return v36 == v14;
      }
    }
    else
    {
      v17 = (unsigned __int64)v16 >> 1;
      v16 += 2;
      v58 = v16;
      v56 = *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * v17);
    }
    LODWORD(v18) = 0;
    v19 = 0;
    v20 = 0;
    while ( 2 )
    {
      v21 = (unsigned int)v18;
      v18 = (unsigned int)(v18 + 1);
      v22 = ((unsigned int)(unsigned __int16)v15[v21] + 1) >> 1;
      v23 = 0;
      v24 = *(_OWORD **)&Name.Length;
      while ( 1 )
      {
        v25 = *a1;
        if ( (_WORD)v22 == *a1 )
          goto LABEL_30;
        LOWORD(v22) = v23 + v22;
        v26 = 2 * v22;
        if ( (_WORD)v22 == v25 )
          break;
        v27 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v22 >> 1));
        v28 = a3;
        if ( a3 && a4 )
        {
          v27 = *(_WORD *)(a5 + 2LL * v27);
          v28 = a3;
        }
        if ( v19 >= 0xE && !P )
        {
          v63 = v25 >> 1;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v63 + 1), 0x6E725346u);
          P = PoolWithTag;
          if ( !PoolWithTag )
            RtlRaiseStatus(-1073741801);
          v49 = *(_OWORD **)&Name.Length;
          v24 = PoolWithTag;
          v16 = v58;
          v9 = v61;
          *(_QWORD *)&Name.Length = PoolWithTag;
          *PoolWithTag = *v49;
          v50 = v49[1];
          LODWORD(v49) = v63;
          PoolWithTag[1] = v50;
          v51 = (__int16 *)PoolWithTag + (unsigned int)(2 * (_DWORD)v49 + 2);
          v28 = a3;
          *(_OWORD *)v51 = *(_OWORD *)v15;
          v52 = *((_OWORD *)v15 + 1);
          v15 = v51;
          *((_OWORD *)v51 + 1) = v52;
        }
        if ( v27 == 42 )
          goto LABEL_19;
        if ( v27 == 60 )
        {
          if ( v56 != 46 || v53 )
            goto LABEL_19;
          v38 = v16;
          if ( v16 >= *v9 )
          {
LABEL_52:
            v39 = v19++;
            *((_WORD *)v24 + v39) = v26 + 3;
            v23 = 2;
          }
          else
          {
            while ( *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)v38 >> 1)) != 46 )
            {
              v38 += 2;
              if ( v38 >= *v9 )
                goto LABEL_52;
            }
LABEL_19:
            v29 = v19;
            v30 = v19 + 1;
            *((_WORD *)v24 + v29) = v26;
            v23 = 2;
            *((_WORD *)v24 + v30) = v26 + 3;
            v19 = v30 + 1;
          }
        }
        else
        {
          v31 = v26 + 4;
          if ( v27 == 62 )
          {
            v23 = 2;
            if ( !v53 && v56 != 46 )
              goto LABEL_29;
          }
          else
          {
            if ( v27 != 34 )
            {
              if ( !v53 )
              {
                v32 = v27 == 63;
                goto LABEL_25;
              }
              goto LABEL_30;
            }
            if ( !v53 )
            {
              v32 = v56 == 46;
LABEL_25:
              if ( v32 || (!v28 ? (v33 = v56) : (v33 = *(_WORD *)(a5 + 2LL * v56)), v27 == v33) )
              {
LABEL_29:
                v34 = v19++;
                *((_WORD *)v24 + v34) = v31;
              }
LABEL_30:
              v14 = v54;
              goto LABEL_31;
            }
            v23 = 2;
          }
        }
      }
      v14 = v54;
      v35 = v19++;
      *((_WORD *)v24 + v35) = v54;
LABEL_31:
      if ( (unsigned int)v18 < v59 )
      {
        while ( v20 < v19 )
        {
          do
          {
            if ( (unsigned __int16)v15[v18] >= *((_WORD *)v24 + v20) )
              break;
            v18 = (unsigned int)(v18 + 1);
          }
          while ( (unsigned int)v18 < v59 );
          ++v20;
          if ( (unsigned int)v18 >= v59 )
            goto LABEL_32;
        }
        continue;
      }
      break;
    }
LABEL_32:
    if ( v19 )
    {
      v13 = v19;
      *(_QWORD *)&Name.Length = v15;
      v15 = (__int16 *)v24;
      v59 = v19;
      if ( v53 )
        goto LABEL_43;
      continue;
    }
    break;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0;
}
