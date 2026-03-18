/*
 * XREFs of NtUserGetWindowMinimizeRect @ 0x1C01098E0
 * Callers:
 *     <none>
 * Callees:
 *     ParkIcon @ 0x1C0014E34 (ParkIcon.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     IsTrayWindow @ 0x1C003C7A4 (IsTrayWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxSendMinRectMessages @ 0x1C0109A64 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetWindowMinimizeRect(__int64 a1, _OWORD *a2)
{
  int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rdx
  ULONG64 v15; // rcx
  __int64 v16; // r8
  unsigned int *Prop; // rax
  unsigned int v19; // r9d
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // [rsp+30h] [rbp-58h] BYREF
  __int64 v26; // [rsp+38h] [rbp-50h]
  __int64 v27; // [rsp+40h] [rbp-48h]
  __int128 v28; // [rsp+50h] [rbp-38h] BYREF

  v28 = 0uLL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v5 = ValidateHwnd(a1);
  v7 = (_QWORD *)v5;
  if ( v5 && (v6 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x3FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    v25 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v25;
    v26 = v5;
    HMLockObject(v5);
    if ( a2 )
    {
      if ( (unsigned int)IsTrayWindow(v7) )
      {
        v12 = xxxSendMinRectMessages(v7, &v28);
      }
      else
      {
        Prop = (unsigned int *)GetProp((__int64)v7, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
        if ( Prop && (Prop[12] & 0x20) != 0 )
        {
          v13 = Prop[8];
          LODWORD(v28) = Prop[8];
          v19 = Prop[9];
          DWORD1(v28) = v19;
        }
        else
        {
          ParkIcon((__int64)v7, &v28);
          v19 = DWORD1(v28);
          v13 = (unsigned int)v28;
        }
        v11 = gpsi;
        DWORD2(v28) = v13 + *(_DWORD *)(gpsi + 2124LL);
        HIDWORD(v28) = v19 + *(_DWORD *)(gpsi + 2128LL);
        v12 = 1;
      }
      v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v13) + 472);
      if ( (*(_BYTE *)(v15 + 224) & 1) == 0 )
      {
        v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v16) + 472);
        if ( (*(_BYTE *)(v15 + 224) & 0x20) == 0 )
        {
          v20 = *(_DWORD *)(v7[5] + 288LL);
          if ( (((unsigned __int16)(v20 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v15,
                                                                                   v14,
                                                                                   v16) >> 8)) & 0x1FF) != 0 )
            goto LABEL_30;
          v23 = *(unsigned int *)(v7[5] + 288LL);
          v24 = (*(_DWORD *)(v7[5] + 288LL) & 0xF) == 2 && (v23 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v23, v21, v22) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16) & 0x20000000) == 0 )
          {
            v4 = 0;
          }
          if ( v24 != v4 )
LABEL_30:
            TransformRectBetweenCoordinateSpaces(&v28, &v28, 0LL, v7);
        }
      }
      if ( v12 )
      {
        v15 = MmUserProbeAddress;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_OWORD *)MmUserProbeAddress;
        *a2 = v28;
      }
    }
    else
    {
      v12 = 0;
      UserSetLastError(87LL, v8, v9, v10);
    }
    ThreadUnlock1(v15, v14, v16);
  }
  else
  {
    v12 = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v12;
}
