/*
 * XREFs of sub_180036214 @ 0x180036214
 * Callers:
 *     sub_18003257C @ 0x18003257C (sub_18003257C.c)
 *     sub_180035FA0 @ 0x180035FA0 (sub_180035FA0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180036214(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // r8
  _QWORD *v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rax
  _QWORD *v8; // r10
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  _QWORD *v13; // r8
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx

  v2 = (_QWORD *)*a1;
  if ( a2 != (_QWORD *)*a1 )
  {
    v3 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 )
      goto LABEL_7;
    v4 = (_QWORD *)a2[1];
    if ( (_QWORD *)*v4 != a2
      || (*v4 = v3,
          *(_QWORD *)(v3 + 8) = v4,
          v5 = a2 + 2,
          a2[1] = a2,
          *a2 = a2,
          v6 = a2[2],
          v7 = (_QWORD *)*a1,
          *(_QWORD **)(v6 + 8) != a2 + 2) )
    {
LABEL_7:
      __fastfail(3u);
    }
    *v7 = v6;
    v7[1] = v5;
    *(_QWORD *)(v6 + 8) = v7;
    *v5 = v7;
    v2 = a2;
    *a1 = a2;
  }
  v2[4] = 0LL;
  v8 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v10 = v8 + 2;
    v11 = (_QWORD *)v8[2];
    if ( v11 == v8 + 2 )
    {
      *a1 = 0LL;
    }
    else
    {
      if ( (_QWORD *)v11[1] != v10 || (v12 = (_QWORD *)v8[3], (_QWORD *)*v12 != v10) )
LABEL_23:
        __fastfail(3u);
      *v12 = v11;
      v11[1] = v12;
      v8[3] = v8 + 2;
      *v10 = v10;
      while ( 1 )
      {
        v13 = (_QWORD *)*v11;
        if ( (_QWORD *)*v11 == v11 )
          break;
        v15 = v11;
        if ( v13[4] >= v11[4] )
        {
          v15 = (_QWORD *)*v11;
          v13 = v11;
        }
        v16 = *v15;
        if ( *(_QWORD **)(*v15 + 8LL) != v15 )
          goto LABEL_23;
        v17 = (_QWORD *)v15[1];
        if ( (_QWORD *)*v17 != v15 )
          goto LABEL_23;
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        v18 = v13 + 2;
        v19 = v13[2];
        if ( *(_QWORD **)(v19 + 8) != v13 + 2 )
          goto LABEL_23;
        *v15 = v19;
        v15[1] = v18;
        *(_QWORD *)(v19 + 8) = v15;
        *v18 = v15;
        v11 = (_QWORD *)*v13;
      }
      *a1 = v11;
    }
  }
  return v8;
}
