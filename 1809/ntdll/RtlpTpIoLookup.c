/*
 * XREFs of RtlpTpIoLookup @ 0x18008BDF0
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x18008BCA0 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TpBindFileToDirect @ 0x180030EA8 (TpBindFileToDirect.c)
 *     RtlSplay @ 0x18006C590 (RtlSplay.c)
 *     RtlpTpIoAlloc @ 0x18008BF3C (RtlpTpIoAlloc.c)
 */

__int64 __fastcall RtlpTpIoLookup(PRTL_SPLAY_LINKS *a1, _RTL_SPLAY_LINKS *a2, void *a3)
{
  PRTL_SPLAY_LINKS v6; // rdi
  PRTL_SPLAY_LINKS v7; // rbx
  _RTL_SPLAY_LINKS *Parent; // rax
  NTSTATUS v9; // esi
  _RTL_SPLAY_LINKS *RightChild; // rax
  PRTL_SPLAY_LINKS *p_Parent; // rax
  PRTL_SPLAY_LINKS v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  v6 = RtlpTpIoTree;
  if ( RtlpTpIoTree )
  {
    while ( 1 )
    {
      v7 = v6 - 4;
      v13 = v6 - 4;
      Parent = v6[-4].Parent;
      if ( a2 == Parent )
        break;
      if ( a2 >= Parent )
      {
        RightChild = v6->RightChild;
        if ( !RightChild )
        {
          v9 = RtlpTpIoAlloc(&v13, a2, a3);
          v7 = v13;
          if ( !v13 )
            goto LABEL_16;
          p_Parent = &v13[4].Parent;
          v6->RightChild = v13 + 4;
          goto LABEL_14;
        }
      }
      else
      {
        RightChild = v6->LeftChild;
        if ( !RightChild )
        {
          v9 = RtlpTpIoAlloc(&v13, a2, a3);
          v7 = v13;
          if ( !v13 )
            goto LABEL_16;
          p_Parent = &v13[4].Parent;
          v6->LeftChild = v13 + 4;
LABEL_14:
          *p_Parent = v6;
          goto LABEL_16;
        }
      }
      v6 = RightChild;
    }
    v9 = TpBindFileToDirect(a3, (__int64)&v7->LeftChild, (_PEB_LDR_DATA *)v7[3].LeftChild);
    if ( v9 >= 0 )
      ++LODWORD(v7[3].RightChild);
  }
  else
  {
    v9 = RtlpTpIoAlloc(&v13, a2, a3);
    v7 = v13;
  }
LABEL_16:
  if ( v7 && RtlpTpIoTree != &v7[4] )
    RtlpTpIoTree = RtlSplay(v7 + 4);
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  *a1 = v7;
  return (unsigned int)v9;
}
