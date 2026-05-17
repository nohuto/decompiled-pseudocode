/*
 * XREFs of SwapSplayLinks @ 0x180064D4C
 * Callers:
 *     RtlDelete @ 0x180064C00 (RtlDelete.c)
 *     RtlDeleteNoSplay @ 0x180064CA0 (RtlDeleteNoSplay.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SwapSplayLinks(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r9
  _QWORD *v4; // rdx
  _QWORD *v5; // r8
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *result; // rax
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r10
  __int64 *v21; // rdx
  __int64 *v22; // r10
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rax

  v2 = a2;
  v4 = (_QWORD *)*a1;
  v5 = a1;
  if ( (_QWORD *)*a1 == a1 || (v6 = (_QWORD *)*a2, v7 = *a1, (_QWORD *)*a2 == v5) )
  {
    v7 = *a2;
    v26 = v5;
    v5 = v2;
    v2 = v26;
    v6 = v4;
  }
  if ( (_QWORD *)v7 == v2 )
  {
    if ( v6 == v2 )
    {
      v8 = v5;
    }
    else
    {
      v20 = 1LL;
      if ( (_QWORD *)v6[1] != v2 )
        v20 = 2LL;
      v6[v20] = v5;
      v8 = (_QWORD *)*v2;
    }
    *v5 = v8;
    v9 = v5[1];
    v5[1] = v2[1];
    v10 = v2[2];
    v2[1] = v9;
    v11 = v5[2];
    v5[2] = v10;
    v2[2] = v11;
    v12 = (_QWORD *)v5[1];
    if ( v12 == v5 )
    {
      v5[1] = v2;
      v12 = v2;
    }
    else
    {
      v5[2] = v2;
    }
  }
  else
  {
    v16 = 8LL;
    if ( v6 == v2 )
    {
      if ( *(_QWORD **)(v7 + 8) != v5 )
        v16 = 16LL;
      *(_QWORD *)(v16 + v7) = v2;
      *v2 = *v5;
      *v5 = v5;
    }
    else
    {
      if ( *(_QWORD **)(v7 + 8) != v5 )
        v16 = 16LL;
      v21 = v6 + 1;
      v22 = (__int64 *)(v7 + v16);
      v23 = v6 + 2;
      if ( (_QWORD *)*v21 != v2 )
        v21 = v23;
      v24 = *v22;
      *v22 = *v21;
      *v21 = v24;
      v25 = *v5;
      *v5 = *v2;
      *v2 = v25;
    }
    v17 = v5[1];
    v5[1] = v2[1];
    v18 = v2[2];
    v2[1] = v17;
    v19 = v5[2];
    v5[2] = v18;
    v2[2] = v19;
    v12 = (_QWORD *)v5[1];
  }
  if ( v12 )
    *v12 = v5;
  v13 = (_QWORD *)v5[2];
  if ( v13 )
    *v13 = v5;
  v14 = (_QWORD *)v2[1];
  if ( v14 )
    *v14 = v2;
  result = (_QWORD *)v2[2];
  if ( result )
    *result = v2;
  return result;
}
