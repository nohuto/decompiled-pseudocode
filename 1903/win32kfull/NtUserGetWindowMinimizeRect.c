/*
 * XREFs of NtUserGetWindowMinimizeRect @ 0x1C012E650
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ParkIcon @ 0x1C0084DD8 (ParkIcon.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     IsTrayWindow @ 0x1C009B9D4 (IsTrayWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     xxxSendMinRectMessages @ 0x1C012E7D4 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
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
  __int64 v14; // r9
  __int64 v15; // rdx
  ULONG64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int *Prop; // rax
  __int64 v21; // r9
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // r9
  __int64 v29; // [rsp+30h] [rbp-58h] BYREF
  __int64 v30; // [rsp+38h] [rbp-50h]
  __int64 v31; // [rsp+40h] [rbp-48h]
  __int128 v32; // [rsp+50h] [rbp-38h] BYREF

  v32 = 0uLL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v5 = ValidateHwnd(a1);
  v7 = (_QWORD *)v5;
  if ( v5 && (v6 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x3FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    v29 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v29;
    v30 = v5;
    HMLockObject(v5);
    if ( a2 )
    {
      if ( (unsigned int)IsTrayWindow(v7) )
      {
        v12 = xxxSendMinRectMessages(v7, &v32);
      }
      else
      {
        Prop = (unsigned int *)GetProp((__int64)v7, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
        if ( Prop && (Prop[12] & 0x20) != 0 )
        {
          v13 = Prop[8];
          LODWORD(v32) = Prop[8];
          v14 = Prop[9];
          DWORD1(v32) = Prop[9];
        }
        else
        {
          ParkIcon((__int64)v7, &v32);
          v14 = DWORD1(v32);
          v13 = (unsigned int)v32;
        }
        v11 = gpsi;
        DWORD2(v32) = v13 + *(_DWORD *)(gpsi + 2124LL);
        HIDWORD(v32) = v14 + *(_DWORD *)(gpsi + 2128LL);
        v12 = 1;
      }
      v16 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v13, v14) + 472);
      if ( (*(_BYTE *)(v16 + 224) & 1) == 0 )
      {
        v16 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v17, v18) + 472);
        if ( (*(_BYTE *)(v16 + 224) & 0x20) == 0 )
        {
          v22 = *(_DWORD *)(v7[5] + 288LL);
          if ( (((unsigned __int16)(v22 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v16,
                                                                                   v15,
                                                                                   v17,
                                                                                   v21) >> 8)) & 0x1FF) != 0 )
            goto LABEL_30;
          v26 = *(unsigned int *)(v7[5] + 288LL);
          v27 = (*(_DWORD *)(v7[5] + 288LL) & 0xF) == 2 && (v26 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v26, v23, v24, v25) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17, v28) & 0x20000000) == 0 )
          {
            v4 = 0;
          }
          if ( v27 != v4 )
LABEL_30:
            TransformRectBetweenCoordinateSpaces(&v32, &v32, 0LL, v7);
        }
      }
      if ( v12 )
      {
        v16 = MmUserProbeAddress;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_OWORD *)MmUserProbeAddress;
        *a2 = v32;
      }
    }
    else
    {
      v12 = 0;
      UserSetLastError(87LL, v8, v9, v10);
    }
    ThreadUnlock1(v16, v15, v17);
  }
  else
  {
    v12 = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v12;
}
