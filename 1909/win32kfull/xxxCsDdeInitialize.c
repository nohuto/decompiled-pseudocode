/*
 * XREFs of xxxCsDdeInitialize @ 0x1C010D200
 * Callers:
 *     NtUserDdeInitialize @ 0x1C010D100 (NtUserDdeInitialize.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00AB5F8 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxChangeMonitorFlags @ 0x1C010D4A8 (xxxChangeMonitorFlags.c)
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
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdi
  struct tagWND **v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD v35[2]; // [rsp+98h] [rbp-31h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-21h]
  __int64 v37; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-11h]
  __int64 v39; // [rsp+C0h] [rbp-9h]
  __int64 v40; // [rsp+C8h] [rbp-1h] BYREF
  __int64 *v41; // [rsp+D0h] [rbp+7h]
  __int64 v42; // [rsp+D8h] [rbp+Fh]
  __int64 v43[3]; // [rsp+E0h] [rbp+17h] BYREF

  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v36 = gptiCurrent;
  v10 = 0LL;
  if ( !PsGetCurrentProcessWin32Process(gptiCurrent, a2)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, v8),
        v12 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v12 = 0;
  }
  SmartObjStackRefBase<tagMENU>::Init(v43, 0LL);
  v43[2] = 0LL;
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
                        (__int64 **)v43,
                        hModuleWin,
                        0LL,
                        0,
                        0x30Au,
                        v12,
                        0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v43, v14, v15);
  if ( !Window )
    return 16399LL;
  LOBYTE(v16) = 9;
  v17 = HMAllocObject(gptiCurrent, 0LL, v16);
  v18 = v17;
  if ( !v17 )
  {
    xxxDestroyWindow(Window);
    return 16399LL;
  }
  v35[1] = Window;
  v19 = (struct tagWND **)(v17 + 48);
  v35[0] = v17 + 48;
  HMAssignmentLock(v35);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v35);
  xxxSetWindowLongPtr(*v19, 0LL, *(_QWORD *)v18, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v35);
  v20 = v36;
  *(_QWORD *)(v18 + 56) = a5;
  *(_QWORD *)(v18 + 24) = WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  *(_DWORD *)(v18 + 40) = 0;
  *(_QWORD *)(v18 + 32) = *(_QWORD *)(v20 + 616);
  v21 = *(_QWORD *)(v20 + 408);
  *(_QWORD *)(v20 + 616) = v18;
  v37 = v21;
  *(_QWORD *)(v20 + 408) = &v37;
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = (PVOID)v18;
  v38 = v18;
  HMLockObject(v18);
  v40 = *(_QWORD *)(v36 + 408);
  *(_QWORD *)(v36 + 408) = &v40;
  v41 = Window;
  HMLockObject(Window);
  xxxChangeMonitorFlags(v18, a4);
  if ( (*(_BYTE *)(_HMPheFromObject(v18) + 25) & 1) != 0 )
  {
    HMAssignmentUnlock(v19);
    if ( ThreadUnlock1(v30, v29, v31) )
      xxxDestroyWindow(Window);
    ThreadUnlock1(v33, v32, v34);
    return 16399LL;
  }
  *a1 = *(_QWORD *)v18;
  if ( *v19 )
    v10 = *(_QWORD *)*v19;
  *a2 = v10;
  ThreadUnlock1(v23, v22, v24);
  ThreadUnlock1(v26, v25, v27);
  *a3 = MonitorFlags;
  return 0LL;
}
