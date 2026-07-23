/*
 * XREFs of sub_18000844C @ 0x18000844C
 * Callers:
 *     EtwDeliverDataBlock @ 0x180007FD0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_18006C4F8 @ 0x18006C4F8 (sub_18006C4F8.c)
 *     RtlTryAcquireSRWLockShared @ 0x180078D70 (RtlTryAcquireSRWLockShared.c)
 */

_RTL_SRWLOCK *__fastcall sub_18000844C(__int64 a1, __int16 a2)
{
  unsigned __int64 Root; // rbx
  int v3; // esi
  _RTL_SRWLOCK *i; // rdi
  int v5; // eax
  unsigned __int64 v6; // rax
  _RTL_SRWLOCK **Ptr; // rax
  _RTL_SRWLOCK *v9; // rcx
  _RTL_SRWLOCK *v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int16 v12; // [rsp+28h] [rbp-10h]

  v11 = a1;
  v12 = a2;
  RtlAcquireSRWLockExclusive(&stru_180166440);
  Root = (unsigned __int64)Tree.Root;
  if ( ((__int64)Tree.Min & 1) != 0 && Tree.Root )
    Root = (unsigned __int64)&Tree ^ (unsigned __int64)Tree.Root;
  v3 = (__int64)Tree.Min & 1;
  i = 0LL;
  while ( Root )
  {
    v5 = sub_18006C4F8(&v11, Root);
    if ( v5 < 0 )
      goto LABEL_10;
    if ( v5 <= 0 )
    {
      i = (_RTL_SRWLOCK *)Root;
LABEL_10:
      v6 = *(_QWORD *)Root;
      goto LABEL_11;
    }
    v6 = *(_QWORD *)(Root + 8);
LABEL_11:
    if ( v3 && v6 )
      Root ^= v6;
    else
      Root = v6;
  }
  if ( i )
  {
    while ( !RtlTryAcquireSRWLockShared(i + 9) )
    {
      Ptr = (_RTL_SRWLOCK **)i[1].Ptr;
      v9 = i;
      if ( Ptr )
      {
        v10 = *Ptr;
        for ( i = (_RTL_SRWLOCK *)i[1].Ptr; v10; v10 = (_RTL_SRWLOCK *)v10->Ptr )
          i = v10;
      }
      else
      {
        while ( 1 )
        {
          i = (_RTL_SRWLOCK *)((unsigned __int64)i[2].Ptr & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || i->Ptr == v9 )
            break;
          v9 = i;
        }
      }
      if ( !i || (unsigned int)sub_18006C4F8(&v11, i) )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    i = 0LL;
  }
  RtlReleaseSRWLockExclusive(&stru_180166440);
  return i;
}
