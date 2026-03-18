/*
 * XREFs of NtUserUpdateLayeredWindow @ 0x1C00724D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000AD50 (UserSetLastStatus.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetNewMonitor @ 0x1C002D640 (GetNewMonitor.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C002DE64 (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C00304E4 (xxxNotifyMonitorChanged.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     zzzUpdateLayeredWindow @ 0x1C007CD40 (zzzUpdateLayeredWindow.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00E8258 (UpdateMonitorForWindowAndChildren.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01B0038 (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall NtUserUpdateLayeredWindow(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        ULONG64 a6,
        int a7,
        ULONG64 a8,
        int a9,
        ULONG64 a10)
{
  __int64 *v13; // r15
  int *v14; // rsi
  __int128 *v15; // rdi
  __int64 *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // rdi
  __int64 v25; // rsi
  NTSTATUS updated; // eax
  __int64 NewMonitor; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v33; // r8
  _QWORD *v34; // rcx
  unsigned __int16 v35; // si
  __int64 v36; // rdx
  int v37; // [rsp+50h] [rbp-128h]
  int v38; // [rsp+54h] [rbp-124h] BYREF
  __int64 v39; // [rsp+60h] [rbp-118h]
  __int64 *v40; // [rsp+68h] [rbp-110h]
  int v41; // [rsp+70h] [rbp-108h]
  int v42; // [rsp+74h] [rbp-104h]
  __int64 v43; // [rsp+78h] [rbp-100h]
  __int64 v44; // [rsp+80h] [rbp-F8h]
  __int64 *v45; // [rsp+88h] [rbp-F0h]
  struct tagRECT v46; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-D0h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-B8h]
  struct tagBWL *v51; // [rsp+C8h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+D0h] [rbp-A8h]
  __int64 v53; // [rsp+D8h] [rbp-A0h]
  _QWORD v54[3]; // [rsp+E8h] [rbp-90h] BYREF
  _QWORD v55[3]; // [rsp+100h] [rbp-78h] BYREF
  __int128 v56; // [rsp+118h] [rbp-60h]
  __int128 v57; // [rsp+128h] [rbp-50h] BYREF

  v50 = a5;
  v13 = (__int64 *)a6;
  v14 = (int *)a8;
  v15 = (__int128 *)a10;
  v44 = 0LL;
  v45 = 0LL;
  v40 = 0LL;
  v43 = 0LL;
  v39 = 0LL;
  EnterCrit(0LL, 1LL);
  v18 = ValidateHwnd(a1);
  if ( v18 )
  {
    v54[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v54;
    v54[1] = v18;
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    if ( a6 )
    {
      if ( a6 >= MmUserProbeAddress )
        v13 = (__int64 *)MmUserProbeAddress;
      v52 = *v13;
      v47 = v52;
      v44 = (__int64)&v47;
    }
    if ( !a4 )
      goto LABEL_11;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__int64 *)MmUserProbeAddress;
    v48 = *a4;
    v16 = &v48;
    v45 = &v48;
    if ( (int)v48 < 0 || v48 < 0 )
    {
      v37 = 0;
      UserSetLastError(87LL, (__int64)&v48);
    }
    else
    {
LABEL_11:
      if ( a3 )
      {
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (__int64 *)MmUserProbeAddress;
        v53 = *a3;
        v49 = v53;
        v40 = &v49;
      }
      if ( a8 )
      {
        if ( a8 >= MmUserProbeAddress )
          v14 = (int *)MmUserProbeAddress;
        v38 = *v14;
        v43 = (__int64)&v38;
      }
      if ( a10 )
      {
        if ( a10 >= MmUserProbeAddress )
          v15 = (__int128 *)MmUserProbeAddress;
        v57 = *v15;
        v39 = (__int64)&v57;
      }
      if ( (a9 & 0xFFFFFFD0) != 0 )
      {
        UserSetLastError(87LL, (__int64)v16);
        v37 = 0;
      }
      else if ( v39 && (*(int *)v39 < 0 || *(int *)(v39 + 4) < 0) )
      {
        UserSetLastError(87LL, (__int64)v16);
        v37 = 0;
        UserSetLastError(87LL, v31);
      }
      else
      {
        v24 = v40;
        if ( v40 )
        {
          v30 = *(_QWORD *)(v18 + 80);
          if ( v30 )
          {
            if ( IsTopLevelOrLayeredChildWindow(v18) && !(unsigned int)IsTopLevelWindow(v18) )
            {
              v41 = *(_DWORD *)v24 + *(_DWORD *)(*(_QWORD *)(v30 + 40) + 104LL);
              v42 = *((_DWORD *)v24 + 1) + *(_DWORD *)(*(_QWORD *)(v30 + 40) + 108LL);
            }
          }
        }
        v25 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v18 + 40) + 256LL));
        v56 = *(_OWORD *)(*(_QWORD *)(v18 + 40) + 88LL);
        updated = zzzUpdateLayeredWindow((struct tagWND *)v18, v50, v44, a7, v43, a9, v39);
        if ( updated < 0 )
        {
          v37 = 0;
          UserSetLastStatus(updated, 1);
        }
        else
        {
          v37 = 1;
          v21 = *(_QWORD *)(v18 + 40);
          v22 = v56 - *(_QWORD *)(v21 + 88);
          if ( (_QWORD)v56 == *(_QWORD *)(v21 + 88) )
            v22 = *((_QWORD *)&v56 + 1) - *(_QWORD *)(v21 + 96);
          if ( v22 )
          {
            *(_QWORD *)&v46.left = 0LL;
            *(_QWORD *)&v46.right = 0LL;
            NewMonitor = GetNewMonitor((struct tagWND *)v18, 0LL, &v46);
            v29 = NewMonitor;
            if ( NewMonitor )
            {
              if ( NewMonitor != v25 )
              {
                ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21);
                v55[0] = *(_QWORD *)(ThreadWin32Thread + 408);
                v34 = v55;
                *(_QWORD *)(ThreadWin32Thread + 408) = v55;
                v55[1] = v29;
                _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
                if ( v25 )
                  v35 = *(_WORD *)(*(_QWORD *)(v25 + 40) + 64LL);
                else
                  v35 = 0;
                v36 = *(unsigned __int16 *)(*(_QWORD *)(v29 + 40) + 64LL);
                if ( (_WORD)v36 != v35 )
                  xxxAppAdjustDpiCandidateRect(v18, v36, *(_QWORD *)(v18 + 40) + 88LL, &v46);
                if ( ThreadUnlock1(v34, v36, v33)
                  && (unsigned int)UpdateMonitorForWindowAndChildren(v18, v29, &v51, 0LL) )
                {
                  xxxNotifyMonitorChanged((struct tagWND *)v18, &v46, v51, v35);
                }
              }
            }
          }
        }
      }
    }
    ThreadUnlock1(v22, v21, v23);
  }
  else
  {
    v37 = 0;
  }
  UserSessionSwitchLeaveCrit(v17, v16, v19, v20);
  return v37;
}
