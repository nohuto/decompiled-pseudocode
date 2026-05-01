/*
 * XREFs of ?_ShouldShowMTVAltTab@CMultitaskingViewHotKeyHandler@@AEAA_NXZ @ 0x180348E64
 * Callers:
 *     ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180348B0C (-_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     ?_RegisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAJXZ @ 0x180348D3C (-_RegisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CMultitaskingViewHotKeyHandler::_ShouldShowMTVAltTab(CMultitaskingViewHotKeyHandler *this)
{
  char v1; // bl

  if ( *((_DWORD *)this + 19) == 2 )
    return 1;
  v1 = 0;
  if ( !*((_DWORD *)this + 19) && !IsDebuggerPresent() )
    return 1;
  return v1;
}
