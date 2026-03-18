/*
 * XREFs of NtUserGetUpdateRect @ 0x1C00FC0C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxGetUpdateRect @ 0x1C00FC220 (xxxGetUpdateRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetUpdateRect(__int64 a1, _OWORD *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  __int64 v12; // rdx
  ULONG64 v13; // rcx
  unsigned int UpdateRect; // esi
  __int64 v15; // r8
  __int64 v16; // rcx
  unsigned int v17; // ebx
  _QWORD v19[3]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v20; // [rsp+50h] [rbp-38h] BYREF

  v20 = 0uLL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = v6;
  if ( v6 )
  {
    v19[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v19;
    v19[1] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    UpdateRect = xxxGetUpdateRect(
                   v6,
                   (unsigned __int64)&v20 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
                   a3);
    if ( a2 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12) + 472) + 224LL) & 1) == 0 )
      {
        v16 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12) + 472);
        if ( (*(_BYTE *)(v16 + 224) & 0x20) == 0 )
        {
          v17 = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 288LL);
          if ( (((unsigned __int16)(v17 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v16,
                                                                                   v12) >> 8)) & 0x1FF) != 0 )
            TransformRectBetweenCoordinateSpaces(&v20, &v20, 0LL, v11);
        }
      }
      v13 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v20;
    }
    ThreadUnlock1(v13, v12, v15);
  }
  else
  {
    UpdateRect = 0;
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return UpdateRect;
}
