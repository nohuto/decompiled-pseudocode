/*
 * XREFs of NtUserSetWindowShowState @ 0x1C01F6130
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0035A78 (GetMonitorWorkRectForWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0072A9C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     xxxSetWindowShowState @ 0x1C01FA8B4 (xxxSetWindowShowState.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowShowState(__int64 a1, unsigned int a2, int a3, __int128 *a4)
{
  __int64 v5; // r12
  int v7; // edi
  __int64 v8; // rax
  __int128 *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  struct tagMONITOR *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  __int128 v28; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v29[3]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v30; // [rsp+68h] [rbp-60h] BYREF
  __int128 v31; // [rsp+78h] [rbp-50h] BYREF
  _QWORD v32[2]; // [rsp+88h] [rbp-40h] BYREF

  v5 = a2;
  EnterCrit(0LL, 1LL);
  v7 = 0;
  gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a1);
  v13 = v8;
  if ( v8 && (((*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v29[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v29;
    v29[1] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v14 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 328LL);
    if ( v14
      && IAMThreadAccessGranted(gptiCurrent)
      && *(_QWORD *)(v19 + 416) == *(_QWORD *)(*(_QWORD *)(v14 + 16) + 416LL) )
    {
      v21 = *(_QWORD *)(v13 + 16);
      if ( v21 != v19 )
      {
        if ( *(_QWORD *)(v21 + 664) )
        {
          v15 = 5023LL;
          goto LABEL_5;
        }
        if ( a3 )
        {
          v15 = 1004LL;
          goto LABEL_5;
        }
        if ( (unsigned int)v5 <= 5 )
        {
          v9 = a4;
          if ( !a4 )
            goto LABEL_27;
          if ( (unsigned __int64)a4 >= MmUserProbeAddress )
            v9 = (__int128 *)MmUserProbeAddress;
          v31 = *v9;
          a4 = &v31;
          v22 = _MonitorFromWindowInternal((struct tagWND *)v13, 2LL, 1LL, v20);
          if ( v22 )
          {
            v28 = *GetMonitorWorkRectForWindow(&v30, (__int64)v22, (const struct tagWND *)v14);
            if ( (unsigned int)IntersectRect(v32, (int *)&v31, (int *)&v28) )
            {
              v23 = v32[0] - v31;
              if ( v32[0] == (_QWORD)v31 )
                v23 = v32[1] - *((_QWORD *)&v31 + 1);
              if ( !v23 )
              {
                if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v9) + 472)
                               + 224LL) & 1) != 0
                  || (v24 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v9) + 472),
                      (*(_BYTE *)(v24 + 224) & 0x20) != 0)
                  || (v25 = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL),
                      (((unsigned __int16)(v25 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                          v24,
                                                                                          (__int64)v9) >> 8)) & 0x1FF) == 0)
                  || (unsigned int)TransformRectBetweenCoordinateSpaces(&v31, &v31, v13, v14) )
                {
LABEL_27:
                  LOBYTE(v9) = byte_1C02E66B0[v5];
                  v7 = xxxSetWindowShowState(v13, v9, a4);
                  goto LABEL_28;
                }
              }
            }
          }
        }
      }
      v15 = 87LL;
    }
    else
    {
      v15 = 5LL;
    }
LABEL_5:
    UserSetLastError(v15, (__int64)v9);
LABEL_28:
    ThreadUnlock1(v17, v16, v18);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v7;
}
