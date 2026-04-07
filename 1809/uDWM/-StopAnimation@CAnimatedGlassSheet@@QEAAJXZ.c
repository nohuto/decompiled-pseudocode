/*
 * XREFs of ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18008F9CC
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180020E80 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z @ 0x18008F788 (-StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z.c)
 *     ?StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z @ 0x18008F8A0 (-StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z.c)
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x18008FC00 (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 * Callees:
 *     McTemplateU0 @ 0x1800779B8 (McTemplateU0.c)
 *     ?Hide@CAnimatedGlassSheet@@QEAAXXZ @ 0x18008F154 (-Hide@CAnimatedGlassSheet@@QEAAXXZ.c)
 *     ?UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x18008FAD8 (-UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     McTemplateU0dddd @ 0x18008FE20 (McTemplateU0dddd.c)
 */

__int64 __fastcall CAnimatedGlassSheet::StopAnimation(CAnimatedGlassSheet *this)
{
  int v2; // edx
  int v3; // ecx
  __int64 v4; // rax
  bool v5; // zf
  char v6; // al
  float v7; // xmm1_4
  int v8; // r8d
  __int64 v9; // rax
  char v10; // al

  CAnimatedGlassSheet::UnRegisterGlobalTimer(this);
  v4 = *((_QWORD *)this + 54);
  if ( v4 )
  {
    v5 = (*(_DWORD *)(v4 + 8))-- == 1;
    v6 = CDesktopManager::s_fTimelineDirty;
    if ( v5 )
      v6 = 1;
    *((_QWORD *)this + 54) = 0LL;
    CDesktopManager::s_fTimelineDirty = v6;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0dddd(
        v3,
        v2,
        *((_DWORD *)this + 100),
        *((_DWORD *)this + 101),
        *((_DWORD *)this + 102),
        *((_DWORD *)this + 103));
  }
  if ( *((_QWORD *)this + 56) )
  {
    v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 111) - 0.0)) & _xmm);
    if ( v7 <= 0.0000011920929 )
    {
      CAnimatedGlassSheet::Hide(this);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)&UdwmGlassSheetFadeOut_End, v8);
    }
  }
  v9 = *((_QWORD *)this + 56);
  if ( v9 )
  {
    v5 = (*(_DWORD *)(v9 + 8))-- == 1;
    v10 = CDesktopManager::s_fTimelineDirty;
    if ( v5 )
      v10 = 1;
    *((_QWORD *)this + 56) = 0LL;
    CDesktopManager::s_fTimelineDirty = v10;
  }
  return 0LL;
}
