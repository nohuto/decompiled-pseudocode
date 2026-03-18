/*
 * XREFs of xxxMNStartMenu @ 0x1C01D5620
 * Callers:
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 *     xxxMNKeyFilter @ 0x1C0206EB8 (xxxMNKeyFilter.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ThreadLockMenuNoModify @ 0x1C000EBFC (ThreadLockMenuNoModify.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxGetSysMenu @ 0x1C00C2390 (xxxGetSysMenu.c)
 *     _GetKeyState @ 0x1C00ECA24 (_GetKeyState.c)
 *     MNPositionSysMenu @ 0x1C012D1EC (MNPositionSysMenu.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C01D4DC8 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxUserModeCallback @ 0x1C01E2838 (xxxUserModeCallback.c)
 *     LockPopupMenu @ 0x1C01E51B4 (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C01E8950 (xxxMNReleaseCapture.c)
 *     xxxMNSetCapture @ 0x1C01E9068 (xxxMNSetCapture.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0205270 (xxxMNRecomputeBarIfNeeded.c)
 */

_BOOL8 __fastcall xxxMNStartMenu(__int64 *a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  _DWORD **v7; // rax
  BOOL v8; // edi
  ULONG_PTR v9; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  struct tagMENU *InitMenuParam; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 SysMenu; // rax
  struct tagMENU *v18; // rax
  __int64 v19; // rax
  struct _NT_TIB *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // r9d
  __int64 CurrentProcessWin32Process; // r15
  int v28; // eax
  int v29; // esi
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // r8d
  bool v33; // zf
  __int64 v34; // rdx
  int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  _QWORD v40[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v41; // [rsp+40h] [rbp-19h]
  _QWORD v42[3]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v43[3]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v44[3]; // [rsp+78h] [rbp+1Fh] BYREF
  int v45; // [rsp+C0h] [rbp+67h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v40, 0LL);
  v7 = (_DWORD **)*a1;
  v8 = 0;
  v41 = 0LL;
  if ( (**v7 & 0x8000) != 0 || !*(_QWORD *)(*(_QWORD *)*a1 + 8LL) )
    goto LABEL_50;
  v9 = *(_QWORD *)(*(_QWORD *)*a1 + 8LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
  v43[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v43;
  v43[1] = v9;
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  *(_DWORD *)(a2 + 8) |= 1u;
  *(_DWORD *)(a2 + 20) = a3;
  v12 = *(_DWORD *)(a2 + 8) & 0xFFFFFFBF | ((GetKeyState(1u, v11) & 0x8000u) != 0LL ? 0x40 : 0);
  *(_DWORD *)(a2 + 8) = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(v12 >> 3)) & 8;
  xxxMNSetCapture(a1, a2);
  xxxSendMessage(v9);
  if ( (**(_DWORD **)*a1 & 1) != 0 )
  {
    InitMenuParam = xxxGetInitMenuParam((struct tagWND *)v9, &v45);
    v41 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v40, (__int64)InitMenuParam);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v40) )
    {
      *(_DWORD *)(a2 + 8) &= ~1u;
      xxxMNReleaseCapture(a2);
      ThreadUnlock1(v15, v14, v16);
      goto LABEL_50;
    }
    LockPopupMenu(a1, *(_QWORD *)*a1 + 40LL, v40);
    **(_DWORD **)*a1 = (v45 != 0 ? 4 : 0) | **(_DWORD **)*a1 & 0xFFFFFFFB;
    if ( !v45 )
    {
      SysMenu = xxxGetSysMenu((struct tagWND *)v9, 0);
      v41 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v40, SysMenu);
      LockPopupMenu(a1, *(_QWORD *)*a1 + 48LL, v40);
    }
  }
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (**(_DWORD **)*a1 >> 1)) & 2;
  if ( (**(_DWORD **)*a1 & 0x800) == 0 )
  {
    if ( (**(_DWORD **)*a1 & 8) != 0 && (**(_DWORD **)*a1 & 4) != 0 )
      v18 = xxxGetInitMenuParam((struct tagWND *)v9, 0LL);
    else
      v18 = *(struct tagMENU **)(*(_QWORD *)*a1 + 40LL);
    v41 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v40, (__int64)v18);
    SmartObjStackRef<tagMENU>::operator==((__int64)v40);
    xxxSendMessage(v9);
  }
  if ( (**(_DWORD **)*a1 & 8) == 0 )
  {
    v19 = *a1;
    if ( (**(_DWORD **)*a1 & 4) != 0 )
    {
      v20 = *(struct _NT_TIB **)(*(_QWORD *)v19 + 40LL);
LABEL_22:
      MNPositionSysMenu(v9, v20);
      goto LABEL_23;
    }
    if ( (**(_DWORD **)v19 & 1) != 0 && *(_QWORD *)(*(_QWORD *)*a1 + 40LL) )
    {
      ThreadLockMenuNoModify(*(_QWORD *)(*(_QWORD *)*a1 + 40LL), v44);
      SmartObjStackRefBase<tagMENU>::Init(v42, *(_QWORD *)(*(_QWORD *)*a1 + 40LL));
      v42[2] = 0LL;
      xxxMNRecomputeBarIfNeeded(v9, v42);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v42, v21);
      v22 = *(_QWORD *)(v44[1] + 40LL);
      *(_DWORD *)(v22 + 40) &= ~0x200u;
      ThreadUnlock1(v22, v23, v24);
      v20 = *(struct _NT_TIB **)(*(_QWORD *)*a1 + 48LL);
      goto LABEL_22;
    }
  }
LABEL_23:
  if ( (**(_DWORD **)*a1 & 0x8000) == 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x40000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x100u;
    v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL);
    if ( (*(_DWORD *)(v25 + 40) & 0x20000000) == 0 )
      goto LABEL_31;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x100000) == 0 )
    {
      if ( (int)xxxUserModeCallback(99, 0, 0, v26) < 0 )
      {
LABEL_31:
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x10000000) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x800u;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x8000000) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x20000u;
        goto LABEL_35;
      }
      *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100000u;
    }
    *(_DWORD *)(a2 + 8) |= 0x400u;
    goto LABEL_31;
  }
LABEL_35:
  v28 = *(_DWORD *)(a2 + 8);
  v29 = -1;
  if ( (v28 & 0x100) == 0 )
  {
    if ( gpqForeground )
    {
      v30 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v30 )
      {
        v31 = *(_QWORD *)(v9 + 16);
        if ( gpqForeground == *(_QWORD *)(v31 + 424) )
        {
          if ( (**(_DWORD **)*a1 & 4) != 0 )
            v32 = -1;
          else
            v32 = (**(_DWORD **)*a1 & 1) != 0 ? 0xFFFFFFFD : 0;
          v33 = v31 == *(_QWORD *)(v30 + 16);
          v34 = v9;
          v35 = 33;
          if ( !v33 )
            v35 = 49;
          if ( *(_QWORD *)(v9 + 16) != *(_QWORD *)(*(_QWORD *)(gpqForeground + 112LL) + 16LL) )
            v34 = *(_QWORD *)(gpqForeground + 112LL);
          xxxWindowEvent(0x80000004, v34, v32, 1, v35);
        }
      }
    }
  }
  if ( (**(_DWORD **)*a1 & 4) == 0 )
    v29 = (**(_DWORD **)*a1 & 1) != 0 ? 0xFFFFFFFD : 0;
  xxxWindowEvent(4u, v9, v29, 0, 0);
  ThreadUnlock1(v37, v36, v38);
  v8 = (**(_DWORD **)*a1 & 0x8000) == 0;
LABEL_50:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v40, v6);
  return v8;
}
