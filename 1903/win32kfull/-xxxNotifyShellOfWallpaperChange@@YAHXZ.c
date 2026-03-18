/*
 * XREFs of ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C013A7D8
 * Callers:
 *     xxxSetDeskWallpaper @ 0x1C013A660 (xxxSetDeskWallpaper.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxNotifyShellOfWallpaperChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  struct tagWND *v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  struct tagWND *v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-18h]

  v4 = 0;
  v5 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v5 )
  {
    v6 = *(struct tagWND **)(*(_QWORD *)(v5 + 8) + 168LL);
    if ( v6 )
    {
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
      v12 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v12;
      v13 = v6;
      HMLockObject(v6);
      v4 = xxxSendNotifyMessage(v6, 0x34u, 4uLL, 0LL, 1);
      ThreadUnlock1(v9, v8, v10);
    }
  }
  return v4;
}
