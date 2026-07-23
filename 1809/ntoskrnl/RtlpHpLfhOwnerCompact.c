/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x1401B6758
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x1401B66BC (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x1401B6758 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     RtlpHpReleaseLockShared @ 0x14000817C (RtlpHpReleaseLockShared.c)
 *     RtlpHpAcquireLockShared @ 0x140009644 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhOwnerCompact @ 0x1401B6758 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402FD8EC (RtlpHpLfhSubsegmentDecommitPages.c)
 */

_QWORD *__fastcall RtlpHpLfhOwnerCompact(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int8 v6; // al
  __int64 v7; // rdi
  __int64 v8; // rbp
  _QWORD **v9; // rdi
  _QWORD *result; // rax
  volatile LONG *v11; // rbp
  KIRQL v12; // al
  _QWORD *v13; // rbx
  unsigned __int8 v14; // r15

  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v6 = *(_BYTE *)(a2 + 2);
    v7 = 0LL;
    if ( v6 )
    {
      v8 = v6;
      do
      {
        RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(v7 + *(_QWORD *)(a2 + 96)), a3);
        v7 += 8LL;
        --v8;
      }
      while ( v8 );
    }
  }
  v9 = (_QWORD **)(a2 + 24);
  if ( *v9 != v9 || (result = (_QWORD *)(a2 + 40), (_QWORD *)*result != result) )
  {
    v11 = (volatile LONG *)(a2 + 16);
    v12 = RtlpHpAcquireLockShared((volatile LONG *)(a2 + 16), *(unsigned __int8 *)(a1 + 57));
    v13 = *v9;
    v14 = v12;
    while ( v13 != v9 )
    {
      RtlpHpLfhSubsegmentDecommitPages(a1, (_DWORD)v13, -1, 1, a3);
      v13 = (_QWORD *)*v13;
    }
    return (_QWORD *)RtlpHpReleaseLockShared(v11, *(unsigned __int8 *)(a1 + 57), v14);
  }
  return result;
}
