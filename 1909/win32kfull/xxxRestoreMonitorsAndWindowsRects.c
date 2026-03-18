/*
 * XREFs of xxxRestoreMonitorsAndWindowsRects @ 0x1C01DAB90
 * Callers:
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0160E84 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     InternalBeginDeferWindowPos @ 0x1C006C554 (InternalBeginDeferWindowPos.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     IsNonImmersiveBand @ 0x1C012FC10 (IsNonImmersiveBand.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C01300C8 (xxxDeferWindowPosAndCheckPoint.c)
 */

__int64 __fastcall xxxRestoreMonitorsAndWindowsRects(__int64 a1, __int64 a2)
{
  int *v3; // rax
  int *v4; // rsi
  unsigned int v5; // ebx
  int v6; // r8d
  int v7; // r15d
  int v8; // r9d
  __int64 v9; // r11
  __int64 v10; // rdx
  struct tagMONITORRECTS *v11; // r13
  struct tagSMWP *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r15
  int i; // r12d
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 ThreadWin32Thread; // rax
  _OWORD *Prop; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h]
  __int64 v28; // [rsp+50h] [rbp-20h]
  _QWORD v29[3]; // [rsp+58h] [rbp-18h] BYREF

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
      if ( !v12 )
        return v5;
      memset(v29, 0, sizeof(v29));
      PushW32ThreadLock((__int64)v12, v29, (__int64)DestroySMWP);
      v15 = *(_QWORD *)(a1 + 24);
      for ( i = 0; i < *(_DWORD *)(a1 + 32); v15 += 48LL )
      {
        if ( !v12 )
          break;
        LOBYTE(v13) = 1;
        v17 = HMValidateHandleNoSecure(*(_QWORD *)(v15 + 40), v13, v14);
        v18 = v17;
        if ( v17
          && *(char *)(*(_QWORD *)(v17 + 40) + 24LL) >= 0
          && IsNonImmersiveBand(v17)
          && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 416LL) + 812LL) & 0x30) != 0x10 )
        {
          v26 = 0LL;
          v27 = 0LL;
          v28 = 0LL;
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14);
          v26 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v26;
          v27 = v18;
          HMLockObject(v18);
          if ( (*(_DWORD *)(v15 + 32) & 1) != 0 )
          {
            Prop = (_OWORD *)GetProp(v18, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
            if ( Prop )
              *Prop = *(_OWORD *)(v15 + 16);
          }
          v12 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                    (__int64)v12,
                                    (struct tagWND *)v18,
                                    v11,
                                    (struct tagRECT *)v15,
                                    (struct tagRECT *)((v15 + 16) & -(__int64)((*(_DWORD *)(v15 + 32) & 1) != 0)),
                                    20,
                                    1);
          ThreadUnlock1(v22, v21, v23);
        }
        ++i;
      }
      v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14);
      *(_QWORD *)(v24 + 16) = v29[0];
      if ( v12 )
        xxxEndDeferWindowPosEx(v12, 1LL);
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
