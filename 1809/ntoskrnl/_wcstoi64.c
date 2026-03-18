/*
 * XREFs of _wcstoi64 @ 0x1401980F8
 * Callers:
 *     PiNormalizeDeviceText @ 0x1406FDD60 (PiNormalizeDeviceText.c)
 * Callees:
 *     wcstoxq @ 0x140198128 (wcstoxq.c)
 */

__int64 __cdecl wcstoi64(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxq((unsigned int)&_initiallocalestructinfo, (_DWORD)Str, (_DWORD)EndPtr, Radix, 0, 0LL);
}
