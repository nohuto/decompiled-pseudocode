/*
 * XREFs of NtUserSetWindowGroup @ 0x1C0235A80
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C000FB24 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     IAMThreadAccessGranted @ 0x1C008AAEC (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C023DFC4 (-SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowGroup(int a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  NTSTATUS v20; // eax
  __int64 v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+28h] [rbp-20h]
  __int64 v24; // [rsp+30h] [rbp-18h]
  int v25; // [rsp+50h] [rbp+8h] BYREF

  v25 = a1;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  EnterCrit(0LL, 1LL);
  v7 = 0LL;
  gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a2);
  v10 = v8;
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    if ( (((*(_WORD *)(v9 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v22 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v22;
      v23 = v8;
      HMLockObject(v8);
      if ( IAMThreadAccessGranted(gptiCurrent) )
      {
        if ( !(unsigned int)IsTopLevelWindow(v10) || *(_QWORD *)(v10 + 120) )
          goto LABEL_7;
        v18 = *(_QWORD *)(v13 + 448);
        if ( v18 )
          v19 = ***(_QWORD ***)(v18 + 8);
        else
          v19 = -1LL;
        if ( !anonymous_namespace_::GroupManagementEnabledForDesktop(v19) )
        {
          v14 = 5023LL;
          goto LABEL_5;
        }
        if ( a4 > 2 || (a3 & 0xFFFFFFFC) != 0 )
        {
LABEL_7:
          v14 = 87LL;
        }
        else
        {
          v20 = WindowGroupingWindowManagement::SetWindowGroup(&v25, v10, a3);
          if ( v20 >= 0 )
          {
            v7 = 1LL;
            goto LABEL_19;
          }
          v14 = RtlNtStatusToDosError(v20);
        }
      }
      else
      {
        v14 = 5LL;
      }
LABEL_5:
      UserSetLastError(v14, v11, v12, v13);
LABEL_19:
      ThreadUnlock1(v16, v15, v17);
    }
  }
  UserSessionSwitchLeaveCrit(v9);
  return v7;
}
