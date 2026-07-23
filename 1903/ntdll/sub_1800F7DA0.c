/*
 * XREFs of sub_1800F7DA0 @ 0x1800F7DA0
 * Callers:
 *     sub_1800F8260 @ 0x1800F8260 (sub_1800F8260.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_1800F8464 @ 0x1800F8464 (sub_1800F8464.c)
 */

char sub_1800F7DA0()
{
  int v0; // ebp
  __int64 v1; // r9
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // r15
  __int64 v5; // rsi
  __int64 *v6; // rbx
  size_t v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-20h]

  v0 = 0;
  if ( !qword_180166A10 )
    return 0;
  v1 = 0LL;
  for ( *((_DWORD *)qword_180166A10 + 16) = dword_180166878;
        (unsigned int)v1 < dword_1801669F8;
        *((_QWORD *)qword_180166A10 + 10) += *(_QWORD *)(v2 + 24) )
  {
    *((_QWORD *)qword_180166A10 + 9) += *(_QWORD *)(*(_QWORD *)(qword_180166568 + 8 * v1) + 16LL);
    v2 = *(_QWORD *)(qword_180166568 + 8 * v1);
    v1 = (unsigned int)(v1 + 1);
  }
  v3 = 0;
  v4 = 0LL;
  while ( 2 )
  {
    v5 = v3 & 0xF;
    v6 = *(__int64 **)(v4 + qword_180166880);
    if ( _interlockedbittestandset64(*(volatile signed __int32 **)(qword_180166A00 + 8 * v5), 0LL) )
      return 0;
    while ( v6 != (__int64 *)(qword_180166880 + 16LL * v3) )
    {
      ++v0;
      v9 = 8LL * *((unsigned __int16 *)v6 + 8);
      v7 = 8 * (unsigned int)*((unsigned __int16 *)v6 + 8) + 24;
      *((_DWORD *)v6 + 5) = v0;
      if ( !(unsigned __int8)sub_1800F8464(v7, v6 + 3, v9) )
      {
        RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180166A00 + 8 * v5));
        return 0;
      }
      v6 = (__int64 *)*v6;
    }
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180166A00 + 8 * v5));
    ++v3;
    v4 += 16LL;
    if ( v3 < 0x1EEF )
      continue;
    break;
  }
  return 1;
}
