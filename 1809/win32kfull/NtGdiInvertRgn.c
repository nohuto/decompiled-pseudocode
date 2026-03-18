/*
 * XREFs of NtGdiInvertRgn @ 0x1C013CA50
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C00A1290 (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C013CB98 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015EF38 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x1C024FC18 (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C024FCB8 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C024FE1C (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C024FF38 (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiInvertRgn(HDC a1, HRGN a2)
{
  unsigned int v4; // ebx
  int v5; // esi
  unsigned __int16 v6; // dx
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rax
  _QWORD v13[6]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v14[24]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD *v15; // [rsp+78h] [rbp-60h]

  v4 = 0;
  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( v13[0] )
  {
    v6 = *(_WORD *)(v13[0] + 12LL);
    if ( v6 != 1 )
    {
      v7 = *(_QWORD *)(v13[0] + 48LL);
      if ( v7 )
        v8 = *(_DWORD *)(v7 + 40);
      else
        v8 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(21LL, v8, v6);
      EngSetLastError(0x57u);
      goto LABEL_15;
    }
    v15 = v13;
    if ( (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop((DWMSCREENREADMODIFYWRITEASSIST *)v14)
      && !(unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v14) )
    {
      DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v14);
      if ( (unsigned int)NtGdiInvertRgnInternal(a1, a2) )
        v5 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v14);
      DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v14);
    }
  }
  v10 = NtGdiInvertRgnInternal(a1, a2);
  if ( v5 )
  {
    v11 = UserReferenceDwmApiPort(v9);
    DwmSyncFlushAndWaitForBatch(v11);
  }
  v4 = v10;
LABEL_15:
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return v4;
}
