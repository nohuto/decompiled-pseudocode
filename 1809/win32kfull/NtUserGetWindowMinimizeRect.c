/*
 * XREFs of NtUserGetWindowMinimizeRect @ 0x1C0123F50
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsTrayWindow @ 0x1C002CD08 (IsTrayWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ParkIcon @ 0x1C00B8DA8 (ParkIcon.c)
 *     xxxSendMinRectMessages @ 0x1C01240B0 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
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
  _DWORD *Prop; // rax
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v20[3]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v21; // [rsp+50h] [rbp-38h] BYREF

  v21 = 0uLL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v4 = ValidateHwnd(a1);
  v9 = (_QWORD *)v4;
  if ( v4 && (v6 = (*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x2FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    v20[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v20;
    v20[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    if ( a2 )
    {
      if ( (unsigned int)IsTrayWindow((_QWORD *)v4) )
      {
        v11 = xxxSendMinRectMessages(v9, &v21);
      }
      else
      {
        Prop = (_DWORD *)GetProp((__int64)v9, (unsigned __int16)atomCheckpointProp, 1LL);
        if ( Prop && (Prop[12] & 0x20) != 0 )
        {
          v16 = Prop[8];
          LODWORD(v21) = v16;
          v17 = Prop[9];
          DWORD1(v21) = v17;
        }
        else
        {
          ParkIcon(v9, (int *)&v21);
          v17 = DWORD1(v21);
          v16 = v21;
        }
        v10 = gpsi;
        DWORD2(v21) = v16 + *(_DWORD *)(gpsi + 2124LL);
        HIDWORD(v21) = v17 + *(_DWORD *)(gpsi + 2128LL);
        v11 = 1;
      }
      v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10) + 480);
      if ( (*(_BYTE *)(v13 + 224) & 1) == 0 )
      {
        v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12) + 480);
        if ( (*(_BYTE *)(v13 + 224) & 0x20) == 0 )
        {
          v18 = *(_DWORD *)(v9[5] + 288LL);
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v13, v12);
          v13 = 511LL;
          if ( (((unsigned __int16)(v18 >> 8) ^ (unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8)) & 0x1FF) != 0 )
            TransformRectBetweenCoordinateSpaces(&v21, &v21, 0LL, v9);
        }
      }
      if ( v11 )
      {
        v13 = MmUserProbeAddress;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_OWORD *)MmUserProbeAddress;
        *a2 = v21;
      }
    }
    else
    {
      v11 = 0;
      UserSetLastError(87LL, v5, v7, v8);
    }
    ThreadUnlock1(v13, v12);
  }
  else
  {
    v11 = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v11;
}
