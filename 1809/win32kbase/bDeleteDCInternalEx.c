/*
 * XREFs of bDeleteDCInternalEx @ 0x1C001DC90
 * Callers:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0021C14 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     bDeleteDCInternal @ 0x1C00427D0 (bDeleteDCInternal.c)
 *     DestroyCacheDC @ 0x1C0045330 (DestroyCacheDC.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00A9A8C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C001DE38 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001DE98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C001DEDC (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     UserReleaseDC @ 0x1C00757F0 (UserReleaseDC.c)
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 */

__int64 __fastcall bDeleteDCInternalEx(HDC a1, unsigned int *a2)
{
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] && (unsigned int)bDeleteDCOBJ((struct XDCOBJ *)v5, a2, &v6) )
  {
    DCOBJ::~DCOBJ((DCOBJ *)v5);
    if ( !v6 || (unsigned int)UserReleaseDC(a1) )
      return 1LL;
  }
  else
  {
    EngSetLastError(0xAAu);
    DCOBJ::~DCOBJ((DCOBJ *)v5);
  }
  return 0LL;
}
