/*
 * XREFs of LdrpDecrementModuleLoadCountEx @ 0x180042678
 * Callers:
 *     LdrpLoadDllInternal @ 0x180026788 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x1800269F0 (LdrpFastpthReloadedDll.c)
 *     LdrUnloadDll @ 0x1800425D0 (LdrUnloadDll.c)
 *     LdrpCorInitialize @ 0x180054948 (LdrpCorInitialize.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpReleaseLoaderLock @ 0x18002AFD4 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18002B034 (LdrpAcquireLoaderLock.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x180042704 (LdrpDecrementNodeLoadCountLockHeld.c)
 *     LdrpUnloadNode @ 0x180055870 (LdrpUnloadNode.c)
 */

__int64 __fastcall LdrpDecrementModuleLoadCountEx(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v9; // rcx
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( (_DWORD)a2 && *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) == 1 )
    return 3221226029LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
  v6 = *(_QWORD *)(a1 + 152);
  v7 = LdrpDecrementNodeLoadCountLockHeld(v6, v4, &v10);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v10 )
  {
    LdrpAcquireLoaderLock();
    LdrpUnloadNode(v6);
    LdrpReleaseLoaderLock(v9, 8, 0);
  }
  return v7;
}
