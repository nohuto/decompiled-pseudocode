/*
 * XREFs of xxxRedrawTitle @ 0x1C0017BF0
 * Callers:
 *     xxxEnableMenuItem @ 0x1C001FF08 (xxxEnableMenuItem.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00B5D3C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023AD50 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxHelpLoop @ 0x1C0248398 (xxxHelpLoop.c)
 * Callees:
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 *     PostShellHookMessages @ 0x1C0017CBC (PostShellHookMessages.c)
 *     IsTrayWindow @ 0x1C009B9D4 (IsTrayWindow.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxRedrawTitle(struct tagWND *a1, unsigned int a2)
{
  unsigned int v3; // esi
  _BYTE *v4; // rcx
  unsigned int v5; // ebp
  __int64 v7; // rbx
  HDC DCEx; // rbx

  v3 = a2;
  v4 = (_BYTE *)*((_QWORD *)a1 + 5);
  v5 = 1;
  if ( (v4[31] & 0x10) != 0 )
  {
    if ( (v4[30] & 0xC0) == 0xC0 )
    {
      if ( (v4[16] & 0x40) != 0 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == gpqForeground )
        v3 = a2 | 1;
      if ( gihmodUserApiHook < 0 )
      {
        DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
        xxxDrawCaptionBar(a1, DCEx, v3);
        _ReleaseDC(DCEx);
      }
      else
      {
        xxxSendMessage(a1, 174LL, v3, 0LL);
      }
    }
    else
    {
      v5 = 0;
    }
  }
  if ( (unsigned int)IsTrayWindow(a1) && (v3 & 0xC) != 0 )
  {
    v7 = *(_QWORD *)a1;
    xxxCallHook(6, *(_QWORD *)a1, 0LL, 10);
    PostShellHookMessages(6LL, v7);
  }
  return v5;
}
