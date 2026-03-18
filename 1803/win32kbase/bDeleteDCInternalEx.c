/*
 * XREFs of bDeleteDCInternalEx @ 0x1C0030D10
 * Callers:
 *     GreGetClipBox @ 0x1C00197D0 (GreGetClipBox.c)
 *     GreIntersectClipRect @ 0x1C0019B10 (GreIntersectClipRect.c)
 *     NtGdiDeleteObjectApp @ 0x1C001EE60 (NtGdiDeleteObjectApp.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00295B4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002AAF0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002D3D0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002D8E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreCreateCompatibleDC @ 0x1C002F610 (GreCreateCompatibleDC.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C002FCB0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     GreSelectVisRgn @ 0x1C00315A0 (GreSelectVisRgn.c)
 *     bDeleteDCInternal @ 0x1C0059000 (bDeleteDCInternal.c)
 *     DestroyCacheDC @ 0x1C0062BA0 (DestroyCacheDC.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002D3D0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002F350 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     UserReleaseDC @ 0x1C0064A80 (UserReleaseDC.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 */

__int64 __fastcall bDeleteDCInternalEx(HDC a1, unsigned int *a2)
{
  struct HOBJ__ **v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+2Ch] [rbp-Ch]
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v5, a1);
  if ( v5 && (unsigned int)bDeleteDCOBJ(&v5, a2, &v8) )
  {
    DCOBJ::~DCOBJ((DCOBJ *)&v5);
    if ( !v8 || (unsigned int)UserReleaseDC(a1) )
      return 1LL;
  }
  else
  {
    EngSetLastError(0xAAu);
    DCOBJ::~DCOBJ((DCOBJ *)&v5);
  }
  return 0LL;
}
