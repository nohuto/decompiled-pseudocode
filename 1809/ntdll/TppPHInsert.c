/*
 * XREFs of TppPHInsert @ 0x18002D30C
 * Callers:
 *     TppEnqueueTimer @ 0x18002D270 (TppEnqueueTimer.c)
 * Callees:
 *     <none>
 */

void __fastcall TppPHInsert(_QWORD **a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r8
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r9

  v2 = *a1;
  if ( *a1 )
  {
    if ( v2[4] < a2[4] )
    {
      v3 = v2 + 2;
      v4 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) == v3 )
      {
        *a2 = v4;
        a2[1] = v3;
        *(_QWORD *)(v4 + 8) = a2;
        *v3 = a2;
        return;
      }
LABEL_8:
      __fastfail(3u);
    }
    v5 = a2 + 2;
    v6 = a2[2];
    if ( *(_QWORD **)(v6 + 8) != a2 + 2 )
      goto LABEL_8;
    *v2 = v6;
    v2[1] = v5;
    *(_QWORD *)(v6 + 8) = v2;
    *v5 = v2;
  }
  *a1 = a2;
}
