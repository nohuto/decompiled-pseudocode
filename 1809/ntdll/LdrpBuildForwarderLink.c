/*
 * XREFs of LdrpBuildForwarderLink @ 0x180026AA0
 * Callers:
 *     LdrpLoadDllInternal @ 0x180026788 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x1800269F0 (LdrpFastpthReloadedDll.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpRecordModuleDependency @ 0x180026B8C (LdrpRecordModuleDependency.c)
 */

__int64 __fastcall LdrpBuildForwarderLink(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v8 = 0;
  if ( a1 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) || (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      LdrpRecordModuleDependency(a1, a2, 0LL, &v8);
      v4 = v8;
    }
    else
    {
      v4 = -1073741515;
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  }
  return v4;
}
