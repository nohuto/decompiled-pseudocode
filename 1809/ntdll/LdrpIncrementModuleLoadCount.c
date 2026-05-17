/*
 * XREFs of LdrpIncrementModuleLoadCount @ 0x180026B34
 * Callers:
 *     LdrGetDllHandleEx @ 0x1800228A0 (LdrGetDllHandleEx.c)
 *     LdrpFastpthReloadedDll @ 0x1800269F0 (LdrpFastpthReloadedDll.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x180028D4C (LdrpFindOrPrepareLoadingModule.c)
 *     LdrAddRefDll @ 0x180045070 (LdrAddRefDll.c)
 *     LdrGetDllHandleByMapping @ 0x180076EB0 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x18007B6C0 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpIncrementModuleLoadCount(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  int v7; // eax

  v5 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
  v6 = *(_QWORD *)(a1 + 152);
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 != -1 )
  {
    if ( v7 )
    {
      *(_DWORD *)(v6 + 24) = v7 + 1;
    }
    else if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ++*(_DWORD *)(v6 + 28);
    }
    else
    {
      v5 = -1073741515;
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v5;
}
