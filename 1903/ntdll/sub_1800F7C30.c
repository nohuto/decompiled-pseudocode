/*
 * XREFs of sub_1800F7C30 @ 0x1800F7C30
 * Callers:
 *     sub_1800F8260 @ 0x1800F8260 (sub_1800F8260.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlSizeHeap @ 0x1800400A0 (RtlSizeHeap.c)
 *     sub_1800F8464 @ 0x1800F8464 (sub_1800F8464.c)
 */

char sub_1800F7C30()
{
  unsigned int v0; // edi
  __int64 i; // r14
  __int64 v2; // r15
  __int64 v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // r9
  ULONG v6; // r8d
  ULONG NumberOfHeaps; // r10d
  __int64 v8; // rdx
  void *v9; // rcx
  __int64 Src; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0;
  for ( i = 0LL; ; i += 16LL )
  {
    v2 = v0 & 0xF;
    if ( _interlockedbittestandset64(*(volatile signed __int32 **)(qword_1801669E8 + 8 * v2), 0LL) )
      break;
    v3 = 16LL * v0;
    v4 = *(__int64 **)(i + qword_180166870);
    if ( v4 != (__int64 *)(v3 + qword_180166870) )
    {
      while ( 1 )
      {
        v5 = v4[3];
        if ( v5 )
        {
          v6 = 0;
          NumberOfHeaps = NtCurrentPeb()->NumberOfHeaps;
          if ( NumberOfHeaps )
          {
            v8 = 0LL;
            while ( (PVOID)v4[2] != NtCurrentPeb()->ProcessHeaps[v8] )
            {
              ++v6;
              ++v8;
              if ( v6 >= NumberOfHeaps )
                goto LABEL_12;
            }
            v9 = (void *)v4[2];
            Src = 8 * v5;
            if ( RtlSizeHeap(v9, 0, (PVOID)(8 * v5)) != -1LL && !(unsigned __int8)sub_1800F8464(0x20uLL, &Src, 8uLL) )
              break;
          }
        }
LABEL_12:
        v4 = (__int64 *)*v4;
        if ( v4 == (__int64 *)(v3 + qword_180166870) )
          goto LABEL_13;
      }
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801669E8 + 8LL * (v0 & 0xF)));
      return 0;
    }
LABEL_13:
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801669E8 + 8 * v2));
    if ( ++v0 >= 0x1EEF )
      return 1;
  }
  return 0;
}
