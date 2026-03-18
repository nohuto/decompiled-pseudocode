/*
 * XREFs of _NotifyOverlayWindow @ 0x1C01A5250
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01A3AB8 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C0241344 (DwmAsyncNotifyWindowShadowChange.c)
 */

__int64 __fastcall NotifyOverlayWindow(struct tagWND *a1, int a2)
{
  unsigned int v2; // ebx
  int v4; // edi
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  int v9; // ecx
  bool v10; // zf
  int v11; // ecx
  void *v12; // rax

  v2 = 0;
  if ( !a1 )
    return v2;
  v4 = 0;
  v5 = (unsigned int)gcOverlays;
  v6 = 0LL;
  v10 = a2 == 0;
  v7 = 1024LL;
  v8 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL);
  if ( v10 )
  {
    if ( (v8 & 0x400) != 0 )
    {
      if ( gcOverlays )
        v11 = gcOverlays - 1;
      else
        v11 = -1;
      gcOverlays = v11;
      if ( !(_DWORD)v5 )
        goto LABEL_15;
      v2 = 1;
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x400u;
      v10 = (_DWORD)v5 == 1;
LABEL_14:
      LOBYTE(v4) = v10;
LABEL_15:
      v6 = v2;
      goto LABEL_17;
    }
  }
  else if ( (v8 & 0x400) == 0 )
  {
    v9 = -1;
    if ( gcOverlays + 1 >= (unsigned int)gcOverlays )
      v9 = gcOverlays + 1;
    gcOverlays = v9;
    if ( (int)v5 + 1 < (unsigned int)v5 )
      goto LABEL_15;
    v2 = 1;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 0x400u;
    v10 = (_DWORD)v5 == 0;
    goto LABEL_14;
  }
  v2 = 1;
LABEL_17:
  if ( v2 )
  {
    if ( (_DWORD)v6 )
      FixupOverlayWindowAttributes(a1);
    if ( v4 )
    {
      v12 = (void *)ReferenceDwmApiPort(v6, v7, v5);
      DwmAsyncNotifyWindowShadowChange(v12);
      xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x1Au, 0x1025uLL, 0LL, 1);
    }
  }
  return v2;
}
