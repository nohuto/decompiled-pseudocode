/*
 * XREFs of CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00447D0
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C00412E0 (xxxInterSendMsgEx.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0043830 (TransformMessageBetweenCoordinateSpaces.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00446E0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C0045CC0 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C00466DC (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     NtUserGetTitleBarInfo @ 0x1C0046CC0 (NtUserGetTitleBarInfo.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C00476D0 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     NtUserGetScrollBarInfo @ 0x1C004B710 (NtUserGetScrollBarInfo.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C00699E0 (xxxDCEWindowHitTestIndirect.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C00F2B80 (IsValidKernelDpiAwarenessContext.c)
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
