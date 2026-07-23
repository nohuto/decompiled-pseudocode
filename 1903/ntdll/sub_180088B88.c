/*
 * XREFs of sub_180088B88 @ 0x180088B88
 * Callers:
 *     NotificationFunction @ 0x180088B70 (NotificationFunction.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlDelete @ 0x180064B60 (RtlDelete.c)
 *     sub_1800803C4 @ 0x1800803C4 (sub_1800803C4.c)
 */

void __fastcall sub_180088B88(__int64 a1)
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
  RtlAcquireSRWLockExclusive(&stru_1801664C8);
  v3 = Links;
  while ( 1 )
  {
    p_Parent = &v3->Parent;
    if ( !v3 )
      break;
    v5 = v3 - 4;
    Parent = (unsigned __int64)v3[-4].Parent;
    if ( Parent < *(_QWORD *)(a1 + 24) )
      goto LABEL_8;
    if ( Parent < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      v3 = RtlDelete(v3);
      Links = v3;
      *p_Parent = v2;
      v2 = v5;
    }
    else if ( Parent < *(_QWORD *)(a1 + 24) )
    {
LABEL_8:
      v3 = v3->RightChild;
    }
    else
    {
      v3 = v3->LeftChild;
    }
  }
  RtlReleaseSRWLockExclusive(&stru_1801664C8);
  while ( v2 )
  {
    v9 = v2[4].Parent;
    sub_1800803C4(v2[3].LeftChild, v7, v8);
    RtlFreeUnicodeString((PUNICODE_STRING)&v2[5].LeftChild);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    v2 = v9;
  }
}
