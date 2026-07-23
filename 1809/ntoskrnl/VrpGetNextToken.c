/*
 * XREFs of VrpGetNextToken @ 0x14080F41C
 * Callers:
 *     VrpCreateNamespaceNode @ 0x14080B03C (VrpCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x14080C964 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x14080D4E0 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x14080DD70 (VrpTranslatePath.c)
 *     VrpComparePath @ 0x14080F2D4 (VrpComparePath.c)
 *     VrpCountPathComponents @ 0x14080F3BC (VrpCountPathComponents.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VrpGetNextToken(unsigned __int16 *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // r10
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 result; // rax
  __int64 v15; // rcx

  *(_WORD *)a3 = 0;
  v5 = *a2;
  if ( 2 * *a2 < (unsigned __int64)*a1 )
  {
    v7 = *a2;
    do
    {
      if ( *(_WORD *)(2 * v7 + *((_QWORD *)a1 + 1)) != 92 )
        break;
      v5 = v7 + 1;
      v8 = 2 * v7 + 2;
      *a2 = ++v7;
    }
    while ( v8 < *a1 );
  }
  *(_QWORD *)(a3 + 8) = *((_QWORD *)a1 + 1) + 2 * v5;
  v9 = *a2;
  v10 = *a1;
  if ( 2 * *a2 < v10 )
  {
    v11 = *a2;
    LOWORD(v12) = *a1;
    do
    {
      LOWORD(v10) = v12;
      if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v11) == 92 )
        break;
      *(_WORD *)a3 += 2;
      v9 = *a2 + 1;
      *a2 = v9;
      v11 = v9;
      v12 = *a1;
      LOWORD(v10) = *a1;
    }
    while ( 2 * v9 < v12 );
  }
  v13 = 2 * v9;
  for ( result = (unsigned __int16)v10; v13 < result; result = *a1 )
  {
    result = *((_QWORD *)a1 + 1);
    v15 = 2 * v9;
    if ( *(_WORD *)(2 * v9 + result) != 92 )
      break;
    *a2 = ++v9;
    v13 = v15 + 2;
  }
  return result;
}
