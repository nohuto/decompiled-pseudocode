/*
 * XREFs of xxxRedrawTitle @ 0x1C00B3850
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxEnableMenuItem @ 0x1C00A6654 (xxxEnableMenuItem.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00B3CA0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0222680 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxHelpLoop @ 0x1C022F7F8 (xxxHelpLoop.c)
 * Callees:
 *     IsTrayWindow @ 0x1C002CD08 (IsTrayWindow.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     PostShellHookMessages @ 0x1C00B3920 (PostShellHookMessages.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxRedrawTitle(unsigned __int64 *a1, int a2)
{
  int v3; // esi
  _BYTE *v4; // rcx
  unsigned int v5; // ebp
  unsigned __int64 v7; // rbx
  HDC DCEx; // rbx

  v3 = a2;
  v4 = (_BYTE *)a1[5];
  v5 = 1;
  if ( (v4[31] & 0x10) != 0 )
  {
    if ( (v4[30] & 0xC0) == 0xC0 )
    {
      if ( (v4[16] & 0x40) != 0 && *(_QWORD *)(a1[2] + 432) == gpqForeground )
        v3 = a2 | 1;
      if ( gihmodUserApiHook < 0 )
      {
        DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
        xxxDrawCaptionBar((ULONG_PTR)a1, DCEx, v3);
        _ReleaseDC(DCEx);
      }
      else
      {
        xxxSendMessage((ULONG_PTR)a1);
      }
    }
    else
    {
      v5 = 0;
    }
  }
  if ( (unsigned int)IsTrayWindow(a1) && (v3 & 0xC) != 0 )
  {
    v7 = *a1;
    xxxCallHook(6, *a1, 0LL, 10);
    PostShellHookMessages(6LL, v7);
  }
  return v5;
}
