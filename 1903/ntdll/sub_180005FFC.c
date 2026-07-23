/*
 * XREFs of sub_180005FFC @ 0x180005FFC
 * Callers:
 *     sub_180005F8C @ 0x180005F8C (sub_180005F8C.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1800380E0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180082FC0 @ 0x180082FC0 (sub_180082FC0.c)
 */

void __fastcall sub_180005FFC(PRTL_BALANCED_NODE Node)
{
  unsigned __int64 Root; // rdi
  BOOLEAN v3; // bl
  int v4; // esi
  unsigned __int64 v5; // rax

  RtlAcquireSRWLockExclusive(&stru_180166440);
  Root = (unsigned __int64)Parent.Root;
  v3 = 0;
  if ( ((__int64)Parent.Min & 1) != 0 )
  {
    if ( Parent.Root )
      Root = (unsigned __int64)&Parent ^ (unsigned __int64)Parent.Root;
    else
      Root = 0LL;
  }
  v4 = (__int64)Parent.Min & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( (int)sub_180082FC0(&Node[1], Root) < 0 )
      {
        v5 = *(_QWORD *)Root;
        if ( v4 )
        {
          if ( !v5 )
            break;
          v5 ^= Root;
        }
        if ( !v5 )
          break;
      }
      else
      {
        v5 = *(_QWORD *)(Root + 8);
        if ( v4 )
        {
          if ( !v5 )
            goto LABEL_17;
          v5 ^= Root;
        }
        if ( !v5 )
        {
LABEL_17:
          v3 = 1;
          break;
        }
      }
      Root = v5;
    }
  }
  RtlRbInsertNodeEx(&Parent, (PRTL_BALANCED_NODE)Root, v3, Node);
  RtlReleaseSRWLockExclusive(&stru_180166440);
}
