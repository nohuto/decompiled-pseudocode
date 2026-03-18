/*
 * XREFs of ViAvlCompareNode @ 0x14015A140
 * Callers:
 *     ViAvlCompareNodeUseSessionId @ 0x14015A0F0 (ViAvlCompareNodeUseSessionId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViAvlCompareNode(
        struct _RTL_AVL_TABLE *Table,
        unsigned __int64 *FirstStruct,
        unsigned __int64 *SecondStruct)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r10

  v3 = *FirstStruct;
  v4 = *SecondStruct;
  if ( *FirstStruct < *SecondStruct )
  {
    return v4 < v3 + FirstStruct[1] ? 2u : 0;
  }
  else if ( *FirstStruct == *SecondStruct )
  {
    return 2;
  }
  else
  {
    return (unsigned int)((v3 < v4 + SecondStruct[1]) + 1);
  }
}
