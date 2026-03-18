/*
 * XREFs of _NotifyOverlayWindow @ 0x1C01DA7F0
 * Callers:
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D9048 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C027267C (DwmAsyncNotifyWindowShadowChange.c)
 */

__int64 __fastcall NotifyOverlayWindow(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  __int64 v4; // r8
  unsigned int v5; // r9d
  __int64 v6; // rdx
  int v7; // r10d
  bool v8; // zf
  void *v9; // rax

  v2 = 0;
  if ( !a1 )
    return v2;
  v3 = 0;
  v4 = (unsigned int)gcOverlays;
  v5 = 0;
  v8 = a2 == 0;
  v6 = 1024LL;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL);
  if ( v8 )
  {
    if ( (v7 & 0x400) != 0 )
    {
      if ( gcOverlays )
      {
        v2 = 1;
        --gcOverlays;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) &= ~0x400u;
        v8 = (_DWORD)v4 == 1;
        goto LABEL_9;
      }
LABEL_10:
      gcOverlays = -1;
      goto LABEL_11;
    }
  }
  else if ( (v7 & 0x400) == 0 )
  {
    if ( gcOverlays + 1 >= (unsigned int)gcOverlays )
    {
      ++gcOverlays;
      v2 = 1;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) |= 0x400u;
      v8 = (_DWORD)v4 == 0;
LABEL_9:
      LOBYTE(v3) = v8;
LABEL_11:
      v5 = v2;
      goto LABEL_13;
    }
    goto LABEL_10;
  }
  v2 = 1;
LABEL_13:
  if ( v2 )
  {
    if ( v5 )
      FixupOverlayWindowAttributes((struct tagWND *)a1);
    if ( v3 )
    {
      v9 = (void *)ReferenceDwmApiPort(a1, v6, v4);
      DwmAsyncNotifyWindowShadowChange(v9);
      xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x1Au, 0x1025uLL, 0LL, 1);
    }
  }
  return v2;
}
