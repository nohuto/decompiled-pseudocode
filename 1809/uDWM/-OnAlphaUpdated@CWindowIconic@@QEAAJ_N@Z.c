/*
 * XREFs of ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008E0B8
 * Callers:
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000E940 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18008DBC8 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180018DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180027500 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowIconic::OnAlphaUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // edi
  int v5; // eax

  v4 = 0;
  *(_BYTE *)(*((_QWORD *)this + 10) + 344LL) = *(_BYTE *)(*((_QWORD *)this + 9) + 344LL);
  CVisual::SetOpacity(
    *((CVisual **)this + 11),
    (double)*(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)this + 11) + 720LL) + 344LL) / 255.0);
  if ( a2 )
  {
    v5 = CVisual::RenderRecursive(*((CVisual **)this + 11));
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x2A0u);
  }
  return v4;
}
