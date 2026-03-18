/*
 * XREFs of ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C009951C
 * Callers:
 *     GreAccNotifyWindow @ 0x1C0099494 (GreAccNotifyWindow.c)
 *     GreDwmStartup @ 0x1C00ECBBC (GreDwmStartup.c)
 *     GreDwmShutdown @ 0x1C00ED5A4 (GreDwmShutdown.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00FEAD0 (vAccNotifyDeleteSurfaceWrap.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0099774 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C026ACB8 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C027EE98 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 */

void __fastcall vAccNotify(struct _SURFOBJ *a1, unsigned int a2, void *a3)
{
  HDEV hdev; // rbx
  int v7; // eax
  struct _DISPSURF *i; // rdi
  __int64 v9; // rbx
  struct _SURFOBJ *DevBitmap; // rax
  void (__fastcall *v11)(struct _SURFOBJ *, _QWORD, void *); // rax
  _BYTE v12[32]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v13[80]; // [rsp+40h] [rbp-68h] BYREF
  HDEV v14; // [rsp+B0h] [rbp+8h] BYREF

  hdev = a1->hdev;
  if ( !hdev )
    hdev = (HDEV)UserGetHDEV();
  v14 = hdev;
  if ( hdev )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v12, (struct PDEVOBJ *)&v14);
    v7 = *((_DWORD *)hdev + 10);
    if ( (v7 & 0x20000000) != 0 )
    {
      for ( i = (struct _DISPSURF *)**((_QWORD **)hdev + 225); i; i = *(struct _DISPSURF **)i )
      {
        v9 = *((_QWORD *)i + 6);
        if ( v9
          && (*(_DWORD *)(v9 + 1824) & 0x8000000) != 0
          && (*(_DWORD *)(v9 + 2128) & 0x8000) != 0
          && *(_QWORD *)(*(_QWORD *)(v9 + 1792) + 760LL) )
        {
          DevBitmap = GetDevBitmap(i, a1);
          (*(void (__fastcall **)(struct _SURFOBJ *, _QWORD, void *))(*(_QWORD *)(v9 + 1792) + 760LL))(
            DevBitmap,
            a2,
            a3);
        }
      }
    }
    else if ( (v7 & 0x20000) == 0 && ((_DWORD)hdev[456] & 0x8000000) != 0 && ((_DWORD)hdev[532] & 0x8000) != 0 )
    {
      v11 = *(void (__fastcall **)(struct _SURFOBJ *, _QWORD, void *))(*((_QWORD *)hdev + 224) + 760LL);
      if ( v11 )
        v11(a1, a2, a3);
    }
    if ( gbWndobjUpdate )
    {
      if ( a2 == 5 )
      {
        gbWndobjUpdate = 0;
        vForceClientRgnUpdate();
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v12);
    DCOBJ::~DCOBJ((DCOBJ *)v13);
  }
}
