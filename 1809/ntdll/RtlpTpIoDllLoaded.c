/*
 * XREFs of RtlpTpIoDllLoaded @ 0x18008BAB8
 * Callers:
 *     RtlpTpIoDllNotification @ 0x18008BAA0 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     TpDereferenceGlobalPool @ 0x18003135C (TpDereferenceGlobalPool.c)
 *     RtlDelete @ 0x18006C830 (RtlDelete.c)
 */

void __fastcall RtlpTpIoDllLoaded(__int64 a1)
{
  PRTL_SPLAY_LINKS v2; // rbx
  PRTL_SPLAY_LINKS v3; // rcx
  _QWORD *p_Parent; // r14
  PRTL_SPLAY_LINKS v5; // rdi
  unsigned __int64 Parent; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  _RTL_SPLAY_LINKS *v9; // [rsp+20h] [rbp-18h]

  v2 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  v3 = RtlpTpIoTree;
  while ( 1 )
  {
    p_Parent = &v3->Parent;
    if ( !v3 )
      break;
    v5 = v3 - 4;
    Parent = (unsigned __int64)v3[-4].Parent;
    if ( Parent < *(_QWORD *)(a1 + 24) )
      goto LABEL_7;
    if ( Parent < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      v3 = RtlDelete(v3);
      RtlpTpIoTree = v3;
      *p_Parent = v2;
      v2 = v5;
    }
    else if ( Parent < *(_QWORD *)(a1 + 24) )
    {
LABEL_7:
      v3 = v3->RightChild;
    }
    else
    {
      v3 = v3->LeftChild;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  while ( v2 )
  {
    v9 = v2[4].Parent;
    TpDereferenceGlobalPool(v2[3].LeftChild, v7, v8);
    RtlFreeAnsiString((PUNICODE_STRING)&v2[5].LeftChild);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    v2 = v9;
  }
}
