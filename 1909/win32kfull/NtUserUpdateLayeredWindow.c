/*
 * XREFs of NtUserUpdateLayeredWindow @ 0x1C002D690
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     zzzUpdateLayeredWindow @ 0x1C002F248 (zzzUpdateLayeredWindow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00689E4 (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C006935C (xxxNotifyMonitorChanged.c)
 *     GetNewMonitor @ 0x1C006B820 (GetNewMonitor.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00CBF4C (UpdateMonitorForWindowAndChildren.c)
 *     UserSetLastStatus @ 0x1C010CF58 (UserSetLastStatus.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E796C (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall NtUserUpdateLayeredWindow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        ULONG64 a6,
        int a7,
        ULONG64 a8,
        int a9,
        ULONG64 a10)
{
  __int64 *v12; // r13
  _DWORD *v13; // r12
  __int128 *v14; // r14
  __int64 *v15; // rsi
  int *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 *v21; // rdx
  _DWORD *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r14
  NTSTATUS updated; // eax
  __int64 NewMonitor; // rax
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int16 v38; // si
  __int64 v39; // rdx
  int v40; // [rsp+50h] [rbp-128h]
  _DWORD v41[5]; // [rsp+54h] [rbp-124h] BYREF
  __int64 v42; // [rsp+68h] [rbp-110h] BYREF
  __int64 v43; // [rsp+70h] [rbp-108h] BYREF
  __int64 v44[2]; // [rsp+78h] [rbp-100h] BYREF
  __int64 v45; // [rsp+88h] [rbp-F0h] BYREF
  __int64 *v46; // [rsp+90h] [rbp-E8h]
  __int64 v47; // [rsp+98h] [rbp-E0h] BYREF
  _DWORD *v48; // [rsp+A0h] [rbp-D8h]
  __int64 v49; // [rsp+A8h] [rbp-D0h]
  __int64 *v50; // [rsp+B8h] [rbp-C0h]
  __int128 *v51; // [rsp+C0h] [rbp-B8h]
  __int64 v52; // [rsp+C8h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+D0h] [rbp-A8h]
  __int64 v54; // [rsp+D8h] [rbp-A0h]
  __int64 v55; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v56; // [rsp+E8h] [rbp-90h]
  __int64 v57; // [rsp+F0h] [rbp-88h]
  __int64 v58; // [rsp+F8h] [rbp-80h]
  __int64 v59; // [rsp+100h] [rbp-78h]
  __int128 v60; // [rsp+110h] [rbp-68h] BYREF
  __int128 v61; // [rsp+120h] [rbp-58h]

  *(_QWORD *)&v41[1] = a3;
  v43 = a2;
  v44[0] = a5;
  v12 = (__int64 *)a6;
  v13 = (_DWORD *)a8;
  v14 = (__int128 *)a10;
  v45 = 0LL;
  v49 = 0LL;
  v42 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v15 = 0LL;
  v50 = 0LL;
  v41[0] = 0;
  v48 = 0LL;
  v60 = 0uLL;
  v16 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  EnterCrit(0LL, 1LL);
  v18 = ValidateHwnd(a1);
  if ( v18 )
  {
    v52 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v52;
    v53 = v18;
    HMLockObject(v18);
    if ( a6 )
    {
      if ( a6 >= MmUserProbeAddress )
        v12 = (__int64 *)MmUserProbeAddress;
      v58 = *v12;
      v45 = v58;
      v49 = (__int64)&v45;
    }
    if ( !a4 )
      goto LABEL_11;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__int64 *)MmUserProbeAddress;
    v42 = *a4;
    v46 = &v42;
    if ( (int)v42 < 0 || v42 < 0 )
    {
      v40 = 0;
      UserSetLastError(87LL, v19, 0LL, v20);
    }
    else
    {
LABEL_11:
      v21 = *(__int64 **)&v41[1];
      if ( *(_QWORD *)&v41[1] )
      {
        if ( *(_QWORD *)&v41[1] >= MmUserProbeAddress )
          v21 = (__int64 *)MmUserProbeAddress;
        v59 = *v21;
        v47 = v59;
        v15 = &v47;
        v50 = &v47;
      }
      if ( a8 )
      {
        if ( a8 >= MmUserProbeAddress )
          v13 = (_DWORD *)MmUserProbeAddress;
        v41[0] = *v13;
        v22 = v41;
        v48 = v41;
      }
      else
      {
        v22 = v48;
      }
      if ( a10 )
      {
        if ( a10 >= MmUserProbeAddress )
          v14 = (__int128 *)MmUserProbeAddress;
        v60 = *v14;
        v16 = (int *)&v60;
        v51 = &v60;
      }
      if ( (a9 & 0xFFFFFFD0) != 0 )
      {
        UserSetLastError(87LL, (__int64)v21, 0LL, v20);
        v40 = 0;
      }
      else if ( v16 && (*v16 < 0 || v16[1] < 0) )
      {
        UserSetLastError(87LL, (__int64)v21, 0LL, v20);
        v40 = 0;
        UserSetLastError(87LL, v32, v33, v34);
      }
      else
      {
        *(_QWORD *)&v41[1] = 0LL;
        if ( v15 )
        {
          v31 = *(_QWORD *)(v18 + 104);
          if ( v31 )
          {
            if ( (unsigned int)IsTopLevelOrLayeredChildWindow(v18) && !(unsigned int)IsTopLevelWindow(v18) )
            {
              v41[1] = *(_DWORD *)v15 + *(_DWORD *)(*(_QWORD *)(v31 + 40) + 104LL);
              v41[2] = *((_DWORD *)v15 + 1) + *(_DWORD *)(*(_QWORD *)(v31 + 40) + 108LL);
            }
          }
        }
        v26 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v18 + 40) + 256LL));
        v61 = *(_OWORD *)(*(_QWORD *)(v18 + 40) + 88LL);
        updated = zzzUpdateLayeredWindow((struct tagWND *)v18, v44[0], v49, a7, (__int64)v22, a9, (__int64)v16);
        if ( updated < 0 )
        {
          v40 = 0;
          UserSetLastStatus(updated);
        }
        else
        {
          v40 = 1;
          v23 = *(_QWORD *)(v18 + 40);
          v24 = v61 - *(_QWORD *)(v23 + 88);
          if ( (_QWORD)v61 == *(_QWORD *)(v23 + 88) )
            v24 = *((_QWORD *)&v61 + 1) - *(_QWORD *)(v23 + 96);
          if ( v24 )
          {
            v44[0] = 0LL;
            v44[1] = 0LL;
            NewMonitor = GetNewMonitor((struct tagWND *)v18, 0LL);
            v30 = NewMonitor;
            if ( NewMonitor )
            {
              if ( NewMonitor != v26 )
              {
                v55 = 0LL;
                v56 = 0LL;
                v57 = 0LL;
                ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                v55 = *(_QWORD *)(ThreadWin32Thread + 408);
                *(_QWORD *)(ThreadWin32Thread + 408) = &v55;
                v56 = v30;
                HMLockObject(v30);
                if ( v26 )
                  v38 = *(_WORD *)(*(_QWORD *)(v26 + 40) + 64LL);
                else
                  v38 = 0;
                v39 = *(unsigned __int16 *)(*(_QWORD *)(v30 + 40) + 64LL);
                if ( (_WORD)v39 != v38 )
                  xxxAppAdjustDpiCandidateRect(v18, v39, *(_QWORD *)(v18 + 40) + 88LL, v44);
                if ( ThreadUnlock1(v36, v39, v37)
                  && (unsigned int)UpdateMonitorForWindowAndChildren(v18, v30, &v43, 0LL) )
                {
                  xxxNotifyMonitorChanged((struct tagWND *)v18);
                }
              }
            }
          }
        }
      }
    }
    ThreadUnlock1(v24, v23, v25);
  }
  else
  {
    v40 = 0;
  }
  UserSessionSwitchLeaveCrit(v17);
  return v40;
}
