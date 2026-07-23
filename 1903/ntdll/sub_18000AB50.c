/*
 * XREFs of sub_18000AB50 @ 0x18000AB50
 * Callers:
 *     EtwDeliverDataBlock @ 0x180007FD0 (EtwDeliverDataBlock.c)
 *     sub_18000AA3C @ 0x18000AA3C (sub_18000AA3C.c)
 *     sub_18000AD08 @ 0x18000AD08 (sub_18000AD08.c)
 * Callees:
 *     sub_18000630C @ 0x18000630C (sub_18000630C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     memcmp @ 0x180090560 (memcmp.c)
 */

_QWORD *__fastcall sub_18000AB50(_QWORD *Buf1)
{
  unsigned __int64 Root; // rbx
  int v3; // esi
  _QWORD *i; // rdi
  int v5; // eax
  unsigned __int64 v6; // rax
  _QWORD *v8; // rcx
  _QWORD **v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax

  RtlAcquireSRWLockExclusive(&stru_180166440);
  Root = (unsigned __int64)Parent.Root;
  if ( ((__int64)Parent.Min & 1) != 0 && Parent.Root )
    Root = (unsigned __int64)&Parent ^ (unsigned __int64)Parent.Root;
  v3 = (__int64)Parent.Min & 1;
  i = 0LL;
  while ( Root )
  {
    v5 = memcmp(Buf1, (const void *)(Root + 24), 0x10uLL);
    if ( v5 < 0 )
      goto LABEL_10;
    if ( v5 <= 0 )
    {
      i = (_QWORD *)Root;
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
    while ( !sub_18000630C((__int64)i) )
    {
      v9 = (_QWORD **)i[1];
      if ( v9 )
      {
        v10 = *v9;
        for ( i = (_QWORD *)i[1]; v10; v10 = (_QWORD *)*v10 )
          i = v10;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v8 )
            break;
          v8 = i;
        }
      }
      if ( i )
      {
        v11 = *Buf1 - i[3];
        if ( *Buf1 == i[3] )
          v11 = Buf1[1] - i[4];
        if ( !v11 )
          continue;
      }
      goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    i = 0LL;
  }
  RtlReleaseSRWLockExclusive(&stru_180166440);
  return i;
}
