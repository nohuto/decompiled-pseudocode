/*
 * XREFs of _wcstoi64 @ 0x1401A3088
 * Callers:
 *     PiNormalizeDeviceText @ 0x14070018C (PiNormalizeDeviceText.c)
 * Callees:
 *     wcstoxq @ 0x1401A30B8 (wcstoxq.c)
 */

__int64 __cdecl wcstoi64(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxq((unsigned int)&_initiallocalestructinfo, (_DWORD)Str, (_DWORD)EndPtr, Radix, 0, 0LL);
}
