/*
 * XREFs of ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D9048
 * Callers:
 *     _NotifyOverlayWindow @ 0x1C01DA7F0 (_NotifyOverlayWindow.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C00C8D90 (_GetTopLevelWindow.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C023BE50 (SetWindowCompositionVideoOverlayActive.c)
 */

__int64 __fastcall FixupOverlayWindowAttributes(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 TopLevelWindow; // rax
  struct tagWND *v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagBWL *v10; // r14
  unsigned __int64 *i; // rsi
  __int64 v12; // rax
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  TopLevelWindow = GetTopLevelWindow((__int64)a1);
  v3 = (struct tagWND *)TopLevelWindow;
  if ( TopLevelWindow )
  {
    v4 = *(_QWORD *)(TopLevelWindow + 40);
    v5 = -__CFSHR__(*(_DWORD *)(v4 + 232), 11);
    if ( __CFSHR__(*(_DWORD *)(v4 + 232), 11) )
    {
LABEL_12:
      v14[0] = v5;
      v14[1] = 0LL;
      v14[2] = 0LL;
      LOBYTE(v1) = (int)SetWindowCompositionVideoOverlayActive(v3, v14) >= 0;
      return v1;
    }
    v6 = BuildHwndList(v3);
    v10 = (struct tagBWL *)v6;
    if ( v6 )
    {
      for ( i = (unsigned __int64 *)(v6 + 32); *i != 1; ++i )
      {
        LOBYTE(v7) = 1;
        v12 = HMValidateHandleNoSecure(*i, v7, v8, v9);
        if ( v12 && (*(_DWORD *)(*(_QWORD *)(v12 + 40) + 232LL) & 0x400) != 0 )
        {
          v5 = 1;
          break;
        }
      }
      FreeHwndList(v10);
      goto LABEL_12;
    }
  }
  return v1;
}
