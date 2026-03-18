/*
 * XREFs of ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D3B88
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C000FB24 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C008F63C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     CkptRestore @ 0x1C0090C80 (CkptRestore.c)
 *     GetMonitorMaxArea @ 0x1C0091014 (GetMonitorMaxArea.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01E7160 (LogicalToPhysicalInPlaceRect.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023C9B4 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     ?NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x1C023DE4C (-NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIE.c)
 */

void __fastcall xxxCloneWindowPosAndArrangement(struct tagWND *a1, const struct WINDOWPOSANDCHECKPOINT *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 Prop; // rax
  struct tagRECT *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct tagRECT *v27; // r14
  LONG left; // eax
  __int64 v29; // rax
  bool v30; // zf
  __int64 v31; // rcx
  char v32; // al
  bool v33; // cf
  __int64 v34; // rax
  __int64 v35; // rcx
  CWindowGroupManager *v36; // rcx
  __int64 v37[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct tagRECT v38; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+70h] [rbp-90h] BYREF
  int v41; // [rsp+74h] [rbp-8Ch]
  struct tagRECT v42; // [rsp+78h] [rbp-88h]
  __int128 v43; // [rsp+88h] [rbp-78h]
  _BYTE v44[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  __int128 v51; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT v52; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v53; // [rsp+F0h] [rbp-10h] BYREF

  v3 = *((_QWORD *)a2 + 2);
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v37[0] = ValidateHmonitorNoRip(v3);
  v8 = v37[0];
  if ( !v37[0] )
  {
    v8 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    v37[0] = v8;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
  v45 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v45;
  v46 = v8;
  HMLockObject(v8);
  v38 = (struct tagRECT)0LL;
  v39 = 0uLL;
  if ( *((_BYTE *)a2 + 93) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      xxxMinMaximizeEx(a1, 7u, 320, 0LL, 0LL, 0LL);
  }
  else if ( *((_BYTE *)a2 + 94) )
  {
    v10 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v10 + 31) & 1) == 0 || *(_QWORD *)(v10 + 256) != *((_QWORD *)a2 + 2) )
      xxxMinMaximizeEx(a1, 3u, *((_QWORD *)a2 + 1) != 0LL ? 64 : 320, v37[0], 0LL, *((_QWORD *)a2 + 1));
  }
  else
  {
    v11 = *(_OWORD *)((char *)a2 + 24);
    *(_QWORD *)&v52.left = 0LL;
    *(_QWORD *)&v52.right = 0LL;
    v12 = *((_QWORD *)a1 + 5);
    v53 = v11;
    PhysicalToLogicalDPIRect(&v52, &v53, *(unsigned int *)(v12 + 288), v37);
    ExtendRectByWindowMargin(a1, &v52, &v52);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) != 0 )
    {
      Prop = GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
      if ( Prop )
        *(_DWORD *)(Prop + 48) &= 0xFFFFFFE1;
      xxxMinMaximizeEx(a1, 9u, 584, v37[0], &v52, *((_QWORD *)a2 + 1));
    }
    else
    {
      v14 = ValidateHwnd(*((_QWORD *)a2 + 1));
      v48 = 0LL;
      v49 = 0LL;
      v50 = 0LL;
      if ( v14 )
      {
        v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v15, v16);
        v48 = *(_QWORD *)(v17 + 408);
        *(_QWORD *)(v17 + 408) = &v48;
        v49 = v14;
        HMLockObject(v14);
        v18 = 524304;
      }
      else
      {
        v18 = 524308;
      }
      xxxSetWindowPos(
        a1,
        v14,
        (unsigned int)v52.left,
        (unsigned int)v52.top,
        v52.right - v52.left,
        v52.bottom - v52.top,
        v18);
      if ( v14 )
        ThreadUnlock1(v20, v19, v21);
    }
    SetOrClrWF(0, (__int64)a1, 0xF01u, 1);
    SetOrClrWF(0, (__int64)a1, 0xF20u, 1);
    SetOrClrWF(*((unsigned __int8 *)a2 + 95), (__int64)a1, 0xD901u, 1);
    SetOrClrWF(*((unsigned __int8 *)a2 + 96), (__int64)a1, 0xD902u, 1);
    SetOrClrWF(*((unsigned __int8 *)a2 + 97), (__int64)a1, 0xDA80u, 1);
    v38 = v52;
    LogicalToPhysicalInPlaceRect(a1, &v38);
    v39 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    LogicalToPhysicalInPlaceRect(a1, &v39);
  }
  v23 = (struct tagRECT *)CkptRestore((__int64)a1, (_OWORD *)(*((_QWORD *)a1 + 5) + 88LL));
  v27 = v23;
  if ( v23 && *((_BYTE *)a2 + 92) )
  {
    *v23 = *(struct tagRECT *)((char *)a2 + 40);
    v23[1] = *(struct tagRECT *)((char *)a2 + 56);
    v23[2] = *(struct tagRECT *)((char *)a2 + 72);
    v23[3].left = *((_DWORD *)a2 + 22);
    PhysicalToLogicalDPIRect(v23, v23, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), v37);
    PhysicalToLogicalDPIRect(&v27[1], &v27[1], *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), v37);
    ExtendRectByWindowMargin(a1, v27, v27);
    ExtendRectByWindowMargin(a1, v27 + 1, v27 + 1);
    left = v27[3].left;
    if ( (left & 0x20) != 0 )
    {
      PhysicalToLogicalDPIPoint(&v27[2], &v27[2], *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), v37);
      left = v27[3].left;
    }
    if ( (left & 0x40) != 0 )
    {
      PhysicalToLogicalDPIPoint(&v27[2].right, &v27[2].right, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), v37);
      v29 = *(_QWORD *)GetMonitorMaxArea(&v51, (__int64)a1, v37[0]);
      v27[2].right -= v29;
      v27[2].bottom -= HIDWORD(v29);
      left = v27[3].left;
    }
    v27[3].left = left & 0xFFFFFF7F;
    v25 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v25 + 31) & 0x20) != 0 && (*(_DWORD *)(v25 + 288) & 0xF) == 2 )
    {
      SetDeferredDpiStateForWindowAndChildren(a1, 1, 0);
      v27[3].left |= 0x80u;
    }
  }
  ThreadUnlock1(v25, v24, v26);
  v30 = *((_BYTE *)a2 + 93) == 0;
  v42 = 0LL;
  v43 = 0LL;
  if ( v30 )
  {
    if ( *((_BYTE *)a2 + 94) )
    {
      v40 = 1;
    }
    else
    {
      if ( *((_BYTE *)a2 + 95) || *((_BYTE *)a2 + 96) )
        v40 = 3;
      else
        v40 = 0;
      v42 = v38;
    }
  }
  else
  {
    v40 = 2;
  }
  v31 = *((_QWORD *)a1 + 5);
  v32 = *(_BYTE *)(v31 + 31);
  if ( (v32 & 0x20) != 0 )
  {
    v41 = 2;
  }
  else if ( (v32 & 1) != 0 )
  {
    v41 = 1;
  }
  else
  {
    v33 = (*(_BYTE *)(v31 + 233) & 3) != 0;
    v43 = v39;
    v41 = v33 ? 3 : 0;
  }
  v34 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v34 )
    v35 = ***(_QWORD ***)(v34 + 8);
  else
    v35 = -1LL;
  if ( anonymous_namespace_::GroupManagementEnabledForDesktop(v35) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v44);
    CWindowGroupManager::NotifyTemplateApplied(v36, a1, (const struct tagGROUP_WINDOW_TEMPLATE_APPLIED *)&v40);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v44);
  }
}
