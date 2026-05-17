/*
 * XREFs of EtwpGetNextRegistration @ 0x180050A70
 * Callers:
 *     EtwpDisableTraceProviders @ 0x180050414 (EtwpDisableTraceProviders.c)
 *     EtwDeliverDataBlock @ 0x1800506D0 (EtwDeliverDataBlock.c)
 *     EtwEnumerateProcessRegGuids @ 0x18010EA70 (EtwEnumerateProcessRegGuids.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007B650 (RtlTryAcquireSRWLockShared.c)
 */

__int64 __fastcall EtwpGetNextRegistration(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  char v5; // si
  unsigned __int64 v6; // rbp
  unsigned __int64 j; // rbx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 i; // rbx
  _QWORD **v11; // rax
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rcx

  v5 = 0;
  v6 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  if ( a1 )
  {
    j = *(_QWORD *)(a1 + 8);
    v8 = a1;
    if ( j )
    {
      v9 = *(_QWORD **)j;
      if ( *(_QWORD *)j )
      {
        do
        {
          j = (unsigned __int64)v9;
          v9 = (_QWORD *)*v9;
        }
        while ( v9 );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(j + 16) )
      {
        j = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !j || *(_QWORD *)j == v8 )
          break;
        v8 = j;
      }
    }
  }
  else if ( (qword_180166428 & 1) != 0 )
  {
    if ( qword_180166428 == 1 )
      j = 0LL;
    else
      j = qword_180166428 ^ ((unsigned __int64)&EtwpRegistrationTable + 1);
  }
  else
  {
    j = qword_180166428;
  }
  while ( j )
  {
    v6 = j;
    if ( (unsigned __int8)RtlTryAcquireSRWLockShared(j + 72) )
    {
      v5 = 1;
      break;
    }
    v11 = *(_QWORD ***)(j + 8);
    v12 = j;
    if ( v11 )
    {
      v13 = *v11;
      for ( j = *(_QWORD *)(j + 8); v13; v13 = (_QWORD *)*v13 )
        j = (unsigned __int64)v13;
    }
    else
    {
      while ( 1 )
      {
        j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !j || *(_QWORD *)j == v12 )
          break;
        v12 = j;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  if ( a1 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
  return v6 & -(__int64)(v5 != 0);
}
