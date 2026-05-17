/*
 * XREFs of TppPHExtractMin @ 0x18002CD94
 * Callers:
 *     TppPHDelete @ 0x18002CD2C (TppPHDelete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppPHExtractMin(__int64 *a1)
{
  __int64 v1; // r10
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // r8
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx

  v1 = *a1;
  if ( *a1 )
  {
    v3 = (_QWORD *)(v1 + 16);
    v4 = *(_QWORD **)(v1 + 16);
    if ( v4 == (_QWORD *)(v1 + 16) )
    {
      *a1 = 0LL;
    }
    else
    {
      if ( (_QWORD *)v4[1] != v3 || (v5 = *(_QWORD **)(v1 + 24), (_QWORD *)*v5 != v3) )
LABEL_16:
        __fastfail(3u);
      *v5 = v4;
      v4[1] = v5;
      *(_QWORD *)(v1 + 24) = v1 + 16;
      *v3 = v3;
      while ( 1 )
      {
        v6 = (_QWORD *)*v4;
        if ( (_QWORD *)*v4 == v4 )
          break;
        v8 = v4;
        if ( v6[4] >= v4[4] )
        {
          v8 = (_QWORD *)*v4;
          v6 = v4;
        }
        v9 = *v8;
        if ( *(_QWORD **)(*v8 + 8LL) != v8 )
          goto LABEL_16;
        v10 = (_QWORD *)v8[1];
        if ( (_QWORD *)*v10 != v8 )
          goto LABEL_16;
        *v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        v11 = v6 + 2;
        v12 = v6[2];
        if ( *(_QWORD **)(v12 + 8) != v6 + 2 )
          goto LABEL_16;
        *v8 = v12;
        v8[1] = v11;
        *(_QWORD *)(v12 + 8) = v8;
        *v11 = v8;
        v4 = (_QWORD *)*v6;
      }
      *a1 = (__int64)v4;
    }
  }
  return v1;
}
