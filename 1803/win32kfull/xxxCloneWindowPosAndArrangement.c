/*
 * XREFs of xxxCloneWindowPosAndArrangement @ 0x1C019EF98
 * Callers:
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     xxxMinMaximize @ 0x1C0065638 (xxxMinMaximize.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     CkptRestore @ 0x1C00669FC (CkptRestore.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C006B5DC (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00C1874 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01AF71C (LogicalToPhysicalInPlaceRect.c)
 *     ?NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x1C01FCF40 (-NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIE.c)
 */

void __fastcall xxxCloneWindowPosAndArrangement(struct tagWND *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r15
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // r14
  __int64 v11; // rsi
  char v12; // r12
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _DWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _DWORD *v23; // rsi
  bool v24; // cf
  __int64 v25; // rax
  __int64 v26; // rcx
  CWindowGroupManager *v27; // rcx
  __int128 v28; // [rsp+40h] [rbp-49h] BYREF
  __int128 v29; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v30[5]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v31[3]; // [rsp+88h] [rbp-1h] BYREF
  _QWORD v32[4]; // [rsp+A0h] [rbp+17h] BYREF
  char v33; // [rsp+F0h] [rbp+67h] BYREF

  v5 = ValidateHmonitorNoRip(*(_QWORD *)(a2 + 16));
  if ( !v5 )
    v5 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  v31[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v31;
  v31[1] = v5;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  v7 = (unsigned __int64 *)ValidateHwnd(*(_QWORD *)(a2 + 8));
  v9 = *((_QWORD *)a1 + 5);
  v10 = 0;
  v11 = (__int64)v7;
  v12 = 0;
  v28 = 0uLL;
  v29 = 0uLL;
  if ( *(_DWORD *)(a2 + 96) )
  {
    if ( (*(_BYTE *)(v9 + 31) & 0x20) == 0 )
    {
      xxxMinMaximize(a1, 7LL);
      v9 = *((_QWORD *)a1 + 5);
    }
    v10 = (*(_BYTE *)(v9 + 31) & 0x20) != 0;
  }
  else if ( *(_DWORD *)(a2 + 100) )
  {
    if ( (*(_BYTE *)(v9 + 31) & 1) == 0 || *(_QWORD *)(v9 + 256) != *(_QWORD *)(a2 + 16) )
    {
      if ( v7 )
        v13 = *v7;
      else
        v13 = 0LL;
      xxxMinMaximizeEx(a1, 3u, v13 != 0 ? 64 : 320, (struct tagMONITOR *)v5, 0LL, v13);
      v9 = *((_QWORD *)a1 + 5);
    }
    if ( (*(_BYTE *)(v9 + 31) & 1) != 0 && *(_QWORD *)(v9 + 256) == *(_QWORD *)(a2 + 16) )
      v12 = 1;
  }
  else
  {
    if ( (*(_BYTE *)(v9 + 31) & 0x21) != 0 )
      xxxMinMaximize(a1, 9LL);
    if ( v11 )
    {
      v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
      v32[0] = *(_QWORD *)(v14 + 408);
      *(_QWORD *)(v14 + 408) = v32;
      v32[1] = v11;
      _InterlockedAdd((volatile signed __int32 *)(v11 + 8), 1u);
      v15 = 524304;
    }
    else
    {
      v15 = 524308;
    }
    xxxSetWindowPos(
      a1,
      v11,
      *(unsigned int *)(a2 + 24),
      *(unsigned int *)(a2 + 28),
      *(_DWORD *)(a2 + 32) - *(_DWORD *)(a2 + 24),
      *(_DWORD *)(a2 + 36) - *(_DWORD *)(a2 + 28),
      v15);
    if ( v11 )
      ThreadUnlock1(v17, v16, v18);
    SetOrClrWF(*(_DWORD *)(a2 + 104), (__int64)a1, 55553, 1);
    SetOrClrWF(*(_DWORD *)(a2 + 108), (__int64)a1, 55554, 1);
    SetOrClrWF(*(_DWORD *)(a2 + 112), (__int64)a1, 55936, 1);
    v28 = *(_OWORD *)(a2 + 24);
    LogicalToPhysicalInPlaceRect(a1, &v28);
    v29 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    LogicalToPhysicalInPlaceRect(a1, &v29);
  }
  v19 = CkptRestore((__int64)a1, (_OWORD *)(*((_QWORD *)a1 + 5) + 88LL));
  v23 = v19;
  if ( v19 )
  {
    if ( *(_DWORD *)(a2 + 92) )
    {
      *(_OWORD *)v19 = *(_OWORD *)(a2 + 40);
      *((_OWORD *)v19 + 1) = *(_OWORD *)(a2 + 56);
      *((_OWORD *)v19 + 2) = *(_OWORD *)(a2 + 72);
      v19[12] = *(_DWORD *)(a2 + 88);
      v19[12] &= ~0x80u;
      if ( v10 )
      {
        v21 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL);
        LOBYTE(v21) = v21 & 0xF;
        if ( (_BYTE)v21 == 2 )
        {
          SetDeferredDpiStateForWindowAndChildren(a1, 1);
          v23[12] |= 0x80u;
        }
      }
    }
  }
  ThreadUnlock1(v21, v20, v22);
  memset(v30, 0, sizeof(v30));
  if ( *(_DWORD *)(a2 + 96) )
  {
    LODWORD(v30[0]) = 2;
  }
  else if ( *(_DWORD *)(a2 + 100) )
  {
    LODWORD(v30[0]) = 1;
  }
  else
  {
    if ( *(_DWORD *)(a2 + 104) || *(_DWORD *)(a2 + 108) )
      LODWORD(v30[0]) = 3;
    else
      LODWORD(v30[0]) = 0;
    *(_OWORD *)&v30[1] = v28;
  }
  if ( v10 )
  {
    HIDWORD(v30[0]) = 2;
  }
  else if ( v12 )
  {
    HIDWORD(v30[0]) = 1;
  }
  else
  {
    v24 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) != 0;
    *(_OWORD *)&v30[3] = v29;
    HIDWORD(v30[0]) = v24 ? 3 : 0;
  }
  v25 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v25 )
    v26 = ***(_QWORD ***)(v25 + 8);
  else
    v26 = -1LL;
  if ( anonymous_namespace_::GroupManagementEnabledForDesktop(v26) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v33);
    CWindowGroupManager::NotifyTemplateApplied(v27, a1, (const struct tagGROUP_WINDOW_TEMPLATE_APPLIED *)v30);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v33);
  }
}
