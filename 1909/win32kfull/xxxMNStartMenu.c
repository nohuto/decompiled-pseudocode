/*
 * XREFs of xxxMNStartMenu @ 0x1C0210998
 * Callers:
 *     xxxMNLoop @ 0x1C0220940 (xxxMNLoop.c)
 *     xxxMNKeyFilter @ 0x1C024850C (xxxMNKeyFilter.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _GetKeyState @ 0x1C00EBC40 (_GetKeyState.c)
 *     xxxGetSysMenu @ 0x1C0128BFC (xxxGetSysMenu.c)
 *     ThreadLockMenuNoModify @ 0x1C012F8A4 (ThreadLockMenuNoModify.c)
 *     MNPositionSysMenu @ 0x1C015576C (MNPositionSysMenu.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C02100BC (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxUserModeCallback @ 0x1C021FB04 (xxxUserModeCallback.c)
 *     LockPopupMenu @ 0x1C02226BC (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C0225FA4 (xxxMNReleaseCapture.c)
 *     xxxMNSetCapture @ 0x1C02267B8 (xxxMNSetCapture.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0246400 (xxxMNRecomputeBarIfNeeded.c)
 */

_BOOL8 __fastcall xxxMNStartMenu(__int64 *a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  BOOL v8; // edi
  _DWORD **v9; // rax
  struct tagWND *v10; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct tagMENU *InitMenuParam; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 SysMenu; // rax
  struct tagMENU *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  int v33; // r9d
  __int64 CurrentProcessWin32Process; // r15
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  _QWORD v40[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v41; // [rsp+40h] [rbp-19h]
  __int64 v42; // [rsp+48h] [rbp-11h] BYREF
  struct tagWND *v43; // [rsp+50h] [rbp-9h]
  __int64 v44; // [rsp+58h] [rbp-1h]
  __int64 v45; // [rsp+60h] [rbp+7h] BYREF
  __int64 v46; // [rsp+68h] [rbp+Fh]
  __int64 v47; // [rsp+70h] [rbp+17h]
  _QWORD v48[3]; // [rsp+78h] [rbp+1Fh] BYREF
  int v49; // [rsp+C0h] [rbp+67h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v40, 0LL);
  v8 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v9 = (_DWORD **)*a1;
  v41 = 0LL;
  if ( (**v9 & 0x8000) != 0 || !*(_QWORD *)(*(_QWORD *)*a1 + 8LL) )
    goto LABEL_40;
  v10 = *(struct tagWND **)(*(_QWORD *)*a1 + 8LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7);
  v42 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v42;
  v43 = v10;
  if ( v10 )
    HMLockObject(v10);
  *(_DWORD *)(a2 + 8) |= 1u;
  *(_DWORD *)(a2 + 20) = a3;
  v15 = *(_DWORD *)(a2 + 8) & 0xFFFFFFBF | (GetKeyState(1u, v12, v13, v14) < 0 ? 0x40 : 0);
  *(_DWORD *)(a2 + 8) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(v15 >> 3)) & 8;
  xxxMNSetCapture(a1, a2);
  xxxSendMessage((ULONG_PTR)v10);
  if ( (**(_DWORD **)*a1 & 1) != 0 )
  {
    InitMenuParam = xxxGetInitMenuParam(v10, &v49);
    v41 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v40, (__int64)InitMenuParam);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v40) )
    {
      *(_DWORD *)(a2 + 8) &= ~1u;
      xxxMNReleaseCapture(a2);
      ThreadUnlock1(v21, v20, v22);
      goto LABEL_40;
    }
    LockPopupMenu(a1, *(_QWORD *)*a1 + 40LL, v40);
    v16 = v49 != 0 ? 4 : 0;
    **(_DWORD **)*a1 = v16 | **(_DWORD **)*a1 & 0xFFFFFFFB;
    if ( !v49 )
    {
      SysMenu = xxxGetSysMenu(v10, 0);
      v41 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v40, SysMenu);
      LockPopupMenu(a1, *(_QWORD *)*a1 + 48LL, v40);
    }
  }
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (**(_DWORD **)*a1 >> 1)) & 2;
  if ( (**(_DWORD **)*a1 & 0x800) == 0 )
  {
    if ( (**(_DWORD **)*a1 & 8) != 0 && (**(_DWORD **)*a1 & 4) != 0 )
      v24 = xxxGetInitMenuParam(v10, 0LL);
    else
      v24 = *(struct tagMENU **)(*(_QWORD *)*a1 + 40LL);
    v41 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v40, (__int64)v24);
    SmartObjStackRef<tagMENU>::operator==((__int64)v40);
    xxxSendMessage((ULONG_PTR)v10);
  }
  if ( (**(_DWORD **)*a1 & 8) == 0 )
  {
    v25 = *a1;
    if ( (**(_DWORD **)*a1 & 4) != 0 )
    {
      v26 = *(_QWORD **)(*(_QWORD *)v25 + 40LL);
LABEL_22:
      MNPositionSysMenu((__int64)v10, v26, v17, v18);
      goto LABEL_23;
    }
    if ( (**(_DWORD **)v25 & 1) != 0 && *(_QWORD *)(*(_QWORD *)*a1 + 40LL) )
    {
      ThreadLockMenuNoModify(*(_QWORD *)(*(_QWORD *)*a1 + 40LL), &v45, v17);
      SmartObjStackRefBase<tagMENU>::Init(v48, *(_QWORD *)(*(_QWORD *)*a1 + 40LL));
      v48[2] = 0LL;
      xxxMNRecomputeBarIfNeeded(v10, v48);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v48, v27, v28);
      v29 = *(_QWORD *)(v46 + 40);
      *(_DWORD *)(v29 + 40) &= ~0x200u;
      ThreadUnlock1(v29, v30, v31);
      v26 = *(_QWORD **)(*(_QWORD *)*a1 + 48LL);
      goto LABEL_22;
    }
  }
LABEL_23:
  if ( (**(_DWORD **)*a1 & 0x8000) == 0 && *(_QWORD *)(*(_QWORD *)*a1 + 40LL) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x40000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x100u;
    v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL);
    if ( (*(_DWORD *)(v32 + 40) & 0x20000000) == 0 )
      goto LABEL_32;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32, v16);
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x100000) == 0 )
    {
      if ( (int)xxxUserModeCallback(99, 0, 0, v33) < 0 )
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
  if ( (**(_DWORD **)*a1 & 4) != 0 )
    v35 = 0xFFFFFFFFLL;
  else
    v35 = (**(_DWORD **)*a1 & 1) != 0 ? 0xFFFFFFFD : 0;
  xxxWindowEvent(4u, v10, v35, 0, 0);
  ThreadUnlock1(v37, v36, v38);
  v8 = (**(_DWORD **)*a1 & 0x8000) == 0;
LABEL_40:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v40, v6, v7);
  return v8;
}
