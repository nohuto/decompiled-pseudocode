/*
 * XREFs of NtGdiLineTo @ 0x1C011B940
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C009EB70 (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C011B9EC (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x1C026E8CC (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C026E8F4 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C026E9B0 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C026EA94 (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiLineTo(HDC a1, int a2, int a3)
{
  int v3; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-39h] BYREF
  int v15; // [rsp+28h] [rbp-31h]
  int v16; // [rsp+2Ch] [rbp-2Dh]
  _BYTE v17[24]; // [rsp+30h] [rbp-29h] BYREF
  __int64 *v18; // [rsp+48h] [rbp-11h]

  v3 = 0;
  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v14, a1);
  if ( v14 )
  {
    v18 = &v14;
    if ( (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop((DWMSCREENREADMODIFYWRITEASSIST *)v17) )
    {
      if ( !(unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v17) )
      {
        DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v17);
        if ( (unsigned int)GreLineTo(a1, a2, a3) )
          v3 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v17);
        DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v17);
      }
    }
  }
  v9 = GreLineTo(a1, a2, a3);
  if ( v3 )
  {
    v13 = UserReferenceDwmApiPort(v8, v7, v10, v11);
    DwmSyncFlushAndWaitForBatch(v13);
  }
  if ( v14 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v14);
  return v9;
}
