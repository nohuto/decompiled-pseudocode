/*
 * XREFs of RtlpGetCachedPath @ 0x1800545E8
 * Callers:
 *     RtlGetSearchPath @ 0x180054190 (RtlGetSearchPath.c)
 *     RtlGetExePath @ 0x1800541D0 (RtlGetExePath.c)
 *     LdrpGetDllPath @ 0x180054338 (LdrpGetDllPath.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpGetCachedPath(
        unsigned __int64 *a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3,
        __int64 a4)
{
  char v8; // di
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  unsigned __int64 v15; // rdi

  if ( a3 || a4 )
  {
    v8 = 0;
    v9 = 0LL;
  }
  else
  {
    v8 = 1;
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpCachedPathLock, (unsigned __int64)a2, 0LL, 0LL);
    v9 = *a1;
    if ( *a1 && (*(_BYTE *)(v9 + 100) || *(_QWORD *)(v9 + 88) == NtCurrentPeb()->ProcessParameters->EnvironmentVersion) )
    {
      ++*(_QWORD *)(v9 + 80);
      RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
      return v9;
    }
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  }
  result = a2(a3, a4);
  v14 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = 1LL;
    if ( v8 )
    {
      v15 = 0LL;
      RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpCachedPathLock, v11, v12, v13);
      if ( *a1 == v9 )
      {
        *a1 = v14;
        ++*(_QWORD *)(v14 + 80);
        if ( v9 )
        {
          if ( (*(_QWORD *)(v9 + 80))-- == 1LL )
            v15 = v9;
        }
      }
      RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
      if ( v15 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
    }
    return v14;
  }
  return result;
}
