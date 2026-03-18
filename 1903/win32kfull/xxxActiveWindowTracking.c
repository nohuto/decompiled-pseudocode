/*
 * XREFs of xxxActiveWindowTracking @ 0x1C01E4334
 * Callers:
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00107FC (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C002E54C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     IsForegroundLocked @ 0x1C0017818 (IsForegroundLocked.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01D6508 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     GetActiveTrackPwnd @ 0x1C01E3604 (GetActiveTrackPwnd.c)
 */

__int64 __fastcall xxxActiveWindowTracking(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  struct tagWND *ActiveTrackPwnd; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct tagWND *v8; // rdi
  __int64 ThreadWin32Thread; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
  v3 = *(_DWORD *)(v2 + 396);
  if ( (v3 & 0x200000) == 0 )
    return 0LL;
  *(_DWORD *)(v2 + 396) = v3 & 0xFFDFFFFF;
  if ( (unsigned int)IsForegroundLocked() )
    return 0LL;
  ActiveTrackPwnd = (struct tagWND *)GetActiveTrackPwnd((const struct tagWND *)a1);
  v8 = ActiveTrackPwnd;
  if ( !ActiveTrackPwnd )
    return 0LL;
  if ( (struct tagWND *)a1 != ActiveTrackPwnd )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
    v16 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v16;
    v17 = v8;
    HMLockObject(v8);
  }
  v10 = xxxSendMessage((ULONG_PTR)v8);
  v14 = v10;
  if ( v10 <= 0 )
    goto LABEL_9;
  if ( v10 > 2 )
  {
    if ( v10 != 4 )
    {
LABEL_9:
      v14 = 0;
      goto LABEL_10;
    }
LABEL_15:
    v14 = 1;
    goto LABEL_10;
  }
  if ( !xxxTrackingActivateWindow(v8) || v14 == 2 )
    goto LABEL_15;
LABEL_10:
  if ( (struct tagWND *)a1 != v8 )
    ThreadUnlock1(v12, v11, v13);
  return v14;
}
