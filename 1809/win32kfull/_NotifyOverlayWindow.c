/*
 * XREFs of _NotifyOverlayWindow @ 0x1C01C7430
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01C5CB4 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C0258CF4 (DwmAsyncNotifyWindowShadowChange.c)
 */

__int64 __fastcall NotifyOverlayWindow(struct tagWND *a1, int a2)
{
  unsigned int v2; // ebx
  int v4; // edi
  unsigned int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // eax
  int v10; // ecx
  bool v11; // zf
  int v12; // ecx
  void *v13; // rax

  v2 = 0;
  if ( !a1 )
    return v2;
  v4 = 0;
  v5 = gcOverlays;
  v6 = 0LL;
  v11 = a2 == 0;
  v7 = 1024LL;
  v8 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL);
  if ( v11 )
  {
    if ( (v8 & 0x400) != 0 )
    {
      if ( gcOverlays )
        v12 = gcOverlays - 1;
      else
        v12 = -1;
      gcOverlays = v12;
      if ( !v5 )
        goto LABEL_15;
      v2 = 1;
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x400u;
      v11 = v5 == 1;
LABEL_14:
      LOBYTE(v4) = v11;
LABEL_15:
      v6 = v2;
      goto LABEL_17;
    }
  }
  else if ( (v8 & 0x400) == 0 )
  {
    v9 = gcOverlays + 1;
    v10 = -1;
    if ( gcOverlays + 1 >= (unsigned int)gcOverlays )
      v10 = gcOverlays + 1;
    gcOverlays = v10;
    if ( v9 < v5 )
      goto LABEL_15;
    v2 = 1;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 0x400u;
    v11 = v5 == 0;
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
      v13 = (void *)ReferenceDwmApiPort(v6, v7);
      DwmAsyncNotifyWindowShadowChange(v13);
      xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x1Au, 4133LL, 0LL, 1);
    }
  }
  return v2;
}
