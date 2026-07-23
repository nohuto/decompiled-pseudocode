/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x18006F550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModule(PVOID DllHandle)
{
  return LdrUnloadAlternateResourceModuleEx(DllHandle, 0);
}
