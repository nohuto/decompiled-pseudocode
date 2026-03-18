/*
 * XREFs of xxxMNStartMenu @ 0x1C01FA218
 * Callers:
 *     xxxMNLoop @ 0x1C0209440 (xxxMNLoop.c)
 *     xxxMNKeyFilter @ 0x1C0230040 (xxxMNKeyFilter.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxGetSysMenu @ 0x1C00A60E8 (xxxGetSysMenu.c)
 *     ThreadLockMenuNoModify @ 0x1C00A6E2C (ThreadLockMenuNoModify.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _GetKeyState @ 0x1C0107788 (_GetKeyState.c)
 *     MNPositionSysMenu @ 0x1C014D710 (MNPositionSysMenu.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C01F9934 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxUserModeCallback @ 0x1C0208688 (xxxUserModeCallback.c)
 *     LockPopupMenu @ 0x1C020B0D8 (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C020E8B0 (xxxMNReleaseCapture.c)
 *     xxxMNSetCapture @ 0x1C020F000 (xxxMNSetCapture.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C022E368 (xxxMNRecomputeBarIfNeeded.c)
 */

_BOOL8 __fastcall xxxMNStartMenu(__int64 *a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  _DWORD **v7; // rax
  BOOL v8; // edi
  ULONG_PTR v9; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // r9
  struct tagMENU *InitMenuParam; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 SysMenu; // rax
  struct tagMENU *v21; // rax
  __int64 v22; // rax
  struct _NT_TIB *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // r9d
  __int64 CurrentProcessWin32Process; // r15
  int v30; // eax
  int v31; // esi
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // r8d
  bool v35; // zf
  __int64 v36; // rdx
  unsigned int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD v41[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v42; // [rsp+40h] [rbp-19h]
  _QWORD v43[3]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v44[3]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v45[3]; // [rsp+78h] [rbp+1Fh] BYREF
  int v46; // [rsp+C0h] [rbp+67h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v41, 0LL);
  v7 = (_DWORD **)*a1;
  v8 = 0;
  v42 = 0LL;
  if ( (**v7 & 0x8000) != 0 || !*(_QWORD *)(*(_QWORD *)*a1 + 8LL) )
    goto LABEL_51;
  v9 = *(_QWORD *)(*(_QWORD *)*a1 + 8LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
  v44[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v44;
  v44[1] = v9;
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  *(_DWORD *)(a2 + 8) |= 1u;
  *(_DWORD *)(a2 + 20) = a3;
  v14 = *(_DWORD *)(a2 + 8) & 0xFFFFFFBF | (GetKeyState(1u, v11, v12, v13) < 0 ? 0x40 : 0);
  *(_DWORD *)(a2 + 8) = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(v14 >> 3)) & 8;
  xxxMNSetCapture(a1, a2);
  xxxSendMessage(v9);
  if ( (**(_DWORD **)*a1 & 1) != 0 )
  {
    InitMenuParam = xxxGetInitMenuParam((struct tagWND *)v9, &v46);
    v42 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v41, (__int64)InitMenuParam);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v41) )
    {
      *(_DWORD *)(a2 + 8) &= ~1u;
      xxxMNReleaseCapture(a2);
      ThreadUnlock1(v19, v18);
      goto LABEL_51;
    }
    LockPopupMenu(a1, *(_QWORD *)*a1 + 40LL, v41);
    **(_DWORD **)*a1 = (v46 != 0 ? 4 : 0) | **(_DWORD **)*a1 & 0xFFFFFFFB;
    if ( !v46 )
    {
      SysMenu = xxxGetSysMenu((struct tagWND *)v9, 0);
      v42 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v41, SysMenu);
      LockPopupMenu(a1, *(_QWORD *)*a1 + 48LL, v41);
    }
  }
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (**(_DWORD **)*a1 >> 1)) & 2;
  if ( (**(_DWORD **)*a1 & 0x800) == 0 )
  {
    if ( (**(_DWORD **)*a1 & 8) != 0 && (**(_DWORD **)*a1 & 4) != 0 )
      v21 = xxxGetInitMenuParam((struct tagWND *)v9, 0LL);
    else
      v21 = *(struct tagMENU **)(*(_QWORD *)*a1 + 40LL);
    v42 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v41, (__int64)v21);
    SmartObjStackRef<tagMENU>::operator==((__int64)v41);
    xxxSendMessage(v9);
  }
  if ( (**(_DWORD **)*a1 & 8) == 0 )
  {
    v22 = *a1;
    if ( (**(_DWORD **)*a1 & 4) != 0 )
    {
      v23 = *(struct _NT_TIB **)(*(_QWORD *)v22 + 40LL);
LABEL_22:
      MNPositionSysMenu(v9, v23, v15, v16);
      goto LABEL_23;
    }
    if ( (**(_DWORD **)v22 & 1) != 0 && *(_QWORD *)(*(_QWORD *)*a1 + 40LL) )
    {
      ThreadLockMenuNoModify(*(_QWORD *)(*(_QWORD *)*a1 + 40LL), v45);
      SmartObjStackRefBase<tagMENU>::Init(v43, *(_QWORD *)(*(_QWORD *)*a1 + 40LL));
      v43[2] = 0LL;
      xxxMNRecomputeBarIfNeeded(v9, v43);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v43, v24);
      v25 = *(_QWORD *)(v45[1] + 40LL);
      *(_DWORD *)(v25 + 40) &= ~0x200u;
      ThreadUnlock1(v25, v26);
      v23 = *(struct _NT_TIB **)(*(_QWORD *)*a1 + 48LL);
      goto LABEL_22;
    }
  }
LABEL_23:
  if ( (**(_DWORD **)*a1 & 0x8000) == 0 && *(_QWORD *)(*(_QWORD *)*a1 + 40LL) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x40000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x100u;
    v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL);
    if ( (*(_DWORD *)(v27 + 40) & 0x20000000) == 0 )
      goto LABEL_32;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v27);
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x100000) == 0 )
    {
      if ( (int)xxxUserModeCallback(99, 0, 0, v28) < 0 )
      {
LABEL_32:
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x10000000) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x800u;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x8000000) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x20000u;
        goto LABEL_36;
      }
      *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100000u;
    }
    *(_DWORD *)(a2 + 8) |= 0x400u;
    goto LABEL_32;
  }
LABEL_36:
  v30 = *(_DWORD *)(a2 + 8);
  v31 = -1;
  if ( (v30 & 0x100) == 0 )
  {
    if ( gpqForeground )
    {
      v32 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v32 )
      {
        v33 = *(_QWORD *)(v9 + 16);
        if ( gpqForeground == *(_QWORD *)(v33 + 432) )
        {
          if ( (**(_DWORD **)*a1 & 4) != 0 )
            v34 = -1;
          else
            v34 = (**(_DWORD **)*a1 & 1) != 0 ? 0xFFFFFFFD : 0;
          v35 = v33 == *(_QWORD *)(v32 + 16);
          v36 = v9;
          v37 = 33;
          if ( !v35 )
            v37 = 49;
          if ( *(_QWORD *)(v9 + 16) != *(_QWORD *)(*(_QWORD *)(gpqForeground + 112LL) + 16LL) )
            v36 = *(_QWORD *)(gpqForeground + 112LL);
          xxxWindowEvent(0x80000004, v36, v34, 1, v37);
        }
      }
    }
  }
  if ( (**(_DWORD **)*a1 & 4) == 0 )
    v31 = (**(_DWORD **)*a1 & 1) != 0 ? 0xFFFFFFFD : 0;
  xxxWindowEvent(4u, v9, v31, 0, 0);
  ThreadUnlock1(v39, v38);
  v8 = (**(_DWORD **)*a1 & 0x8000) == 0;
LABEL_51:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v41, v6);
  return v8;
}
