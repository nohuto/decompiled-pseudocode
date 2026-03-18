/*
 * XREFs of ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D39F8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C000EA24 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     CkptRestore @ 0x1C0014440 (CkptRestore.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0018C6C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GetMonitorMaxArea @ 0x1C00FC5DC (GetMonitorMaxArea.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01E6FE0 (LogicalToPhysicalInPlaceRect.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023C394 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     ?NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x1C023D82C (-NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIE.c)
 */

void __fastcall xxxCloneWindowPosAndArrangement(struct tagWND *a1, const struct WINDOWPOSANDCHECKPOINT *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 Prop; // rax
  struct tagRECT *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct tagRECT *v25; // r14
  LONG left; // eax
  __int64 v27; // rax
  bool v28; // zf
  __int64 v29; // rcx
  char v30; // al
  bool v31; // cf
  __int64 v32; // rax
  __int64 v33; // rcx
  CWindowGroupManager *v34; // rcx
  __int64 v35[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct tagRECT v36; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v37; // [rsp+60h] [rbp-A0h] BYREF
  int v38; // [rsp+70h] [rbp-90h] BYREF
  int v39; // [rsp+74h] [rbp-8Ch]
  struct tagRECT v40; // [rsp+78h] [rbp-88h]
  __int128 v41; // [rsp+88h] [rbp-78h]
  _BYTE v42[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-58h]
  __int64 v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  __int128 v49; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT v50; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v51; // [rsp+F0h] [rbp-10h] BYREF

  v3 = *((_QWORD *)a2 + 2);
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v35[0] = ValidateHmonitorNoRip(v3);
  v7 = v35[0];
  if ( !v35[0] )
  {
    v7 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    v35[0] = v7;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6);
  v43 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v43;
  v44 = v7;
  HMLockObject(v7);
  v36 = (struct tagRECT)0LL;
  v37 = 0uLL;
  if ( *((_BYTE *)a2 + 93) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      xxxMinMaximizeEx(a1, 7u, 320, 0LL, 0LL, 0LL);
  }
  else if ( *((_BYTE *)a2 + 94) )
  {
    v9 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v9 + 31) & 1) == 0 || *(_QWORD *)(v9 + 256) != *((_QWORD *)a2 + 2) )
      xxxMinMaximizeEx(a1, 3u, *((_QWORD *)a2 + 1) != 0LL ? 64 : 320, v35[0], 0LL, *((_QWORD *)a2 + 1));
  }
  else
  {
    v10 = *(_OWORD *)((char *)a2 + 24);
    *(_QWORD *)&v50.left = 0LL;
    *(_QWORD *)&v50.right = 0LL;
    v11 = *((_QWORD *)a1 + 5);
    v51 = v10;
    PhysicalToLogicalDPIRect(&v50, &v51, *(unsigned int *)(v11 + 288), v35);
    ExtendRectByWindowMargin(a1, &v50, &v50);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) != 0 )
    {
      Prop = GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
      if ( Prop )
        *(_DWORD *)(Prop + 48) &= 0xFFFFFFE1;
      xxxMinMaximizeEx(a1, 9u, 584, v35[0], &v50, *((_QWORD *)a2 + 1));
    }
    else
    {
      v13 = ValidateHwnd(*((_QWORD *)a2 + 1));
      v46 = 0LL;
      v47 = 0LL;
      v48 = 0LL;
      if ( v13 )
      {
        v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14);
        v46 = *(_QWORD *)(v15 + 408);
        *(_QWORD *)(v15 + 408) = &v46;
        v47 = v13;
        HMLockObject(v13);
        v16 = 524304;
      }
      else
      {
        v16 = 524308;
      }
      xxxSetWindowPos(
        a1,
        v13,
        (unsigned int)v50.left,
        (unsigned int)v50.top,
        v50.right - v50.left,
        v50.bottom - v50.top,
        v16);
      if ( v13 )
        ThreadUnlock1(v18, v17, v19);
    }
    SetOrClrWF(0, (__int64)a1, 0xF01u, 1);
    SetOrClrWF(0, (__int64)a1, 0xF20u, 1);
    SetOrClrWF(*((unsigned __int8 *)a2 + 95), (__int64)a1, 0xD901u, 1);
    SetOrClrWF(*((unsigned __int8 *)a2 + 96), (__int64)a1, 0xD902u, 1);
    SetOrClrWF(*((unsigned __int8 *)a2 + 97), (__int64)a1, 0xDA80u, 1);
    v36 = v50;
    LogicalToPhysicalInPlaceRect(a1, &v36);
    v37 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    LogicalToPhysicalInPlaceRect(a1, &v37);
  }
  v21 = (struct tagRECT *)CkptRestore((__int64)a1, (_OWORD *)(*((_QWORD *)a1 + 5) + 88LL));
  v25 = v21;
  if ( v21 && *((_BYTE *)a2 + 92) )
  {
    *v21 = *(struct tagRECT *)((char *)a2 + 40);
    v21[1] = *(struct tagRECT *)((char *)a2 + 56);
    v21[2] = *(struct tagRECT *)((char *)a2 + 72);
    v21[3].left = *((_DWORD *)a2 + 22);
    PhysicalToLogicalDPIRect(v21, v21, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), v35);
    PhysicalToLogicalDPIRect(&v25[1], &v25[1], *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), v35);
    ExtendRectByWindowMargin(a1, v25, v25);
    ExtendRectByWindowMargin(a1, v25 + 1, v25 + 1);
    left = v25[3].left;
    if ( (left & 0x20) != 0 )
    {
      PhysicalToLogicalDPIPoint(&v25[2], &v25[2], *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), v35);
      left = v25[3].left;
    }
    if ( (left & 0x40) != 0 )
    {
      PhysicalToLogicalDPIPoint(&v25[2].right, &v25[2].right, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), v35);
      v27 = *(_QWORD *)GetMonitorMaxArea(&v49, a1, v35[0]);
      v25[2].right -= v27;
      v25[2].bottom -= HIDWORD(v27);
      left = v25[3].left;
    }
    v25[3].left = left & 0xFFFFFF7F;
    v23 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v23 + 31) & 0x20) != 0 && (*(_DWORD *)(v23 + 288) & 0xF) == 2 )
    {
      SetDeferredDpiStateForWindowAndChildren(a1, 1, 0);
      v25[3].left |= 0x80u;
    }
  }
  ThreadUnlock1(v23, v22, v24);
  v28 = *((_BYTE *)a2 + 93) == 0;
  v40 = 0LL;
  v41 = 0LL;
  if ( v28 )
  {
    if ( *((_BYTE *)a2 + 94) )
    {
      v38 = 1;
    }
    else
    {
      if ( *((_BYTE *)a2 + 95) || *((_BYTE *)a2 + 96) )
        v38 = 3;
      else
        v38 = 0;
      v40 = v36;
    }
  }
  else
  {
    v38 = 2;
  }
  v29 = *((_QWORD *)a1 + 5);
  v30 = *(_BYTE *)(v29 + 31);
  if ( (v30 & 0x20) != 0 )
  {
    v39 = 2;
  }
  else if ( (v30 & 1) != 0 )
  {
    v39 = 1;
  }
  else
  {
    v31 = (*(_BYTE *)(v29 + 233) & 3) != 0;
    v41 = v37;
    v39 = v31 ? 3 : 0;
  }
  v32 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v32 )
    v33 = ***(_QWORD ***)(v32 + 8);
  else
    v33 = -1LL;
  if ( anonymous_namespace_::GroupManagementEnabledForDesktop(v33) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v42);
    CWindowGroupManager::NotifyTemplateApplied(v34, a1, (const struct tagGROUP_WINDOW_TEMPLATE_APPLIED *)&v38);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v42);
  }
}
