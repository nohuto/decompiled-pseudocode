/*
 * XREFs of xxxMNStartMenu @ 0x1C0210ED8
 * Callers:
 *     xxxMNLoop @ 0x1C0220E80 (xxxMNLoop.c)
 *     xxxMNKeyFilter @ 0x1C0248C4C (xxxMNKeyFilter.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxGetSysMenu @ 0x1C000C4CC (xxxGetSysMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ThreadLockMenuNoModify @ 0x1C00FC34C (ThreadLockMenuNoModify.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _GetKeyState @ 0x1C0110D00 (_GetKeyState.c)
 *     MNPositionSysMenu @ 0x1C01549AC (MNPositionSysMenu.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C02105FC (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxUserModeCallback @ 0x1C0220044 (xxxUserModeCallback.c)
 *     LockPopupMenu @ 0x1C0222BFC (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C02264E4 (xxxMNReleaseCapture.c)
 *     xxxMNSetCapture @ 0x1C0226CF8 (xxxMNSetCapture.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0246B40 (xxxMNRecomputeBarIfNeeded.c)
 */

_BOOL8 __fastcall xxxMNStartMenu(__int64 *a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  BOOL v9; // edi
  _DWORD **v10; // rax
  struct tagWND *v11; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct tagMENU *InitMenuParam; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 SysMenu; // rax
  struct tagMENU *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  int v35; // r9d
  __int64 CurrentProcessWin32Process; // r15
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  _QWORD v42[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v43; // [rsp+40h] [rbp-19h]
  __int64 v44; // [rsp+48h] [rbp-11h] BYREF
  struct tagWND *v45; // [rsp+50h] [rbp-9h]
  __int64 v46; // [rsp+58h] [rbp-1h]
  __int64 v47; // [rsp+60h] [rbp+7h] BYREF
  __int64 v48; // [rsp+68h] [rbp+Fh]
  __int64 v49; // [rsp+70h] [rbp+17h]
  _QWORD v50[3]; // [rsp+78h] [rbp+1Fh] BYREF
  int v51; // [rsp+C0h] [rbp+67h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v42, 0LL);
  v9 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v10 = (_DWORD **)*a1;
  v43 = 0LL;
  if ( (**v10 & 0x8000) != 0 || !*(_QWORD *)(*(_QWORD *)*a1 + 8LL) )
    goto LABEL_40;
  v11 = *(struct tagWND **)(*(_QWORD *)*a1 + 8LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8);
  v44 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v44;
  v45 = v11;
  if ( v11 )
    HMLockObject(v11);
  *(_DWORD *)(a2 + 8) |= 1u;
  *(_DWORD *)(a2 + 20) = a3;
  v16 = *(_DWORD *)(a2 + 8) & 0xFFFFFFBF | (GetKeyState(1u, v13, v14, v15) < 0 ? 0x40 : 0);
  *(_DWORD *)(a2 + 8) = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(v16 >> 3)) & 8;
  xxxMNSetCapture(a1, a2);
  xxxSendMessage((ULONG_PTR)v11);
  if ( (**(_DWORD **)*a1 & 1) != 0 )
  {
    InitMenuParam = xxxGetInitMenuParam(v11, &v51);
    v43 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v42, (__int64)InitMenuParam);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v42) )
    {
      *(_DWORD *)(a2 + 8) &= ~1u;
      xxxMNReleaseCapture(a2);
      ThreadUnlock1(v22, v21, v23);
      goto LABEL_40;
    }
    LockPopupMenu(a1, *(_QWORD *)*a1 + 40LL, v42);
    v17 = v51 != 0 ? 4 : 0;
    **(_DWORD **)*a1 = v17 | **(_DWORD **)*a1 & 0xFFFFFFFB;
    if ( !v51 )
    {
      SysMenu = xxxGetSysMenu(v11, 0);
      v43 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v42, SysMenu);
      LockPopupMenu(a1, *(_QWORD *)*a1 + 48LL, v42);
    }
  }
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (**(_DWORD **)*a1 >> 1)) & 2;
  if ( (**(_DWORD **)*a1 & 0x800) == 0 )
  {
    if ( (**(_DWORD **)*a1 & 8) != 0 && (**(_DWORD **)*a1 & 4) != 0 )
      v25 = xxxGetInitMenuParam(v11, 0LL);
    else
      v25 = *(struct tagMENU **)(*(_QWORD *)*a1 + 40LL);
    v43 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v42, (__int64)v25);
    SmartObjStackRef<tagMENU>::operator==((__int64)v42);
    xxxSendMessage((ULONG_PTR)v11);
  }
  if ( (**(_DWORD **)*a1 & 8) == 0 )
  {
    v26 = *a1;
    if ( (**(_DWORD **)*a1 & 4) != 0 )
    {
      v27 = *(_QWORD **)(*(_QWORD *)v26 + 40LL);
LABEL_22:
      MNPositionSysMenu((__int64)v11, v27, v18, v19);
      goto LABEL_23;
    }
    if ( (**(_DWORD **)v26 & 1) != 0 && *(_QWORD *)(*(_QWORD *)*a1 + 40LL) )
    {
      ThreadLockMenuNoModify(*(_QWORD *)(*(_QWORD *)*a1 + 40LL), &v47, v18, v19);
      SmartObjStackRefBase<tagMENU>::Init(v50, *(_QWORD *)(*(_QWORD *)*a1 + 40LL));
      v50[2] = 0LL;
      xxxMNRecomputeBarIfNeeded(v11, v50);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v50, v28, v29, v30);
      v31 = *(_QWORD *)(v48 + 40);
      *(_DWORD *)(v31 + 40) &= ~0x200u;
      ThreadUnlock1(v31, v32, v33);
      v27 = *(_QWORD **)(*(_QWORD *)*a1 + 48LL);
      goto LABEL_22;
    }
  }
LABEL_23:
  if ( (**(_DWORD **)*a1 & 0x8000) == 0 && *(_QWORD *)(*(_QWORD *)*a1 + 40LL) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x40000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x100u;
    v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL);
    if ( (*(_DWORD *)(v34 + 40) & 0x20000000) == 0 )
      goto LABEL_32;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v34, v17);
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x100000) == 0 )
    {
      if ( (int)xxxUserModeCallback(99, 0, 0, v35) < 0 )
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
    v37 = 0xFFFFFFFFLL;
  else
    v37 = (**(_DWORD **)*a1 & 1) != 0 ? 0xFFFFFFFD : 0;
  xxxWindowEvent(4u, v11, v37, 0LL, 0);
  ThreadUnlock1(v39, v38, v40);
  v9 = (**(_DWORD **)*a1 & 0x8000) == 0;
LABEL_40:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v42, v6, v7, v8);
  return v9;
}
