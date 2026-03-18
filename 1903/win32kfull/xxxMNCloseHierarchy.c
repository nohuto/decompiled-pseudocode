/*
 * XREFs of xxxMNCloseHierarchy @ 0x1C0223C00
 * Callers:
 *     xxxMNCancel @ 0x1C0223434 (xxxMNCancel.c)
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C0225610 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0226564 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C024773C (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C0248C4C (xxxMNKeyFilter.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01184B0 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0164264 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0221F74 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNAnimate @ 0x1C024A048 (MNAnimate.c)
 *     xxxSendMenuSelect @ 0x1C024C394 (xxxSendMenuSelect.c)
 */

_QWORD *__fastcall xxxMNCloseHierarchy(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct tagWND *v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct tagMENUWND *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rax
  struct tagWND *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  _QWORD v47[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v48; // [rsp+48h] [rbp-39h] BYREF
  __int64 v49; // [rsp+50h] [rbp-31h]
  __int64 v50; // [rsp+58h] [rbp-29h]
  __int64 v51; // [rsp+60h] [rbp-21h] BYREF
  struct tagWND *v52; // [rsp+68h] [rbp-19h]
  __int64 v53; // [rsp+70h] [rbp-11h]
  __int64 v54; // [rsp+78h] [rbp-9h] BYREF
  __int64 v55; // [rsp+80h] [rbp-1h]
  __int64 v56; // [rsp+88h] [rbp+7h]
  __int128 v57; // [rsp+98h] [rbp+17h]
  _QWORD v58[4]; // [rsp+A8h] [rbp+27h] BYREF
  __int128 v59; // [rsp+C8h] [rbp+47h] BYREF

  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v47, a1);
  MNAnimate(a2, 0LL);
  if ( (**(_DWORD **)v47[0] & 0x20) != 0 )
  {
    if ( (**(_DWORD **)v47[0] & 0x4000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v47[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v47[0] &= ~0x4000u;
    }
    v6 = *(struct tagWND **)(*(_QWORD *)v47[0] + 24LL);
    if ( v6 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4, v5);
      v51 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v51;
      v52 = v6;
      HMLockObject(v6);
      xxxSendMessage((ULONG_PTR)v6);
      v11 = *(_DWORD *)(a2 + 8);
      if ( (v11 & 0x100) != 0 && (v11 & 4) != 0 && (**(_DWORD **)v47[0] & 1) == 0 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)v47[0] + 16LL);
        v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10);
        v48 = *(_QWORD *)(v13 + 408);
        *(_QWORD *)(v13 + 408) = &v48;
        v49 = v12;
        HMLockObject(v12);
        xxxActivateWindow(*(struct tagWND **)(*(_QWORD *)v47[0] + 16LL));
        ThreadUnlock1(v15, v14, v16);
      }
      xxxWindowEvent(7u, v6, 4294967292LL, 0LL, 0);
      if ( ThreadUnlock1(v18, v17, v19) )
      {
        if ( !(unsigned int)xxxDestroyWindow((__int64 *)v6) )
        {
          v20 = (struct tagMENUWND *)safe_cast_fnid_to_PMENUWND((__int64)v6);
          if ( v20 )
            xxxMNDestroyHandler(v20);
        }
      }
      HMAssignmentUnlock(*(_QWORD *)v47[0] + 24LL);
      **(_DWORD **)v47[0] &= ~0x20u;
    }
    if ( (**(_DWORD **)v47[0] & 1) != 0 )
    {
      HMAssignmentUnlock(*(_QWORD *)v47[0] + 56LL);
    }
    else
    {
      v21 = *(_QWORD *)v47[0];
      *(_QWORD *)&v57 = *(_QWORD *)(*(_QWORD *)v47[0] + 64LL) + 56LL;
      *((_QWORD *)&v57 + 1) = *(_QWORD *)(v21 + 16);
      v59 = v57;
      HMAssignmentLock(&v59);
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 && *(_DWORD *)(*(_QWORD *)v47[0] + 80LL) != -1 )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 64LL) + 8LL);
      if ( v22 )
      {
        v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4, v5);
        v48 = *(_QWORD *)(v23 + 408);
        *(_QWORD *)(v23 + 408) = &v48;
        v49 = v22;
        HMLockObject(v22);
        v24 = *(struct tagWND **)(*(_QWORD *)v47[0] + 16LL);
        v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27);
        v51 = *(_QWORD *)(v28 + 408);
        *(_QWORD *)(v28 + 408) = &v51;
        v52 = v24;
        HMLockObject(v24);
        v29 = *(_QWORD *)(*(_QWORD *)v47[0] + 40LL);
        v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32);
        v54 = *(_QWORD *)(v33 + 408);
        *(_QWORD *)(v33 + 408) = &v54;
        v55 = v29;
        if ( v29 )
          HMLockObject(v29);
        SmartObjStackRefBase<tagMENU>::Init(v58, *(_QWORD *)(*(_QWORD *)v47[0] + 40LL));
        v58[2] = 0LL;
        xxxSendMenuSelect(
          v22,
          *(_QWORD *)(*(_QWORD *)v47[0] + 16LL),
          (unsigned int)v58,
          *(_DWORD *)(*(_QWORD *)v47[0] + 80LL),
          a2);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v58, v34, v35, v36);
        ThreadUnlock1(v38, v37, v39);
        ThreadUnlock1(v41, v40, v42);
        ThreadUnlock1(v44, v43, v45);
      }
    }
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v47, v3, v4, v5);
}
