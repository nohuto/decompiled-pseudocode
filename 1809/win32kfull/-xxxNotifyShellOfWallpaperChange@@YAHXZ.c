/*
 * XREFs of ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C012E638
 * Callers:
 *     xxxSetDeskWallpaper @ 0x1C012E4C4 (xxxSetDeskWallpaper.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 */

__int64 __fastcall xxxNotifyShellOfWallpaperChange(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v3 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 168LL);
    if ( v4 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
      v9[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v9;
      v9[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v2 = xxxSendNotifyMessage((struct tagWND *)v4, 0x34u, 4LL, 0LL, 1);
      ThreadUnlock1(v7, v6);
    }
  }
  return v2;
}
