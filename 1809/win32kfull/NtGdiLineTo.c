/*
 * XREFs of NtGdiLineTo @ 0x1C00A0990
 * Callers:
 *     <none>
 * Callees:
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00A0A94 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C00A1290 (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x1C024FC18 (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C024FCB8 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C024FE1C (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C024FF38 (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiLineTo(HDC a1, int a2, int a3)
{
  int v3; // edi
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-59h] BYREF
  int v12; // [rsp+28h] [rbp-51h]
  int v13; // [rsp+2Ch] [rbp-4Dh]
  _BYTE v14[32]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v15[24]; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v16; // [rsp+68h] [rbp-11h]

  v3 = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v14);
  XDCOBJ::vLock((XDCOBJ *)&v11, a1);
  if ( v11 )
  {
    v16 = &v11;
    if ( (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop((DWMSCREENREADMODIFYWRITEASSIST *)v15) )
    {
      if ( !(unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v15) )
      {
        DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v15);
        if ( (unsigned int)GreLineTo(a1, a2, a3) )
          v3 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v15);
        DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v15);
      }
    }
  }
  v8 = GreLineTo(a1, a2, a3);
  if ( v3 )
  {
    v9 = UserReferenceDwmApiPort(v7);
    DwmSyncFlushAndWaitForBatch(v9);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)&v11);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v14);
  return v8;
}
