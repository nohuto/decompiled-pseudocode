/*
 * XREFs of xxxMNCloseHierarchy @ 0x1C020C100
 * Callers:
 *     xxxMNCancel @ 0x1C020B900 (xxxMNCancel.c)
 *     xxxMNKeyDown @ 0x1C020CD34 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C020E8F4 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C022EED4 (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C0230040 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C001CBC8 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0022754 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C00D86B8 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C020A4AC (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNAnimate @ 0x1C0231404 (MNAnimate.c)
 *     xxxSendMenuSelect @ 0x1C0233710 (xxxSendMenuSelect.c)
 */

__int64 __fastcall xxxMNCloseHierarchy(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagMENUWND *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rax
  volatile signed __int32 *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD v34[2]; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v35[2]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v36; // [rsp+58h] [rbp-9h] BYREF
  __int64 v37; // [rsp+60h] [rbp-1h]
  __int64 v38; // [rsp+70h] [rbp+Fh] BYREF
  volatile signed __int32 *v39; // [rsp+78h] [rbp+17h]
  _QWORD v40[3]; // [rsp+88h] [rbp+27h] BYREF
  _QWORD v41[3]; // [rsp+A0h] [rbp+3Fh] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v34, a1);
  MNAnimate(a2, 0LL);
  if ( (**(_DWORD **)v34[0] & 0x20) != 0 )
  {
    if ( (**(_DWORD **)v34[0] & 0x4000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v34[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v34[0] &= ~0x4000u;
    }
    v4 = *(volatile signed __int32 **)(*(_QWORD *)v34[0] + 24LL);
    if ( v4 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
      v38 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v38;
      v39 = v4;
      _InterlockedIncrement(v4 + 2);
      xxxSendMessage((ULONG_PTR)v4);
      v7 = *(_DWORD *)(a2 + 8);
      if ( (v7 & 0x100) != 0 && (v7 & 4) != 0 && (**(_DWORD **)v34[0] & 1) == 0 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)v34[0] + 16LL);
        v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
        v36 = *(_QWORD *)(v9 + 416);
        *(_QWORD *)(v9 + 416) = &v36;
        v37 = v8;
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        xxxActivateWindow(*(struct tagWND **)(*(_QWORD *)v34[0] + 16LL));
        ThreadUnlock1(v11, v10);
      }
      if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
      {
        if ( gpqForeground )
        {
          v12 = *(_QWORD *)(gpqForeground + 112LL);
          if ( v12 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
              xxxWindowEvent(0x80000005, v12, 0, 1, 0x21u);
          }
        }
      }
      xxxWindowEvent(7u, (__int64)v4, -4, 0, 0);
      if ( ThreadUnlock1(v14, v13) )
      {
        if ( !(unsigned int)xxxDestroyWindow(v4) )
        {
          v15 = (struct tagMENUWND *)safe_cast_fnid_to_PMENUWND((__int64)v4);
          if ( v15 )
            xxxMNDestroyHandler(v15);
        }
      }
      HMAssignmentUnlock(*(_QWORD *)v34[0] + 24LL);
      **(_DWORD **)v34[0] &= ~0x20u;
    }
    if ( (**(_DWORD **)v34[0] & 1) != 0 )
    {
      HMAssignmentUnlock(*(_QWORD *)v34[0] + 56LL);
    }
    else
    {
      v17 = *(_QWORD *)v34[0];
      v35[0] = *(_QWORD *)(*(_QWORD *)v34[0] + 64LL) + 56LL;
      v35[1] = *(_QWORD *)(v17 + 16);
      HMAssignmentLock(v35);
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 && *(_DWORD *)(*(_QWORD *)v34[0] + 80LL) != -1 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 64LL) + 8LL);
      if ( v18 )
      {
        v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
        v36 = *(_QWORD *)(v19 + 416);
        *(_QWORD *)(v19 + 416) = &v36;
        v37 = v18;
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
        v20 = *(volatile signed __int32 **)(*(_QWORD *)v34[0] + 16LL);
        v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21);
        v38 = *(_QWORD *)(v22 + 416);
        *(_QWORD *)(v22 + 416) = &v38;
        v39 = v20;
        _InterlockedIncrement(v20 + 2);
        v23 = *(_QWORD *)(*(_QWORD *)v34[0] + 40LL);
        v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24);
        v41[0] = *(_QWORD *)(v25 + 416);
        *(_QWORD *)(v25 + 416) = v41;
        v41[1] = v23;
        if ( v23 )
          _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
        SmartObjStackRefBase<tagMENU>::Init(v40, *(_QWORD *)(*(_QWORD *)v34[0] + 40LL));
        v40[2] = 0LL;
        xxxSendMenuSelect(
          v18,
          *(_QWORD *)(*(_QWORD *)v34[0] + 16LL),
          (unsigned int)v40,
          *(_DWORD *)(*(_QWORD *)v34[0] + 80LL),
          a2);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v40, v26);
        ThreadUnlock1(v28, v27);
        ThreadUnlock1(v30, v29);
        ThreadUnlock1(v32, v31);
      }
    }
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>((__int64)v34);
}
