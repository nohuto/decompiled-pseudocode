/*
 * XREFs of CmpNameSize @ 0x1406C5598
 * Callers:
 *     CmpAddValueKeyNew @ 0x140631D74 (CmpAddValueKeyNew.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x1407882E0 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x140829B90 (CmpAddValueKeyTombstone.c)
 *     CmpCreateEmptyKey @ 0x14082BCC0 (CmpCreateEmptyKey.c)
 *     CmpCreateRootNode @ 0x140A0ECBC (CmpCreateRootNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpNameSize(unsigned __int16 *a1)
{
  unsigned __int16 v1; // dx
  __int64 v2; // r8
  unsigned int v3; // r9d

  v1 = *a1;
  v2 = 0LL;
  v3 = *a1 >> 1;
  if ( v3 )
  {
    while ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v2) <= 0xFFu )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= v3 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v1 >>= 1;
  }
  return v1;
}
