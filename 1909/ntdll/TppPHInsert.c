/*
 * XREFs of TppPHInsert @ 0x1800329DC
 * Callers:
 *     TppEnqueueTimer @ 0x180032940 (TppEnqueueTimer.c)
 * Callees:
 *     <none>
 */

void __fastcall TppPHInsert(_QWORD **a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rax
  __int64 v4; // r9
  _QWORD *v5; // r8
  __int64 v6; // rax

  v2 = *a1;
  if ( !*a1 )
    goto LABEL_5;
  if ( v2[4] >= a2[4] )
  {
    v3 = a2 + 2;
    v4 = a2[2];
    if ( *(_QWORD **)(v4 + 8) == a2 + 2 )
    {
      *v2 = v4;
      v2[1] = v3;
      *(_QWORD *)(v4 + 8) = v2;
      *v3 = v2;
LABEL_5:
      *a1 = a2;
      return;
    }
LABEL_8:
    __fastfail(3u);
  }
  v5 = v2 + 2;
  v6 = *v5;
  if ( *(_QWORD **)(*v5 + 8LL) != v5 )
    goto LABEL_8;
  *a2 = v6;
  a2[1] = v5;
  *(_QWORD *)(v6 + 8) = a2;
  *v5 = a2;
}
