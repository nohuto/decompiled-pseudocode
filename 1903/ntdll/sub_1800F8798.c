/*
 * XREFs of sub_1800F8798 @ 0x1800F8798
 * Callers:
 *     sub_1800F8090 @ 0x1800F8090 (sub_1800F8090.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_1800F7B98 @ 0x1800F7B98 (sub_1800F7B98.c)
 */

_QWORD *__fastcall sub_1800F8798(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 **v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rbx
  _QWORD *result; // rax
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v14[1] = v14;
  v2 = 0;
  v14[0] = v14;
  do
  {
    v3 = v2 & 0xF;
    RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_1801669E8 + 8 * v3));
    v4 = *(__int64 **)(qword_180166870 + 16LL * v2);
    v5 = qword_180166870 + 16LL * v2;
    if ( v4 != (__int64 *)v5 )
    {
      do
      {
        v6 = *v4;
        if ( v4[2] == a1 )
        {
          if ( *(__int64 **)(v6 + 8) != v4
            || (v7 = (__int64 **)v4[1], *v7 != v4)
            || (*v7 = (__int64 *)v6, *(_QWORD *)(v6 + 8) = v7, v8 = v14[0], *(_QWORD **)(v14[0] + 8LL) != v14) )
          {
LABEL_16:
            __fastfail(3u);
          }
          *v4 = v14[0];
          v4[1] = (__int64)v14;
          *(_QWORD *)(v8 + 8) = v4;
          v14[0] = v4;
        }
        v4 = (__int64 *)v6;
      }
      while ( v6 != v5 );
    }
    RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801669E8 + 8 * v3));
    ++v2;
  }
  while ( v2 < 0x1EEF );
  while ( 1 )
  {
    v9 = v14[0];
    result = v14;
    if ( (_QWORD *)v14[0] == v14 )
      return result;
    v11 = *(_QWORD *)v14[0];
    if ( *(_QWORD *)(*(_QWORD *)v14[0] + 8LL) != v14[0] )
      goto LABEL_16;
    v12 = *(_QWORD **)(v14[0] + 8LL);
    if ( *v12 != v14[0] )
      goto LABEL_16;
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    v13 = *(_QWORD *)(v9 + 32);
    if ( v13 )
    {
      sub_1800F7B98(v13);
      *(_QWORD *)(v9 + 32) = 0LL;
    }
    RtlFreeHeap(qword_180166A08, 0, v9);
  }
}
