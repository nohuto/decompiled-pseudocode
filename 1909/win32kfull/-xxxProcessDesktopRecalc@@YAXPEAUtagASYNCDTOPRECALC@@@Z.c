/*
 * XREFs of ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C012E644
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     xxxNotifyMonitorChanged @ 0x1C006935C (xxxNotifyMonitorChanged.c)
 *     InternalBeginDeferWindowPos @ 0x1C006C554 (InternalBeginDeferWindowPos.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxComputeProposedPerMonRect @ 0x1C012E9A4 (xxxComputeProposedPerMonRect.c)
 *     FindOldMonitor @ 0x1C012EA18 (FindOldMonitor.c)
 *     IsNonImmersiveBand @ 0x1C012FC10 (IsNonImmersiveBand.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C01300C8 (xxxDeferWindowPosAndCheckPoint.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall xxxProcessDesktopRecalc(struct tagASYNCDTOPRECALC *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct tagSMWP *v4; // r14
  int v5; // r15d
  char *v6; // rsi
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 Prop; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // edi
  unsigned __int64 *v22; // rsi
  struct tagWND *v23; // r14
  __int64 v24; // rax
  int OldMonitor; // eax
  unsigned __int16 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // [rsp+40h] [rbp-29h] BYREF
  __int64 v32; // [rsp+48h] [rbp-21h]
  __int64 v33; // [rsp+50h] [rbp-19h]
  _QWORD v34[3]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v35; // [rsp+70h] [rbp+7h] BYREF
  struct tagWND *v36; // [rsp+78h] [rbp+Fh]
  __int64 v37; // [rsp+80h] [rbp+17h]
  __int128 v38; // [rsp+88h] [rbp+1Fh]

  if ( a1 )
  {
    v4 = (struct tagSMWP *)InternalBeginDeferWindowPos(*((_DWORD *)a1 + 3));
    if ( v4 )
    {
      memset(v34, 0, sizeof(v34));
      PushW32ThreadLock((__int64)v4, v34, (__int64)DestroySMWP);
      v5 = 0;
      if ( *((int *)a1 + 3) > 0 )
      {
        v6 = (char *)a1 + 16;
        do
        {
          v7 = *(_QWORD *)v6;
          LOBYTE(v2) = 1;
          v8 = HMValidateHandleNoSecure(*(_QWORD *)v6, v2, v3);
          v9 = v8;
          if ( v8 )
          {
            v2 = *(_QWORD *)(v8 + 40);
            if ( *(char *)(v2 + 24) < 0 || !(unsigned int)IsNonImmersiveBand(v8) )
              goto LABEL_12;
            v10 = v5 + 1LL;
            v3 = 3 * v10;
            v11 = *(_QWORD *)(v2 + 88) - *((_QWORD *)a1 + 3 * v10);
            if ( !v11 )
              v11 = *(_QWORD *)(v2 + 96) - *((_QWORD *)a1 + 3 * v10 + 1);
            if ( v11 )
LABEL_12:
              v12 = 0;
            else
              v12 = 1;
            if ( v12 )
            {
              v31 = 0LL;
              v32 = 0LL;
              v33 = 0LL;
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3);
              v31 = *(_QWORD *)(ThreadWin32Thread + 408);
              *(_QWORD *)(ThreadWin32Thread + 408) = &v31;
              v32 = v9;
              HMLockObject(v9);
              Prop = GetProp(v9, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
              if ( v4 )
              {
                v4 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                         v4,
                                         v9,
                                         *(_QWORD *)a1,
                                         *(_QWORD *)(v9 + 40) + 88LL,
                                         Prop,
                                         *((_DWORD *)a1 + 2),
                                         0);
                if ( !v4 )
                {
                  v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v17);
                  v16 = v34[0];
                  *(_QWORD *)(v30 + 16) = v34[0];
                }
              }
              ThreadUnlock1(v16, v15, v17);
              LOBYTE(v18) = 1;
              v9 = HMValidateHandleNoSecure(v7, v18, v19);
              if ( !v9 )
                goto LABEL_36;
            }
            v38 = 0uLL;
            if ( (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL) & 0xF) == 2
              && (*(_DWORD *)(*(_QWORD *)(v9 + 16) + 640LL) & 0x2000000) == 0
              && (unsigned int)xxxComputeProposedPerMonRect((struct tagWND *)v9)
              && (LOBYTE(v2) = 1, HMValidateHandleNoSecure(v7, v2, v3)) )
            {
              *(_OWORD *)(v6 + 8) = v38;
            }
            else
            {
LABEL_36:
              *(_QWORD *)v6 = 0LL;
            }
          }
          ++v5;
          v6 += 24;
        }
        while ( v5 < *((_DWORD *)a1 + 3) );
      }
      if ( v4 )
      {
        v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3);
        *(_QWORD *)(v20 + 16) = v34[0];
        xxxEndDeferWindowPosEx(v4, 0LL);
      }
    }
    v21 = 0;
    if ( *((int *)a1 + 3) > 0 )
    {
      v22 = (unsigned __int64 *)((char *)a1 + 16);
      do
      {
        if ( *v22 )
        {
          LOBYTE(v2) = 1;
          v23 = (struct tagWND *)HMValidateHandleNoSecure(*v22, v2, v3);
          if ( v23 )
          {
            v35 = 0LL;
            v36 = 0LL;
            v37 = 0LL;
            v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3);
            v35 = *(_QWORD *)(v24 + 408);
            *(_QWORD *)(v24 + 408) = &v35;
            v36 = v23;
            HMLockObject(v23);
            OldMonitor = FindOldMonitor(v23, *(_QWORD *)a1, 0LL);
            if ( OldMonitor < 0 )
              v26 = 0;
            else
              v26 = *(_WORD *)(*(_QWORD *)a1 + 48LL * OldMonitor + 40);
            xxxNotifyMonitorChanged(v23, (struct tagRECT *)((char *)a1 + 24 * v21 + 24), 0LL, v26);
            ThreadUnlock1(v28, v27, v29);
          }
        }
        ++v21;
        v22 += 3;
      }
      while ( v21 < *((_DWORD *)a1 + 3) );
    }
    Win32FreePool(*(_QWORD *)a1);
    Win32FreePool(a1);
  }
}
