/*
 * XREFs of EtwpFindRegistration @ 0x180050BA4
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800506D0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpRegistrationCompare @ 0x1800753E0 (EtwpRegistrationCompare.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007B650 (RtlTryAcquireSRWLockShared.c)
 */

_QWORD *__fastcall EtwpFindRegistration(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  int v5; // esi
  _QWORD *i; // rdi
  int v7; // eax
  unsigned __int64 v8; // rax
  _QWORD **v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  __int16 v14; // [rsp+28h] [rbp-10h]

  v13 = a1;
  v14 = a2;
  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  v4 = EtwpRegistrationTable;
  if ( (qword_180166428 & 1) != 0 && EtwpRegistrationTable )
    v4 = (unsigned __int64)&EtwpRegistrationTable ^ EtwpRegistrationTable;
  v5 = qword_180166428 & 1;
  i = 0LL;
  while ( v4 )
  {
    v7 = EtwpRegistrationCompare(&v13, v4);
    if ( v7 >= 0 )
    {
      if ( v7 > 0 )
      {
        v8 = *(_QWORD *)(v4 + 8);
        goto LABEL_10;
      }
      i = (_QWORD *)v4;
    }
    v8 = *(_QWORD *)v4;
LABEL_10:
    if ( v5 && v8 )
      v4 ^= v8;
    else
      v4 = v8;
  }
  if ( i )
  {
    while ( !(unsigned __int8)RtlTryAcquireSRWLockShared(i + 9) )
    {
      v9 = (_QWORD **)i[1];
      v10 = i;
      if ( v9 )
      {
        v11 = *v9;
        for ( i = (_QWORD *)i[1]; v11; v11 = (_QWORD *)*v11 )
          i = v11;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v10 )
            break;
          v10 = i;
        }
      }
      if ( !i || (unsigned int)EtwpRegistrationCompare(&v13, i) )
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
