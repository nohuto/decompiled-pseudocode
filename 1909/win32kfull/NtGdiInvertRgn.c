/*
 * XREFs of NtGdiInvertRgn @ 0x1C0147AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C012721C (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0147B70 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x1C026916C (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C026920C (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C0269370 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C026948C (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiInvertRgn(HDC a1, HRGN a2)
{
  int v4; // edi
  unsigned int v5; // ebx
  __int64 v7; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v10; // [rsp+48h] [rbp-50h]

  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( v8[0] )
  {
    v10 = v8;
    if ( (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop((DWMSCREENREADMODIFYWRITEASSIST *)v9) )
    {
      if ( !(unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v9) )
      {
        DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v9);
        if ( (unsigned int)NtGdiInvertRgnInternal(a1, a2) )
          v4 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v9);
        DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v9);
      }
    }
  }
  v5 = NtGdiInvertRgnInternal(a1, a2);
  if ( v4 )
  {
    v7 = UserReferenceDwmApiPort();
    DwmSyncFlushAndWaitForBatch(v7);
  }
  if ( v8[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  return v5;
}
