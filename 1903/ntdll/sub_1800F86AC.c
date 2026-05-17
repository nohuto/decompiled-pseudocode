/*
 * XREFs of sub_1800F86AC @ 0x1800F86AC
 * Callers:
 *     sub_1800F8090 @ 0x1800F8090 (sub_1800F8090.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_1800F7B98 @ 0x1800F7B98 (sub_1800F7B98.c)
 *     sub_1800F7FE8 @ 0x1800F7FE8 (sub_1800F7FE8.c)
 */

signed __int64 __fastcall sub_1800F86AC(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  char v5; // si
  unsigned int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rbx
  _QWORD *i; // rcx
  signed __int64 result; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx

  v4 = 0LL;
  v5 = 0;
  v6 = sub_1800F7FE8(a2);
  v7 = v6 & 0xF;
  v8 = v6;
  RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_1801669E8 + 8 * v7));
  v9 = 2 * v8;
  for ( i = *(_QWORD **)(qword_180166870 + 8 * v9); i != (_QWORD *)(qword_180166870 + 8 * v9); i = (_QWORD *)*i )
  {
    v4 = (__int64)i;
    if ( i[3] == a2 && i[2] == a1 )
    {
      v13 = (_QWORD *)*i;
      if ( *(_QWORD **)(*i + 8LL) != i || (v14 = (_QWORD *)i[1], (_QWORD *)*v14 != i) )
        __fastfail(3u);
      *v14 = v13;
      v5 = 1;
      v13[1] = v14;
      break;
    }
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801669E8 + 8 * v7));
  if ( v5 )
  {
    v12 = *(_QWORD *)(v4 + 32);
    if ( v12 )
    {
      sub_1800F7B98(v12);
      *(_QWORD *)(v4 + 32) = 0LL;
    }
    return RtlFreeHeap(qword_180166A08, 0, v4);
  }
  return result;
}
