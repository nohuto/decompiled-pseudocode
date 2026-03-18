/*
 * XREFs of PhysicalToLogicalDPIPointWithHitTest @ 0x1C00F9398
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C00F9330 (EditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01B9F2C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00F95BC (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     DCEHitTestWindow @ 0x1C01AE940 (DCEHitTestWindow.c)
 *     GetWindowFrameRect @ 0x1C01CB7F8 (GetWindowFrameRect.c)
 */

__int64 __fastcall PhysicalToLogicalDPIPointWithHitTest(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v7; // ebp
  __int64 v8; // rsi
  struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  unsigned __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v15[16]; // [rsp+28h] [rbp-50h] BYREF

  v7 = *(_DWORD *)(*(_QWORD *)(a4 + 40) + 288LL);
  if ( (v7 & 0xF) == 2 )
  {
    *a1 = *a2;
    return 0LL;
  }
  v8 = 0LL;
  TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow((struct tagWND *)a4);
  if ( TopLevelOrDpiBoundaryWindow )
    v8 = *((_QWORD *)TopLevelOrDpiBoundaryWindow + 25);
  v10 = *a2;
  v14 = *a2;
  if ( v8 )
  {
    GetWindowFrameRect(TopLevelOrDpiBoundaryWindow, v15);
    v12 = DCEHitTestWindow(v15, v8, &v14, a3);
    v10 = v14;
    goto LABEL_8;
  }
  if ( TopLevelOrDpiBoundaryWindow )
  {
    v11 = *((_QWORD *)TopLevelOrDpiBoundaryWindow + 19);
    if ( v11 )
      v12 = GrePtInRegion(v11, (unsigned int)v10, HIDWORD(v14));
    else
      v12 = PtInRect((_DWORD *)(*((_QWORD *)TopLevelOrDpiBoundaryWindow + 5) + 88LL), v10);
LABEL_8:
    if ( v12 )
    {
      *a1 = v10;
      return 1LL;
    }
  }
  return PhysicalToLogicalDPIPoint(a1, a2, v7, 0LL);
}
