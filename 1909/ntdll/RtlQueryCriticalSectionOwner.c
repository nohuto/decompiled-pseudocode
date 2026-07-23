/*
 * XREFs of RtlQueryCriticalSectionOwner @ 0x1800E6980
 * Callers:
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800D7FEC (RtlpQueryCriticalSectionOwnerInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     ZwReadVirtualMemory @ 0x18009D670 (ZwReadVirtualMemory.c)
 */

HANDLE __cdecl RtlQueryCriticalSectionOwner(HANDLE EventHandle)
{
  char v1; // dl
  char v2; // r15
  HANDLE result; // rax
  signed __int64 Value; // rax
  signed __int64 v6; // rcx
  int v7; // r8d
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  _UNKNOWN **v10; // rbx
  _QWORD *v11; // rdi
  char j; // si
  __int64 v13; // rdx
  void *v14; // rbx
  _BYTE Buffer[16]; // [rsp+40h] [rbp-68h] BYREF
  void *v16; // [rsp+50h] [rbp-58h]
  HANDLE v17; // [rsp+58h] [rbp-50h]
  unsigned int i; // [rsp+B0h] [rbp+8h]
  unsigned int v19; // [rsp+C0h] [rbp+18h]

  v2 = v1;
  result = 0LL;
  if ( EventHandle )
  {
    v19 = 0;
    Value = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, 17LL, 0LL);
    if ( Value )
    {
      while ( 1 )
      {
        if ( (Value & 1) != 0 && ((Value & 2) != 0 || (Value & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
          return 0LL;
        v6 = (Value | 1) + 16;
        if ( (Value & 2) != 0 )
          v6 = Value | 1;
        if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, v6, Value) )
          break;
        v7 = v19;
        if ( v19 )
        {
          if ( v19 < 0x1FFF )
            v7 = 2 * v19;
        }
        else
        {
          if ( NtCurrentTeb()->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
            goto LABEL_16;
          v7 = 64;
        }
        v19 = v7;
        v8 = __rdtsc();
        v9 = 10 * (((v7 - 1) & (unsigned int)v8) + v7) / MEMORY[0x7FFE02D6];
        for ( i = 0; i < v9; ++i )
          _mm_pause();
LABEL_16:
        _m_prefetchw(&RtlCriticalSectionLock);
        Value = RtlCriticalSectionLock.Value;
      }
    }
    v10 = (_UNKNOWN **)RtlCriticalSectionList;
    v11 = RtlCriticalSectionList;
    for ( j = 0; v10 != &RtlCriticalSectionList; j ^= 1u )
    {
      if ( !*((_WORD *)v10 - 8) )
      {
        v13 = (__int64)*(v10 - 1);
        if ( (!v2 || EventHandle == (HANDLE)(v13 + 8))
          && ZwReadVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)v13, Buffer, 0x28uLL, 0LL) >= 0
          && (v2 || v17 == EventHandle) )
        {
          v14 = v16;
          goto LABEL_33;
        }
      }
      v10 = (_UNKNOWN **)*v10;
      if ( v10 == v11 )
        break;
      if ( j )
        v11 = (_QWORD *)*v11;
    }
    v14 = 0LL;
LABEL_33:
    RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
    return v14;
  }
  return result;
}
