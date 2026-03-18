/*
 * XREFs of xxxRestoreMonitorsAndWindowsRects @ 0x1C01A5AEC
 * Callers:
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0137D34 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     InternalBeginDeferWindowPos @ 0x1C0035160 (InternalBeginDeferWindowPos.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C005B1BC (xxxDeferWindowPosAndCheckPoint.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     IsNonImmersiveBand @ 0x1C005F640 (IsNonImmersiveBand.c)
 */

__int64 __fastcall xxxRestoreMonitorsAndWindowsRects(__int64 a1, __int64 a2)
{
  int *v4; // rax
  int *v5; // r10
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // esi
  int v9; // r9d
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // r8
  struct tagMONITORRECTS *v13; // r12
  struct tagSMWP *v14; // rax
  struct tagSMWP *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r14
  int i; // r15d
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 ThreadWin32Thread; // rax
  _OWORD *Prop; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  _QWORD v27[3]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v28[3]; // [rsp+58h] [rbp-30h] BYREF

  if ( *(_QWORD *)(a1 + 40) != a2 || *(_DWORD *)*gpDispInfo <= 1u )
    return 0LL;
  if ( *(_QWORD *)(a1 + 16) && *(_QWORD *)(a1 + 24) )
  {
    v4 = (int *)SnapshotMonitorRects();
    if ( !v4 )
      return (unsigned int)-1073741801;
    v5 = *(int **)(a1 + 16);
    v6 = 0;
    v7 = 0;
    if ( *v5 > 0 )
    {
      v8 = *v4;
      while ( 1 )
      {
        v9 = 0;
        if ( v8 <= 0 )
          break;
        v10 = 14LL * v7;
        while ( 1 )
        {
          v11 = 14LL * v9;
          v12 = *(_QWORD *)&v5[v10 + 2] - *(_QWORD *)&v4[v11 + 2];
          if ( !v12 )
            v12 = *(_QWORD *)&v5[v10 + 4] - *(_QWORD *)&v4[v11 + 4];
          if ( !v12 )
            break;
          if ( ++v9 >= v8 )
            goto LABEL_15;
        }
        if ( ++v7 >= *v5 )
          goto LABEL_16;
      }
LABEL_15:
      v6 = -1073741823;
    }
LABEL_16:
    Win32FreePool(v4);
    v13 = *(struct tagMONITORRECTS **)(a1 + 16);
    if ( (v6 & 0x80000000) != 0 )
      return v6;
    v14 = (struct tagSMWP *)InternalBeginDeferWindowPos(*(_DWORD *)(a1 + 32));
    v15 = v14;
    if ( !v14 )
      return v6;
    PushW32ThreadLock((__int64)v14, v28, (__int64)DestroySMWP);
    v17 = *(_QWORD *)(a1 + 24);
    for ( i = 0; i < *(_DWORD *)(a1 + 32); v17 += 48LL )
    {
      if ( !v15 )
        break;
      LOBYTE(v16) = 1;
      v19 = HMValidateHandleNoSecure(*(_QWORD *)(v17 + 40), v16);
      v20 = v19;
      if ( v19
        && *(char *)(*(_QWORD *)(v19 + 40) + 24LL) >= 0
        && IsNonImmersiveBand(v19)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 416LL) + 812LL) & 0x30) != 0x10 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
        v27[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v27;
        v27[1] = v20;
        _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
        if ( (*(_DWORD *)(v17 + 32) & 1) != 0 )
        {
          Prop = (_OWORD *)RealGetProp(*(_QWORD *)(v20 + 120), (unsigned __int16)atomCheckpointProp, 1LL);
          if ( Prop )
            *Prop = *(_OWORD *)(v17 + 16);
        }
        v15 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                  (__int64)v15,
                                  v20,
                                  v13,
                                  (struct tagRECT *)v17,
                                  (struct tagRECT *)((v17 + 16) & -(__int64)((*(_DWORD *)(v17 + 32) & 1) != 0)),
                                  20,
                                  1);
        ThreadUnlock1(v24, v23, v25);
      }
      ++i;
    }
    v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
    *(_QWORD *)(v26 + 16) = v28[0];
    if ( v15 )
      xxxEndDeferWindowPosEx(v15, 1);
    else
      return (unsigned int)-1073741801;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v6;
}
