/*
 * XREFs of NtUserGetUpdateRect @ 0x1C0120100
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxGetUpdateRect @ 0x1C01202E0 (xxxGetUpdateRect.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetUpdateRect(__int64 a1, _OWORD *a2, unsigned int a3)
{
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int UpdateRect; // r14d
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v26; // [rsp+30h] [rbp-58h] BYREF
  __int64 v27; // [rsp+38h] [rbp-50h]
  __int64 v28; // [rsp+40h] [rbp-48h]
  __int128 v29; // [rsp+50h] [rbp-38h] BYREF

  v29 = 0uLL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    v26 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v26;
    v27 = v8;
    HMLockObject(v8);
    UpdateRect = xxxGetUpdateRect(
                   v8,
                   (unsigned __int64)&v29 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
                   a3);
    if ( a2 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v11, v12) + 472) + 224LL) & 1) == 0 )
      {
        v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v11, v14) + 472);
        if ( (*(_BYTE *)(v15 + 224) & 0x20) == 0 )
        {
          v17 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL);
          if ( (((unsigned __int16)(v17 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v15,
                                                                                   v9,
                                                                                   v11,
                                                                                   v16) >> 8)) & 0x1FF) != 0 )
            goto LABEL_20;
          v21 = *(unsigned int *)(*(_QWORD *)(v8 + 40) + 288LL);
          v22 = (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL) & 0xF) == 2 && (v21 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v21, v18, v19, v20) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v23, v9, v11, v24) & 0x20000000) == 0 )
          {
            v6 = 0;
          }
          if ( v22 != v6 )
LABEL_20:
            TransformRectBetweenCoordinateSpaces(&v29, &v29, 0LL, v8);
        }
      }
      v10 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v29;
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
