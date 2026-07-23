/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x1800F50DC
 * Callers:
 *     RtlIsNameInExpression @ 0x1800F4F50 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800F5000 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     memcmp @ 0x180090C00 (memcmp.c)
 *     RtlDoesNameContainWildCards @ 0x1800F4F00 (RtlDoesNameContainWildCards.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  unsigned __int16 *v5; // r14
  unsigned __int16 *v8; // rdx
  void *v9; // r8
  char v10; // r11
  unsigned __int16 v11; // bp
  __m128i v12; // xmm0
  unsigned __int16 v13; // bx
  __int64 v14; // rax
  wchar_t *v15; // rsi
  unsigned __int64 v16; // r9
  bool v17; // zf
  unsigned __int16 v18; // bx
  unsigned __int16 v19; // dx
  wchar_t v20; // cx
  char *v22; // r9
  char *v23; // r15
  int v24; // esi
  unsigned __int16 v25; // r10
  __int16 v26; // bp
  unsigned __int16 v27; // ax
  __int64 v28; // r12
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned int v31; // r13d
  __int16 v32; // ax
  __int16 v33; // si
  unsigned __int16 v34; // r14
  char v35; // cl
  _OWORD *Heap; // rax
  __int128 v37; // xmm1
  char *v38; // rax
  __int64 v39; // rax
  unsigned __int16 v40; // cx
  __int64 v41; // rax
  __int16 v42; // si
  unsigned __int16 v43; // r13
  __int64 v44; // rax
  unsigned int v45; // edx
  char *v46; // rax
  __int16 v47; // bx
  __int64 v48; // rax
  unsigned __int16 v49; // cx
  char v50; // [rsp+20h] [rbp-C8h]
  unsigned __int16 v52; // [rsp+22h] [rbp-C6h]
  unsigned __int16 v55; // [rsp+38h] [rbp-B0h]
  unsigned int v56; // [rsp+3Ch] [rbp-ACh]
  unsigned int v57; // [rsp+40h] [rbp-A8h]
  char *v59; // [rsp+50h] [rbp-98h]
  int v60; // [rsp+58h] [rbp-90h]
  _UNICODE_STRING Expression; // [rsp+60h] [rbp-88h] BYREF
  _WORD v62[16]; // [rsp+70h] [rbp-78h] BYREF
  char v63; // [rsp+90h] [rbp-58h] BYREF

  v5 = a2;
  v52 = 0;
  v8 = a1;
  v9 = 0LL;
  v10 = 0;
  v50 = 0;
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
    *(_QWORD *)&Expression.Length = *(_QWORD *)a1;
    v13 = Expression.Length - 2;
    v14 = *(_QWORD *)&Expression.Length >> 16;
    v15 = (wchar_t *)(_mm_srli_si128(v12, 8).m128i_u64[0] + 2);
    Expression.Length -= 2;
    Expression.Buffer = v15;
    Expression.MaximumLength = v14 - 2;
    if ( !RtlDoesNameContainWildCards(&Expression) )
    {
      if ( *v5 >= (unsigned __int16)(v11 - 2) )
      {
        v16 = (*v5 - (unsigned __int64)v13) >> 1;
        if ( !a3 )
          return memcmp(v15, (const void *)(*((_QWORD *)v5 + 1) + 2LL * (unsigned int)v16), v13) == 0;
        v18 = v13 >> 1;
        v19 = 0;
        if ( v18 )
        {
          while ( 1 )
          {
            v20 = v15[v19];
            if ( a4 )
              v20 = *(_WORD *)(a5 + 2LL * v20);
            if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v5 + 1) + 2LL * ((unsigned int)v16 + v19))) != v20 )
              break;
            if ( ++v19 >= v18 )
              return 1;
          }
          return 0;
        }
        return 1;
      }
      return 0;
    }
    v8 = a1;
    v9 = 0LL;
    v10 = 0;
  }
  v22 = (char *)v62;
  v62[0] = 0;
  v59 = (char *)v62;
  v23 = &v63;
  v24 = 1;
  v57 = 1;
  v25 = 0;
  v55 = 0;
  v26 = 2 * v11;
  do
  {
    if ( v25 >= *v5 )
    {
      v50 = 1;
      v10 = 1;
      if ( *(_WORD *)&v22[2 * (v24 - 1)] == v26 )
        break;
    }
    else
    {
      v27 = *(_WORD *)(*((_QWORD *)v5 + 1) + 2 * ((unsigned __int64)v25 >> 1));
      v25 += 2;
      v52 = v27;
      v55 = v25;
    }
    v56 = 0;
    LODWORD(v28) = 0;
    LODWORD(v29) = 0;
    do
    {
      v30 = (unsigned int)v28;
      v28 = (unsigned int)(v28 + 1);
      v31 = ((unsigned int)*(unsigned __int16 *)&v22[2 * v30] + 1) >> 1;
      v32 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (_WORD)v31 == *v8 )
            goto LABEL_53;
          LOWORD(v31) = v32 + v31;
          v33 = 2 * v31;
          if ( (_WORD)v31 == *v8 )
          {
            *(_WORD *)&v23[2 * (unsigned int)v29] = v26;
            goto LABEL_67;
          }
          v34 = *(_WORD *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v31 >> 1));
          v35 = a3;
          if ( a3 && a4 )
            v34 = *(_WORD *)(a5 + 2LL * v34);
          if ( (unsigned int)v29 >= 0xE && !v9 )
          {
            v60 = *v8 >> 1;
            Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)(v60 + 1));
            v9 = Heap;
            if ( !Heap )
              RtlRaiseStatus(-1073741801);
            v8 = a1;
            v25 = v55;
            v10 = v50;
            *Heap = *(_OWORD *)v23;
            v37 = *((_OWORD *)v23 + 1);
            v23 = (char *)Heap;
            v22 = (char *)Heap + 2 * (unsigned int)(2 * v60 + 2);
            Heap[1] = v37;
            v38 = v59;
            v59 = v22;
            *(_OWORD *)v22 = *(_OWORD *)v38;
            *((_OWORD *)v22 + 1) = *((_OWORD *)v38 + 1);
            v35 = a3;
          }
          if ( v34 == 42 )
          {
            v39 = (unsigned int)v29;
            v29 = (unsigned int)(v29 + 1);
            *(_WORD *)&v23[2 * v39] = v33;
            *(_WORD *)&v23[2 * v29] = v33 + 3;
            LODWORD(v29) = v29 + 1;
LABEL_34:
            v5 = a2;
            goto LABEL_35;
          }
          if ( v34 != 60 )
            break;
          v5 = a2;
          if ( v10 || v52 != 46 )
            goto LABEL_44;
          v40 = v25;
          if ( v25 < *a2 )
          {
            while ( *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)v40 >> 1)) != 46 )
            {
              v40 += 2;
              if ( v40 >= *a2 )
                goto LABEL_42;
            }
LABEL_44:
            v41 = (unsigned int)v29;
            v29 = (unsigned int)(v29 + 1);
            *(_WORD *)&v23[2 * v41] = v33;
            *(_WORD *)&v23[2 * v29] = v33 + 3;
            goto LABEL_43;
          }
LABEL_42:
          *(_WORD *)&v23[2 * (unsigned int)v29] = v33 + 3;
LABEL_43:
          v8 = a1;
          LODWORD(v29) = v29 + 1;
LABEL_35:
          v32 = 2;
        }
        v42 = v33 + 4;
        if ( v34 != 62 )
          break;
        v5 = a2;
        v32 = 2;
        if ( !v10 && v52 != 46 )
          goto LABEL_66;
      }
      if ( v34 != 34 )
      {
        if ( !v10 )
        {
          if ( v34 != 63 )
          {
            v43 = v52;
            goto LABEL_73;
          }
          v48 = (unsigned int)v29;
          LODWORD(v29) = v29 + 1;
          *(_WORD *)&v23[2 * v48] = v42;
        }
        v5 = a2;
        goto LABEL_53;
      }
      if ( v10 )
        goto LABEL_34;
      v43 = v52;
      if ( v52 == 46 )
      {
        v5 = a2;
        v44 = (unsigned int)v29;
        LODWORD(v29) = v29 + 1;
        *(_WORD *)&v23[2 * v44] = v42;
        goto LABEL_53;
      }
LABEL_73:
      if ( v35 )
        v49 = *(_WORD *)(a5 + 2LL * v43);
      else
        v49 = v43;
      v17 = v34 == v49;
      v5 = a2;
      if ( v17 )
      {
LABEL_66:
        *(_WORD *)&v23[2 * (unsigned int)v29] = v42;
LABEL_67:
        LODWORD(v29) = v29 + 1;
      }
LABEL_53:
      if ( (unsigned int)v28 >= v57 )
        break;
      v45 = v56;
      do
      {
        if ( v45 >= (unsigned int)v29 )
          break;
        for ( ; (unsigned int)v28 < v57; v28 = (unsigned int)(v28 + 1) )
        {
          if ( *(_WORD *)&v22[2 * v28] >= *(_WORD *)&v23[2 * v45] )
            break;
        }
        ++v45;
      }
      while ( (unsigned int)v28 < v57 );
      v56 = v45;
      v8 = a1;
    }
    while ( (unsigned int)v28 < v57 );
    if ( !(_DWORD)v29 )
    {
      if ( v9 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      return 0;
    }
    v59 = v23;
    v46 = v22;
    v57 = v29;
    v22 = v23;
    v23 = v46;
    v24 = v29;
  }
  while ( !v10 );
  v47 = *(_WORD *)&v22[2 * (v24 - 1)];
  if ( v9 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  return v47 == v26;
}
