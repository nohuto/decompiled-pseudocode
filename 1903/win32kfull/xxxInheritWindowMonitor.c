/*
 * XREFs of xxxInheritWindowMonitor @ 0x1C00C78F8
 * Callers:
 *     xxxSetWindowData @ 0x1C0061928 (xxxSetWindowData.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x1C00DE64C (xxxCreateDesktopEx.c)
 *     NtUserInheritWindowMonitor @ 0x1C012CB70 (NtUserInheritWindowMonitor.c)
 *     xxxAddShadow @ 0x1C01456C4 (xxxAddShadow.c)
 *     xxxMNOpenHierarchy @ 0x1C0225610 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     InternalSetProp @ 0x1C008C438 (InternalSetProp.c)
 *     ScaleDPIRect @ 0x1C0094DA0 (ScaleDPIRect.c)
 *     UpdateWindowMonitor @ 0x1C00C7360 (UpdateWindowMonitor.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C00C7664 (BuildWindowListWithDpiBoundaryInfo.c)
 *     xxxNotifyMonitorChanged @ 0x1C00C7C8C (xxxNotifyMonitorChanged.c)
 *     _GetTopLevelWindow @ 0x1C00C8D90 (_GetTopLevelWindow.c)
 *     GetNewMonitor @ 0x1C00CA150 (GetNewMonitor.c)
 *     ?HasMaximizedState@@YA_NPEAUtagWND@@@Z @ 0x1C00CA81C (-HasMaximizedState@@YA_NPEAUtagWND@@@Z.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00ED480 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00ED4B0 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E7AEC (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxInheritWindowMonitor(struct tagWND *a1, __int64 *a2, int a3)
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
  __int64 *v15; // rdx
  __int64 v16; // rdx
  _QWORD *v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 NewMonitor; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 v35; // rdx
  struct tagFREELIST *v36; // rbx
  _QWORD *i; // r14
  struct tagWND *v38; // rax
  __int128 v40; // [rsp+30h] [rbp-30h] BYREF
  __int64 v41; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v42; // [rsp+48h] [rbp-18h]
  __int64 v43; // [rsp+50h] [rbp-10h]

  v5 = *((_QWORD *)a1 + 5);
  v7 = 1;
  v8 = *(_OWORD *)(v5 + 88);
  v9 = *(_QWORD *)(v5 + 256);
  v40 = v8;
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
      v7 = InternalSetProp((__int64)a1, (unsigned __int16)gatomMonitorInheritance, *a2, 1u);
    }
    else
    {
      v14 = *((_QWORD *)a1 + 18);
      if ( gatomMonitorInheritance == word_1C032C66C )
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
      RealInternalRemoveProp(v14, v13, 1LL);
    }
  }
  v15 = 0LL;
  if ( a2 != (__int64 *)a1 )
    v15 = a2;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  if ( !v15
    || TopLevelWindow && (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 20LL) & 0x20) != 0
    || (v17 = (_QWORD *)ValidateHmonitorNoRip(*(_QWORD *)(v15[5] + 256))) == 0LL )
  {
    NewMonitor = GetNewMonitor(a1, 0LL);
    CurrentThread = KeGetCurrentThread();
    v17 = (_QWORD *)NewMonitor;
    v27 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v29, v28, v30, v31) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v27 = *ThreadWin32Thread;
    }
    v41 = *(_QWORD *)(v27 + 408);
    *(_QWORD *)(v27 + 408) = &v41;
    v42 = v17;
    HMLockObject(v17);
    v21 = *(unsigned __int16 *)(v17[5] + 64LL);
    if ( (_WORD)v21 != v12 )
      xxxAppAdjustDpiCandidateRect(a1, v21, *((_QWORD *)a1 + 5) + 88LL, &v40);
  }
  else
  {
    v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v18, v19);
    v41 = *(_QWORD *)(v20 + 408);
    *(_QWORD *)(v20 + 408) = &v41;
    v42 = v17;
    HMLockObject(v17);
    if ( !HasMaximizedState(a1) )
    {
      v21 = *((_QWORD *)a1 + 5);
      if ( (*(_DWORD *)(v21 + 288) & 0xF) == 2 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 640LL) & 0x2000000) == 0 )
      {
        if ( v10 )
        {
          v23 = v21 + 88;
          v24 = *(_QWORD *)(v21 + 88);
          v21 = *(unsigned __int16 *)(v17[5] + 64LL);
          if ( (_WORD)v21 != v12 && !(unsigned int)xxxAppAdjustDpiCandidateRect(a1, v21, v23, &v40) )
            ScaleDPIRect(&v40, (__m128i *)(*((_QWORD *)a1 + 5) + 88LL), *(_WORD *)(v17[5] + 64LL), v12, v24, v24);
        }
      }
    }
  }
  if ( ThreadUnlock1(v22, v21, v23) )
  {
    v33 = BuildHwndList(a1);
    v34 = v33;
    if ( v33 )
    {
      v36 = (struct tagFREELIST *)BuildWindowListWithDpiBoundaryInfo(a1, *((_QWORD *)a1 + 13), v33, 0LL);
      for ( i = (_QWORD *)(v34 + 32); *i != 1LL; ++i )
      {
        LOBYTE(v35) = 1;
        v38 = (struct tagWND *)HMValidateHandleNoSecure(*i, v35);
        if ( v38 )
          UpdateWindowMonitor(v38, v17);
      }
      if ( v36 )
      {
        UpdateWindowPositionsForDpiBoundaryChange(v36);
        FreeListFree(v36);
      }
      xxxNotifyMonitorChanged(a1);
    }
  }
  return v7;
}
