/*
 * XREFs of xxxRedrawTitle @ 0x1C006E8C0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C006C084 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxEnableMenuItem @ 0x1C00C2670 (xxxEnableMenuItem.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C01F9FB0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxHelpLoop @ 0x1C0206688 (xxxHelpLoop.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     IsTrayWindow @ 0x1C0044B0C (IsTrayWindow.c)
 *     PostShellHookMessages @ 0x1C006E990 (PostShellHookMessages.c)
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxRedrawTitle(unsigned __int64 *a1, char a2)
{
  char v3; // si
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
      if ( (v4[16] & 0x40) != 0 && *(_QWORD *)(a1[2] + 424) == gpqForeground )
        v3 = a2 | 1;
      if ( gihmodUserApiHook < 0 )
      {
        DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
        xxxDrawCaptionBar((ULONG_PTR)a1, DCEx);
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
