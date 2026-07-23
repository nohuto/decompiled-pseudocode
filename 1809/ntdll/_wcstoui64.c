/*
 * XREFs of _wcstoui64 @ 0x180091BC0
 * Callers:
 *     <none>
 * Callees:
 *     wcstoxq @ 0x180091BF4 (wcstoxq.c)
 */

unsigned __int64 __cdecl wcstoui64(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return wcstoxq((unsigned int)&_initiallocalestructinfo, (_DWORD)String, (_DWORD)EndPtr, Radix, 1, 0LL);
}
