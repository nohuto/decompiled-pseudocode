/*
 * XREFs of ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C00DBA8C
 * Callers:
 *     GreDwmStartup @ 0x1C00DAF94 (GreDwmStartup.c)
 *     GreAccNotifyWindow @ 0x1C00DBA20 (GreAccNotifyWindow.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C0107A60 (vAccNotifyDeleteSurfaceWrap.c)
 *     GreDwmShutdown @ 0x1C015EE2C (GreDwmShutdown.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C02839B4 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C02951A8 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 */

void __fastcall vAccNotify(struct _SURFOBJ *a1, unsigned int a2, void *a3)
{
  HDEV hdev; // rbx
  int v7; // eax
  struct _DISPSURF *i; // rdi
  __int64 v9; // rbx
  struct _SURFOBJ *DevBitmap; // rax
  void (__fastcall *v11)(struct _SURFOBJ *, _QWORD, void *); // rax
  __int128 v12; // [rsp+20h] [rbp-50h] BYREF
  HDEV v13; // [rsp+30h] [rbp-40h]
  int v14; // [rsp+38h] [rbp-38h]
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  int v16; // [rsp+48h] [rbp-28h]
  int v17; // [rsp+4Ch] [rbp-24h]
  __int16 v18; // [rsp+50h] [rbp-20h]
  __int64 v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h]

  hdev = a1->hdev;
  if ( hdev || (hdev = (HDEV)UserGetHDEV()) != 0LL )
  {
    v16 = 0;
    v17 = 0;
    v20 = 0LL;
    v19 = 0LL;
    v15 = 0LL;
    v12 = 0LL;
    v18 = 256;
    v14 = 1;
    v7 = *((_DWORD *)hdev + 10);
    if ( (v7 & 1) != 0 )
    {
      *(_QWORD *)&v12 = *((_QWORD *)hdev + 6);
      v13 = hdev;
      GreAcquireSemaphore(v12);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v12, 11LL);
      v7 = *((_DWORD *)hdev + 10);
    }
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
    if ( gbWndobjUpdate && a2 == 5 )
    {
      gbWndobjUpdate = 0;
      vForceClientRgnUpdate();
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v12);
    if ( v15 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v15);
  }
}
