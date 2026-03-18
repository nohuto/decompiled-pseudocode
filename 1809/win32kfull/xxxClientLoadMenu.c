/*
 * XREFs of xxxClientLoadMenu @ 0x1C00B3DE8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxLoadSysMenu @ 0x1C00A5D4C (xxxLoadSysMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0228D28 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C001A674 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C001A718 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

unsigned __int8 *__fastcall xxxClientLoadMenu(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 v4; // ax
  unsigned __int8 *v5; // rdi
  __int64 v6; // rdx
  unsigned __int16 v7; // ax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 *v10; // rcx
  ULONG64 v11; // rdx
  __int64 v12; // rbx
  unsigned __int8 *result; // rax
  PVOID *v14; // rdx
  char v15; // [rsp+30h] [rbp-2A8h] BYREF
  _BYTE v16[3]; // [rsp+31h] [rbp-2A7h] BYREF
  int v17; // [rsp+34h] [rbp-2A4h] BYREF
  unsigned __int8 *v18; // [rsp+38h] [rbp-2A0h]
  unsigned __int64 v19; // [rsp+40h] [rbp-298h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-290h] BYREF
  __int64 v21; // [rsp+50h] [rbp-288h]
  _QWORD v22[4]; // [rsp+60h] [rbp-278h] BYREF
  _DWORD v23[16]; // [rsp+80h] [rbp-258h] BYREF
  unsigned __int8 v24[512]; // [rsp+C0h] [rbp-218h] BYREF

  v4 = a2[1];
  if ( v4 )
  {
    result = AllocCallbackMessage(64, v4 != 0, v4, v24, 1, 0x200uLL);
    v5 = result;
    v18 = result;
    if ( !result )
      return result;
  }
  else
  {
    v5 = (unsigned __int8 *)v23;
    v18 = (unsigned __int8 *)v23;
    memset(v23, 0, sizeof(v23));
    v23[0] = 64;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
  if ( v5 != (unsigned __int8 *)v23 && v5 != v24 )
    PushW32ThreadLock((__int64)v5, v22, (__int64)Win32FreePool);
  *((_QWORD *)v5 + 5) = a1;
  *((_WORD *)v5 + 24) = *a2;
  v7 = a2[1];
  *((_WORD *)v5 + 25) = v7;
  if ( v7 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v5, *((_QWORD *)a2 + 1), (unsigned int)*a2 + 2, (void **)v5 + 7) < 0 )
      goto LABEL_20;
  }
  else
  {
    *((_QWORD *)v5 + 7) = *((_QWORD *)a2 + 1);
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v16,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  EtwTraceBeginCallback(76LL);
  *((_QWORD *)v5 + 2) = 0LL;
  v8 = KeUserModeCallback(76LL, v5, *(unsigned int *)v5, &v19, &v17);
  EtwTraceEndCallback(76LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v16, v9);
  if ( v8 >= 0 && v17 == 24 )
  {
    v10 = (__int64 *)v19;
    v11 = v19 + 8;
    if ( v19 + 8 < v19 || v11 > MmUserProbeAddress )
      v10 = (__int64 *)MmUserProbeAddress;
    v21 = *v10;
    LOBYTE(v11) = 2;
    v12 = HMValidateHandleNoRip(v21, v11);
    goto LABEL_13;
  }
LABEL_20:
  v12 = 0LL;
LABEL_13:
  if ( v5 != (unsigned __int8 *)v23 && v5 != v24 )
  {
    v14 = (PVOID *)(v5 + 32);
    if ( *((_QWORD *)v5 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v14, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v22, (__int64)v14);
  }
  return (unsigned __int8 *)v12;
}
