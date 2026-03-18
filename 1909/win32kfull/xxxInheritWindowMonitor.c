/*
 * XREFs of xxxInheritWindowMonitor @ 0x1C0068FC8
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 *     xxxSetWindowData @ 0x1C00ABB50 (xxxSetWindowData.c)
 *     NtUserInheritWindowMonitor @ 0x1C0107F70 (NtUserInheritWindowMonitor.c)
 *     xxxAddShadow @ 0x1C0146474 (xxxAddShadow.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     InternalSetProp @ 0x1C001AA48 (InternalSetProp.c)
 *     ScaleDPIRect @ 0x1C0035AD0 (ScaleDPIRect.c)
 *     UpdateWindowMonitor @ 0x1C0068A30 (UpdateWindowMonitor.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C0068D34 (BuildWindowListWithDpiBoundaryInfo.c)
 *     xxxNotifyMonitorChanged @ 0x1C006935C (xxxNotifyMonitorChanged.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     GetNewMonitor @ 0x1C006B820 (GetNewMonitor.c)
 *     ?HasMaximizedState@@YA_NPEAUtagWND@@@Z @ 0x1C006BEEC (-HasMaximizedState@@YA_NPEAUtagWND@@@Z.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00CC060 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00CC090 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E796C (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxInheritWindowMonitor(struct tagWND *a1, __int64 *a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v7; // r13d
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 TopLevelWindow; // rsi
  __int64 v12; // r9
  unsigned __int16 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rdx
  _QWORD *v17; // rsi
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
  __int64 v28; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // rdx
  struct tagFREELIST *v33; // rbx
  _QWORD *i; // r14
  struct tagWND *v35; // rax
  __int128 v37; // [rsp+30h] [rbp-30h] BYREF
  __int64 v38; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v39; // [rsp+48h] [rbp-18h]
  __int64 v40; // [rsp+50h] [rbp-10h]

  v5 = *((_QWORD *)a1 + 5);
  v7 = 1;
  v8 = *(_OWORD *)(v5 + 88);
  v9 = *(_QWORD *)(v5 + 256);
  v37 = v8;
  v10 = ValidateHmonitorNoRip(v9);
  TopLevelWindow = GetTopLevelWindow(a2);
  if ( v10 )
    v13 = *(_WORD *)(*(_QWORD *)(v10 + 40) + 64LL);
  else
    v13 = 0;
  if ( a3 )
  {
    v14 = (unsigned __int16)gatomMonitorInheritance;
    if ( a2 )
    {
      v7 = InternalSetProp((__int64)a1, (unsigned __int16)gatomMonitorInheritance, *a2, 1u);
    }
    else
    {
      v15 = *((_QWORD *)a1 + 18);
      if ( gatomMonitorInheritance == word_1C032A65C )
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
      RealInternalRemoveProp(v15, v14, 1LL, v12);
    }
  }
  v16 = 0LL;
  if ( a2 != (__int64 *)a1 )
    v16 = a2;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( !v16
    || TopLevelWindow && (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 20LL) & 0x20) != 0
    || (v17 = (_QWORD *)ValidateHmonitorNoRip(*(_QWORD *)(v16[5] + 256))) == 0LL )
  {
    NewMonitor = GetNewMonitor(a1, 0LL);
    CurrentThread = KeGetCurrentThread();
    v17 = (_QWORD *)NewMonitor;
    v25 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v27, v26, v28) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v25 = *ThreadWin32Thread;
    }
    v38 = *(_QWORD *)(v25 + 408);
    *(_QWORD *)(v25 + 408) = &v38;
    v39 = v17;
    HMLockObject(v17);
    v19 = *(unsigned __int16 *)(v17[5] + 64LL);
    if ( (_WORD)v19 != v13 )
      xxxAppAdjustDpiCandidateRect(a1, v19, *((_QWORD *)a1 + 5) + 88LL, &v37);
  }
  else
  {
    v18 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v38 = *(_QWORD *)(v18 + 408);
    *(_QWORD *)(v18 + 408) = &v38;
    v39 = v17;
    HMLockObject(v17);
    if ( !HasMaximizedState(a1) )
    {
      v19 = *((_QWORD *)a1 + 5);
      if ( (*(_DWORD *)(v19 + 288) & 0xF) == 2 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 640LL) & 0x2000000) == 0 )
      {
        if ( v10 )
        {
          v21 = v19 + 88;
          v22 = *(_QWORD *)(v19 + 88);
          v19 = *(unsigned __int16 *)(v17[5] + 64LL);
          if ( (_WORD)v19 != v13 && !(unsigned int)xxxAppAdjustDpiCandidateRect(a1, v19, v21, &v37) )
            ScaleDPIRect(&v37, (__m128i *)(*((_QWORD *)a1 + 5) + 88LL), *(_WORD *)(v17[5] + 64LL), v13, v22, v22);
        }
      }
    }
  }
  if ( ThreadUnlock1(v20, v19, v21) )
  {
    v30 = BuildHwndList(a1);
    v31 = v30;
    if ( v30 )
    {
      v33 = (struct tagFREELIST *)BuildWindowListWithDpiBoundaryInfo(a1, *((_QWORD *)a1 + 13), v30, 0LL);
      for ( i = (_QWORD *)(v31 + 32); *i != 1LL; ++i )
      {
        LOBYTE(v32) = 1;
        v35 = (struct tagWND *)HMValidateHandleNoSecure(*i, v32);
        if ( v35 )
          UpdateWindowMonitor(v35, v17);
      }
      if ( v33 )
      {
        UpdateWindowPositionsForDpiBoundaryChange(v33);
        FreeListFree(v33);
      }
      xxxNotifyMonitorChanged(a1);
    }
  }
  return v7;
}
