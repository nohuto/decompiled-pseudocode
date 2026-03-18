/*
 * XREFs of xxxMNCloseHierarchy @ 0x1C02236C0
 * Callers:
 *     xxxMNCancel @ 0x1C0222EF4 (xxxMNCancel.c)
 *     xxxMNKeyDown @ 0x1C0224370 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0226024 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C0246FFC (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C024850C (xxxMNKeyFilter.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C0135A44 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0165234 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0221A34 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNAnimate @ 0x1C0249908 (MNAnimate.c)
 *     xxxSendMenuSelect @ 0x1C024BC54 (xxxSendMenuSelect.c)
 */

_QWORD *__fastcall xxxMNCloseHierarchy(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  struct tagWND *v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct tagMENUWND *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rax
  struct tagWND *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  _QWORD v42[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v43; // [rsp+48h] [rbp-39h] BYREF
  __int64 v44; // [rsp+50h] [rbp-31h]
  __int64 v45; // [rsp+58h] [rbp-29h]
  __int64 v46; // [rsp+60h] [rbp-21h] BYREF
  struct tagWND *v47; // [rsp+68h] [rbp-19h]
  __int64 v48; // [rsp+70h] [rbp-11h]
  __int64 v49; // [rsp+78h] [rbp-9h] BYREF
  __int64 v50; // [rsp+80h] [rbp-1h]
  __int64 v51; // [rsp+88h] [rbp+7h]
  __int128 v52; // [rsp+98h] [rbp+17h]
  _QWORD v53[4]; // [rsp+A8h] [rbp+27h] BYREF
  __int128 v54; // [rsp+C8h] [rbp+47h] BYREF

  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v42, a1);
  MNAnimate(a2, 0LL);
  if ( (**(_DWORD **)v42[0] & 0x20) != 0 )
  {
    if ( (**(_DWORD **)v42[0] & 0x4000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v42[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v42[0] &= ~0x4000u;
    }
    v5 = *(struct tagWND **)(*(_QWORD *)v42[0] + 24LL);
    if ( v5 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4);
      v46 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v46;
      v47 = v5;
      HMLockObject(v5);
      xxxSendMessage((ULONG_PTR)v5);
      v9 = *(_DWORD *)(a2 + 8);
      if ( (v9 & 0x100) != 0 && (v9 & 4) != 0 && (**(_DWORD **)v42[0] & 1) == 0 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)v42[0] + 16LL);
        v11 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8);
        v43 = *(_QWORD *)(v11 + 408);
        *(_QWORD *)(v11 + 408) = &v43;
        v44 = v10;
        HMLockObject(v10);
        xxxActivateWindow(*(struct tagWND **)(*(_QWORD *)v42[0] + 16LL));
        ThreadUnlock1(v13, v12, v14);
      }
      xxxWindowEvent(7u, v5, 4294967292LL, 0, 0);
      if ( ThreadUnlock1(v16, v15, v17) )
      {
        if ( !(unsigned int)xxxDestroyWindow((__int64 *)v5) )
        {
          v18 = (struct tagMENUWND *)safe_cast_fnid_to_PMENUWND((__int64)v5);
          if ( v18 )
            xxxMNDestroyHandler(v18);
        }
      }
      HMAssignmentUnlock(*(_QWORD *)v42[0] + 24LL);
      **(_DWORD **)v42[0] &= ~0x20u;
    }
    if ( (**(_DWORD **)v42[0] & 1) != 0 )
    {
      HMAssignmentUnlock(*(_QWORD *)v42[0] + 56LL);
    }
    else
    {
      v19 = *(_QWORD *)v42[0];
      *(_QWORD *)&v52 = *(_QWORD *)(*(_QWORD *)v42[0] + 64LL) + 56LL;
      *((_QWORD *)&v52 + 1) = *(_QWORD *)(v19 + 16);
      v54 = v52;
      HMAssignmentLock(&v54);
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 && *(_DWORD *)(*(_QWORD *)v42[0] + 80LL) != -1 )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v42[0] + 64LL) + 8LL);
      if ( v20 )
      {
        v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4);
        v43 = *(_QWORD *)(v21 + 408);
        *(_QWORD *)(v21 + 408) = &v43;
        v44 = v20;
        HMLockObject(v20);
        v22 = *(struct tagWND **)(*(_QWORD *)v42[0] + 16LL);
        v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24);
        v46 = *(_QWORD *)(v25 + 408);
        *(_QWORD *)(v25 + 408) = &v46;
        v47 = v22;
        HMLockObject(v22);
        v26 = *(_QWORD *)(*(_QWORD *)v42[0] + 40LL);
        v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28);
        v49 = *(_QWORD *)(v29 + 408);
        *(_QWORD *)(v29 + 408) = &v49;
        v50 = v26;
        if ( v26 )
          HMLockObject(v26);
        SmartObjStackRefBase<tagMENU>::Init(v53, *(_QWORD *)(*(_QWORD *)v42[0] + 40LL));
        v53[2] = 0LL;
        xxxSendMenuSelect(
          v20,
          *(_QWORD *)(*(_QWORD *)v42[0] + 16LL),
          (unsigned int)v53,
          *(_DWORD *)(*(_QWORD *)v42[0] + 80LL),
          a2);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v53, v30, v31);
        ThreadUnlock1(v33, v32, v34);
        ThreadUnlock1(v36, v35, v37);
        ThreadUnlock1(v39, v38, v40);
      }
    }
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v42, v3, v4);
}
