/*
 * XREFs of CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002B550
 * Callers:
 *     NtUserGetScrollBarInfo @ 0x1C001FA60 (NtUserGetScrollBarInfo.c)
 *     NtUserGetTitleBarInfo @ 0x1C0020290 (NtUserGetTitleBarInfo.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C0028C38 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C00291D0 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C002A620 (TransformMessageBetweenCoordinateSpaces.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C002B480 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C002B5A0 (xxxDCEWindowHitTestIndirect.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C002BEEC (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     xxxInterSendMsgEx @ 0x1C002E6E0 (xxxInterSendMsgEx.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00851BC (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0085270 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C00F81B0 (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C010BB8C (IsValidKernelDpiAwarenessContext.c)
 */

void __fastcall CaptureAndValidateUserModeDpiAwarenessContext(__int64 a1)
{
  __int64 v1; // r8
  unsigned int *v2; // rdx
  unsigned int v3; // r9d
  unsigned int valid; // eax

  v1 = a1;
  v2 = *(unsigned int **)(a1 + 360);
  if ( v2[1] )
  {
    v3 = *v2;
    if ( !*v2 || (valid = IsValidKernelDpiAwarenessContext(v3, v2, a1)) != 0 )
    {
      *(_DWORD *)(v1 + 340) = v3;
      valid = 0;
    }
    else
    {
      *v2 = 0;
    }
    v2[1] = valid;
  }
}
