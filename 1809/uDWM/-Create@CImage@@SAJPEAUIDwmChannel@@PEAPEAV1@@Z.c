/*
 * XREFs of ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800387A4
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001C300 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180045D30 (-Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x18007CEDC (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18008DBC8 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CRippleEffect@@IEAAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@@Z @ 0x180090068 (-Initialize@CRippleEffect@@IEAAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?Initialize@CContactStationaryVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180095B50 (-Initialize@CContactStationaryVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180096660 (-Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180099B90 (-Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CFlickVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18009A1D0 (-Initialize@CFlickVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CPenPressHoldVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18009A910 (-Initialize@CPenPressHoldVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18009AD50 (-Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800A1E30 (-Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180020F98 (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?Initialize@CImage@@EEAAJPEAUIDwmChannel@@@Z @ 0x180038960 (-Initialize@CImage@@EEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImage::Create(struct IDwmChannel *a1, struct CImage **a2)
{
  CRenderDataVisual *v4; // rax
  CRenderDataVisual *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  if ( !a2 )
  {
    v7 = -2147024809;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xCu);
    return v7;
  }
  v4 = (CRenderDataVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                              WPF::g_pProcessHeap,
                              344LL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x158uLL);
    CRenderDataVisual::CRenderDataVisual(v5);
    *((_QWORD *)v5 + 35) = 0LL;
    *((_QWORD *)v5 + 36) = 0LL;
    *((_QWORD *)v5 + 37) = 0LL;
    *((_QWORD *)v5 + 38) = 0LL;
    *((_QWORD *)v5 + 39) = 0LL;
    *(_QWORD *)v5 = &CImage::`vftable';
    *((_QWORD *)v5 + 40) = 0LL;
    *((_QWORD *)v5 + 41) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v7 = -2147024882;
    goto LABEL_13;
  }
  v6 = CImage::Initialize(v5, a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xCu);
  }
  else
  {
    *a2 = v5;
    v5 = 0LL;
  }
  if ( v5 )
    CBaseObject::Release(v5);
  return v7;
}
