/*
 * XREFs of RtlNextUnicodePrefix @ 0x14071FC30
 * Callers:
 *     <none>
 * Callees:
 *     RtlRealSuccessor @ 0x14012F030 (RtlRealSuccessor.c)
 */

PUNICODE_PREFIX_TABLE_ENTRY __stdcall RtlNextUnicodePrefix(PUNICODE_PREFIX_TABLE PrefixTable, BOOLEAN Restart)
{
  PUNICODE_PREFIX_TABLE_ENTRY LastNextEntry; // rbx
  PUNICODE_PREFIX_TABLE_ENTRY NextPrefixTree; // rax
  PUNICODE_PREFIX_TABLE_ENTRY result; // rax
  _RTL_SPLAY_LINKS *v6; // rcx
  PRTL_SPLAY_LINKS v7; // rax
  RTL_SPLAY_LINKS *p_Links; // rcx
  RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *LeftChild; // rax
  _RTL_SPLAY_LINKS *v11; // rcx

  if ( !Restart && (LastNextEntry = PrefixTable->LastNextEntry) != 0LL )
  {
    result = LastNextEntry->CaseMatch;
    if ( result->NodeTypeCode == 2051 )
      goto LABEL_8;
    v7 = RtlRealSuccessor(&result->Links);
    if ( !v7 )
    {
      p_Links = &LastNextEntry->Links;
      Parent = LastNextEntry->Links.Parent;
      if ( Parent != &LastNextEntry->Links )
      {
        do
        {
          p_Links = Parent;
          Parent = Parent->Parent;
        }
        while ( Parent != p_Links );
      }
      LeftChild = p_Links[-1].LeftChild;
      if ( SWORD1(LeftChild->Parent) <= 0 )
        return 0LL;
      v11 = LeftChild[1].LeftChild;
      v7 = LeftChild + 1;
      while ( v11 )
      {
        v7 = v11;
        v11 = v11->LeftChild;
      }
    }
  }
  else
  {
    NextPrefixTree = PrefixTable->NextPrefixTree;
    if ( NextPrefixTree->NodeTypeCode == 2048 )
      return 0LL;
    v6 = NextPrefixTree->Links.LeftChild;
    v7 = &NextPrefixTree->Links;
    while ( v6 )
    {
      v7 = v6;
      v6 = v6->LeftChild;
    }
  }
  result = (PUNICODE_PREFIX_TABLE_ENTRY)&v7[-1];
LABEL_8:
  PrefixTable->LastNextEntry = result;
  return result;
}
