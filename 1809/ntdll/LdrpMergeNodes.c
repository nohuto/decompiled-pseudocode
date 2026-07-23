/*
 * XREFs of LdrpMergeNodes @ 0x18007AD04
 * Callers:
 *     LdrpCondenseGraphRecurse @ 0x180029398 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

int __fastcall LdrpMergeNodes(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  bool v8; // zf
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // r8
  _QWORD *v15; // rdx
  _QWORD *i; // rcx
  _QWORD *v17; // rdi
  _QWORD *v18; // r8
  _QWORD *v19; // rax
  _QWORD **v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  _QWORD **v23; // r14
  _QWORD **v24; // rsi
  _QWORD *k; // rdi
  _QWORD *v26; // rdi
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  _QWORD *v29; // r8
  __int64 v30; // rdx
  _QWORD **v31; // r8
  _QWORD *v32; // r9
  _QWORD *j; // r10
  _QWORD **v34; // rax
  _QWORD *v35; // r9
  _QWORD *v36; // rax
  _QWORD **v37; // rcx
  _QWORD *m; // r9
  _QWORD **v39; // rax
  _QWORD **v40; // rax

  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrddag.c",
      996,
      (unsigned int)"LdrpMergeNodes",
      2,
      "Merging a cycle rooted at %wZ.\n",
      *(_QWORD *)a1 - 72LL);
  v4 = *a2;
  do
  {
    v5 = (_QWORD *)*(v4 - 8);
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 )
      goto LABEL_80;
    v7 = (_QWORD *)v5[1];
    if ( (_QWORD *)*v7 != v5 )
      goto LABEL_80;
    v8 = (LdrpDebugFlags & 5) == 0;
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    if ( !v8 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrddag.c",
        1032,
        (unsigned int)"LdrpMergeNodes",
        2,
        "Adding cyclic module %wZ.\n",
        v5 - 9);
    *(v5 - 1) = a1;
    v9 = *(_QWORD **)(a1 + 8);
    if ( *v9 != a1 )
LABEL_80:
      __fastfail(3u);
    v5[1] = v9;
    *v5 = a1;
    *v9 = v5;
    *(_QWORD *)(a1 + 8) = v5;
    *(_DWORD *)(a1 + 24) += *((_DWORD *)v4 - 10);
    v10 = (_QWORD *)*(v4 - 3);
    *((_DWORD *)v4 - 10) = 0;
    v11 = v10;
    *((_DWORD *)v4 - 2) = -5;
    do
    {
      v11 = (_QWORD *)*v11;
      v11[3] = a1;
    }
    while ( v11 != v10 );
    v12 = (_QWORD *)*(v4 - 2);
    v13 = v12;
    do
    {
      v13 = (_QWORD *)*v13;
      *(v13 - 1) = a1;
    }
    while ( v13 != v12 );
    v4 = (_QWORD *)*v4;
  }
  while ( v4 );
  v14 = *(_QWORD **)(a1 + 40);
  v15 = v14;
  for ( i = (_QWORD *)*v14; ; i = (_QWORD *)*v15 )
  {
    if ( i[1] == a1 )
    {
      v13 = (_QWORD *)*i;
      *v15 = *i;
      if ( *(_QWORD **)(a1 + 40) == i )
      {
        v13 = 0LL;
        if ( v15 != i )
          v13 = v15;
        *(_QWORD *)(a1 + 40) = v13;
      }
      *i = 0LL;
    }
    else
    {
      v15 = i;
    }
    if ( i == v14 )
      break;
  }
  v17 = *a2;
  do
  {
    while ( 1 )
    {
      v20 = (_QWORD **)*(v17 - 3);
      if ( !v20 )
        break;
      v21 = *v20;
      if ( *v20 == v20 )
      {
        *(v17 - 3) = 0LL;
      }
      else
      {
        v13 = (_QWORD *)*v21;
        *v20 = (_QWORD *)*v21;
      }
      if ( !v21 )
        break;
      v22 = v21[1];
      if ( v22 == a1 )
      {
        *v21 = 0LL;
      }
      else
      {
        v18 = *(_QWORD **)(a1 + 40);
        if ( v18 )
        {
          v19 = *(_QWORD **)(a1 + 40);
          while ( 1 )
          {
            v19 = (_QWORD *)*v19;
            if ( v19[1] == v22 )
              break;
            if ( v19 == v18 )
            {
              v13 = (_QWORD *)*v18;
              *v21 = *v18;
              *v18 = v21;
              goto LABEL_28;
            }
          }
          v31 = *(_QWORD ***)(v22 + 48);
          v32 = v21 + 2;
          for ( j = *v31; j != v32; j = (_QWORD *)*j )
            v31 = (_QWORD **)j;
          *v31 = (_QWORD *)*v32;
          if ( *(_QWORD **)(v22 + 48) == v32 )
          {
            v34 = 0LL;
            if ( v31 != v32 )
              v34 = v31;
            *(_QWORD *)(v22 + 48) = v34;
          }
          --*(_DWORD *)(v22 + 24);
          LODWORD(v13) = RtlFreeHeap(LdrpHeap, 0, v21);
        }
        else
        {
          *v21 = v21;
LABEL_28:
          *(_QWORD *)(a1 + 40) = v21;
        }
      }
    }
    v17 = (_QWORD *)*v17;
  }
  while ( v17 );
  v23 = *(_QWORD ***)(a1 + 48);
  v24 = v23;
  for ( k = *v23; ; k = *v24 )
  {
    if ( k[1] == a1 )
    {
      *v24 = (_QWORD *)*k;
      if ( *(_QWORD **)(a1 + 48) == k )
      {
        v40 = 0LL;
        if ( v24 != k )
          v40 = v24;
        *(_QWORD *)(a1 + 48) = v40;
      }
      --*(_DWORD *)(a1 + 24);
      LODWORD(v13) = RtlFreeHeap(LdrpHeap, 0, k - 2);
    }
    else
    {
      v24 = (_QWORD **)k;
    }
    if ( k == v23 )
      break;
  }
  v26 = *a2;
  do
  {
    while ( 1 )
    {
      v27 = (_QWORD *)*(v26 - 2);
      if ( !v27 )
        break;
      v28 = (_QWORD *)*v27;
      if ( (_QWORD *)*v27 == v27 )
      {
        *(v26 - 2) = 0LL;
      }
      else
      {
        v13 = (_QWORD *)*v28;
        *v27 = *v28;
      }
      if ( !v28 )
        break;
      v29 = v28 - 2;
      v30 = v28[1];
      if ( v30 == a1 )
        goto LABEL_50;
      v35 = *(_QWORD **)(a1 + 48);
      if ( v35 )
      {
        v36 = *(_QWORD **)(a1 + 48);
        while ( 1 )
        {
          v36 = (_QWORD *)*v36;
          if ( v36[1] == v30 )
            break;
          if ( v36 == v35 )
          {
            v13 = (_QWORD *)*v35;
            *v28 = *v35;
            *v35 = v28;
            goto LABEL_68;
          }
        }
        v37 = *(_QWORD ***)(v30 + 40);
        for ( m = *v37; m != v29; m = (_QWORD *)*m )
          v37 = (_QWORD **)m;
        *v37 = (_QWORD *)*v29;
        if ( *(_QWORD **)(v30 + 40) == v29 )
        {
          v39 = 0LL;
          if ( v37 != v29 )
            v39 = v37;
          *(_QWORD *)(v30 + 40) = v39;
        }
LABEL_50:
        --*(_DWORD *)(a1 + 24);
        LODWORD(v13) = RtlFreeHeap(LdrpHeap, 0, v29);
      }
      else
      {
        *v28 = v28;
LABEL_68:
        *(_QWORD *)(a1 + 48) = v28;
      }
    }
    v26 = (_QWORD *)*v26;
  }
  while ( v26 );
  return (int)v13;
}
