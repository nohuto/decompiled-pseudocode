/*
 * XREFs of xxxActiveWindowTracking @ 0x1C01AC4AC
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0021D64 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00EBB00 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     IsForegroundLocked @ 0x1C006DCE8 (IsForegroundLocked.c)
 *     GetActiveTrackPwnd @ 0x1C01ABB44 (GetActiveTrackPwnd.c)
 */

__int64 __fastcall xxxActiveWindowTracking(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  _QWORD *ActiveTrackPwnd; // rax
  __int64 v6; // rdx
  ULONG_PTR v7; // rdi
  __int64 ThreadWin32Thread; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  int v14; // eax
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
  v16 = v2;
  v3 = *(_DWORD *)(v2 + 388);
  if ( (v3 & 0x200000) == 0 )
    return 0LL;
  *(_DWORD *)(v2 + 388) = v3 & 0xFFDFFFFF;
  if ( (unsigned int)IsForegroundLocked() )
    return 0LL;
  ActiveTrackPwnd = GetActiveTrackPwnd((const struct tagWND *)a1, &v16);
  v7 = (ULONG_PTR)ActiveTrackPwnd;
  if ( !ActiveTrackPwnd )
    return 0LL;
  if ( (_QWORD *)a1 != ActiveTrackPwnd )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
    v15[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v15;
    v15[1] = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  }
  v9 = xxxSendMessage(v7);
  v13 = v9;
  if ( v9 <= 0 )
    goto LABEL_10;
  if ( v9 <= 2 )
  {
    if ( v16 == gpqForeground )
      v14 = xxxActivateThisWindow(
              (struct tagWND *)v7,
              0,
              ~(unsigned __int8)((unsigned int)gpdwCPUserPreferencesMask >> 3) & 8,
              0);
    else
      v14 = xxxSetForegroundWindow2(
              (struct tagWND *)v7,
              0LL,
              ~(unsigned __int8)((unsigned int)gpdwCPUserPreferencesMask >> 4) & 4 | 2u,
              0);
    if ( v14 && v13 != 2 )
      goto LABEL_11;
    goto LABEL_19;
  }
  if ( v9 == 4 )
  {
LABEL_19:
    v13 = 1;
    goto LABEL_11;
  }
LABEL_10:
  v13 = 0;
LABEL_11:
  if ( a1 != v7 )
    ThreadUnlock1(v11, v10, v12);
  return v13;
}
