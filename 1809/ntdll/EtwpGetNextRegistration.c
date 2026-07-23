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
 *     RtlTryAcquireSRWLockShared @ 0x18007B660 (RtlTryAcquireSRWLockShared.c)
 */

__int64 __fastcall EtwpGetNextRegistration(_RTL_SRWLOCK *a1)
{
  char v2; // si
  unsigned __int64 v3; // rbp
  unsigned __int64 Value; // rbx
  unsigned __int64 v5; // rax
  _QWORD *v6; // rcx
  unsigned __int64 i; // rbx
  _QWORD **v8; // rax
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rcx

  v2 = 0;
  v3 = 0LL;
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  if ( a1 )
  {
    Value = a1[1].Value;
    v5 = (unsigned __int64)a1;
    if ( Value )
    {
      v6 = *(_QWORD **)Value;
      if ( *(_QWORD *)Value )
      {
        do
        {
          Value = (unsigned __int64)v6;
          v6 = (_QWORD *)*v6;
        }
        while ( v6 );
      }
    }
    else
    {
      for ( i = a1[2].Value; ; i = *(_QWORD *)(Value + 16) )
      {
        Value = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Value || *(_QWORD *)Value == v5 )
          break;
        v5 = Value;
      }
    }
  }
  else if ( (*(_BYTE *)&EtwpRegistrationTable.0 & 1) != 0 )
  {
    if ( EtwpRegistrationTable.Min == (_RTL_BALANCED_NODE *)1 )
      Value = 0LL;
    else
      Value = (unsigned __int64)EtwpRegistrationTable.Min ^ ((unsigned __int64)&EtwpRegistrationTable.Root + 1);
  }
  else
  {
    Value = (unsigned __int64)EtwpRegistrationTable.Min;
  }
  while ( Value )
  {
    v3 = Value;
    if ( RtlTryAcquireSRWLockShared((PRTL_SRWLOCK)(Value + 72)) )
    {
      v2 = 1;
      break;
    }
    v8 = *(_QWORD ***)(Value + 8);
    v9 = Value;
    if ( v8 )
    {
      v10 = *v8;
      for ( Value = *(_QWORD *)(Value + 8); v10; v10 = (_QWORD *)*v10 )
        Value = (unsigned __int64)v10;
    }
    else
    {
      while ( 1 )
      {
        Value = *(_QWORD *)(Value + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Value || *(_QWORD *)Value == v9 )
          break;
        v9 = Value;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  if ( a1 )
    RtlReleaseSRWLockShared(a1 + 9);
  return v3 & -(__int64)(v2 != 0);
}
