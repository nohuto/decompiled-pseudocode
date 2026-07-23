/*
 * XREFs of EtwpFindRegistration @ 0x18000844C
 * Callers:
 *     EtwDeliverDataBlock @ 0x180007FD0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     EtwpRegistrationCompare @ 0x18006C748 (EtwpRegistrationCompare.c)
 *     RtlTryAcquireSRWLockShared @ 0x1800791F0 (RtlTryAcquireSRWLockShared.c)
 */

_RTL_SRWLOCK *__fastcall EtwpFindRegistration(__int64 a1, __int16 a2)
{
  unsigned __int64 Root; // rbx
  int v3; // esi
  _RTL_SRWLOCK *i; // rdi
  int v5; // eax
  unsigned __int64 v6; // rax
  _RTL_SRWLOCK **Value; // rax
  _RTL_SRWLOCK *v9; // rcx
  _RTL_SRWLOCK *v10; // rcx
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
      Value = (_RTL_SRWLOCK **)i[1].Value;
      v9 = i;
      if ( Value )
      {
        v10 = *Value;
        for ( i = (_RTL_SRWLOCK *)i[1].Value; v10; v10 = (_RTL_SRWLOCK *)v10->Value )
          i = v10;
      }
      else
      {
        while ( 1 )
        {
          i = (_RTL_SRWLOCK *)(i[2].Value & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_RTL_SRWLOCK *)i->Value == v9 )
            break;
          v9 = i;
        }
      }
      if ( !i || (unsigned int)EtwpRegistrationCompare(&v11, i) )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    i = 0LL;
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return i;
}
