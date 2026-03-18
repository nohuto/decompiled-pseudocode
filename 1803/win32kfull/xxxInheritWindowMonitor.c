/*
 * XREFs of xxxInheritWindowMonitor @ 0x1C0030244
 * Callers:
 *     xxxSetWindowData @ 0x1C0025B98 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x1C00B91B4 (xxxCreateDesktopEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxAddShadow @ 0x1C0119F60 (xxxAddShadow.c)
 *     xxxMNOpenHierarchy @ 0x1C01E7B08 (xxxMNOpenHierarchy.c)
 *     NtUserInheritWindowMonitor @ 0x1C01F1390 (NtUserInheritWindowMonitor.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     GetNewMonitor @ 0x1C002D640 (GetNewMonitor.c)
 *     HasMaximizedState @ 0x1C002DC40 (HasMaximizedState.c)
 *     UpdateWindowMonitor @ 0x1C002DF20 (UpdateWindowMonitor.c)
 *     xxxNotifyMonitorChanged @ 0x1C00304E4 (xxxNotifyMonitorChanged.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     ScaleDPIRect @ 0x1C0073820 (ScaleDPIRect.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01B0038 (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxInheritWindowMonitor(struct tagWND *a1, struct tagWND *a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v7; // r13d
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 TopLevelWindow; // rsi
  unsigned __int16 v12; // r15
  _QWORD *v13; // rcx
  struct tagWND *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 NewMonitor; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *ThreadWin32Thread; // rax
  struct tagBWL *v28; // rax
  __int64 v29; // rdx
  unsigned __int64 *i; // rbx
  struct tagWND *v31; // rax
  __int128 v33; // [rsp+30h] [rbp-30h] BYREF
  __int64 v34; // [rsp+40h] [rbp-20h] BYREF
  __int64 v35; // [rsp+48h] [rbp-18h]

  v5 = *((_QWORD *)a1 + 5);
  v7 = 1;
  v8 = *(_OWORD *)(v5 + 88);
  v9 = *(_QWORD *)(v5 + 256);
  v33 = v8;
  v10 = ValidateHmonitorNoRip(v9);
  TopLevelWindow = GetTopLevelWindow(a2);
  if ( v10 )
    v12 = *(_WORD *)(*(_QWORD *)(v10 + 40) + 64LL);
  else
    v12 = 0;
  if ( a3 )
  {
    v13 = (_QWORD *)((char *)a1 + 120);
    if ( a2 )
      v7 = RealInternalSetProp(v13, (unsigned __int16)gatomMonitorInheritance, *(_QWORD *)a2, 1LL);
    else
      RealInternalRemoveProp(*v13, (unsigned __int16)gatomMonitorInheritance, 1LL);
  }
  v14 = 0LL;
  if ( a2 != a1 )
    v14 = a2;
  if ( !v14
    || TopLevelWindow && (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 20LL) & 0x20) != 0
    || (v16 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v14 + 5) + 256LL))) == 0 )
  {
    NewMonitor = GetNewMonitor(a1, 0LL, &v33);
    CurrentThread = KeGetCurrentThread();
    v16 = NewMonitor;
    v24 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v26, v25) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v24 = *ThreadWin32Thread;
    }
    v34 = *(_QWORD *)(v24 + 408);
    *(_QWORD *)(v24 + 408) = &v34;
    v35 = v16;
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v18 = *(unsigned __int16 *)(*(_QWORD *)(v16 + 40) + 64LL);
    if ( (_WORD)v18 != v12 )
      xxxAppAdjustDpiCandidateRect(a1, v18, *((_QWORD *)a1 + 5) + 88LL, &v33);
  }
  else
  {
    v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
    v34 = *(_QWORD *)(v17 + 408);
    *(_QWORD *)(v17 + 408) = &v34;
    v35 = v16;
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    if ( !(unsigned int)HasMaximizedState((__int64)a1) )
    {
      v18 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v18 + 288) & 0xF) == 2 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 640LL) & 0x2000000) == 0 )
      {
        if ( v10 )
        {
          v20 = v18 + 88;
          v21 = *(_QWORD *)(v18 + 88);
          v18 = *(unsigned __int16 *)(*(_QWORD *)(v16 + 40) + 64LL);
          if ( (_WORD)v18 != v12 && !(unsigned int)xxxAppAdjustDpiCandidateRect(a1, v18, v20, &v33) )
            ScaleDPIRect(
              (unsigned int)&v33,
              *((_QWORD *)a1 + 5) + 88,
              *(unsigned __int16 *)(*(_QWORD *)(v16 + 40) + 64LL),
              v12,
              v21,
              v21);
        }
      }
    }
  }
  if ( ThreadUnlock1(v19, v18, v20) )
  {
    v28 = BuildHwndList(a1, 1, 0LL);
    if ( v28 )
    {
      for ( i = (unsigned __int64 *)((char *)v28 + 32); *i != 1; ++i )
      {
        LOBYTE(v29) = 1;
        v31 = (struct tagWND *)HMValidateHandleNoSecure(*i, v29);
        if ( v31 )
          UpdateWindowMonitor(v31, (_QWORD *)v16);
      }
      xxxNotifyMonitorChanged(a1);
    }
  }
  return v7;
}
