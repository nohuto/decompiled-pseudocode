/*
 * XREFs of sub_18000835C @ 0x18000835C
 * Callers:
 *     EtwDeliverDataBlock @ 0x180007FD0 (EtwDeliverDataBlock.c)
 *     sub_180086F14 @ 0x180086F14 (sub_180086F14.c)
 *     EtwEnumerateProcessRegGuids @ 0x18010CA10 (EtwEnumerateProcessRegGuids.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x180078D70 (RtlTryAcquireSRWLockShared.c)
 */

__int64 __fastcall sub_18000835C(_RTL_SRWLOCK *a1)
{
  char v2; // si
  unsigned __int64 v3; // rbp
  unsigned __int64 Ptr; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 i; // rbx
  _QWORD *v7; // rcx
  _QWORD **v9; // rax
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rcx

  v2 = 0;
  v3 = 0LL;
  RtlAcquireSRWLockExclusive(&stru_180166440);
  if ( a1 )
  {
    Ptr = (unsigned __int64)a1[1].Ptr;
    v5 = (unsigned __int64)a1;
    if ( Ptr )
    {
      v7 = *(_QWORD **)Ptr;
      if ( *(_QWORD *)Ptr )
      {
        do
        {
          Ptr = (unsigned __int64)v7;
          v7 = (_QWORD *)*v7;
        }
        while ( v7 );
      }
    }
    else
    {
      for ( i = (unsigned __int64)a1[2].Ptr; ; i = *(_QWORD *)(Ptr + 16) )
      {
        Ptr = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Ptr || *(_QWORD *)Ptr == v5 )
          break;
        v5 = Ptr;
      }
    }
  }
  else if ( ((__int64)Tree.Min & 1) != 0 )
  {
    if ( Tree.Min == (PRTL_BALANCED_NODE)1 )
      Ptr = 0LL;
    else
      Ptr = (unsigned __int64)Tree.Min ^ ((unsigned __int64)&Tree.Root + 1);
  }
  else
  {
    Ptr = (unsigned __int64)Tree.Min;
  }
  while ( Ptr )
  {
    v3 = Ptr;
    if ( RtlTryAcquireSRWLockShared((PRTL_SRWLOCK)(Ptr + 72)) )
    {
      v2 = 1;
      break;
    }
    v9 = *(_QWORD ***)(Ptr + 8);
    v10 = Ptr;
    if ( v9 )
    {
      v11 = *v9;
      for ( Ptr = *(_QWORD *)(Ptr + 8); v11; v11 = (_QWORD *)*v11 )
        Ptr = (unsigned __int64)v11;
    }
    else
    {
      while ( 1 )
      {
        Ptr = *(_QWORD *)(Ptr + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Ptr || *(_QWORD *)Ptr == v10 )
          break;
        v10 = Ptr;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&stru_180166440);
  if ( a1 )
    RtlReleaseSRWLockShared(a1 + 9);
  return v3 & -(__int64)(v2 != 0);
}
