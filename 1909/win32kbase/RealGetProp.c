/*
 * XREFs of RealGetProp @ 0x1C0067EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RealGetProp(__int64 a1, __int16 a2, int a3)
{
  _WORD *v4; // rax
  int v5; // ecx
  __int16 v7; // r8

  if ( !a1 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v4 = (_WORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( !v5 )
    return 0LL;
  while ( 1 )
  {
    if ( v4[4] != a2 )
      goto LABEL_5;
    v7 = v4[5] & 1;
    if ( !a3 )
      break;
    if ( v7 )
      return *(_QWORD *)v4;
LABEL_5:
    v4 += 8;
    if ( !--v5 )
      return 0LL;
  }
  if ( v7 )
    goto LABEL_5;
  return *(_QWORD *)v4;
}
