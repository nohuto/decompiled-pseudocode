/*
 * XREFs of ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00100D0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     GreGetCharSet @ 0x1C00241A4 (GreGetCharSet.c)
 *     GreGetTextFaceW @ 0x1C0026ED0 (GreGetTextFaceW.c)
 *     GreDrawStream @ 0x1C0047970 (GreDrawStream.c)
 *     NtGdiAlphaBlend @ 0x1C00489E0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C004DABC (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00524A0 (GreSetDIBitsToDeviceInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C0056C90 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0064590 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     GreSetBrushOrg @ 0x1C007B4B8 (GreSetBrushOrg.c)
 *     GreGetLayout @ 0x1C007BE5C (GreGetLayout.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0082F1C (GreGetOutlineTextMetricsInternalW.c)
 *     ulGetFontData @ 0x1C0083318 (ulGetFontData.c)
 *     GreExtTextOutRect @ 0x1C0099CF4 (GreExtTextOutRect.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 *     GrePolyTextOutW @ 0x1C009B4AC (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C009B694 (GreExtTextOutWInternal.c)
 *     GreMaskBlt @ 0x1C009B9B0 (GreMaskBlt.c)
 *     GreRectVisible @ 0x1C009F264 (GreRectVisible.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00A0468 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     NtGdiLineTo @ 0x1C00A0990 (NtGdiLineTo.c)
 *     GreGetBoundsRect @ 0x1C00A3168 (GreGetBoundsRect.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00E41B0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     NtGdiModifyWorldTransform @ 0x1C00F3780 (NtGdiModifyWorldTransform.c)
 *     GreTransformPoints @ 0x1C00F6EBC (GreTransformPoints.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C00F8954 (GreBeginGdiRenderingToDxSurface.c)
 *     GreGetAppClipBox @ 0x1C00FA8EC (GreGetAppClipBox.c)
 *     NtGdiSetMetaRgn @ 0x1C00FEBB0 (NtGdiSetMetaRgn.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C01272C4 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C015A1E4 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025F2C8 (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C025F7A4 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0291554 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C00E33C0 (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024FDE0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  HDC v2; // rax
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rdx
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8

  v2 = a2;
  v4 = 1;
  LOBYTE(a2) = 1;
  v5 = HmgLockEx(v2, a2, *((unsigned int *)this + 3));
  *(_QWORD *)this = v5;
  if ( v5 )
  {
    ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
    v9 = *(_QWORD *)this;
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) == 1 )
    {
      *(_QWORD *)(v9 + 2136) = ThreadCurrentObj;
      *(_DWORD *)(*(_QWORD *)this + 2144LL) = 0xFFFF;
      v9 = *(_QWORD *)this;
    }
    else if ( *(struct UMPDOBJ **)(v9 + 2136) != ThreadCurrentObj )
    {
      XDCOBJ::LogUmpdCallbackStatus(this, ThreadCurrentObj);
LABEL_10:
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
LABEL_11:
      *(_QWORD *)this = 0LL;
      return;
    }
    if ( *((_DWORD *)this + 3) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 48) + 40LL) & 0x8000) == 0 )
        goto LABEL_10;
      v10 = *(_DWORD *)(v9 + 2120);
      if ( v10 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_10;
    }
    else if ( *(_DWORD *)(v9 + 2120) )
    {
      *(_DWORD *)(v9 + 2120) = 0;
    }
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
    {
      if ( XDCOBJ::SaveAttributesHelper(this) )
      {
        *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
        *((_DWORD *)this + 2) = 1;
      }
      else
      {
        v4 = 0;
      }
    }
    v11 = *(_QWORD *)this;
    if ( !v4 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v11 + 12));
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v11 + 520) & 4) != 0 )
      DC::vMarkTransformDirty((DC *)v11);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet(v13, v12, v14);
  }
}
