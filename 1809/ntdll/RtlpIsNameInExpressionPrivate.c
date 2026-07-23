/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x1800FB70C
 * Callers:
 *     RtlIsNameInExpression @ 0x1800FB580 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800FB630 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memcmp @ 0x180093CC0 (memcmp.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     RtlDoesNameContainWildCards @ 0x1800FB524 (RtlDoesNameContainWildCards.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  unsigned __int16 *v5; // r14
  unsigned __int16 *v8; // rdx
  void *v9; // r10
  char v10; // r11
  unsigned __int16 v11; // bp
  __m128i v12; // xmm0
  unsigned __int16 v13; // r9
  const void *v14; // r11
  unsigned __int64 v15; // r10
  bool v16; // zf
  unsigned __int16 v17; // r9
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // cx
  char *v21; // r8
  char *v22; // r15
  int v23; // esi
  unsigned __int16 v24; // r9
  __int16 v25; // bp
  unsigned __int64 v26; // rcx
  __int64 v27; // r12
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned int v30; // r13d
  __int16 v31; // ax
  __int16 v32; // si
  unsigned __int16 v33; // r14
  char v34; // cl
  _OWORD *Heap; // rax
  __int128 v36; // xmm1
  char *v37; // rax
  __int64 v38; // rax
  unsigned __int16 v39; // cx
  __int64 v40; // rax
  __int16 v41; // si
  unsigned int v42; // edx
  char *v43; // rax
  unsigned __int16 v44; // r13
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int16 v47; // cx
  __int16 v48; // bx
  char v49; // [rsp+20h] [rbp-C8h]
  unsigned __int16 v51; // [rsp+22h] [rbp-C6h]
  unsigned __int16 v54; // [rsp+38h] [rbp-B0h]
  unsigned int v55; // [rsp+3Ch] [rbp-ACh]
  unsigned int v56; // [rsp+40h] [rbp-A8h]
  int v58; // [rsp+50h] [rbp-98h]
  char *v59; // [rsp+58h] [rbp-90h]
  _UNICODE_STRING Expression; // [rsp+60h] [rbp-88h] BYREF
  _WORD v61[16]; // [rsp+70h] [rbp-78h] BYREF
  char v62; // [rsp+90h] [rbp-58h] BYREF

  v5 = a2;
  v51 = 0;
  v8 = a1;
  v9 = 0LL;
  v10 = 0;
  v49 = 0;
  if ( !*v5 )
    return *a1 + *v5 == 0;
  v11 = *a1;
  if ( !*a1 )
    return *a1 + *v5 == 0;
  if ( v11 == 2 && **((_WORD **)a1 + 1) == 42 )
    return 1;
  if ( **((_WORD **)a1 + 1) == 42 )
  {
    v12 = *(__m128i *)a1;
    *(_DWORD *)(&Expression.MaximumLength + 1) = HIDWORD(*(_QWORD *)a1);
    Expression.Length = v12.m128i_i16[0] - 2;
    Expression.MaximumLength = v12.m128i_i16[1] - 2;
    Expression.Buffer = (wchar_t *)(_mm_srli_si128(v12, 8).m128i_u64[0] + 2);
    if ( !RtlDoesNameContainWildCards(&Expression) )
    {
      if ( *v5 < (unsigned __int16)(v11 - 2) )
        return 0;
      v15 = (*v5 - (unsigned __int64)v13) >> 1;
      if ( !a3 )
        return memcmp(v14, (const void *)(*((_QWORD *)v5 + 1) + 2LL * (unsigned int)v15), v13) == 0;
      v17 = v13 >> 1;
      v18 = 0;
      if ( v17 )
      {
        while ( 1 )
        {
          v19 = *((_WORD *)v14 + v18);
          if ( a4 )
            v19 = *(_WORD *)(a5 + 2LL * v19);
          if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v5 + 1) + 2LL * ((unsigned int)v15 + v18))) != v19 )
            break;
          if ( ++v18 >= v17 )
            return 1;
        }
        return 0;
      }
      return 1;
    }
    v8 = a1;
    v10 = (char)v9;
  }
  v61[0] = 0;
  v56 = 1;
  v21 = (char *)v61;
  v59 = (char *)v61;
  v22 = &v62;
  v54 = 0;
  v23 = 1;
  v24 = 0;
  if ( v11 > 0x7FFFu )
    return 0;
  v25 = 2 * v11;
  while ( 2 )
  {
    if ( v24 >= *v5 )
    {
      v49 = 1;
      v10 = 1;
      if ( *(_WORD *)&v21[2 * (v23 - 1)] == v25 )
        goto LABEL_80;
    }
    else
    {
      v26 = (unsigned __int64)v24 >> 1;
      v24 += 2;
      v54 = v24;
      v51 = *(_WORD *)(*((_QWORD *)v5 + 1) + 2 * v26);
    }
    v55 = 0;
    LODWORD(v27) = 0;
    LODWORD(v28) = 0;
    do
    {
      v29 = (unsigned int)v27;
      v27 = (unsigned int)(v27 + 1);
      v30 = ((unsigned int)*(unsigned __int16 *)&v21[2 * v29] + 1) >> 1;
      v31 = 0;
      while ( 1 )
      {
        if ( (_WORD)v30 == *v8 )
          goto LABEL_51;
        LOWORD(v30) = v31 + v30;
        v32 = 2 * v30;
        if ( (_WORD)v30 == *v8 )
        {
          *(_WORD *)&v22[2 * (unsigned int)v28] = v25;
          goto LABEL_50;
        }
        v33 = *(_WORD *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v30 >> 1));
        v34 = a3;
        if ( a3 && a4 )
          v33 = *(_WORD *)(a5 + 2LL * v33);
        if ( (unsigned int)v28 >= 0xE && !v9 )
        {
          v58 = *v8 >> 1;
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)(v58 + 1));
          v9 = Heap;
          if ( !Heap )
            RtlRaiseStatus(-1073741801);
          v8 = a1;
          v24 = v54;
          v10 = v49;
          *Heap = *(_OWORD *)v22;
          v36 = *((_OWORD *)v22 + 1);
          v22 = (char *)Heap;
          v21 = (char *)Heap + 2 * (unsigned int)(2 * v58 + 2);
          Heap[1] = v36;
          v37 = v59;
          v59 = v21;
          *(_OWORD *)v21 = *(_OWORD *)v37;
          *((_OWORD *)v21 + 1) = *((_OWORD *)v37 + 1);
          v34 = a3;
        }
        if ( v33 == 42 )
        {
          v38 = (unsigned int)v28;
          v28 = (unsigned int)(v28 + 1);
          *(_WORD *)&v22[2 * v38] = v32;
          *(_WORD *)&v22[2 * v28] = v32 + 3;
          LODWORD(v28) = v28 + 1;
LABEL_35:
          v5 = a2;
          goto LABEL_36;
        }
        if ( v33 == 60 )
        {
          v5 = a2;
          if ( v10 || v51 != 46 )
            goto LABEL_45;
          v39 = v24;
          if ( v24 >= *a2 )
          {
LABEL_43:
            *(_WORD *)&v22[2 * (unsigned int)v28] = v32 + 3;
          }
          else
          {
            while ( *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)v39 >> 1)) != 46 )
            {
              v39 += 2;
              if ( v39 >= *a2 )
                goto LABEL_43;
            }
LABEL_45:
            v40 = (unsigned int)v28;
            v28 = (unsigned int)(v28 + 1);
            *(_WORD *)&v22[2 * v40] = v32;
            *(_WORD *)&v22[2 * v28] = v32 + 3;
          }
          v8 = a1;
          LODWORD(v28) = v28 + 1;
          goto LABEL_36;
        }
        v41 = v32 + 4;
        if ( v33 != 62 )
          break;
        v5 = a2;
        v31 = 2;
        if ( !v10 )
        {
          if ( v51 != 46 )
            goto LABEL_49;
LABEL_36:
          v31 = 2;
        }
      }
      if ( v33 != 34 )
      {
        if ( !v10 )
        {
          if ( v33 != 63 )
          {
            v44 = v51;
LABEL_71:
            if ( v34 )
              v47 = *(_WORD *)(a5 + 2LL * v44);
            else
              v47 = v44;
            v16 = v33 == v47;
            v5 = a2;
            if ( !v16 )
              goto LABEL_51;
LABEL_49:
            *(_WORD *)&v22[2 * (unsigned int)v28] = v41;
LABEL_50:
            LODWORD(v28) = v28 + 1;
            goto LABEL_51;
          }
          v46 = (unsigned int)v28;
          LODWORD(v28) = v28 + 1;
          *(_WORD *)&v22[2 * v46] = v41;
        }
        v5 = a2;
        goto LABEL_51;
      }
      if ( v10 )
        goto LABEL_35;
      v44 = v51;
      if ( v51 != 46 )
        goto LABEL_71;
      v5 = a2;
      v45 = (unsigned int)v28;
      LODWORD(v28) = v28 + 1;
      *(_WORD *)&v22[2 * v45] = v41;
LABEL_51:
      if ( (unsigned int)v27 >= v56 )
        break;
      v42 = v55;
      do
      {
        if ( v42 >= (unsigned int)v28 )
          break;
        for ( ; (unsigned int)v27 < v56; v27 = (unsigned int)(v27 + 1) )
        {
          if ( *(_WORD *)&v21[2 * v27] >= *(_WORD *)&v22[2 * v42] )
            break;
        }
        ++v42;
      }
      while ( (unsigned int)v27 < v56 );
      v55 = v42;
      v8 = a1;
    }
    while ( (unsigned int)v27 < v56 );
    if ( (_DWORD)v28 )
    {
      v59 = v22;
      v43 = v21;
      v56 = v28;
      v21 = v22;
      v22 = v43;
      v23 = v28;
      if ( v10 )
      {
LABEL_80:
        v48 = *(_WORD *)&v21[2 * (v23 - 1)];
        if ( v9 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
        return v48 == v25;
      }
      continue;
    }
    break;
  }
  if ( v9 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  return 0;
}
