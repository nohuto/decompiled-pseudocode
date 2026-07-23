/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x1400A3E20
 * Callers:
 *     RtlIsNameInExpression @ 0x1400A3CF0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1400A3D80 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlDoesNameContainWildCards @ 0x1400A43E0 (RtlDoesNameContainWildCards.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  unsigned __int16 v5; // r15
  unsigned __int16 *v6; // r14
  char v8; // r9
  unsigned __int16 v10; // si
  unsigned __int16 *v11; // rdx
  unsigned __int16 v12; // r11
  void *v13; // r10
  unsigned __int16 v14; // di
  __m128i v15; // xmm0
  __int16 v16; // eax^2
  __int16 v17; // bx
  unsigned __int64 v18; // xmm0_8
  unsigned __int16 v19; // bx
  unsigned __int64 v20; // r9
  unsigned __int16 v23; // bx
  unsigned __int16 v24; // cx
  char *v25; // r8
  char *v26; // r12
  unsigned int v27; // r13d
  unsigned __int16 v28; // bp
  __int16 v29; // di
  unsigned __int64 v30; // rcx
  __int64 v31; // rbx
  unsigned int v32; // edi
  __int64 v33; // rax
  unsigned int v34; // r15d
  __int16 v35; // ax
  unsigned __int16 v36; // dx
  __int16 v37; // si
  unsigned __int16 v38; // bp
  char v39; // cl
  int v40; // r14d
  _OWORD *PoolWithTag; // rax
  __int64 v42; // rcx
  char *v43; // rcx
  __int128 v44; // xmm1
  char *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdi
  unsigned __int16 v48; // ax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdi
  __int16 v52; // si
  __int64 v53; // rax
  bool v54; // zf
  __int64 v55; // rax
  unsigned int v56; // r9d
  char *v57; // rax
  unsigned __int16 v58; // cx
  __int64 v59; // rax
  __int16 v60; // bx
  unsigned __int16 v61; // [rsp+20h] [rbp-B8h]
  char v62; // [rsp+22h] [rbp-B6h]
  unsigned __int16 v63; // [rsp+24h] [rbp-B4h]
  __int16 v64; // [rsp+24h] [rbp-B4h]
  unsigned __int16 v67; // [rsp+28h] [rbp-B0h]
  char *v69; // [rsp+38h] [rbp-A0h]
  unsigned int v70; // [rsp+40h] [rbp-98h]
  UNICODE_STRING Name; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int16 *v72; // [rsp+58h] [rbp-80h]
  _WORD v73[16]; // [rsp+60h] [rbp-78h] BYREF
  char v74; // [rsp+80h] [rbp-58h] BYREF

  v5 = 0;
  v6 = a2;
  v72 = a2;
  v8 = 0;
  v67 = 0;
  v10 = *a2;
  v11 = a1;
  v12 = 0;
  v62 = 0;
  v13 = 0LL;
  if ( !v10 )
    return *a1 + v10 == 0;
  v14 = *a1;
  v63 = *a1;
  if ( !*a1 )
    return *a1 + v10 == 0;
  if ( v14 == 2 && **((_WORD **)a1 + 1) == 42 )
    return 1;
  if ( **((_WORD **)a1 + 1) == 42 )
  {
    v15 = *(__m128i *)a1;
    *(_DWORD *)(&Name.MaximumLength + 1) = HIDWORD(*(_QWORD *)a1);
    v16 = v15.m128i_i16[1];
    v17 = v15.m128i_i16[0];
    v18 = _mm_srli_si128(v15, 8).m128i_u64[0];
    v19 = v17 - 2;
    Name.Length = v19;
    Name.MaximumLength = v16 - 2;
    Name.Buffer = (wchar_t *)(v18 + 2);
    if ( !RtlDoesNameContainWildCards(&Name) )
    {
      if ( v10 < (unsigned __int16)(v63 - 2) )
        return 0;
      v20 = (v10 - (unsigned __int64)v19) >> 1;
      if ( !a3 )
        return memcmp((const void *)(v18 + 2), (const void *)(*((_QWORD *)v6 + 1) + 2LL * (unsigned int)v20), v19) == 0;
      v23 = v19 >> 1;
      if ( v23 )
      {
        while ( 1 )
        {
          v24 = *(_WORD *)(v18 + 2 + 2LL * v5);
          if ( a4 )
            v24 = *(_WORD *)(a5 + 2LL * v24);
          if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v6 + 1) + 2LL * ((unsigned int)v20 + v5))) != v24 )
            break;
          if ( ++v5 >= v23 )
            return 1;
        }
        return 0;
      }
      return 1;
    }
    v11 = a1;
    v13 = 0LL;
    v14 = v63;
    v12 = 0;
    v8 = 0;
  }
  v73[0] = 0;
  v61 = 0;
  v25 = (char *)v73;
  v69 = (char *)v73;
  v26 = &v74;
  v27 = 1;
  v28 = 0;
  if ( v14 > 0x7FFFu )
    return 0;
  v29 = 2 * v14;
  v64 = v29;
  while ( 2 )
  {
    if ( v28 >= *v6 )
    {
      v8 = 1;
      v62 = 1;
      if ( *(_WORD *)&v25[2 * v27 - 2] == v29 )
        goto LABEL_78;
    }
    else
    {
      v30 = (unsigned __int64)v28 >> 1;
      v28 += 2;
      v61 = v28;
      v12 = *(_WORD *)(*((_QWORD *)v6 + 1) + 2 * v30);
      v67 = v12;
    }
    v70 = 0;
    LODWORD(v31) = 0;
    v32 = 0;
    while ( 2 )
    {
      v33 = (unsigned int)v31;
      v31 = (unsigned int)(v31 + 1);
      v34 = ((unsigned int)*(unsigned __int16 *)&v25[2 * v33] + 1) >> 1;
      v35 = 0;
      while ( 1 )
      {
        v36 = *v11;
        if ( (_WORD)v34 == v36 )
          goto LABEL_56;
        LOWORD(v34) = v35 + v34;
        v37 = 2 * v34;
        if ( (_WORD)v34 == v36 )
          break;
        v38 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v34 >> 1));
        v39 = a3;
        if ( a3 && a4 )
          v38 = *(_WORD *)(a5 + 2LL * v38);
        if ( v32 >= 0xE && !v13 )
        {
          v40 = v36 >> 1;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v40 + 1), 0x6E725346u);
          v13 = PoolWithTag;
          if ( !PoolWithTag )
            RtlRaiseStatus(-1073741801);
          v8 = v62;
          v42 = (unsigned int)(2 * v40 + 2);
          v12 = v67;
          v6 = v72;
          *PoolWithTag = *(_OWORD *)v26;
          v43 = (char *)PoolWithTag + 2 * v42;
          v44 = *((_OWORD *)v26 + 1);
          v26 = (char *)PoolWithTag;
          PoolWithTag[1] = v44;
          v45 = v69;
          v69 = v43;
          *(_OWORD *)v43 = *(_OWORD *)v45;
          *((_OWORD *)v43 + 1) = *((_OWORD *)v45 + 1);
          v39 = a3;
        }
        if ( v38 == 42 )
        {
          v28 = v61;
          v11 = a1;
          v46 = v32;
          v47 = v32 + 1;
          *(_WORD *)&v26[2 * v46] = v37;
          v35 = 2;
          *(_WORD *)&v26[2 * v47] = v37 + 3;
          v32 = v47 + 1;
        }
        else if ( v38 == 60 )
        {
          v28 = v61;
          if ( v8 || v12 != 46 )
            goto LABEL_43;
          v48 = v61;
          if ( v61 >= *v6 )
          {
LABEL_42:
            v11 = a1;
            v49 = v32++;
            *(_WORD *)&v26[2 * v49] = v37 + 3;
            v35 = 2;
          }
          else
          {
            while ( *(_WORD *)(*((_QWORD *)v6 + 1) + 2 * ((unsigned __int64)v48 >> 1)) != 46 )
            {
              v48 += 2;
              if ( v48 >= *v6 )
                goto LABEL_42;
            }
LABEL_43:
            v11 = a1;
            v50 = v32;
            v51 = v32 + 1;
            *(_WORD *)&v26[2 * v50] = v37;
            v35 = 2;
            *(_WORD *)&v26[2 * v51] = v37 + 3;
            v32 = v51 + 1;
          }
        }
        else
        {
          v52 = v37 + 4;
          if ( v38 == 62 )
          {
            v35 = 2;
            v28 = v61;
            v11 = a1;
            if ( !v8 && v12 != 46 )
            {
              v53 = v32++;
              *(_WORD *)&v26[2 * v53] = v52;
              goto LABEL_56;
            }
          }
          else
          {
            if ( v38 != 34 )
            {
              if ( !v8 )
              {
                v54 = v38 == 63;
LABEL_53:
                if ( v54 || (!v39 ? (v58 = v12) : (v58 = *(_WORD *)(a5 + 2LL * v12)), v38 == v58) )
                {
                  v55 = v32++;
                  *(_WORD *)&v26[2 * v55] = v52;
                }
              }
              v28 = v61;
              goto LABEL_56;
            }
            if ( !v8 )
            {
              v54 = v12 == 46;
              goto LABEL_53;
            }
            v35 = 2;
            v28 = v61;
            v11 = a1;
          }
        }
      }
      v59 = v32++;
      *(_WORD *)&v26[2 * v59] = v64;
LABEL_56:
      v25 = v69;
      if ( (unsigned int)v31 < v27 )
      {
        v56 = v70;
        while ( v56 < v32 )
        {
          do
          {
            if ( *(_WORD *)&v69[2 * v31] >= *(_WORD *)&v26[2 * v56] )
              break;
            v31 = (unsigned int)(v31 + 1);
          }
          while ( (unsigned int)v31 < v27 );
          v70 = ++v56;
          if ( (unsigned int)v31 >= v27 )
          {
            v8 = v62;
            goto LABEL_63;
          }
        }
        v8 = v62;
        v11 = a1;
        continue;
      }
      break;
    }
LABEL_63:
    if ( v32 )
    {
      v69 = v26;
      v57 = v25;
      v25 = v26;
      v27 = v32;
      v29 = v64;
      v26 = v57;
      if ( v8 )
      {
LABEL_78:
        v60 = *(_WORD *)&v25[2 * v27 - 2];
        if ( v13 )
          ExFreePoolWithTag(v13, 0);
        return v60 == v29;
      }
      v11 = a1;
      continue;
    }
    break;
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return 0;
}
