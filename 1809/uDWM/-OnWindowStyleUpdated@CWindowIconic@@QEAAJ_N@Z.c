/*
 * XREFs of ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008E460
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000D380 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011210 (-ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAXXZ @ 0x180028320 (-OnWindowStyleUpdated@CWindowData@@QEAAXXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18008DBC8 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18008E588 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18008E688 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180027500 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     IsOpenThemeDataPresent @ 0x18004C598 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?WasMaximized@CWindowIconic@@AEAA_NXZ @ 0x18008ED28 (-WasMaximized@CWindowIconic@@AEAA_NXZ.c)
 */

__int64 __fastcall CWindowIconic::OnWindowStyleUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // edi
  int v5; // eax

  v4 = 0;
  *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 100LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 104LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 104LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 108LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 108LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 596LL) = (IsOpenThemeDataPresent() != 0 ? 8 : 0) | *(_BYTE *)(*((_QWORD *)this + 10)
                                                                                                  + 596LL) & 0xF7;
  *(_DWORD *)(*((_QWORD *)this + 10) + 348LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 348LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 596LL) ^= (*(_BYTE *)(*((_QWORD *)this + 10) + 596LL) ^ *(_BYTE *)(*((_QWORD *)this + 9) + 596LL)) & 2;
  *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) &= 0xFF30FFFF;
  if ( *((_DWORD *)this + 4) != 2 || *((_BYTE *)this + 21) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) |= 0xCF0000u;
  *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) &= ~0x20000000u;
  if ( CWindowIconic::WasMaximized(this) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) |= 0x1000000u;
  CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x8000);
  if ( a2 )
  {
    v5 = CVisual::RenderRecursive(*((CVisual **)this + 11));
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x21Fu);
  }
  return v4;
}
