/*
 * XREFs of ?CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00B8488
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall CalcMinZOrder(struct tagWND *a1)
{
  _QWORD *v2; // r8
  char v3; // r10
  _QWORD *i; // r9
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  bool v7; // zf

  v2 = (_QWORD *)*((_QWORD *)a1 + 8);
  v3 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8;
  for ( i = 0LL; v2; i = v6 )
  {
    v5 = v2[5];
    v6 = v2;
    if ( (*(_BYTE *)(v5 + 20) & 0x20) != 0 || (*(_BYTE *)(v5 + 24) & 8) != v3 )
      break;
    v7 = v2[12] == *((_QWORD *)a1 + 12);
    v2 = (_QWORD *)v2[8];
    if ( !v7 )
      v6 = i;
  }
  return (struct tagWND *)i;
}
