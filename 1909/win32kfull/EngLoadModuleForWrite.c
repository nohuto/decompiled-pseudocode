/*
 * XREFs of EngLoadModuleForWrite @ 0x1C02868B0
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C0285C7C (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 */

HANDLE __stdcall EngLoadModuleForWrite(LPWSTR pwsz, ULONG cjSizeOfModule)
{
  if ( !cjSizeOfModule )
    cjSizeOfModule = -1;
  return (HANDLE)LoadModuleWorkHorse((char *)pwsz, cjSizeOfModule);
}
