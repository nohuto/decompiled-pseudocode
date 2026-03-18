/*
 * XREFs of NtUserSetWindowGroup @ 0x1C01F5E30
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C006B5DC (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C01FD0B8 (-SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowGroup(int a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r10
  NTSTATUS v24; // eax
  _QWORD v26[5]; // [rsp+20h] [rbp-28h] BYREF
  int v27; // [rsp+50h] [rbp+8h] BYREF

  v27 = a1;
  EnterCrit(0LL, 1LL);
  v7 = 0;
  gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a2);
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 40);
    v9 = (*(_WORD *)(v10 + 42) & 0x3FFFu) - 669;
    if ( (v9 & 0xFFFFFFFD) != 0 )
    {
      v26[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v26;
      v26[1] = v8;
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      if ( IAMThreadAccessGranted(gptiCurrent) )
      {
        if ( !(unsigned int)IsTopLevelWindow(v14) || *(_QWORD *)(v20 + 96) )
          goto LABEL_7;
        v21 = *(_QWORD *)(v19 + 448);
        if ( v21 )
          v22 = ***(_QWORD ***)(v21 + 8);
        else
          v22 = -1LL;
        if ( !anonymous_namespace_::GroupManagementEnabledForDesktop(v22) )
        {
          v15 = 5023LL;
          goto LABEL_5;
        }
        if ( a4 > 2 || (a3 & 0xFFFFFFFC) != 0 )
        {
LABEL_7:
          v15 = 87LL;
        }
        else
        {
          v24 = WindowGroupingWindowManagement::SetWindowGroup(&v27, v23, a3, a4);
          if ( v24 >= 0 )
          {
            v7 = 1;
            goto LABEL_19;
          }
          v15 = RtlNtStatusToDosError(v24);
        }
      }
      else
      {
        v15 = 5LL;
      }
LABEL_5:
      UserSetLastError(v15, v13);
LABEL_19:
      ThreadUnlock1(v17, v16, v18);
    }
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v7;
}
