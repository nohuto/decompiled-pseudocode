/*
 * XREFs of CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0042C10
 * Callers:
 *     NtUserGetScrollBarInfo @ 0x1C0038690 (NtUserGetScrollBarInfo.c)
 *     NtUserGetTitleBarInfo @ 0x1C0038FC0 (NtUserGetTitleBarInfo.c)
 *     xxxGetCursorPos @ 0x1C003C260 (xxxGetCursorPos.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C003DA20 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C003EDCC (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C0040BA0 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0041E60 (TransformMessageBetweenCoordinateSpaces.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0042B50 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     xxxInterSendMsgEx @ 0x1C0044BF0 (xxxInterSendMsgEx.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00CE3D8 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00CE480 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C00D68D0 (xxxDCEWindowHitTestIndirect.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C00F1490 (IsValidKernelDpiAwarenessContext.c)
 */

void __fastcall CaptureAndValidateUserModeDpiAwarenessContext(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int *v2; // r8
  unsigned int v3; // r9d
  unsigned int valid; // eax

  v1 = a1;
  v2 = *(unsigned int **)(a1 + 360);
  if ( v2[1] )
  {
    v3 = *v2;
    if ( !*v2 || (valid = IsValidKernelDpiAwarenessContext(v3, a1)) != 0 )
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
