/*
 * XREFs of _stricmp_0 @ 0x1C0030BA7
 * Callers:
 *     OSInterface @ 0x1C00249C0 (OSInterface.c)
 *     Debugger @ 0x1C0064748 (Debugger.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp_0(const char *Str1, const char *Str2)
{
  return _stricmp(Str1, Str2);
}
