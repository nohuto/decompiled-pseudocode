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

_QWORD *__fastcall sub_18000844C(__int64 a1, __int16 a2)
{
  unsigned __int64 v2; // rbx
  int v3; // esi
  _QWORD *i; // rdi
  int v5; // eax
  unsigned __int64 v6; // rax
  _QWORD **v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int16 v12; // [rsp+28h] [rbp-10h]

  v11 = a1;
  v12 = a2;
  RtlAcquireSRWLockExclusive(&unk_180166440);
  v2 = qword_180166430;
  if ( (qword_180166438 & 1) != 0 && qword_180166430 )
    v2 = (unsigned __int64)&qword_180166430 ^ qword_180166430;
  v3 = qword_180166438 & 1;
  i = 0LL;
  while ( v2 )
  {
    v5 = sub_18006C4F8(&v11, v2);
    if ( v5 < 0 )
      goto LABEL_10;
    if ( v5 <= 0 )
    {
      i = (_QWORD *)v2;
LABEL_10:
      v6 = *(_QWORD *)v2;
      goto LABEL_11;
    }
    v6 = *(_QWORD *)(v2 + 8);
LABEL_11:
    if ( v3 && v6 )
      v2 ^= v6;
    else
      v2 = v6;
  }
  if ( i )
  {
    while ( !(unsigned __int8)RtlTryAcquireSRWLockShared(i + 9) )
    {
      v8 = (_QWORD **)i[1];
      v9 = i;
      if ( v8 )
      {
        v10 = *v8;
        for ( i = (_QWORD *)i[1]; v10; v10 = (_QWORD *)*v10 )
          i = v10;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v9 )
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
  RtlReleaseSRWLockExclusive(&unk_180166440);
  return i;
}
