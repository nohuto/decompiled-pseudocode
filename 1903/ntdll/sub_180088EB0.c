/*
 * XREFs of sub_180088EB0 @ 0x180088EB0
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x180088D60 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180062AF0 @ 0x180062AF0 (sub_180062AF0.c)
 *     RtlSplay @ 0x180064960 (RtlSplay.c)
 *     sub_180088FFC @ 0x180088FFC (sub_180088FFC.c)
 */

__int64 __fastcall sub_180088EB0(PRTL_SPLAY_LINKS *a1, _RTL_SPLAY_LINKS *a2, void *a3)
{
  PRTL_SPLAY_LINKS v6; // rdi
  PRTL_SPLAY_LINKS v7; // rbx
  NTSTATUS v8; // esi
  _RTL_SPLAY_LINKS *RightChild; // rax
  PRTL_SPLAY_LINKS *p_Parent; // rax
  PRTL_SPLAY_LINKS v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  RtlAcquireSRWLockExclusive(&stru_1801664C8);
  v6 = Links;
  if ( Links )
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
          v8 = sub_180088FFC(&v12, a2, a3);
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
          v8 = sub_180088FFC(&v12, a2, a3);
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
    v8 = sub_180062AF0(a3, (__int64)&v7->LeftChild, (PPEB_LDR_DATA)v7[3].LeftChild);
    if ( v8 >= 0 )
      ++LODWORD(v7[3].RightChild);
  }
  else
  {
    v8 = sub_180088FFC(&v12, a2, a3);
    v7 = v12;
  }
LABEL_16:
  if ( v7 && Links != &v7[4] )
    Links = RtlSplay(v7 + 4);
  RtlReleaseSRWLockExclusive(&stru_1801664C8);
  *a1 = v7;
  return (unsigned int)v8;
}
