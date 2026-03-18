/*
 * XREFs of EngLoadModuleForWrite @ 0x1C025AEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C025A3E0 (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 */

HANDLE __stdcall EngLoadModuleForWrite(LPWSTR pwsz, ULONG cjSizeOfModule)
{
  if ( !cjSizeOfModule )
    cjSizeOfModule = -1;
  return (HANDLE)LoadModuleWorkHorse((char *)pwsz, cjSizeOfModule);
}
