/*
 * XREFs of KiAbEntryUpdateWaiterTreePosition @ 0x140024DA0
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140023C40 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiAbForceProcessLockEntry @ 0x140166280 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400BD5F0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400BDD30 (RtlRbRemoveNode.c)
 */

char __fastcall KiAbEntryUpdateWaiterTreePosition(PRTL_BALANCED_NODE Node, _RTL_RB_TREE *a2)
{
  char result; // al
  _RTL_RB_TREE *v4; // rbx
  _RTL_BALANCED_NODE *Min; // rax
  BOOLEAN v6; // cl
  unsigned __int64 Root; // rdx
  int v8; // r8d
  _RTL_BALANCED_NODE *v9; // rax

  result = ((_BYTE *)&Node[8].Left - 16 * LOBYTE(Node[1].Children[0]))[3];
  if ( result > 15 )
    result = 15;
  if ( LOBYTE(Node[2].Children[0]) != result )
  {
    v4 = a2 + 4;
    LOBYTE(Node[2].Children[0]) = result;
    RtlRbRemoveNode(a2 + 4, Node);
    Min = v4->Min;
    v6 = 0;
    Root = (unsigned __int64)v4->Root;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)v4;
      else
        Root = 0LL;
    }
    v8 = (unsigned __int8)Min & 1;
    if ( Root )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(Root + 48) >= SLOBYTE(Node[2].Children[0]) )
        {
          v9 = *(_RTL_BALANCED_NODE **)(Root + 8);
          if ( v8 )
          {
            if ( !v9 )
              goto LABEL_20;
            v9 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v9);
          }
          if ( !v9 )
          {
LABEL_20:
            v6 = 1;
            return RtlRbInsertNodeEx(v4, (PRTL_BALANCED_NODE)Root, v6, Node);
          }
        }
        else
        {
          v9 = *(_RTL_BALANCED_NODE **)Root;
          if ( v8 )
          {
            if ( !v9 )
              return RtlRbInsertNodeEx(v4, (PRTL_BALANCED_NODE)Root, v6, Node);
            v9 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v9);
          }
          if ( !v9 )
            return RtlRbInsertNodeEx(v4, (PRTL_BALANCED_NODE)Root, v6, Node);
        }
        Root = (unsigned __int64)v9;
      }
    }
    return RtlRbInsertNodeEx(v4, (PRTL_BALANCED_NODE)Root, v6, Node);
  }
  return result;
}
