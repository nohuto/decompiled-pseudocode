/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x180055B60
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x180009C84 (LdrpGetFromMUIMemCache.c)
 *     LdrpUnloadNode @ 0x180055870 (LdrpUnloadNode.c)
 *     LdrUnloadAlternateResourceModule @ 0x180055B50 (LdrUnloadAlternateResourceModule.c)
 *     LdrResRelease @ 0x18008F700 (LdrResRelease.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x18000C320 (RtlReAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrpRemoveAlternateModuleCacheItem @ 0x1800581BC (LdrpRemoveAlternateModuleCacheItem.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A0840 (NtUnmapViewOfSection.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModuleEx(PVOID DllHandle, ULONG Flags)
{
  __int16 v2; // r12
  BOOLEAN v4; // bl
  unsigned int v5; // edi
  int v6; // esi
  int v7; // r13d
  char *v8; // r14
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  void *v11; // rdx
  void *v12; // rcx
  PVOID Heap; // rax
  int i; // [rsp+24h] [rbp-34h]
  char *v16; // [rsp+60h] [rbp+8h]

  v2 = Flags;
  v4 = 0;
  if ( !DllHandle )
    return 0;
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  v5 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    v6 = AlternateResourceModuleCount;
    for ( i = AlternateResourceModuleCount; ; i = v7 )
    {
      if ( v6 <= 0 )
        goto LABEL_30;
      v7 = v6 - 1;
      v8 = (char *)AlternateResourceModules + 64 * (__int64)(v6 - 1);
      if ( *((PVOID *)v8 + 1) == DllHandle )
        break;
LABEL_6:
      v6 = v7;
    }
    v16 = (char *)AlternateResourceModules + 64 * (__int64)v7;
    v9 = v8 + 32;
    v10 = *((_QWORD *)v8 + 4);
    if ( v10 && (!v2 || v2 == *(_WORD *)v8) && v10 != -1 )
    {
      v11 = (void *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( *((_DWORD *)v8 + 14) == -1073741799 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
        v6 = i;
        v8 = v16;
      }
      else
      {
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v11);
      }
      v12 = (void *)*((_QWORD *)v8 + 5);
      if ( v12 )
      {
        NtClose(v12);
        *((_QWORD *)v8 + 5) = 0LL;
      }
      *v9 = 0LL;
      v5 = AlternateResourceModuleCount;
    }
    if ( v6 != v5 )
      LdrpRemoveAlternateModuleCacheItem((unsigned int)(v6 - 1));
    AlternateResourceModuleCount = --v5;
    if ( v5 )
    {
      if ( v5 >= AltResMemBlockCount - 32 )
      {
LABEL_19:
        v4 = 1;
        goto LABEL_6;
      }
      Heap = RtlReAllocateHeap(
               NtCurrentPeb()->ProcessHeap,
               0,
               AlternateResourceModules,
               (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6);
      if ( !Heap )
      {
        v4 = 0;
        goto LABEL_30;
      }
      AlternateResourceModules = Heap;
      AltResMemBlockCount -= 32;
    }
    else
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules);
      AlternateResourceModules = 0LL;
      AltResMemBlockCount = 0;
    }
    v5 = AlternateResourceModuleCount;
    goto LABEL_19;
  }
  v4 = 1;
LABEL_30:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return v4;
}
