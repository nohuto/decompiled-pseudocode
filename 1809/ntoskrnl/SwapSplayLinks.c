/*
 * XREFs of SwapSplayLinks @ 0x140014544
 * Callers:
 *     RtlDeleteNoSplay @ 0x140014470 (RtlDeleteNoSplay.c)
 *     RtlDelete @ 0x14008D400 (RtlDelete.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SwapSplayLinks(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r9
  _QWORD *v4; // rdx
  _QWORD *v5; // r8
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // r11
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *result; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // rdx
  __int64 *v22; // r10
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r10
  _QWORD *v27; // rax

  v2 = a2;
  v4 = (_QWORD *)*a1;
  v5 = a1;
  if ( (_QWORD *)*a1 == a1 || (v6 = (_QWORD *)*a2, v7 = (_QWORD *)*a1, (_QWORD *)*a2 == v5) )
  {
    v7 = (_QWORD *)*a2;
    v27 = v5;
    v5 = v2;
    v2 = v27;
    v6 = v4;
  }
  if ( v7 == v2 )
  {
    if ( v6 == v2 )
    {
      v17 = v5;
    }
    else
    {
      v26 = 1LL;
      if ( (_QWORD *)v6[1] != v2 )
        v26 = 2LL;
      v6[v26] = v5;
      v17 = (_QWORD *)*v2;
    }
    *v5 = v17;
    v18 = v5[1];
    v5[1] = v2[1];
    v19 = v2[2];
    v2[1] = v18;
    v20 = v5[2];
    v5[2] = v19;
    v2[2] = v20;
    v13 = (_QWORD *)v5[1];
    if ( v13 == v5 )
    {
      v5[1] = v2;
      v13 = v2;
    }
    else
    {
      v5[2] = v2;
    }
  }
  else
  {
    v8 = (_QWORD *)v7[1];
    v9 = 1LL;
    if ( v6 == v2 )
    {
      if ( v8 != v5 )
        v9 = 2LL;
      v7[v9] = v2;
      *v2 = *v5;
      *v5 = v5;
    }
    else
    {
      if ( v8 != v5 )
        v9 = 2LL;
      v21 = v6 + 1;
      v22 = &v7[v9];
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
    v10 = v5[1];
    v5[1] = v2[1];
    v11 = v2[2];
    v2[1] = v10;
    v12 = v5[2];
    v5[2] = v11;
    v2[2] = v12;
    v13 = (_QWORD *)v5[1];
  }
  if ( v13 )
    *v13 = v5;
  v14 = (_QWORD *)v5[2];
  if ( v14 )
    *v14 = v5;
  v15 = (_QWORD *)v2[1];
  if ( v15 )
    *v15 = v2;
  result = (_QWORD *)v2[2];
  if ( result )
    *result = v2;
  return result;
}
