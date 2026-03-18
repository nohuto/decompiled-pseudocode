/*
 * XREFs of NtUserUpdateLayeredWindow @ 0x1C0078020
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     GetNewMonitor @ 0x1C004259C (GetNewMonitor.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxNotifyMonitorChanged @ 0x1C006F8AC (xxxNotifyMonitorChanged.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C007239C (IsTopLevelOrLayeredChildWindow.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     zzzUpdateLayeredWindow @ 0x1C0077B50 (zzzUpdateLayeredWindow.c)
 *     UserSetLastStatus @ 0x1C00C8D04 (UserSetLastStatus.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C01051A8 (UpdateMonitorForWindowAndChildren.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01D2EAC (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall NtUserUpdateLayeredWindow(
        __int64 a1,
        HDC a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        ULONG64 a6,
        unsigned int a7,
        ULONG64 a8,
        unsigned int a9,
        ULONG64 a10)
{
  __int64 *v14; // r15
  int *v15; // rsi
  __int128 *v16; // rdi
  __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  const struct tagPOINT *v24; // rdi
  __int64 v25; // rsi
  NTSTATUS updated; // eax
  __int64 NewMonitor; // rax
  __int64 v28; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 ThreadWin32Thread; // rax
  _QWORD *v35; // rcx
  unsigned __int16 v36; // si
  __int64 v37; // rdx
  int v38; // [rsp+50h] [rbp-128h]
  int v39; // [rsp+54h] [rbp-124h] BYREF
  __int64 v40; // [rsp+60h] [rbp-118h]
  const struct tagPOINT *v41; // [rsp+68h] [rbp-110h]
  _DWORD v42[2]; // [rsp+70h] [rbp-108h] BYREF
  __int64 v43; // [rsp+78h] [rbp-100h]
  __int64 v44; // [rsp+80h] [rbp-F8h]
  struct tagSIZE *v45; // [rsp+88h] [rbp-F0h]
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
  v14 = (__int64 *)a6;
  v15 = (int *)a8;
  v16 = (__int128 *)a10;
  v44 = 0LL;
  v45 = 0LL;
  v41 = 0LL;
  v43 = 0LL;
  v40 = 0LL;
  EnterCrit(0LL, 1LL);
  v19 = ValidateHwnd(a1);
  if ( v19 )
  {
    v54[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v54;
    v54[1] = v19;
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    if ( a6 )
    {
      if ( a6 >= MmUserProbeAddress )
        v14 = (__int64 *)MmUserProbeAddress;
      v52 = *v14;
      v47 = v52;
      v44 = (__int64)&v47;
    }
    if ( !a4 )
      goto LABEL_11;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__int64 *)MmUserProbeAddress;
    v48 = *a4;
    v17 = &v48;
    v45 = (struct tagSIZE *)&v48;
    if ( (int)v48 < 0 || v48 < 0 )
    {
      v38 = 0;
      UserSetLastError(87LL, (__int64)&v48, v20, v21);
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
        v41 = (const struct tagPOINT *)&v49;
      }
      if ( a8 )
      {
        if ( a8 >= MmUserProbeAddress )
          v15 = (int *)MmUserProbeAddress;
        v39 = *v15;
        v43 = (__int64)&v39;
      }
      if ( a10 )
      {
        if ( a10 >= MmUserProbeAddress )
          v16 = (__int128 *)MmUserProbeAddress;
        v57 = *v16;
        v40 = (__int64)&v57;
      }
      if ( (a9 & 0xFFFFFFD0) != 0 )
      {
        UserSetLastError(87LL, (__int64)v17, v20, v21);
        v38 = 0;
      }
      else if ( v40 && (*(int *)v40 < 0 || *(int *)(v40 + 4) < 0) )
      {
        UserSetLastError(87LL, (__int64)v17, v20, v21);
        v38 = 0;
        UserSetLastError(87LL, v31, v32, v33);
      }
      else
      {
        v24 = v41;
        if ( v41 )
        {
          v30 = *(_QWORD *)(v19 + 80);
          if ( v30 )
          {
            if ( IsTopLevelOrLayeredChildWindow(v19) && !(unsigned int)IsTopLevelWindow(v19) )
            {
              v42[0] = v24->x + *(_DWORD *)(*(_QWORD *)(v30 + 40) + 104LL);
              v42[1] = v24->y + *(_DWORD *)(*(_QWORD *)(v30 + 40) + 108LL);
              v24 = (const struct tagPOINT *)v42;
            }
          }
        }
        v25 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v19 + 40) + 256LL));
        v56 = *(_OWORD *)(*(_QWORD *)(v19 + 40) + 88LL);
        updated = zzzUpdateLayeredWindow(
                    (struct tagWND *)v19,
                    a2,
                    v24,
                    v45,
                    (HDC)v50,
                    (struct tagPOINT *)v44,
                    a7,
                    (struct _BLENDFUNCTION *)v43,
                    a9,
                    (struct tagRECT *)v40);
        if ( updated < 0 )
        {
          v38 = 0;
          UserSetLastStatus(updated);
        }
        else
        {
          v38 = 1;
          v22 = *(_QWORD *)(v19 + 40);
          v23 = v56 - *(_QWORD *)(v22 + 88);
          if ( (_QWORD)v56 == *(_QWORD *)(v22 + 88) )
            v23 = *((_QWORD *)&v56 + 1) - *(_QWORD *)(v22 + 96);
          if ( v23 )
          {
            *(_QWORD *)&v46.left = 0LL;
            *(_QWORD *)&v46.right = 0LL;
            NewMonitor = GetNewMonitor((struct tagWND *)v19, 0LL, &v46);
            v28 = NewMonitor;
            if ( NewMonitor )
            {
              if ( NewMonitor != v25 )
              {
                ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
                v55[0] = *(_QWORD *)(ThreadWin32Thread + 416);
                v35 = v55;
                *(_QWORD *)(ThreadWin32Thread + 416) = v55;
                v55[1] = v28;
                _InterlockedIncrement((volatile signed __int32 *)(v28 + 8));
                if ( v25 )
                  v36 = *(_WORD *)(*(_QWORD *)(v25 + 40) + 64LL);
                else
                  v36 = 0;
                v37 = *(unsigned __int16 *)(*(_QWORD *)(v28 + 40) + 64LL);
                if ( (_WORD)v37 != v36 )
                  xxxAppAdjustDpiCandidateRect(v19, v37, *(_QWORD *)(v19 + 40) + 88LL, &v46);
                if ( ThreadUnlock1(v35, v37) && (unsigned int)UpdateMonitorForWindowAndChildren(v19, v28, &v51, 0LL) )
                  xxxNotifyMonitorChanged((struct tagWND *)v19, &v46, v51, v36);
              }
            }
          }
        }
      }
    }
    ThreadUnlock1(v23, v22);
  }
  else
  {
    v38 = 0;
  }
  UserSessionSwitchLeaveCrit(v18, v17, v20, v21);
  return v38;
}
