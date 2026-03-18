/*
 * XREFs of NtUserGetWindowMinimizeRect @ 0x1C0102700
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsTrayWindow @ 0x1C0044B0C (IsTrayWindow.c)
 *     ParkIcon @ 0x1C0066FAC (ParkIcon.c)
 *     xxxSendMinRectMessages @ 0x1C0102848 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetWindowMinimizeRect(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  int v11; // esi
  __int64 v12; // rdx
  ULONG64 v13; // rcx
  __int64 v14; // r8
  _DWORD *Prop; // rax
  int v17; // r8d
  int v18; // r9d
  unsigned int v19; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v21[3]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v22; // [rsp+50h] [rbp-38h] BYREF

  v22 = 0uLL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v4 = ValidateHwnd(a1);
  v9 = (_QWORD *)v4;
  if ( v4 && (v6 = (*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x3FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    v21[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v21;
    v21[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    if ( a2 )
    {
      if ( (unsigned int)IsTrayWindow((_QWORD *)v4) )
      {
        v11 = xxxSendMinRectMessages(v9, &v22);
      }
      else
      {
        Prop = (_DWORD *)RealGetProp(v9[15], (unsigned __int16)atomCheckpointProp, 1LL);
        if ( Prop && (Prop[12] & 0x20) != 0 )
        {
          v17 = Prop[8];
          LODWORD(v22) = v17;
          v18 = Prop[9];
          DWORD1(v22) = v18;
        }
        else
        {
          ParkIcon(v9, (int *)&v22);
          v18 = DWORD1(v22);
          v17 = v22;
        }
        v10 = gpsi;
        DWORD2(v22) = v17 + *(_DWORD *)(gpsi + 2124LL);
        HIDWORD(v22) = v18 + *(_DWORD *)(gpsi + 2128LL);
        v11 = 1;
      }
      v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10) + 472);
      if ( (*(_BYTE *)(v13 + 224) & 1) == 0 )
      {
        v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12) + 472);
        if ( (*(_BYTE *)(v13 + 224) & 0x20) == 0 )
        {
          v19 = *(_DWORD *)(v9[5] + 288LL);
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v13, v12);
          v13 = 511LL;
          if ( (((unsigned __int16)(v19 >> 8) ^ (unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8)) & 0x1FF) != 0 )
            TransformRectBetweenCoordinateSpaces(&v22, &v22, 0LL, v9);
        }
      }
      if ( v11 )
      {
        v13 = MmUserProbeAddress;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_OWORD *)MmUserProbeAddress;
        *a2 = v22;
      }
    }
    else
    {
      v11 = 0;
      UserSetLastError(87LL, v5);
    }
    ThreadUnlock1(v13, v12, v14);
  }
  else
  {
    v11 = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v11;
}
