/*
 * XREFs of xxxMNCloseHierarchy @ 0x1C01E61D0
 * Callers:
 *     xxxMNCancel @ 0x1C01E59BC (xxxMNCancel.c)
 *     xxxMNKeyDown @ 0x1C01E6E10 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C01E7B08 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C01E8994 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C0205D9C (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C0206EB8 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38 (safe_cast_fnid_to_PMENUWND.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C01E45B8 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNAnimate @ 0x1C02081FC (MNAnimate.c)
 *     xxxSendMenuSelect @ 0x1C020A438 (xxxSendMenuSelect.c)
 */

_QWORD *__fastcall xxxMNCloseHierarchy(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  ULONG_PTR v4; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct tagMENUWND *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rax
  ULONG_PTR v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD v38[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v39; // [rsp+48h] [rbp-39h] BYREF
  __int64 v40; // [rsp+50h] [rbp-31h]
  __int64 v41; // [rsp+60h] [rbp-21h] BYREF
  ULONG_PTR v42; // [rsp+68h] [rbp-19h]
  __int128 v43; // [rsp+78h] [rbp-9h]
  _QWORD v44[4]; // [rsp+88h] [rbp+7h] BYREF
  __int128 v45; // [rsp+A8h] [rbp+27h] BYREF
  _QWORD v46[4]; // [rsp+B8h] [rbp+37h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v38, a1);
  MNAnimate(a2, 0LL);
  if ( (**(_DWORD **)v38[0] & 0x20) != 0 )
  {
    if ( (**(_DWORD **)v38[0] & 0x4000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v38[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v38[0] &= ~0x4000u;
    }
    v4 = *(_QWORD *)(*(_QWORD *)v38[0] + 24LL);
    if ( v4 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
      v41 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v41;
      v42 = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      xxxSendMessage(v4);
      v7 = *(_DWORD *)(a2 + 8);
      if ( (v7 & 0x100) != 0 && (v7 & 4) != 0 && (**(_DWORD **)v38[0] & 1) == 0 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)v38[0] + 16LL);
        v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
        v39 = *(_QWORD *)(v9 + 408);
        *(_QWORD *)(v9 + 408) = &v39;
        v40 = v8;
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        xxxActivateThisWindow(*(struct tagWND **)(*(_QWORD *)v38[0] + 16LL), 0, 0, 0);
        ThreadUnlock1(v11, v10, v12);
      }
      if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
      {
        if ( gpqForeground )
        {
          v13 = *(_QWORD *)(gpqForeground + 112LL);
          if ( v13 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
              xxxWindowEvent(0x80000005, v13, 0, 1, 33);
          }
        }
      }
      xxxWindowEvent(7u, v4, -4, 0, 0);
      if ( ThreadUnlock1(v15, v14, v16) )
      {
        if ( !(unsigned int)xxxDestroyWindow(v4) )
        {
          v17 = (struct tagMENUWND *)safe_cast_fnid_to_PMENUWND(v4);
          if ( v17 )
            xxxMNDestroyHandler(v17);
        }
      }
      HMAssignmentUnlock(*(_QWORD *)v38[0] + 24LL);
      **(_DWORD **)v38[0] &= ~0x20u;
    }
    if ( (**(_DWORD **)v38[0] & 1) != 0 )
    {
      HMAssignmentUnlock(*(_QWORD *)v38[0] + 56LL);
    }
    else
    {
      v18 = *(_QWORD *)v38[0];
      *(_QWORD *)&v43 = *(_QWORD *)(*(_QWORD *)v38[0] + 64LL) + 56LL;
      *((_QWORD *)&v43 + 1) = *(_QWORD *)(v18 + 16);
      v45 = v43;
      HMAssignmentLock(&v45);
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 && *(_DWORD *)(*(_QWORD *)v38[0] + 80LL) != -1 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 64LL) + 8LL);
      if ( v19 )
      {
        v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
        v39 = *(_QWORD *)(v20 + 408);
        *(_QWORD *)(v20 + 408) = &v39;
        v40 = v19;
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
        v21 = *(_QWORD *)(*(_QWORD *)v38[0] + 16LL);
        v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
        v41 = *(_QWORD *)(v23 + 408);
        *(_QWORD *)(v23 + 408) = &v41;
        v42 = v21;
        _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
        v24 = *(_QWORD *)(*(_QWORD *)v38[0] + 40LL);
        v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25);
        v46[0] = *(_QWORD *)(v26 + 408);
        *(_QWORD *)(v26 + 408) = v46;
        v46[1] = v24;
        if ( v24 )
          _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
        SmartObjStackRefBase<tagMENU>::Init(v44, *(_QWORD *)(*(_QWORD *)v38[0] + 40LL));
        v44[2] = 0LL;
        xxxSendMenuSelect(
          v19,
          *(_QWORD *)(*(_QWORD *)v38[0] + 16LL),
          (unsigned int)v44,
          *(_DWORD *)(*(_QWORD *)v38[0] + 80LL),
          a2);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v44, v27);
        ThreadUnlock1(v29, v28, v30);
        ThreadUnlock1(v32, v31, v33);
        ThreadUnlock1(v35, v34, v36);
      }
    }
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v38, v3);
}
