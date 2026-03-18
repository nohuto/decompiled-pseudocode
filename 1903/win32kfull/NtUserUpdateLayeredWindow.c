/*
 * XREFs of NtUserUpdateLayeredWindow @ 0x1C0027220
 * Callers:
 *     <none>
 * Callees:
 *     zzzUpdateLayeredWindow @ 0x1C0028DD8 (zzzUpdateLayeredWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00C7314 (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C00C7C8C (xxxNotifyMonitorChanged.c)
 *     GetNewMonitor @ 0x1C00CA150 (GetNewMonitor.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00ED36C (UpdateMonitorForWindowAndChildren.c)
 *     UserSetLastStatus @ 0x1C0132458 (UserSetLastStatus.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E7AEC (xxxAppAdjustDpiCandidateRect.c)
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
  __int64 *v19; // rdx
  _DWORD *v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r14
  NTSTATUS updated; // eax
  __int64 NewMonitor; // rax
  __int64 v28; // rdi
  __int64 v29; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int16 v33; // si
  __int64 v34; // rdx
  int v35; // [rsp+50h] [rbp-128h]
  _DWORD v36[5]; // [rsp+54h] [rbp-124h] BYREF
  __int64 v37; // [rsp+68h] [rbp-110h] BYREF
  __int64 v38; // [rsp+70h] [rbp-108h] BYREF
  __int64 v39[2]; // [rsp+78h] [rbp-100h] BYREF
  __int64 v40; // [rsp+88h] [rbp-F0h] BYREF
  __int64 *v41; // [rsp+90h] [rbp-E8h]
  __int64 v42; // [rsp+98h] [rbp-E0h] BYREF
  _DWORD *v43; // [rsp+A0h] [rbp-D8h]
  __int64 v44; // [rsp+A8h] [rbp-D0h]
  __int64 *v45; // [rsp+B8h] [rbp-C0h]
  __int128 *v46; // [rsp+C0h] [rbp-B8h]
  __int64 v47; // [rsp+C8h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-A8h]
  __int64 v49; // [rsp+D8h] [rbp-A0h]
  __int64 v50; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v51; // [rsp+E8h] [rbp-90h]
  __int64 v52; // [rsp+F0h] [rbp-88h]
  __int64 v53; // [rsp+F8h] [rbp-80h]
  __int64 v54; // [rsp+100h] [rbp-78h]
  __int128 v55; // [rsp+110h] [rbp-68h] BYREF
  __int128 v56; // [rsp+120h] [rbp-58h]

  *(_QWORD *)&v36[1] = a3;
  v38 = a2;
  v39[0] = a5;
  v12 = (__int64 *)a6;
  v13 = (_DWORD *)a8;
  v14 = (__int128 *)a10;
  v40 = 0LL;
  v44 = 0LL;
  v37 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v15 = 0LL;
  v45 = 0LL;
  v36[0] = 0;
  v43 = 0LL;
  v55 = 0uLL;
  v16 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  EnterCrit(0LL, 1LL);
  v18 = ValidateHwnd(a1);
  if ( v18 )
  {
    v47 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v47;
    v48 = v18;
    HMLockObject(v18);
    if ( a6 )
    {
      if ( a6 >= MmUserProbeAddress )
        v12 = (__int64 *)MmUserProbeAddress;
      v53 = *v12;
      v40 = v53;
      v44 = (__int64)&v40;
    }
    if ( !a4 )
      goto LABEL_11;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__int64 *)MmUserProbeAddress;
    v37 = *a4;
    v41 = &v37;
    if ( (int)v37 < 0 || v37 < 0 )
    {
      v35 = 0;
      UserSetLastError(87LL);
    }
    else
    {
LABEL_11:
      v19 = *(__int64 **)&v36[1];
      if ( *(_QWORD *)&v36[1] )
      {
        if ( *(_QWORD *)&v36[1] >= MmUserProbeAddress )
          v19 = (__int64 *)MmUserProbeAddress;
        v54 = *v19;
        v42 = v54;
        v15 = &v42;
        v45 = &v42;
      }
      if ( a8 )
      {
        if ( a8 >= MmUserProbeAddress )
          v13 = (_DWORD *)MmUserProbeAddress;
        v36[0] = *v13;
        v20 = v36;
        v43 = v36;
      }
      else
      {
        v20 = v43;
      }
      if ( a10 )
      {
        if ( a10 >= MmUserProbeAddress )
          v14 = (__int128 *)MmUserProbeAddress;
        v55 = *v14;
        v16 = (int *)&v55;
        v46 = &v55;
      }
      if ( (a9 & 0xFFFFFFD0) != 0 )
      {
        UserSetLastError(87LL);
        v35 = 0;
      }
      else if ( v16 && (*v16 < 0 || v16[1] < 0) )
      {
        UserSetLastError(87LL);
        v35 = 0;
        UserSetLastError(87LL);
      }
      else
      {
        *(_QWORD *)&v36[1] = 0LL;
        if ( v15 )
        {
          v29 = *(_QWORD *)(v18 + 104);
          if ( v29 )
          {
            if ( (unsigned int)IsTopLevelOrLayeredChildWindow(v18, v19, 0LL) && !(unsigned int)IsTopLevelWindow(v18) )
            {
              v36[1] = *(_DWORD *)v15 + *(_DWORD *)(*(_QWORD *)(v29 + 40) + 104LL);
              v36[2] = *((_DWORD *)v15 + 1) + *(_DWORD *)(*(_QWORD *)(v29 + 40) + 108LL);
            }
          }
        }
        v24 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v18 + 40) + 256LL));
        v56 = *(_OWORD *)(*(_QWORD *)(v18 + 40) + 88LL);
        updated = zzzUpdateLayeredWindow((struct tagWND *)v18, v39[0], v44, a7, (__int64)v20, a9, (__int64)v16);
        if ( updated < 0 )
        {
          v35 = 0;
          UserSetLastStatus(updated);
        }
        else
        {
          v35 = 1;
          v21 = *(_QWORD *)(v18 + 40);
          v22 = v56 - *(_QWORD *)(v21 + 88);
          if ( (_QWORD)v56 == *(_QWORD *)(v21 + 88) )
            v22 = *((_QWORD *)&v56 + 1) - *(_QWORD *)(v21 + 96);
          if ( v22 )
          {
            v39[0] = 0LL;
            v39[1] = 0LL;
            NewMonitor = GetNewMonitor((struct tagWND *)v18, 0LL);
            v28 = NewMonitor;
            if ( NewMonitor )
            {
              if ( NewMonitor != v24 )
              {
                v50 = 0LL;
                v51 = 0LL;
                v52 = 0LL;
                ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                v50 = *(_QWORD *)(ThreadWin32Thread + 408);
                *(_QWORD *)(ThreadWin32Thread + 408) = &v50;
                v51 = v28;
                HMLockObject(v28);
                if ( v24 )
                  v33 = *(_WORD *)(*(_QWORD *)(v24 + 40) + 64LL);
                else
                  v33 = 0;
                v34 = *(unsigned __int16 *)(*(_QWORD *)(v28 + 40) + 64LL);
                if ( (_WORD)v34 != v33 )
                  xxxAppAdjustDpiCandidateRect(v18, v34, *(_QWORD *)(v18 + 40) + 88LL, v39);
                if ( ThreadUnlock1(v31, v34, v32)
                  && (unsigned int)UpdateMonitorForWindowAndChildren(v18, v28, &v38, 0LL) )
                {
                  xxxNotifyMonitorChanged((struct tagWND *)v18);
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
    v35 = 0;
  }
  UserSessionSwitchLeaveCrit(v17);
  return v35;
}
