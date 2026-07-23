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

void __fastcall sub_1800F86AC(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  char v5; // si
  unsigned int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rbx
  _QWORD *i; // rcx
  PVOID **v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdx

  v4 = 0LL;
  v5 = 0;
  v6 = sub_1800F7FE8(a2);
  v7 = v6 & 0xF;
  v8 = v6;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801669E8 + 8 * v7));
  v9 = 2 * v8;
  for ( i = *(_QWORD **)(qword_180166870 + 8 * v9); i != (_QWORD *)(qword_180166870 + 8 * v9); i = (_QWORD *)*i )
  {
    v4 = i;
    if ( i[3] == a2 && i[2] == a1 )
    {
      v12 = *i;
      if ( *(_QWORD **)(*i + 8LL) != i || (v13 = (_QWORD *)i[1], (_QWORD *)*v13 != i) )
        __fastfail(3u);
      *v13 = v12;
      v5 = 1;
      *(_QWORD *)(v12 + 8) = v13;
      break;
    }
  }
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801669E8 + 8 * v7));
  if ( v5 )
  {
    v11 = (PVOID **)v4[4];
    if ( v11 )
    {
      sub_1800F7B98(v11);
      v4[4] = 0LL;
    }
    RtlFreeHeap(qword_180166A08, 0, v4);
  }
}
