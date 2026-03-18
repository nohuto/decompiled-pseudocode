/*
 * XREFs of RebalanceNode @ 0x14000709C
 * Callers:
 *     DeleteNodeFromTree @ 0x140006D50 (DeleteNodeFromTree.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x140006F70 (RtlInsertElementGenericTableFullAvl.c)
 * Callees:
 *     PromoteNode @ 0x140007158 (PromoteNode.c)
 */

__int64 __fastcall RebalanceNode(__int64 a1)
{
  char v1; // r9
  __int64 v2; // r10
  char v3; // al
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 result; // rax
  int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rcx
  char v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  char v13; // al
  char v14; // r9
  __int64 v15; // r10

  v1 = *(_BYTE *)(a1 + 24);
  if ( v1 == 1 )
    v2 = *(_QWORD *)(a1 + 16);
  else
    v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_BYTE *)(v2 + 24);
  if ( v3 == v1 )
  {
    PromoteNode(v2);
    *(_BYTE *)(v4 + 24) = 0;
    *(_BYTE *)(v5 + 24) = 0;
    return 0LL;
  }
  v7 = -v1;
  if ( v3 == v7 )
  {
    if ( v1 == 1 )
      v8 = *(_QWORD *)(v2 + 8);
    else
      v8 = *(_QWORD *)(v2 + 16);
    PromoteNode(v8);
    PromoteNode(v9);
    *(_BYTE *)(v12 + 24) = 0;
    *(_BYTE *)(v11 + 24) = 0;
    v13 = *(_BYTE *)(v8 + 24);
    if ( v13 == v10 )
    {
      *(_BYTE *)(v12 + 24) = -v10;
    }
    else if ( v13 == v7 )
    {
      *(_BYTE *)(v11 + 24) = v10;
    }
    *(_BYTE *)(v8 + 24) = 0;
    return 0LL;
  }
  PromoteNode(v2);
  result = 1LL;
  *(_BYTE *)(v15 + 24) = -v14;
  return result;
}
