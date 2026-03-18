/*
 * XREFs of xxxCsDdeInitialize @ 0x1C0107074
 * Callers:
 *     NtUserDdeInitialize @ 0x1C0106F80 (NtUserDdeInitialize.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSetWindowLongPtr @ 0x1C0025674 (xxxSetWindowLongPtr.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     xxxChangeMonitorFlags @ 0x1C01072C8 (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall xxxCsDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v11; // edi
  _DWORD *Window; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdi
  struct tagWND **v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _BYTE v33[8]; // [rsp+90h] [rbp-80h] BYREF
  __int64 v34; // [rsp+98h] [rbp-78h]
  __int128 v35; // [rsp+A0h] [rbp-70h]
  _QWORD v36[4]; // [rsp+B0h] [rbp-60h] BYREF
  __int128 v37; // [rsp+D0h] [rbp-40h] BYREF
  _QWORD v38[3]; // [rsp+E0h] [rbp-30h] BYREF
  _QWORD v39[3]; // [rsp+F8h] [rbp-18h] BYREF

  v34 = gptiCurrent;
  v9 = 0LL;
  if ( !PsGetCurrentProcessWin32Process(gptiCurrent)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8),
        v11 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v11 = 0;
  }
  SmartObjStackRefBase<tagMENU>::Init(v36, 0LL);
  v36[2] = 0LL;
  Window = xxxCreateWindowEx(
             0,
             *(unsigned __int16 *)(gpsi + 884LL),
             *(unsigned __int16 *)(gpsi + 884LL),
             0LL,
             0xC0000000,
             0,
             0,
             0,
             0,
             0LL,
             (__int64)v36,
             hModuleWin,
             0LL,
             0,
             0x30Au,
             v11,
             0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v36, v13);
  if ( !Window )
    return 16399LL;
  LOBYTE(v14) = 9;
  v15 = HMAllocObject(gptiCurrent, 0LL, v14, 64LL);
  v16 = v15;
  if ( !v15 )
  {
    xxxDestroyWindow((ULONG_PTR)Window);
    return 16399LL;
  }
  v17 = (struct tagWND **)(v15 + 48);
  *((_QWORD *)&v35 + 1) = Window;
  *(_QWORD *)&v35 = v15 + 48;
  v37 = v35;
  HMAssignmentLock(&v37);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v33);
  xxxSetWindowLongPtr(*v17, 0, *(_QWORD *)v16, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v33);
  v18 = v34;
  *(_QWORD *)(v16 + 56) = a5;
  *(_QWORD *)(v16 + 24) = psiiList;
  *(_DWORD *)(v16 + 40) = 0;
  *(_QWORD *)(v16 + 32) = *(_QWORD *)(v18 + 616);
  v19 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 616) = v16;
  v38[0] = v19;
  *(_QWORD *)(v18 + 408) = v38;
  v38[1] = v16;
  psiiList = (struct tagSVR_INSTANCE_INFO *)v16;
  _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
  v39[0] = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = v39;
  v39[1] = Window;
  _InterlockedIncrement(Window + 2);
  xxxChangeMonitorFlags(v16, a4);
  v22 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v16;
  LOBYTE(v22) = *(_BYTE *)(v22 + gSharedInfo[1] + 25);
  if ( (v22 & 1) != 0 )
  {
    HMAssignmentUnlock(v17);
    if ( ThreadUnlock1(v28, v27, v29) )
      xxxDestroyWindow((ULONG_PTR)Window);
    ThreadUnlock1(v31, v30, v32);
    return 16399LL;
  }
  *a1 = *(_QWORD *)v16;
  if ( *v17 )
    v9 = *(_QWORD *)*v17;
  *a2 = v9;
  ThreadUnlock1(v22, v20, v21);
  ThreadUnlock1(v24, v23, v25);
  *a3 = MonitorFlags;
  return 0LL;
}
