/*
 * XREFs of ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C01147D8
 * Callers:
 *     xxxSetDeskWallpaper @ 0x1C0114660 (xxxSetDeskWallpaper.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxNotifyShellOfWallpaperChange(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  struct tagWND *v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  struct tagWND *v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+40h] [rbp-18h]

  v3 = 0;
  v4 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v4 )
  {
    v5 = *(struct tagWND **)(*(_QWORD *)(v4 + 8) + 168LL);
    if ( v5 )
    {
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
      v11 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
      v12 = v5;
      HMLockObject(v5);
      v3 = xxxSendNotifyMessage(v5, 0x34u, 4LL, 0LL, 1);
      ThreadUnlock1(v8, v7, v9);
    }
  }
  return v3;
}
