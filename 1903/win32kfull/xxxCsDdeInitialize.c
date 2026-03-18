/*
 * XREFs of xxxCsDdeInitialize @ 0x1C0132700
 * Callers:
 *     NtUserDdeInitialize @ 0x1C0132600 (NtUserDdeInitialize.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C0061558 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxChangeMonitorFlags @ 0x1C01329A8 (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall xxxCsDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  char v12; // di
  __int64 *Window; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdi
  struct tagWND **v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD v36[2]; // [rsp+98h] [rbp-31h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-21h]
  __int64 v38; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v39; // [rsp+B8h] [rbp-11h]
  __int64 v40; // [rsp+C0h] [rbp-9h]
  __int64 v41; // [rsp+C8h] [rbp-1h] BYREF
  __int64 *v42; // [rsp+D0h] [rbp+7h]
  __int64 v43; // [rsp+D8h] [rbp+Fh]
  __int64 v44[3]; // [rsp+E0h] [rbp+17h] BYREF

  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v37 = gptiCurrent;
  v10 = 0LL;
  if ( !PsGetCurrentProcessWin32Process(gptiCurrent, a2)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, v8),
        v12 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v12 = 0;
  }
  SmartObjStackRefBase<tagMENU>::Init(v44, 0LL);
  v44[2] = 0LL;
  Window = (__int64 *)xxxCreateWindowEx(
                        0,
                        *(unsigned __int16 *)(gpsi + 884LL),
                        *(unsigned __int16 *)(gpsi + 884LL),
                        0LL,
                        -1073741824,
                        0,
                        0,
                        0,
                        0,
                        0LL,
                        (__int64 **)v44,
                        hModuleWin,
                        0LL,
                        0,
                        0x30Au,
                        v12,
                        0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v44, v14, v15, v16);
  if ( !Window )
    return 16399LL;
  LOBYTE(v17) = 9;
  v18 = HMAllocObject(gptiCurrent, 0LL, v17);
  v19 = v18;
  if ( !v18 )
  {
    xxxDestroyWindow(Window);
    return 16399LL;
  }
  v36[1] = Window;
  v20 = (struct tagWND **)(v18 + 48);
  v36[0] = v18 + 48;
  HMAssignmentLock(v36);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v36);
  xxxSetWindowLongPtr(*v20, 0, *(_QWORD *)v19, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v36);
  v21 = v37;
  *(_QWORD *)(v19 + 56) = a5;
  *(_QWORD *)(v19 + 24) = WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  *(_DWORD *)(v19 + 40) = 0;
  *(_QWORD *)(v19 + 32) = *(_QWORD *)(v21 + 616);
  v22 = *(_QWORD *)(v21 + 408);
  *(_QWORD *)(v21 + 616) = v19;
  v38 = v22;
  *(_QWORD *)(v21 + 408) = &v38;
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = (PVOID)v19;
  v39 = v19;
  HMLockObject(v19);
  v41 = *(_QWORD *)(v37 + 408);
  *(_QWORD *)(v37 + 408) = &v41;
  v42 = Window;
  HMLockObject(Window);
  xxxChangeMonitorFlags(v19, a4);
  if ( (*(_BYTE *)(_HMPheFromObject(v19) + 25) & 1) != 0 )
  {
    HMAssignmentUnlock(v20);
    if ( ThreadUnlock1(v31, v30, v32) )
      xxxDestroyWindow(Window);
    ThreadUnlock1(v34, v33, v35);
    return 16399LL;
  }
  *a1 = *(_QWORD *)v19;
  if ( *v20 )
    v10 = *(_QWORD *)*v20;
  *a2 = v10;
  ThreadUnlock1(v24, v23, v25);
  ThreadUnlock1(v27, v26, v28);
  *a3 = MonitorFlags;
  return 0LL;
}
