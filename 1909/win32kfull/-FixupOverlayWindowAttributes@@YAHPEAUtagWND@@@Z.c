/*
 * XREFs of ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D8EC8
 * Callers:
 *     _NotifyOverlayWindow @ 0x1C01DA670 (_NotifyOverlayWindow.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C023B830 (SetWindowCompositionVideoOverlayActive.c)
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
  struct tagBWL *v9; // r14
  unsigned __int64 *i; // rsi
  __int64 v11; // rax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

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
      v13[0] = v5;
      v13[1] = 0LL;
      v13[2] = 0LL;
      LOBYTE(v1) = (int)SetWindowCompositionVideoOverlayActive(v3, v13) >= 0;
      return v1;
    }
    v6 = BuildHwndList(v3);
    v9 = (struct tagBWL *)v6;
    if ( v6 )
    {
      for ( i = (unsigned __int64 *)(v6 + 32); *i != 1; ++i )
      {
        LOBYTE(v7) = 1;
        v11 = HMValidateHandleNoSecure(*i, v7, v8);
        if ( v11 && (*(_DWORD *)(*(_QWORD *)(v11 + 40) + 232LL) & 0x400) != 0 )
        {
          v5 = 1;
          break;
        }
      }
      FreeHwndList(v9);
      goto LABEL_12;
    }
  }
  return v1;
}
