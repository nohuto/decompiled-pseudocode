/*
 * XREFs of ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01BFE44
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C0009D4C (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00732C0 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     CkptRestore @ 0x1C00B6EB0 (CkptRestore.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     GetMonitorMaxArea @ 0x1C01190D8 (GetMonitorMaxArea.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01D2578 (LogicalToPhysicalInPlaceRect.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C0224534 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     ?NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x1C02259A4 (-NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIE.c)
 */

void __fastcall xxxCloneWindowPosAndArrangement(struct tagWND *a1, const struct WINDOWPOSANDCHECKPOINT *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 Prop; // rax
  struct tagRECT *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct tagRECT *v19; // r14
  LONG left; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  char v23; // al
  bool v24; // cf
  __int64 v25; // rax
  __int64 v26; // rcx
  CWindowGroupManager *v27; // rcx
  __int64 v28[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct tagRECT v29; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v30; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v31[5]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v32[8]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v33[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v34[3]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v35; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT v36; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v37; // [rsp+F0h] [rbp-10h] BYREF

  v28[0] = ValidateHmonitorNoRip(*((_QWORD *)a2 + 2));
  v5 = v28[0];
  if ( !v28[0] )
  {
    v5 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    v28[0] = v5;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  v33[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v33;
  v33[1] = v5;
  _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
  v29 = (struct tagRECT)0LL;
  v30 = 0uLL;
  if ( *((_BYTE *)a2 + 93) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      xxxMinMaximizeEx(a1, 7u, 320, 0LL, 0LL, 0LL);
  }
  else if ( *((_BYTE *)a2 + 94) )
  {
    v7 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v7 + 31) & 1) == 0 || *(_QWORD *)(v7 + 256) != *((_QWORD *)a2 + 2) )
      xxxMinMaximizeEx(a1, 3u, *((_QWORD *)a2 + 1) != 0LL ? 64 : 320, v28[0], 0LL, *((_QWORD *)a2 + 1));
  }
  else
  {
    v8 = *((_QWORD *)a1 + 5);
    v37 = *(_OWORD *)((char *)a2 + 24);
    PhysicalToLogicalDPIRect(&v36, &v37, *(unsigned int *)(v8 + 288), v28);
    ExtendRectByWindowMargin(a1, &v36, &v36);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) != 0 )
    {
      Prop = GetProp((__int64)a1, (unsigned __int16)atomCheckpointProp, 1LL);
      if ( Prop )
        *(_DWORD *)(Prop + 48) &= 0xFFFFFFE1;
      xxxMinMaximizeEx(a1, 9u, 584, v28[0], &v36, *((_QWORD *)a2 + 1));
    }
    else
    {
      v10 = ValidateHwnd(*((_QWORD *)a2 + 1));
      if ( v10 )
      {
        v11 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
        v34[0] = *(_QWORD *)(v11 + 416);
        *(_QWORD *)(v11 + 416) = v34;
        v34[1] = v10;
        _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
        v12 = 524304;
      }
      else
      {
        v12 = 524308;
      }
      xxxSetWindowPos(
        a1,
        v10,
        (unsigned int)v36.left,
        (unsigned int)v36.top,
        v36.right - v36.left,
        v36.bottom - v36.top,
        v12);
      if ( v10 )
        ThreadUnlock1(v14, v13);
    }
    SetOrClrWF(0, (__int64)a1, 0xF01u, 1);
    SetOrClrWF(0, (__int64)a1, 0xF20u, 1);
    SetOrClrWF(*((unsigned __int8 *)a2 + 95), (__int64)a1, 0xD901u, 1);
    SetOrClrWF(*((unsigned __int8 *)a2 + 96), (__int64)a1, 0xD902u, 1);
    SetOrClrWF(*((unsigned __int8 *)a2 + 97), (__int64)a1, 0xDA80u, 1);
    v29 = v36;
    LogicalToPhysicalInPlaceRect(a1, &v29);
    v30 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    LogicalToPhysicalInPlaceRect(a1, &v30);
  }
  v16 = (struct tagRECT *)CkptRestore((__int64)a1, (_OWORD *)(*((_QWORD *)a1 + 5) + 88LL));
  v19 = v16;
  if ( v16 && *((_BYTE *)a2 + 92) )
  {
    *v16 = *(struct tagRECT *)((char *)a2 + 40);
    v16[1] = *(struct tagRECT *)((char *)a2 + 56);
    v16[2] = *(struct tagRECT *)((char *)a2 + 72);
    v16[3].left = *((_DWORD *)a2 + 22);
    PhysicalToLogicalDPIRect(v16, v16, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), v28);
    PhysicalToLogicalDPIRect(&v19[1], &v19[1], *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), v28);
    ExtendRectByWindowMargin(a1, v19, v19);
    ExtendRectByWindowMargin(a1, v19 + 1, v19 + 1);
    left = v19[3].left;
    if ( (left & 0x20) != 0 )
    {
      PhysicalToLogicalDPIPoint(&v19[2], &v19[2], *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), v28);
      left = v19[3].left;
    }
    if ( (left & 0x40) != 0 )
    {
      PhysicalToLogicalDPIPoint(&v19[2].right, &v19[2].right, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), v28);
      v21 = *(_QWORD *)GetMonitorMaxArea(&v35, a1, v28[0]);
      v19[2].right -= v21;
      v19[2].bottom -= HIDWORD(v21);
      left = v19[3].left;
    }
    v19[3].left = left & 0xFFFFFF7F;
    v18 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v18 + 31) & 0x20) != 0 && (*(_DWORD *)(v18 + 288) & 0xF) == 2 )
    {
      SetDeferredDpiStateForWindowAndChildren(a1, 1, 0);
      v19[3].left |= 0x80u;
    }
  }
  ThreadUnlock1(v18, v17);
  memset(v31, 0, sizeof(v31));
  if ( *((_BYTE *)a2 + 93) )
  {
    LODWORD(v31[0]) = 2;
  }
  else if ( *((_BYTE *)a2 + 94) )
  {
    LODWORD(v31[0]) = 1;
  }
  else
  {
    if ( *((_BYTE *)a2 + 95) || *((_BYTE *)a2 + 96) )
      LODWORD(v31[0]) = 3;
    else
      LODWORD(v31[0]) = 0;
    *(struct tagRECT *)&v31[1] = v29;
  }
  v22 = *((_QWORD *)a1 + 5);
  v23 = *(_BYTE *)(v22 + 31);
  if ( (v23 & 0x20) != 0 )
  {
    HIDWORD(v31[0]) = 2;
  }
  else if ( (v23 & 1) != 0 )
  {
    HIDWORD(v31[0]) = 1;
  }
  else
  {
    v24 = (*(_BYTE *)(v22 + 233) & 3) != 0;
    *(_OWORD *)&v31[3] = v30;
    HIDWORD(v31[0]) = v24 ? 3 : 0;
  }
  v25 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v25 )
    v26 = ***(_QWORD ***)(v25 + 8);
  else
    v26 = -1LL;
  if ( anonymous_namespace_::GroupManagementEnabledForDesktop(v26) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v32);
    CWindowGroupManager::NotifyTemplateApplied(v27, a1, (const struct tagGROUP_WINDOW_TEMPLATE_APPLIED *)v31);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v32);
  }
}
