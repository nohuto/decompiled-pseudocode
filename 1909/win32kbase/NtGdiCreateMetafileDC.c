/*
 * XREFs of NtGdiCreateMetafileDC @ 0x1C0097B60
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateDisplayDC @ 0x1C001A610 (GreCreateDisplayDC.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001B230 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0020EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     UserGetDesktopDC @ 0x1C003A4D0 (UserGetDesktopDC.c)
 */

__int64 __fastcall NtGdiCreateMetafileDC(HDC a1)
{
  __int64 DisplayDC; // rbx
  int v2; // r9d
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  DisplayDC = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(2u, 1, 0);
  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  if ( v4[0] )
    DisplayDC = GreCreateDisplayDC(*(_QWORD *)(v4[0] + 48LL), 2u, 1LL, v2);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v4);
  return DisplayDC;
}
