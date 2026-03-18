/*
 * XREFs of _ReleaseDC @ 0x1C003C4F0
 * Callers:
 *     UserGetMonitorDC @ 0x1C003C430 (UserGetMonitorDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1C001ED70 (ReleaseCacheDC.c)
 */

_BOOL8 __fastcall ReleaseDC(__int64 a1, __int64 a2, __int64 a3)
{
  return (unsigned int)ReleaseCacheDC(a1, 0LL, a3) != 2;
}
