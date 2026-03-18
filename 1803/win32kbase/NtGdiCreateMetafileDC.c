/*
 * XREFs of NtGdiCreateMetafileDC @ 0x1C0068A50
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002AAF0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002D39C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C002D5C0 (GreCreateDisplayDC.c)
 *     UserGetDesktopDC @ 0x1C004567C (UserGetDesktopDC.c)
 */

HDC __fastcall NtGdiCreateMetafileDC(HDC a1)
{
  HDC DisplayDC; // rbx
  int v2; // r9d
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  DisplayDC = 0LL;
  if ( !a1 )
    return (HDC)UserGetDesktopDC(2u, 1, 0);
  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  if ( v4[0] )
  {
    DisplayDC = GreCreateDisplayDC(*(_QWORD *)(v4[0] + 48LL), 2u, 1, v2);
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
  }
  return DisplayDC;
}
