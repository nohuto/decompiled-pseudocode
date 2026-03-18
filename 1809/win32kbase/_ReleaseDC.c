/*
 * XREFs of _ReleaseDC @ 0x1C0029EE0
 * Callers:
 *     UserGetMonitorDC @ 0x1C00451E8 (UserGetMonitorDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1C0027A50 (ReleaseCacheDC.c)
 */

_BOOL8 __fastcall ReleaseDC(__int64 a1, __int64 a2, __int64 a3)
{
  return (unsigned int)ReleaseCacheDC(a1, 0, a3) != 2;
}
