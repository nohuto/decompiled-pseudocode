/*
 * XREFs of EtwpFindRegistration @ 0x180050BA4
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800506D0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpRegistrationCompare @ 0x1800753F0 (EtwpRegistrationCompare.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007B660 (RtlTryAcquireSRWLockShared.c)
 */

_RTL_SRWLOCK *__fastcall EtwpFindRegistration(__int64 a1, __int16 a2)
{
  unsigned __int64 Root; // rbx
  int v3; // esi
  _RTL_SRWLOCK *i; // rdi
  int v5; // eax
  unsigned __int64 v6; // rax
  _RTL_SRWLOCK **Value; // rax
  _RTL_SRWLOCK *v8; // rcx
  _RTL_SRWLOCK *v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int16 v12; // [rsp+28h] [rbp-10h]

  v11 = a1;
  v12 = a2;
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  Root = (unsigned __int64)EtwpRegistrationTable.Root;
  if ( (*(_BYTE *)&EtwpRegistrationTable.0 & 1) != 0 && EtwpRegistrationTable.Root )
    Root = (unsigned __int64)&EtwpRegistrationTable ^ (unsigned __int64)EtwpRegistrationTable.Root;
  v3 = *(_BYTE *)&EtwpRegistrationTable.0 & 1;
  i = 0LL;
  while ( Root )
  {
    v5 = EtwpRegistrationCompare(&v11, Root);
    if ( v5 >= 0 )
    {
      if ( v5 > 0 )
      {
        v6 = *(_QWORD *)(Root + 8);
        goto LABEL_10;
      }
      i = (_RTL_SRWLOCK *)Root;
    }
    v6 = *(_QWORD *)Root;
LABEL_10:
    if ( v3 && v6 )
      Root ^= v6;
    else
      Root = v6;
  }
  if ( i )
  {
    while ( !RtlTryAcquireSRWLockShared(i + 9) )
    {
      Value = (_RTL_SRWLOCK **)i[1].Value;
      v8 = i;
      if ( Value )
      {
        v9 = *Value;
        for ( i = (_RTL_SRWLOCK *)i[1].Value; v9; v9 = (_RTL_SRWLOCK *)v9->Value )
          i = v9;
      }
      else
      {
        while ( 1 )
        {
          i = (_RTL_SRWLOCK *)(i[2].Value & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_RTL_SRWLOCK *)i->Value == v8 )
            break;
          v8 = i;
        }
      }
      if ( !i || (unsigned int)EtwpRegistrationCompare(&v11, i) )
        goto LABEL_26;
    }
  }
  else
  {
LABEL_26:
    i = 0LL;
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return i;
}
