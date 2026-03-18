/*
 * XREFs of _ReleaseDC @ 0x1C00453F0
 * Callers:
 *     UserGetMonitorDC @ 0x1C0045330 (UserGetMonitorDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1C002C3A0 (ReleaseCacheDC.c)
 */

_BOOL8 __fastcall ReleaseDC(__int64 a1, __int64 a2, int a3)
{
  return (unsigned int)ReleaseCacheDC(a1, 0, a3) != 2;
}
