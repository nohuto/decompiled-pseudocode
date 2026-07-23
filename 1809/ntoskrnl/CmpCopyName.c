/*
 * XREFs of CmpCopyName @ 0x1405ADDB0
 * Callers:
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmpAddValueKeyNew @ 0x1405ADC78 (CmpAddValueKeyNew.c)
 *     CmpCreateHiveRootCell @ 0x14075CD88 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x1407F0EA4 (CmpAddValueKeyTombstone.c)
 *     CmpCreateRootNode @ 0x1409C5170 (CmpCreateRootNode.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall CmpCopyName(_BYTE *a1, const void **a2)
{
  __int64 v3; // rdx
  int v4; // r8d
  unsigned __int16 v5; // r10

  v3 = 0LL;
  v4 = *(unsigned __int16 *)a2;
  if ( (v4 & 0xFFFFFFFE) == 0 )
    return (unsigned __int16)v4 >> 1;
  while ( 1 )
  {
    v5 = *((_WORD *)a2[1] + v3);
    if ( v5 > 0xFFu )
      break;
    a1[v3] = v5;
    v3 = (unsigned int)(v3 + 1);
    LOWORD(v4) = *(_WORD *)a2;
    if ( (unsigned int)v3 >= *(unsigned __int16 *)a2 >> 1 )
      return (unsigned __int16)v4 >> 1;
  }
  memmove(a1, a2[1], (unsigned __int16)v4);
  return *(unsigned __int16 *)a2;
}
