/*
 * XREFs of LdrpIncrementModuleLoadCount @ 0x18002228C
 * Callers:
 *     LdrGetDllHandleEx @ 0x1800217F0 (LdrGetDllHandleEx.c)
 *     LdrpFastpthReloadedDll @ 0x1800225E4 (LdrpFastpthReloadedDll.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18002AA74 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrGetDllHandleByMapping @ 0x18002DD30 (LdrGetDllHandleByMapping.c)
 *     LdrAddRefDll @ 0x18002F760 (LdrAddRefDll.c)
 *     LdrGetDllHandleByName @ 0x1800776C0 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpIncrementModuleLoadCount(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax

  v2 = 0;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v3 = *(_QWORD *)(a1 + 152);
  v4 = *(_DWORD *)(v3 + 24);
  if ( v4 != -1 )
  {
    if ( v4 )
    {
      *(_DWORD *)(v3 + 24) = v4 + 1;
    }
    else if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ++*(_DWORD *)(v3 + 28);
    }
    else
    {
      v2 = -1073741515;
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v2;
}
