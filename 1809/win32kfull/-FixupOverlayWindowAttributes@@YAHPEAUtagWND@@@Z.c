/*
 * XREFs of ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01C5CB4
 * Callers:
 *     _NotifyOverlayWindow @ 0x1C01C7430 (_NotifyOverlayWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C0223998 (SetWindowCompositionVideoOverlayActive.c)
 */

__int64 __fastcall FixupOverlayWindowAttributes(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 TopLevelWindow; // rax
  struct tagWND *v3; // rbp
  __int64 v4; // rax
  int v5; // edi
  struct tagBWL *v6; // rax
  __int64 v7; // rdx
  struct tagBWL *v8; // r14
  unsigned __int64 *i; // rsi
  __int64 v10; // rax
  int v12[10]; // [rsp+20h] [rbp-28h] BYREF

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
      v12[0] = v5;
      LOBYTE(v1) = (int)SetWindowCompositionVideoOverlayActive(v3, v12) >= 0;
      return v1;
    }
    v6 = BuildHwndList(v3, 1, 0LL);
    v8 = v6;
    if ( v6 )
    {
      for ( i = (unsigned __int64 *)((char *)v6 + 32); *i != 1; ++i )
      {
        LOBYTE(v7) = 1;
        v10 = HMValidateHandleNoSecure(*i, v7);
        if ( v10 && (*(_DWORD *)(*(_QWORD *)(v10 + 40) + 232LL) & 0x400) != 0 )
        {
          v5 = 1;
          break;
        }
      }
      FreeHwndList(v8);
      goto LABEL_12;
    }
  }
  return v1;
}
