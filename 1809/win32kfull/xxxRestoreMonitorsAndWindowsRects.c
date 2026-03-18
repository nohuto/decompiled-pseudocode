/*
 * XREFs of xxxRestoreMonitorsAndWindowsRects @ 0x1C01C7928
 * Callers:
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0158634 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0038714 (xxxEndDeferWindowPosEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     InternalBeginDeferWindowPos @ 0x1C007210C (InternalBeginDeferWindowPos.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00CD2D8 (xxxDeferWindowPosAndCheckPoint.c)
 *     IsNonImmersiveBand @ 0x1C00CEDF0 (IsNonImmersiveBand.c)
 */

__int64 __fastcall xxxRestoreMonitorsAndWindowsRects(__int64 a1, __int64 a2)
{
  int *v3; // rax
  int *v4; // rsi
  unsigned int v5; // ebx
  int v6; // edx
  int v7; // r14d
  int v8; // r9d
  __int64 v9; // r11
  __int64 v10; // r8
  struct tagMONITORRECTS *v11; // r12
  struct tagSMWP *v12; // rax
  struct tagSMWP *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r14
  int i; // r15d
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 ThreadWin32Thread; // rax
  _OWORD *Prop; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD v25[3]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v26[3]; // [rsp+58h] [rbp-30h] BYREF

  if ( *(_QWORD *)(a1 + 40) == a2 && *(_DWORD *)*gpDispInfo > 1u )
  {
    if ( *(_QWORD *)(a1 + 16) && *(_QWORD *)(a1 + 24) )
    {
      v3 = (int *)SnapshotMonitorRects();
      if ( !v3 )
        return (unsigned int)-1073741801;
      v4 = *(int **)(a1 + 16);
      v5 = 0;
      v6 = 0;
      if ( *v4 > 0 )
      {
        v7 = *v3;
        while ( 1 )
        {
          v8 = 0;
          if ( v7 <= 0 )
            break;
          while ( 1 )
          {
            v9 = 12LL * v8;
            v10 = *(_QWORD *)&v4[12 * v6 + 2] - *(_QWORD *)&v3[v9 + 2];
            if ( !v10 )
              v10 = *(_QWORD *)&v4[12 * v6 + 4] - *(_QWORD *)&v3[v9 + 4];
            if ( !v10 )
              break;
            if ( ++v8 >= v7 )
              goto LABEL_13;
          }
          if ( ++v6 >= *v4 )
            goto LABEL_14;
        }
LABEL_13:
        v5 = -1073741823;
      }
LABEL_14:
      Win32FreePool(v3);
      v11 = *(struct tagMONITORRECTS **)(a1 + 16);
      if ( (v5 & 0x80000000) != 0 )
        return v5;
      v12 = (struct tagSMWP *)InternalBeginDeferWindowPos(*(_DWORD *)(a1 + 32));
      v13 = v12;
      if ( !v12 )
        return v5;
      PushW32ThreadLock((__int64)v12, v26, (__int64)DestroySMWP);
      v15 = *(_QWORD *)(a1 + 24);
      for ( i = 0; i < *(_DWORD *)(a1 + 32); v15 += 48LL )
      {
        if ( !v13 )
          break;
        LOBYTE(v14) = 1;
        v17 = HMValidateHandleNoSecure(*(_QWORD *)(v15 + 40), v14);
        v18 = v17;
        if ( v17
          && *(char *)(*(_QWORD *)(v17 + 40) + 24LL) >= 0
          && IsNonImmersiveBand(v17)
          && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 424LL) + 820LL) & 0x30) != 0x10 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14);
          v25[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v25;
          v25[1] = v18;
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
          if ( (*(_DWORD *)(v15 + 32) & 1) != 0 )
          {
            Prop = (_OWORD *)GetProp(v18, (unsigned __int16)atomCheckpointProp, 1LL);
            if ( Prop )
              *Prop = *(_OWORD *)(v15 + 16);
          }
          v13 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                    (__int64)v13,
                                    (struct tagWND *)v18,
                                    v11,
                                    (struct tagRECT *)v15,
                                    (struct tagRECT *)((v15 + 16) & -(__int64)((*(_DWORD *)(v15 + 32) & 1) != 0)),
                                    20,
                                    1);
          ThreadUnlock1(v22, v21);
        }
        ++i;
      }
      v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14);
      *(_QWORD *)(v23 + 16) = v26[0];
      if ( v13 )
        xxxEndDeferWindowPosEx(v13, 1);
      else
        return (unsigned int)-1073741801;
    }
    else
    {
      return (unsigned int)-1073741823;
    }
    return v5;
  }
  return 0LL;
}
