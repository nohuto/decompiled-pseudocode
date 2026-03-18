/*
 * XREFs of ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C005AEEC
 * Callers:
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     xxxNotifyMonitorChanged @ 0x1C00304E4 (xxxNotifyMonitorChanged.c)
 *     InternalBeginDeferWindowPos @ 0x1C0035160 (InternalBeginDeferWindowPos.c)
 *     xxxComputeProposedPerMonRect @ 0x1C005AA38 (xxxComputeProposedPerMonRect.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C005B1BC (xxxDeferWindowPosAndCheckPoint.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     IsNonImmersiveBand @ 0x1C005F640 (IsNonImmersiveBand.c)
 *     FindOldMonitor @ 0x1C007223C (FindOldMonitor.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall xxxProcessDesktopRecalc(struct tagASYNCDTOPRECALC *a1)
{
  __int64 v2; // rdx
  struct tagSMWP *v3; // rsi
  int v4; // r15d
  char *v5; // rdi
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 Prop; // r13
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // edi
  unsigned __int64 *v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rax
  int OldMonitor; // eax
  unsigned __int16 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  _QWORD v29[3]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v30[3]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v31[3]; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v32; // [rsp+88h] [rbp+1Fh] BYREF

  if ( a1 )
  {
    v3 = (struct tagSMWP *)InternalBeginDeferWindowPos(*((_DWORD *)a1 + 3));
    if ( v3 )
    {
      v4 = 0;
      if ( *((int *)a1 + 3) > 0 )
      {
        v5 = (char *)a1 + 16;
        do
        {
          v6 = *(_QWORD *)v5;
          LOBYTE(v2) = 1;
          v7 = HMValidateHandleNoSecure(*(_QWORD *)v5, v2);
          v8 = v7;
          if ( v7 )
          {
            v2 = *(_QWORD *)(v7 + 40);
            if ( *(char *)(v2 + 24) >= 0 )
            {
              if ( (unsigned int)IsNonImmersiveBand(v7) )
              {
                v9 = v4 + 1LL;
                v10 = *(_QWORD *)(v2 + 88) - *((_QWORD *)a1 + 3 * v9);
                if ( !v10 )
                  v10 = *(_QWORD *)(v2 + 96) - *((_QWORD *)a1 + 3 * v9 + 1);
                if ( !v10 )
                {
                  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2);
                  v30[0] = *(_QWORD *)(ThreadWin32Thread + 408);
                  *(_QWORD *)(ThreadWin32Thread + 408) = v30;
                  v30[1] = v8;
                  _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
                  Prop = RealGetProp(*(_QWORD *)(v8 + 120), (unsigned __int16)atomCheckpointProp, 1LL);
                  if ( v3 )
                  {
                    PushW32ThreadLock(v3, v29, DestroySMWP);
                    v3 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                             v3,
                                             v8,
                                             *(_QWORD *)a1,
                                             *(_QWORD *)(v8 + 40) + 88LL,
                                             Prop,
                                             *((_DWORD *)a1 + 2),
                                             0);
                    if ( !v3 )
                    {
                      v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
                      v13 = v29[0];
                      *(_QWORD *)(v28 + 16) = v29[0];
                    }
                  }
                  ThreadUnlock1(v13, v12, v14);
                  LOBYTE(v16) = 1;
                  v17 = HMValidateHandleNoSecure(v6, v16);
                  if ( v17
                    && (*(_DWORD *)(*(_QWORD *)(v17 + 40) + 288LL) & 0xF) == 2
                    && (*(_DWORD *)(*(_QWORD *)(v17 + 16) + 640LL) & 0x2000000) == 0
                    && (unsigned int)xxxComputeProposedPerMonRect(
                                       (struct tagWND *)v17,
                                       *(struct tagMONITORRECTS **)a1,
                                       &v32)
                    && (LOBYTE(v2) = 1, HMValidateHandleNoSecure(v6, v2)) )
                  {
                    *(struct tagRECT *)(v5 + 8) = v32;
                  }
                  else
                  {
                    *(_QWORD *)v5 = 0LL;
                  }
                  if ( v3 )
                  {
                    v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2);
                    *(_QWORD *)(v18 + 16) = v29[0];
                  }
                }
              }
            }
          }
          ++v4;
          v5 += 24;
        }
        while ( v4 < *((_DWORD *)a1 + 3) );
      }
      if ( v3 )
        xxxEndDeferWindowPosEx(v3, 0);
    }
    v19 = 0;
    if ( *((int *)a1 + 3) > 0 )
    {
      v20 = (unsigned __int64 *)((char *)a1 + 16);
      do
      {
        if ( *v20 )
        {
          LOBYTE(v2) = 1;
          v21 = HMValidateHandleNoSecure(*v20, v2);
          if ( v21 )
          {
            v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2);
            v31[0] = *(_QWORD *)(v22 + 408);
            *(_QWORD *)(v22 + 408) = v31;
            v31[1] = v21;
            _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
            OldMonitor = FindOldMonitor(v21, *(_QWORD *)a1, 0LL);
            if ( OldMonitor >= 0 )
              v24 = *(_WORD *)(56LL * OldMonitor + *(_QWORD *)a1 + 40);
            else
              v24 = 0;
            xxxNotifyMonitorChanged((struct tagWND *)v21, (struct tagRECT *)((char *)a1 + 24 * v19 + 24), 0LL, v24);
            ThreadUnlock1(v26, v25, v27);
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
