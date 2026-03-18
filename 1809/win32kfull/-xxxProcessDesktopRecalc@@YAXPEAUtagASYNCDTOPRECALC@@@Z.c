/*
 * XREFs of ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00CD908
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0038714 (xxxEndDeferWindowPosEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxNotifyMonitorChanged @ 0x1C006F8AC (xxxNotifyMonitorChanged.c)
 *     InternalBeginDeferWindowPos @ 0x1C007210C (InternalBeginDeferWindowPos.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00CD2D8 (xxxDeferWindowPosAndCheckPoint.c)
 *     xxxComputeProposedPerMonRect @ 0x1C00CDB6C (xxxComputeProposedPerMonRect.c)
 *     FindOldMonitor @ 0x1C00CDC10 (FindOldMonitor.c)
 *     IsNonImmersiveBand @ 0x1C00CEDF0 (IsNonImmersiveBand.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall xxxProcessDesktopRecalc(struct tagASYNCDTOPRECALC *a1)
{
  struct tagSMWP *v2; // rax
  __int64 v3; // rdx
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
  struct tagRECT *Prop; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // edi
  unsigned __int64 *v20; // rsi
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  int OldMonitor; // eax
  unsigned __int16 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD v28[3]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v29[3]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v30[3]; // [rsp+70h] [rbp+7h] BYREF
  __int128 v31; // [rsp+88h] [rbp+1Fh]

  if ( a1 )
  {
    v2 = (struct tagSMWP *)InternalBeginDeferWindowPos(*((_DWORD *)a1 + 3));
    v4 = v2;
    if ( v2 )
    {
      PushW32ThreadLock((__int64)v2, v29, (__int64)DestroySMWP);
      v5 = 0;
      if ( *((int *)a1 + 3) > 0 )
      {
        v6 = (char *)a1 + 16;
        do
        {
          v7 = *(_QWORD *)v6;
          LOBYTE(v3) = 1;
          v8 = HMValidateHandleNoSecure(*(_QWORD *)v6, v3);
          v9 = v8;
          if ( v8 )
          {
            v3 = *(_QWORD *)(v8 + 40);
            if ( *(char *)(v3 + 24) < 0 || !(unsigned int)IsNonImmersiveBand(v8) )
              goto LABEL_11;
            v10 = v5 + 1LL;
            v11 = *(_QWORD *)(v3 + 88) - *((_QWORD *)a1 + 3 * v10);
            if ( !v11 )
              v11 = *(_QWORD *)(v3 + 96) - *((_QWORD *)a1 + 3 * v10 + 1);
            if ( !v11 )
              v12 = 1;
            else
LABEL_11:
              v12 = 0;
            if ( v12 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
              v28[0] = *(_QWORD *)(ThreadWin32Thread + 416);
              *(_QWORD *)(ThreadWin32Thread + 416) = v28;
              v28[1] = v9;
              _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
              Prop = (struct tagRECT *)GetProp(v9, (unsigned __int16)atomCheckpointProp, 1LL);
              if ( v4 )
              {
                v4 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                         (__int64)v4,
                                         (struct tagWND *)v9,
                                         *(struct tagMONITORRECTS **)a1,
                                         (struct tagRECT *)(*(_QWORD *)(v9 + 40) + 88LL),
                                         Prop,
                                         *((_DWORD *)a1 + 2),
                                         0);
                if ( !v4 )
                {
                  v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
                  v16 = v29[0];
                  *(_QWORD *)(v22 + 16) = v29[0];
                }
              }
              ThreadUnlock1(v16, v15);
              LOBYTE(v17) = 1;
              v9 = HMValidateHandleNoSecure(v7, v17);
              if ( !v9 )
                goto LABEL_20;
            }
            if ( (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL) & 0xF) == 2
              && (*(_DWORD *)(*(_QWORD *)(v9 + 16) + 648LL) & 0x2000000) == 0
              && (unsigned int)xxxComputeProposedPerMonRect((struct tagWND *)v9)
              && (LOBYTE(v3) = 1, HMValidateHandleNoSecure(v7, v3)) )
            {
              *(_OWORD *)(v6 + 8) = v31;
            }
            else
            {
LABEL_20:
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
        v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
        *(_QWORD *)(v18 + 16) = v29[0];
        xxxEndDeferWindowPosEx(v4, 0);
      }
    }
    v19 = 0;
    if ( *((int *)a1 + 3) > 0 )
    {
      v20 = (unsigned __int64 *)((char *)a1 + 16);
      do
      {
        if ( *v20 )
        {
          LOBYTE(v3) = 1;
          v21 = HMValidateHandleNoSecure(*v20, v3);
          if ( v21 )
          {
            v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
            v30[0] = *(_QWORD *)(v23 + 416);
            *(_QWORD *)(v23 + 416) = v30;
            v30[1] = v21;
            _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
            OldMonitor = FindOldMonitor(v21, *(_QWORD *)a1, 0LL);
            if ( OldMonitor < 0 )
              v25 = 0;
            else
              v25 = *(_WORD *)(*(_QWORD *)a1 + 48LL * OldMonitor + 40);
            xxxNotifyMonitorChanged((struct tagWND *)v21, (struct tagRECT *)((char *)a1 + 24 * v19 + 24), 0LL, v25);
            ThreadUnlock1(v27, v26);
          }
        }
        ++v19;
        v20 += 3;
      }
      while ( v19 < *((_DWORD *)a1 + 3) );
    }
    Win32FreePool(*(_QWORD *)a1);
    Win32FreePool(a1);
  }
}
