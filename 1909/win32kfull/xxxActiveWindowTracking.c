/*
 * XREFs of xxxActiveWindowTracking @ 0x1C01E41B4
 * Callers:
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C000B38C (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0023C6C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     IsForegroundLocked @ 0x1C013441C (IsForegroundLocked.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01D6378 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     GetActiveTrackPwnd @ 0x1C01E3484 (GetActiveTrackPwnd.c)
 */

__int64 __fastcall xxxActiveWindowTracking(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  struct tagWND *ActiveTrackPwnd; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct tagWND *v7; // rdi
  __int64 ThreadWin32Thread; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
  v3 = *(_DWORD *)(v2 + 396);
  if ( (v3 & 0x200000) == 0 )
    return 0LL;
  *(_DWORD *)(v2 + 396) = v3 & 0xFFDFFFFF;
  if ( (unsigned int)IsForegroundLocked() )
    return 0LL;
  ActiveTrackPwnd = (struct tagWND *)GetActiveTrackPwnd((const struct tagWND *)a1);
  v7 = ActiveTrackPwnd;
  if ( !ActiveTrackPwnd )
    return 0LL;
  if ( (struct tagWND *)a1 != ActiveTrackPwnd )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6);
    v15 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v15;
    v16 = v7;
    HMLockObject(v7);
  }
  v9 = xxxSendMessage((ULONG_PTR)v7);
  v13 = v9;
  if ( v9 <= 0 )
    goto LABEL_9;
  if ( v9 > 2 )
  {
    if ( v9 != 4 )
    {
LABEL_9:
      v13 = 0;
      goto LABEL_10;
    }
LABEL_15:
    v13 = 1;
    goto LABEL_10;
  }
  if ( !xxxTrackingActivateWindow(v7) || v13 == 2 )
    goto LABEL_15;
LABEL_10:
  if ( (struct tagWND *)a1 != v7 )
    ThreadUnlock1(v11, v10, v12);
  return v13;
}
