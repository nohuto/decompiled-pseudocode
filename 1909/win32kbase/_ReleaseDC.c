/*
 * XREFs of _ReleaseDC @ 0x1C003A440
 * Callers:
 *     UserGetMonitorDC @ 0x1C003A380 (UserGetMonitorDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1C00200C0 (ReleaseCacheDC.c)
 */

_BOOL8 __fastcall ReleaseDC(__int64 a1, __int64 a2, __int64 a3)
{
  return (unsigned int)ReleaseCacheDC(a1, 0, a3) != 2;
}
