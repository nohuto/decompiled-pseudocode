/*
 * XREFs of xxxInheritWindowMonitor @ 0x1C006F3B0
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C0065ECC (xxxSetWindowData.c)
 *     xxxCreateDesktopEx @ 0x1C00EFCF4 (xxxCreateDesktopEx.c)
 *     xxxAddShadow @ 0x1C0139D34 (xxxAddShadow.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     NtUserInheritWindowMonitor @ 0x1C0218740 (NtUserInheritWindowMonitor.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C001CA24 (ScaleDPIRect.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     GetNewMonitor @ 0x1C004259C (GetNewMonitor.c)
 *     ?HasMaximizedState@@YA_NPEAUtagWND@@@Z @ 0x1C0043180 (-HasMaximizedState@@YA_NPEAUtagWND@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C00437C0 (UpdateWindowMonitor.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006F6AC (BuildWindowListWithDpiBoundaryInfo.c)
 *     xxxNotifyMonitorChanged @ 0x1C006F8AC (xxxNotifyMonitorChanged.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     InternalSetProp @ 0x1C00B3498 (InternalSetProp.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01052C0 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C01052F0 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01D2EAC (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxInheritWindowMonitor(struct tagWND *a1, struct tagWND *a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v7; // r13d
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 TopLevelWindow; // rsi
  unsigned __int16 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagWND *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 NewMonitor; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rdx
  struct tagFREELIST *v32; // rbx
  unsigned __int64 *i; // r14
  struct tagWND *v34; // rax
  __int128 v36; // [rsp+30h] [rbp-30h] BYREF
  __int64 v37; // [rsp+40h] [rbp-20h] BYREF
  __int64 v38; // [rsp+48h] [rbp-18h]

  v5 = *((_QWORD *)a1 + 5);
  v7 = 1;
  v8 = *(_OWORD *)(v5 + 88);
  v9 = *(_QWORD *)(v5 + 256);
  v36 = v8;
  v10 = ValidateHmonitorNoRip(v9);
  TopLevelWindow = GetTopLevelWindow(a2);
  if ( v10 )
    v12 = *(_WORD *)(*(_QWORD *)(v10 + 40) + 64LL);
  else
    v12 = 0;
  if ( a3 )
  {
    v13 = (unsigned __int16)gatomMonitorInheritance;
    if ( a2 )
    {
      v7 = InternalSetProp(a1, (unsigned __int16)gatomMonitorInheritance, *(_QWORD *)a2, 1LL);
    }
    else
    {
      v14 = *((_QWORD *)a1 + 15);
      if ( gatomMonitorInheritance == word_1C0317660 )
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
      RealInternalRemoveProp(v14, v13, 1LL);
    }
  }
  v15 = 0LL;
  if ( a2 != a1 )
    v15 = a2;
  if ( !v15
    || TopLevelWindow && (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 20LL) & 0x20) != 0
    || (v17 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v15 + 5) + 256LL))) == 0 )
  {
    NewMonitor = GetNewMonitor(a1, 0LL, &v36);
    CurrentThread = KeGetCurrentThread();
    v17 = NewMonitor;
    v25 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v27, v26) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v25 = *ThreadWin32Thread;
    }
    v37 = *(_QWORD *)(v25 + 416);
    *(_QWORD *)(v25 + 416) = &v37;
    v38 = v17;
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v19 = *(unsigned __int16 *)(*(_QWORD *)(v17 + 40) + 64LL);
    if ( (_WORD)v19 != v12 )
      xxxAppAdjustDpiCandidateRect(a1, v19, *((_QWORD *)a1 + 5) + 88LL, &v36);
  }
  else
  {
    v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
    v37 = *(_QWORD *)(v18 + 416);
    *(_QWORD *)(v18 + 416) = &v37;
    v38 = v17;
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    if ( !HasMaximizedState(a1) )
    {
      v19 = *((_QWORD *)a1 + 5);
      if ( (*(_DWORD *)(v19 + 288) & 0xF) == 2 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 648LL) & 0x2000000) == 0 )
      {
        if ( v10 )
        {
          v21 = v19 + 88;
          v22 = *(_QWORD *)(v19 + 88);
          v19 = *(unsigned __int16 *)(*(_QWORD *)(v17 + 40) + 64LL);
          if ( (_WORD)v19 != v12 && !(unsigned int)xxxAppAdjustDpiCandidateRect(a1, v19, v21, &v36) )
            ScaleDPIRect(
              &v36,
              (__m128i *)(*((_QWORD *)a1 + 5) + 88LL),
              *(_WORD *)(*(_QWORD *)(v17 + 40) + 64LL),
              v12,
              v22,
              v22);
        }
      }
    }
  }
  if ( ThreadUnlock1(v20, v19) )
  {
    v29 = BuildHwndList(a1);
    v30 = v29;
    if ( v29 )
    {
      v32 = (struct tagFREELIST *)BuildWindowListWithDpiBoundaryInfo(a1, *((_QWORD *)a1 + 10), v29, 0LL);
      for ( i = (unsigned __int64 *)(v30 + 32); *i != 1; ++i )
      {
        LOBYTE(v31) = 1;
        v34 = (struct tagWND *)HMValidateHandleNoSecure(*i, v31);
        if ( v34 )
          UpdateWindowMonitor(v34, (_QWORD *)v17);
      }
      if ( v32 )
      {
        UpdateWindowPositionsForDpiBoundaryChange(v32);
        FreeListFree(v32);
      }
      xxxNotifyMonitorChanged(a1);
    }
  }
  return v7;
}
