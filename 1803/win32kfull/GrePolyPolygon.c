/*
 * XREFs of GrePolyPolygon @ 0x1C007C7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GrePolyPolygonInternal @ 0x1C007BA9C (GrePolyPolygonInternal.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C009EB70 (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x1C026E8CC (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C026E8F4 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C026E9B0 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C026EA94 (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 */

__int64 __fastcall GrePolyPolygon(HDC a1, __int64 a2, __int64 a3, int a4, int a5)
{
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rax
  _QWORD v17[2]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v18[24]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD *v19; // [rsp+58h] [rbp-80h]

  v9 = 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)v17, a1);
  if ( v17[0] )
  {
    v19 = v17;
    if ( (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop((DWMSCREENREADMODIFYWRITEASSIST *)v18) )
    {
      if ( !(unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v18) )
      {
        DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v18);
        if ( (unsigned int)GrePolyPolygonInternal(a1, a2, a3, a4, a5) )
          v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v18);
        DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v18);
      }
    }
  }
  v12 = GrePolyPolygonInternal(a1, a2, a3, a4, a5);
  if ( v9 )
  {
    v16 = UserReferenceDwmApiPort(v11, v10, v13, v14);
    DwmSyncFlushAndWaitForBatch(v16);
  }
  if ( v17[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v17);
  return v12;
}
