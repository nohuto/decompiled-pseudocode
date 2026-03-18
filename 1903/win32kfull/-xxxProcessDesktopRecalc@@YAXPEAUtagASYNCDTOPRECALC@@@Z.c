/*
 * XREFs of ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C008FAC0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00168A0 (IsNonImmersiveBand.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxComputeProposedPerMonRect @ 0x1C008FE20 (xxxComputeProposedPerMonRect.c)
 *     FindOldMonitor @ 0x1C0091908 (FindOldMonitor.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     xxxNotifyMonitorChanged @ 0x1C00C7C8C (xxxNotifyMonitorChanged.c)
 *     InternalBeginDeferWindowPos @ 0x1C00CAE84 (InternalBeginDeferWindowPos.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00CEBD0 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0116898 (xxxDeferWindowPosAndCheckPoint.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall xxxProcessDesktopRecalc(struct tagASYNCDTOPRECALC *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  struct tagSMWP *v5; // r14
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r15d
  char *v9; // rsi
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 Prop; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // edi
  _QWORD *v25; // rsi
  __int64 v26; // r8
  __int64 v27; // r9
  struct tagWND *v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // [rsp+40h] [rbp-29h] BYREF
  __int64 v35; // [rsp+48h] [rbp-21h]
  __int64 v36; // [rsp+50h] [rbp-19h]
  _QWORD v37[3]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v38; // [rsp+70h] [rbp+7h] BYREF
  struct tagWND *v39; // [rsp+78h] [rbp+Fh]
  __int64 v40; // [rsp+80h] [rbp+17h]
  __int128 v41; // [rsp+88h] [rbp+1Fh]

  if ( a1 )
  {
    v5 = (struct tagSMWP *)InternalBeginDeferWindowPos(*((unsigned int *)a1 + 3), a2);
    if ( v5 )
    {
      memset(v37, 0, sizeof(v37));
      PushW32ThreadLock((__int64)v5, v37, (__int64)DestroySMWP, v4);
      v8 = 0;
      if ( *((int *)a1 + 3) > 0 )
      {
        v9 = (char *)a1 + 16;
        do
        {
          v10 = *(_QWORD *)v9;
          LOBYTE(v3) = 1;
          v11 = HMValidateHandleNoSecure(*(_QWORD *)v9, v3);
          v12 = v11;
          if ( v11 )
          {
            v3 = *(_QWORD *)(v11 + 40);
            if ( *(char *)(v3 + 24) < 0 || !IsNonImmersiveBand(v11) )
              goto LABEL_12;
            v13 = v8 + 1LL;
            v6 = 3 * v13;
            v14 = *(_QWORD *)(v3 + 88) - *((_QWORD *)a1 + 3 * v13);
            if ( !v14 )
              v14 = *(_QWORD *)(v3 + 96) - *((_QWORD *)a1 + 3 * v13 + 1);
            if ( v14 )
LABEL_12:
              v15 = 0;
            else
              v15 = 1;
            if ( v15 )
            {
              v34 = 0LL;
              v35 = 0LL;
              v36 = 0LL;
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v6, v7);
              v34 = *(_QWORD *)(ThreadWin32Thread + 408);
              *(_QWORD *)(ThreadWin32Thread + 408) = &v34;
              v35 = v12;
              HMLockObject(v12);
              Prop = GetProp(v12, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
              if ( v5 )
              {
                v5 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                         v5,
                                         v12,
                                         *(_QWORD *)a1,
                                         *(_QWORD *)(v12 + 40) + 88LL,
                                         Prop,
                                         *((_DWORD *)a1 + 2),
                                         0);
                if ( !v5 )
                {
                  v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v20, v21);
                  v19 = v37[0];
                  *(_QWORD *)(v33 + 16) = v37[0];
                }
              }
              ThreadUnlock1(v19, v18, v20);
              LOBYTE(v22) = 1;
              v12 = HMValidateHandleNoSecure(v10, v22);
              if ( !v12 )
                goto LABEL_34;
            }
            v41 = 0uLL;
            if ( (*(_DWORD *)(*(_QWORD *)(v12 + 40) + 288LL) & 0xF) == 2
              && (*(_DWORD *)(*(_QWORD *)(v12 + 16) + 640LL) & 0x2000000) == 0
              && (unsigned int)xxxComputeProposedPerMonRect((struct tagWND *)v12)
              && (LOBYTE(v3) = 1, HMValidateHandleNoSecure(v10, v3)) )
            {
              *(_OWORD *)(v9 + 8) = v41;
            }
            else
            {
LABEL_34:
              *(_QWORD *)v9 = 0LL;
            }
          }
          ++v8;
          v9 += 24;
        }
        while ( v8 < *((_DWORD *)a1 + 3) );
      }
      if ( v5 )
      {
        v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v6, v7);
        *(_QWORD *)(v23 + 16) = v37[0];
        xxxEndDeferWindowPosEx(v5);
      }
    }
    v24 = 0;
    if ( *((int *)a1 + 3) > 0 )
    {
      v25 = (_QWORD *)((char *)a1 + 16);
      do
      {
        if ( *v25 )
        {
          LOBYTE(v3) = 1;
          v28 = (struct tagWND *)HMValidateHandleNoSecure(*v25, v3);
          if ( v28 )
          {
            v38 = 0LL;
            v39 = 0LL;
            v40 = 0LL;
            v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v26, v27);
            v38 = *(_QWORD *)(v29 + 408);
            *(_QWORD *)(v29 + 408) = &v38;
            v39 = v28;
            HMLockObject(v28);
            FindOldMonitor(v28, *(_QWORD *)a1, 0LL);
            xxxNotifyMonitorChanged(v28);
            ThreadUnlock1(v31, v30, v32);
          }
        }
        ++v24;
        v25 += 3;
      }
      while ( v24 < *((_DWORD *)a1 + 3) );
    }
    Win32FreePool(*(_QWORD *)a1);
    Win32FreePool(a1);
  }
}
