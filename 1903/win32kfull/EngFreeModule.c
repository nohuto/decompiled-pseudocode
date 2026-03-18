/*
 * XREFs of EngFreeModule @ 0x1C0286E70
 * Callers:
 *     <none>
 * Callees:
 *     vUnmapFile @ 0x1C00E90B4 (vUnmapFile.c)
 */

void __stdcall EngFreeModule(HANDLE h)
{
  char *v1; // rbx
  bool v3; // zf
  int v4; // esi
  __int64 v5; // rax
  char **v6; // rcx

  if ( h )
  {
    v1 = (char *)h - 24;
    if ( GreEngLoadModuleAllocListLock )
      GreAcquireSemaphore(GreEngLoadModuleAllocListLock);
    v3 = (*((_DWORD *)v1 + 4))-- == 1;
    v4 = *((_DWORD *)v1 + 4);
    if ( v3 )
    {
      v5 = *(_QWORD *)v1;
      if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || (v6 = (char **)*((_QWORD *)v1 + 1), *v6 != v1) )
        __fastfail(3u);
      *v6 = (char *)v5;
      *(_QWORD *)(v5 + 8) = v6;
    }
    if ( GreEngLoadModuleAllocListLock )
    {
      EtwTraceGreLockReleaseSemaphore(L"GreEngLoadModuleAllocListLock", GreEngLoadModuleAllocListLock);
      GreReleaseSemaphoreInternal(GreEngLoadModuleAllocListLock);
    }
    if ( !v4 )
    {
      vUnmapFile((PVOID *)h);
      Win32FreePool((char *)h - *((unsigned int *)v1 + 5));
    }
  }
}
