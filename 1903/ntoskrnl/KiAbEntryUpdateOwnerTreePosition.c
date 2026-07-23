/*
 * XREFs of KiAbEntryUpdateOwnerTreePosition @ 0x14009EFB4
 * Callers:
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14009E090 (KiAbProcessThreadLocks.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140063870 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140064590 (RtlRbInsertNodeEx.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14009F478 (KiAbOwnerComputeCpuPriorityKey.c)
 */

BOOLEAN __fastcall KiAbEntryUpdateOwnerTreePosition(PRTL_BALANCED_NODE Node, __int64 a2, __int64 a3, __int64 a4)
{
  BOOLEAN result; // al
  __int64 v7; // rbx
  BOOLEAN v8; // cl
  __int64 v9; // rdx
  __int64 v10; // rax

  result = KiAbOwnerComputeCpuPriorityKey(Node, a2, a3, a4);
  if ( LOBYTE(Node[2].Children[0]) != result )
  {
    v7 = a2 + 48;
    LOBYTE(Node[2].Children[0]) = result;
    RtlRbRemoveNode((PRTL_RB_TREE)v7, Node);
    v8 = 0;
    v9 = *(_QWORD *)v7;
    if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
    {
      if ( v9 )
        v9 ^= v7;
      else
        v9 = 0LL;
    }
    if ( v9 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v9 + 48) > SLOBYTE(Node[2].Children[0]) )
        {
          v10 = *(_QWORD *)v9;
          if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
          {
            if ( !v10 )
              return RtlRbInsertNodeEx((PRTL_RB_TREE)v7, (PRTL_BALANCED_NODE)v9, v8, Node);
            v10 ^= v9;
          }
          if ( !v10 )
            return RtlRbInsertNodeEx((PRTL_RB_TREE)v7, (PRTL_BALANCED_NODE)v9, v8, Node);
        }
        else
        {
          v10 = *(_QWORD *)(v9 + 8);
          if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
          {
            if ( !v10 )
              goto LABEL_9;
            v10 ^= v9;
          }
          if ( !v10 )
          {
LABEL_9:
            v8 = 1;
            return RtlRbInsertNodeEx((PRTL_RB_TREE)v7, (PRTL_BALANCED_NODE)v9, v8, Node);
          }
        }
        v9 = v10;
      }
    }
    return RtlRbInsertNodeEx((PRTL_RB_TREE)v7, (PRTL_BALANCED_NODE)v9, v8, Node);
  }
  return result;
}
