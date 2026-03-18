/*
 * XREFs of NtUserGetUpdateRect @ 0x1C00FE560
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxGetUpdateRect @ 0x1C012ECD8 (xxxGetUpdateRect.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetUpdateRect(__int64 a1, _OWORD *a2, unsigned int a3)
{
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  __int64 v11; // r8
  unsigned int UpdateRect; // r14d
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rcx
  __int64 v21; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+38h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  __int128 v24; // [rsp+50h] [rbp-38h] BYREF

  v24 = 0uLL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    v21 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v21;
    v22 = v8;
    HMLockObject(v8);
    UpdateRect = xxxGetUpdateRect(
                   v8,
                   (unsigned __int64)&v24 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
                   a3);
    if ( a2 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v11) + 472) + 224LL) & 1) == 0 )
      {
        v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v11) + 472);
        if ( (*(_BYTE *)(v13 + 224) & 0x20) == 0 )
        {
          v14 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL);
          if ( (((unsigned __int16)(v14 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v13,
                                                                                   v9,
                                                                                   v11) >> 8)) & 0x1FF) != 0 )
            goto LABEL_20;
          v17 = *(unsigned int *)(*(_QWORD *)(v8 + 40) + 288LL);
          v18 = (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL) & 0xF) == 2 && (v17 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v17, v15, v16) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v19, v9, v11) & 0x20000000) == 0 )
          {
            v6 = 0;
          }
          if ( v18 != v6 )
LABEL_20:
            TransformRectBetweenCoordinateSpaces(&v24, &v24, 0LL, v8);
        }
      }
      v10 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v24;
    }
    ThreadUnlock1(v10, v9, v11);
  }
  else
  {
    UpdateRect = 0;
  }
  UserSessionSwitchLeaveCrit(v7);
  return UpdateRect;
}
