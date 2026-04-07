/*
 * XREFs of ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008E3B0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800117B0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18008DBC8 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180027500 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     StringCchLengthW @ 0x180035F08 (StringCchLengthW.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x18008CD8C (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 */

__int64 __fastcall CWindowIconic::OnTitleUpdated(CWindowIconic *this, size_t a2)
{
  char v3; // si
  HRESULT v4; // eax
  size_t *v5; // r11
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  size_t pcchLength; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  v4 = StringCchLengthW(*(STRSAFE_PCNZWCH *)(*((_QWORD *)this + 9) + 16LL), a2, &pcchLength);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = CWindowData::SetTitle(*((CWindowData **)this + 10), v5, pcchLength);
    v6 = v7;
    if ( v7 >= 0 )
    {
      CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x10000);
      if ( v3 )
      {
        v8 = CVisual::RenderRecursive(*((CVisual **)this + 11));
        v6 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x278u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x272u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x270u);
  }
  return v6;
}
