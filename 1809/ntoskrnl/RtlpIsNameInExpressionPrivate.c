/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x1400A3EE0
 * Callers:
 *     RtlIsNameInExpression @ 0x1400A3DB0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1400A3E40 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlDoesNameContainWildCards @ 0x1400A4480 (RtlDoesNameContainWildCards.c)
 *     RtlRaiseStatus @ 0x140128E70 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memcmp @ 0x1401961E0 (memcmp.c)
 *     EvaluateCurrentState @ 0x1401B3674 (EvaluateCurrentState.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  unsigned __int16 v5; // r13
  unsigned __int16 v8; // bp
  unsigned __int16 v9; // si
  __m128i v10; // xmm0
  __int16 v11; // eax^2
  __int16 v12; // bx
  unsigned __int64 v13; // xmm0_8
  unsigned __int16 v14; // bx
  unsigned __int64 v15; // r9
  unsigned __int16 v18; // bx
  unsigned __int16 v19; // cx
  char *v20; // r14
  char *v21; // r12
  unsigned int v22; // r13d
  int v23; // eax
  unsigned __int16 *v24; // r10
  _OWORD *v25; // r9
  __int16 v26; // bp
  unsigned __int16 v27; // r11
  unsigned __int16 *v28; // r8
  unsigned __int64 v29; // rcx
  __int64 v30; // rbx
  unsigned int v31; // edi
  __int16 v32; // ax
  unsigned int v33; // r15d
  unsigned __int16 v34; // dx
  __int16 v35; // si
  unsigned __int16 v36; // bp
  int v37; // r14d
  _OWORD *PoolWithTag; // rax
  __int128 v39; // xmm1
  _OWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdi
  unsigned __int16 v43; // dx
  unsigned __int16 v44; // ax
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdi
  char v49; // dl
  __int16 v50; // si
  unsigned __int16 v51; // cx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // r8d
  char *v57; // rax
  __int16 v58; // bx
  char v59; // [rsp+20h] [rbp-B8h]
  __int16 v60; // [rsp+22h] [rbp-B6h]
  unsigned __int16 v63; // [rsp+26h] [rbp-B2h]
  unsigned __int16 v64; // [rsp+28h] [rbp-B0h]
  unsigned int v65; // [rsp+30h] [rbp-A8h]
  PVOID P; // [rsp+40h] [rbp-98h]
  UNICODE_STRING Name; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int16 *v69; // [rsp+58h] [rbp-80h]
  _WORD v70[16]; // [rsp+60h] [rbp-78h] BYREF
  char v71; // [rsp+80h] [rbp-58h] BYREF

  v5 = 0;
  v69 = a1;
  v63 = 0;
  v8 = *a2;
  P = 0LL;
  v59 = 0;
  if ( !*a2 )
    return *a1 + v8 == 0;
  v9 = *a1;
  if ( !*a1 )
    return *a1 + v8 == 0;
  if ( v9 == 2 && **((_WORD **)a1 + 1) == 42 )
    return 1;
  if ( **((_WORD **)a1 + 1) == 42 )
  {
    v10 = *(__m128i *)a1;
    *(_DWORD *)(&Name.MaximumLength + 1) = HIDWORD(*(_QWORD *)a1);
    v11 = v10.m128i_i16[1];
    v12 = v10.m128i_i16[0];
    v13 = _mm_srli_si128(v10, 8).m128i_u64[0];
    v14 = v12 - 2;
    Name.Length = v14;
    Name.MaximumLength = v11 - 2;
    Name.Buffer = (wchar_t *)(v13 + 2);
    if ( !RtlDoesNameContainWildCards(&Name) )
    {
      if ( v8 < (unsigned __int16)(v9 - 2) )
        return 0;
      v15 = (v8 - (unsigned __int64)v14) >> 1;
      if ( !a3 )
        return memcmp((const void *)(v13 + 2), (const void *)(*((_QWORD *)a2 + 1) + 2LL * (unsigned int)v15), v14) == 0;
      v18 = v14 >> 1;
      if ( v18 )
      {
        while ( 1 )
        {
          v19 = *(_WORD *)(v13 + 2 + 2LL * v5);
          if ( a4 )
            v19 = *(_WORD *)(a5 + 2LL * v19);
          if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * ((unsigned int)v15 + v5))) != v19 )
            break;
          if ( ++v5 >= v18 )
            return 1;
        }
        return 0;
      }
      return 1;
    }
  }
  v20 = (char *)v70;
  *(_QWORD *)&Name.Length = v70;
  v21 = &v71;
  v70[0] = 0;
  v64 = 0;
  v22 = 1;
  v23 = EvaluateCurrentState(&g_Feature_579896632_58587734_FeatureDescriptorDetails);
  v24 = v69;
  if ( v23 && *v69 > 0x7FFFu )
    return 0;
  v25 = 0LL;
  v26 = 2 * *v69;
  v27 = 0;
  v60 = v26;
  while ( 2 )
  {
    v28 = a2;
    if ( v27 >= *a2 )
    {
      v59 = 1;
      if ( *(_WORD *)&v20[2 * v22 - 2] == v26 )
        goto LABEL_79;
    }
    else
    {
      v29 = (unsigned __int64)v27 >> 1;
      v27 += 2;
      v64 = v27;
      v63 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * v29);
    }
    v65 = 0;
    LODWORD(v30) = 0;
    v31 = 0;
    while ( 2 )
    {
      v32 = 0;
      v33 = ((unsigned int)*(unsigned __int16 *)&v20[2 * (unsigned int)v30] + 1) >> 1;
      v30 = (unsigned int)(v30 + 1);
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v34 = *v24;
              if ( (_WORD)v33 == *v24 )
              {
                v49 = v59;
                goto LABEL_65;
              }
              LOWORD(v33) = v32 + v33;
              v35 = 2 * v33;
              if ( (_WORD)v33 == v34 )
              {
                v26 = v60;
                v49 = v59;
                v55 = v31++;
                *(_WORD *)&v21[2 * v55] = v60;
                goto LABEL_66;
              }
              v36 = *(_WORD *)(*((_QWORD *)v24 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v33 >> 1));
              if ( a3 && a4 )
                v36 = *(_WORD *)(a5 + 2LL * v36);
              if ( v31 >= 0xE && !v25 )
              {
                v37 = v34 >> 1;
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v37 + 1), 0x6E725346u);
                P = PoolWithTag;
                if ( !PoolWithTag )
                  RtlRaiseStatus(-1073741801);
                v28 = a2;
                v24 = v69;
                v27 = v64;
                *PoolWithTag = *(_OWORD *)v21;
                v39 = *((_OWORD *)v21 + 1);
                v21 = (char *)PoolWithTag;
                v20 = (char *)PoolWithTag + 2 * (unsigned int)(2 * v37 + 2);
                v25 = PoolWithTag;
                PoolWithTag[1] = v39;
                v40 = *(_OWORD **)&Name.Length;
                *(_QWORD *)&Name.Length = v20;
                *(_OWORD *)v20 = *v40;
                *((_OWORD *)v20 + 1) = v40[1];
              }
              if ( v36 != 42 )
                break;
              v41 = v31;
              v42 = v31 + 1;
              *(_WORD *)&v21[2 * v41] = v35;
              v32 = 2;
              *(_WORD *)&v21[2 * v42] = v35 + 3;
              v31 = v42 + 1;
            }
            if ( v36 != 60 )
              break;
            if ( v59 || v63 != 46 )
              goto LABEL_45;
            v43 = *v28;
            v44 = v27;
            if ( v27 >= *v28 )
            {
LABEL_44:
              v46 = v31++;
              *(_WORD *)&v21[2 * v46] = v35 + 3;
              v32 = 2;
            }
            else
            {
              v45 = *((_QWORD *)v28 + 1);
              while ( *(_WORD *)(v45 + 2 * ((unsigned __int64)v44 >> 1)) != 46 )
              {
                v44 += 2;
                if ( v44 >= v43 )
                {
                  v28 = a2;
                  goto LABEL_44;
                }
              }
LABEL_45:
              v28 = a2;
              v47 = v31;
              v48 = v31 + 1;
              *(_WORD *)&v21[2 * v47] = v35;
              v32 = 2;
              *(_WORD *)&v21[2 * v48] = v35 + 3;
              v31 = v48 + 1;
            }
          }
          v49 = v59;
          v50 = v35 + 4;
          if ( v36 != 62 )
            break;
          v32 = 2;
          if ( !v59 && v63 != 46 )
            goto LABEL_54;
        }
        if ( v36 != 34 )
          break;
        if ( !v59 )
        {
          v51 = v63;
          if ( v63 == 46 )
          {
LABEL_54:
            v52 = v31++;
            *(_WORD *)&v21[2 * v52] = v50;
            goto LABEL_65;
          }
          goto LABEL_59;
        }
        v32 = 2;
      }
      if ( v59 )
        goto LABEL_65;
      if ( v36 == 63 )
      {
        v53 = v31++;
        *(_WORD *)&v21[2 * v53] = v50;
        goto LABEL_65;
      }
      v51 = v63;
LABEL_59:
      if ( a3 )
        v51 = *(_WORD *)(a5 + 2LL * v51);
      if ( v36 == v51 )
      {
        v54 = v31++;
        *(_WORD *)&v21[2 * v54] = v50;
      }
LABEL_65:
      v26 = v60;
LABEL_66:
      if ( (unsigned int)v30 < v22 )
      {
        v56 = v65;
        while ( v56 < v31 )
        {
          do
          {
            if ( *(_WORD *)&v20[2 * v30] >= *(_WORD *)&v21[2 * v56] )
              break;
            v30 = (unsigned int)(v30 + 1);
          }
          while ( (unsigned int)v30 < v22 );
          v65 = ++v56;
          if ( (unsigned int)v30 >= v22 )
            goto LABEL_72;
        }
        v28 = a2;
        continue;
      }
      break;
    }
LABEL_72:
    if ( v31 )
    {
      *(_QWORD *)&Name.Length = v21;
      v57 = v20;
      v20 = v21;
      v21 = v57;
      v22 = v31;
      if ( v49 )
      {
LABEL_79:
        v58 = *(_WORD *)&v20[2 * v22 - 2];
        if ( P )
          ExFreePoolWithTag(P, 0);
        return v58 == v26;
      }
      continue;
    }
    break;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0;
}
