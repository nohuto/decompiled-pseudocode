/*
 * XREFs of xxxActiveWindowTracking @ 0x1C01CF6C8
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0069EDC (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0072648 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     IsForegroundLocked @ 0x1C00D7F44 (IsForegroundLocked.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01C31C0 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     GetActiveTrackPwnd @ 0x1C01CED34 (GetActiveTrackPwnd.c)
 */

__int64 __fastcall xxxActiveWindowTracking(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  const struct tagWND *ActiveTrackPwnd; // rax
  __int64 v5; // rdx
  ULONG_PTR v6; // rdi
  __int64 ThreadWin32Thread; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL);
  v3 = *(_DWORD *)(v2 + 388);
  if ( (v3 & 0x200000) == 0 )
    return 0LL;
  *(_DWORD *)(v2 + 388) = v3 & 0xFFDFFFFF;
  if ( (unsigned int)IsForegroundLocked() )
    return 0LL;
  ActiveTrackPwnd = GetActiveTrackPwnd((const struct tagWND *)a1);
  v6 = (ULONG_PTR)ActiveTrackPwnd;
  if ( !ActiveTrackPwnd )
    return 0LL;
  if ( (const struct tagWND *)a1 != ActiveTrackPwnd )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
    v13[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v13;
    v13[1] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  }
  v8 = xxxSendMessage(v6);
  v11 = v8;
  if ( v8 <= 0 )
    goto LABEL_9;
  if ( v8 > 2 )
  {
    if ( v8 != 4 )
    {
LABEL_9:
      v11 = 0;
      goto LABEL_10;
    }
LABEL_15:
    v11 = 1;
    goto LABEL_10;
  }
  if ( !xxxTrackingActivateWindow((struct tagWND *)v6) || v11 == 2 )
    goto LABEL_15;
LABEL_10:
  if ( a1 != v6 )
    ThreadUnlock1(v10, v9);
  return v11;
}
