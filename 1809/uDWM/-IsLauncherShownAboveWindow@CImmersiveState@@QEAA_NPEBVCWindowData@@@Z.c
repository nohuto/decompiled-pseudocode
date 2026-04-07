/*
 * XREFs of ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x18003AC78
 * Callers:
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x180006B90 (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180029F70 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x18004AAD4 (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A78B0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x18008910C (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 */

char __fastcall CImmersiveState::IsLauncherShownAboveWindow(CImmersiveState *this, const struct tagRECT *a2)
{
  unsigned int left; // r9d
  char v3; // r8
  int v5; // eax
  char v6; // al

  left = a2[7].left;
  v3 = 0;
  if ( left - 8 <= 3 || left <= 0xC && (v5 = 4130, _bittest(&v5, left)) )
  {
    if ( *((_BYTE *)this + 56) )
    {
      v6 = ContainsRect((const struct tagRECT *)((char *)this + 72), a2 + 3);
      if ( v6 != v3 )
        return 1;
    }
  }
  return v3;
}
