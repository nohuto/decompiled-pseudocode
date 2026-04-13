/*
 * XREFs of __crtInitializeCriticalSectionEx @ 0x1800B3650
 * Callers:
 *     _Mtxinit @ 0x1800B2830 (_Mtxinit.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall _crtInitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, DWORD Flags)
{
  return InitializeCriticalSectionEx(lpCriticalSection, dwSpinCount, Flags);
}
