/*
 * XREFs of xxxCsDdeInitialize @ 0x1C0126F90
 * Callers:
 *     NtUserDdeInitialize @ 0x1C0126E90 (NtUserDdeInitialize.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSetWindowLongPtr @ 0x1C00666A0 (xxxSetWindowLongPtr.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxChangeMonitorFlags @ 0x1C012724C (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall xxxCsDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v10; // edi
  volatile signed __int32 *Window; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdi
  struct tagWND **v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int128 v26; // [rsp+98h] [rbp-51h] BYREF
  __int64 v27[4]; // [rsp+A8h] [rbp-41h] BYREF
  __int128 v28; // [rsp+C8h] [rbp-21h] BYREF
  _QWORD v29[3]; // [rsp+D8h] [rbp-11h] BYREF
  _QWORD v30[9]; // [rsp+F0h] [rbp+7h] BYREF

  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
    return 16399LL;
  v8 = 0LL;
  if ( !PsGetCurrentProcessWin32Process(a1)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7),
        v10 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v10 = 0;
  }
  SmartObjStackRefBase<tagMENU>::Init(v27, 0LL);
  v27[2] = 0LL;
  Window = xxxCreateWindowEx(
             0,
             (wchar_t *)*(unsigned __int16 *)(gpsi + 884LL),
             *(unsigned __int16 *)(gpsi + 884LL),
             0LL,
             0xC0000000,
             0,
             0,
             0,
             0,
             0LL,
             (__int64)v27,
             hModuleWin,
             0LL,
             0,
             0x30Au,
             v10,
             0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v27, v12);
  if ( !Window )
    return 16399LL;
  LOBYTE(v13) = 9;
  v14 = HMAllocObject(gptiCurrent, 0LL, v13, 64LL);
  v15 = v14;
  if ( !v14 )
  {
    xxxDestroyWindow(Window);
    return 16399LL;
  }
  v16 = (struct tagWND **)(v14 + 48);
  *((_QWORD *)&v26 + 1) = Window;
  *(_QWORD *)&v26 = v14 + 48;
  v28 = v26;
  HMAssignmentLock(&v28);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v26);
  xxxSetWindowLongPtr(*v16, 0, *(_QWORD *)v15, 0, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v26);
  *(_QWORD *)(v15 + 56) = a5;
  *(_QWORD *)(v15 + 24) = psiiList;
  *(_DWORD *)(v15 + 40) = 0;
  *(_QWORD *)(v15 + 32) = *(_QWORD *)(gptiCurrent + 624LL);
  v17 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 624LL) = v15;
  v29[0] = v17;
  *(_QWORD *)(gptiCurrent + 416LL) = v29;
  v29[1] = v15;
  psiiList = (struct tagSVR_INSTANCE_INFO *)v15;
  _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
  v30[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v30;
  v30[1] = Window;
  _InterlockedIncrement(Window + 2);
  xxxChangeMonitorFlags(v15, a4);
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v15 + gSharedInfo[1] + 25LL) & 1) != 0 )
  {
    HMAssignmentUnlock(v16);
    if ( ThreadUnlock1(v23, v22) )
      xxxDestroyWindow(Window);
    ThreadUnlock1(v25, v24);
    return 16399LL;
  }
  *a1 = *(_QWORD *)v15;
  if ( *v16 )
    v8 = *(_QWORD *)*v16;
  *a2 = v8;
  ThreadUnlock1(a1, v18);
  ThreadUnlock1(v20, v19);
  *a3 = MonitorFlags;
  return 0LL;
}
