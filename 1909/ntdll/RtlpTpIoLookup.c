/*
 * XREFs of RtlpTpIoLookup @ 0x180089550
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x180089400 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     TpBindFileToDirect @ 0x180062B90 (TpBindFileToDirect.c)
 *     RtlSplay @ 0x180064A00 (RtlSplay.c)
 *     RtlpTpIoAlloc @ 0x18008969C (RtlpTpIoAlloc.c)
 */

__int64 __fastcall RtlpTpIoLookup(PRTL_SPLAY_LINKS *a1, _RTL_SPLAY_LINKS *a2, void *a3)
{
  PRTL_SPLAY_LINKS v6; // rdi
  PRTL_SPLAY_LINKS v7; // rbx
  NTSTATUS v8; // esi
  _RTL_SPLAY_LINKS *RightChild; // rax
  PRTL_SPLAY_LINKS *p_Parent; // rax
  PRTL_SPLAY_LINKS v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  v6 = RtlpTpIoTree;
  if ( RtlpTpIoTree )
  {
    while ( 1 )
    {
      v7 = v6 - 4;
      v12 = v6 - 4;
      if ( v6[-4].Parent == a2 )
        break;
      if ( v6[-4].Parent <= a2 )
      {
        RightChild = v6->RightChild;
        if ( !RightChild )
        {
          v8 = RtlpTpIoAlloc(&v12, a2, a3);
          v7 = v12;
          if ( !v12 )
            goto LABEL_16;
          p_Parent = &v12[4].Parent;
          v6->RightChild = v12 + 4;
          goto LABEL_14;
        }
      }
      else
      {
        RightChild = v6->LeftChild;
        if ( !RightChild )
        {
          v8 = RtlpTpIoAlloc(&v12, a2, a3);
          v7 = v12;
          if ( !v12 )
            goto LABEL_16;
          p_Parent = &v12[4].Parent;
          v6->LeftChild = v12 + 4;
LABEL_14:
          *p_Parent = v6;
          goto LABEL_16;
        }
      }
      v6 = RightChild;
    }
    v8 = TpBindFileToDirect(a3, (__int64)&v7->LeftChild, (_PEB_LDR_DATA *)v7[3].LeftChild);
    if ( v8 >= 0 )
      ++LODWORD(v7[3].RightChild);
  }
  else
  {
    v8 = RtlpTpIoAlloc(&v12, a2, a3);
    v7 = v12;
  }
LABEL_16:
  if ( v7 && RtlpTpIoTree != &v7[4] )
    RtlpTpIoTree = RtlSplay(v7 + 4);
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  *a1 = v7;
  return (unsigned int)v8;
}
