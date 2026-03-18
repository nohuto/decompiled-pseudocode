/*
 * XREFs of CmpCopyName @ 0x140631EAC
 * Callers:
 *     CmpAddValueKeyNew @ 0x140631D74 (CmpAddValueKeyNew.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x1407882E0 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x140829B90 (CmpAddValueKeyTombstone.c)
 *     CmpCreateEmptyKey @ 0x14082BCC0 (CmpCreateEmptyKey.c)
 *     CmpCreateRootNode @ 0x140A0ECBC (CmpCreateRootNode.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 */

__int64 __fastcall CmpCopyName(_BYTE *a1, _QWORD *a2)
{
  int v2; // r8d
  __int64 v3; // r9
  _WORD *v5; // rdx

  v2 = *(unsigned __int16 *)a2;
  v3 = 0LL;
  if ( (v2 & 0xFFFFFFFE) == 0 )
    return (unsigned __int16)v2 >> 1;
  while ( 1 )
  {
    v5 = (_WORD *)a2[1];
    if ( v5[v3] > 0xFFu )
      break;
    a1[v3] = v5[v3];
    v3 = (unsigned int)(v3 + 1);
    LOWORD(v2) = *(_WORD *)a2;
    if ( (unsigned int)v3 >= *(unsigned __int16 *)a2 >> 1 )
      return (unsigned __int16)v2 >> 1;
  }
  memmove(a1, v5, (unsigned __int16)v2);
  return *(unsigned __int16 *)a2;
}
