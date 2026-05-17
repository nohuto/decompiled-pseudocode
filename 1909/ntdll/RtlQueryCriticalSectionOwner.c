/*
 * XREFs of RtlQueryCriticalSectionOwner @ 0x1800E6980
 * Callers:
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800D7FEC (RtlpQueryCriticalSectionOwnerInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     ZwReadVirtualMemory @ 0x18009D670 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall RtlQueryCriticalSectionOwner(char *a1, char a2)
{
  __int64 result; // rax
  signed __int64 v5; // rax
  signed __int64 v6; // rcx
  int v7; // r8d
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  _UNKNOWN **v10; // rbx
  _QWORD *v11; // rdi
  char j; // si
  __int64 v13; // rbx
  __int64 v14; // [rsp+50h] [rbp-58h]
  char *v15; // [rsp+58h] [rbp-50h]
  unsigned int i; // [rsp+B0h] [rbp+8h]
  unsigned int v17; // [rsp+C0h] [rbp+18h]

  result = 0LL;
  if ( a1 )
  {
    v17 = 0;
    v5 = _InterlockedCompareExchange64(&RtlCriticalSectionLock, 17LL, 0LL);
    if ( v5 )
    {
      while ( 1 )
      {
        if ( (v5 & 1) != 0 && ((v5 & 2) != 0 || (v5 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
          return 0LL;
        v6 = (v5 | 1) + 16;
        if ( (v5 & 2) != 0 )
          v6 = v5 | 1;
        if ( v5 == _InterlockedCompareExchange64(&RtlCriticalSectionLock, v6, v5) )
          break;
        v7 = v17;
        if ( v17 )
        {
          if ( v17 < 0x1FFF )
            v7 = 2 * v17;
        }
        else
        {
          if ( NtCurrentTeb()->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
            goto LABEL_16;
          v7 = 64;
        }
        v17 = v7;
        v8 = __rdtsc();
        v9 = 10 * (((v7 - 1) & (unsigned int)v8) + v7) / MEMORY[0x7FFE02D6];
        for ( i = 0; i < v9; ++i )
          _mm_pause();
LABEL_16:
        _m_prefetchw(&RtlCriticalSectionLock);
        v5 = RtlCriticalSectionLock;
      }
    }
    v10 = (_UNKNOWN **)RtlCriticalSectionList;
    v11 = RtlCriticalSectionList;
    for ( j = 0; v10 != &RtlCriticalSectionList; j ^= 1u )
    {
      if ( !*((_WORD *)v10 - 8)
        && (!a2 || a1 == (char *)*(v10 - 1) + 8)
        && (int)ZwReadVirtualMemory() >= 0
        && (a2 || v15 == a1) )
      {
        v13 = v14;
        goto LABEL_33;
      }
      v10 = (_UNKNOWN **)*v10;
      if ( v10 == v11 )
        break;
      if ( j )
        v11 = (_QWORD *)*v11;
    }
    v13 = 0LL;
LABEL_33:
    RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
    return v13;
  }
  return result;
}
