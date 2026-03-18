/*
 * XREFs of xxxClientLoadMenu @ 0x1C00B5E80
 * Callers:
 *     xxxLoadSysMenu @ 0x1C001B578 (xxxLoadSysMenu.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C02417CC (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00B25F4 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00B2694 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

unsigned __int8 *__fastcall xxxClientLoadMenu(__int64 a1, char **a2)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int8 *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int16 v10; // ax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rcx
  ULONG64 v16; // rdx
  __int64 v17; // rbx
  unsigned __int8 *result; // rax
  PVOID *v19; // rdx
  char v20; // [rsp+30h] [rbp-2A8h] BYREF
  _BYTE v21[3]; // [rsp+31h] [rbp-2A7h] BYREF
  int v22; // [rsp+34h] [rbp-2A4h] BYREF
  unsigned __int8 *v23; // [rsp+38h] [rbp-2A0h]
  unsigned __int64 v24; // [rsp+40h] [rbp-298h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-290h] BYREF
  _QWORD v26[3]; // [rsp+50h] [rbp-288h] BYREF
  __int64 v27; // [rsp+68h] [rbp-270h]
  _DWORD v28[16]; // [rsp+80h] [rbp-258h] BYREF
  unsigned __int8 v29[512]; // [rsp+C0h] [rbp-218h] BYREF

  memset(v28, 0, sizeof(v28));
  v5 = *((unsigned __int16 *)a2 + 1);
  v6 = v5 & -(__int64)(*((_WORD *)a2 + 1) != 0);
  if ( (_WORD)v5 )
  {
    result = AllocCallbackMessage(64, (_WORD)v5 != 0, v6, v29, 1, 0x200uLL);
    v7 = result;
    v23 = result;
    if ( !result )
      return result;
  }
  else
  {
    v7 = (unsigned __int8 *)v28;
    v23 = (unsigned __int8 *)v28;
    v28[0] = 64;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v4);
  memset(v26, 0, sizeof(v26));
  if ( v7 != (unsigned __int8 *)v28 && v7 != v29 )
    PushW32ThreadLock((__int64)v7, v26, (__int64)Win32FreePool, v9);
  *((_QWORD *)v7 + 5) = a1;
  *((_WORD *)v7 + 24) = *(_WORD *)a2;
  v10 = *((_WORD *)a2 + 1);
  *((_WORD *)v7 + 25) = v10;
  if ( v10 )
  {
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v7,
                a2[1],
                (unsigned int)*(unsigned __int16 *)a2 + 2,
                (void **)v7 + 7) < 0 )
      goto LABEL_20;
  }
  else
  {
    *((_QWORD *)v7 + 7) = a2[1];
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v21,
    gdwInAtomicOperation,
    v8,
    v9);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  EtwTraceBeginCallback(76LL);
  *((_QWORD *)v7 + 2) = 0LL;
  v11 = KeUserModeCallback(76LL, v7, *(unsigned int *)v7, &v24, &v22);
  EtwTraceEndCallback(76LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v21,
    v12,
    v13,
    v14);
  if ( v11 >= 0 && v22 == 24 )
  {
    v15 = (__int64 *)v24;
    v16 = v24 + 8;
    if ( v24 + 8 < v24 || v16 > MmUserProbeAddress )
      v15 = (__int64 *)MmUserProbeAddress;
    v27 = *v15;
    LOBYTE(v16) = 2;
    v17 = HMValidateHandleNoRip(v27, v16, v8, v9);
    goto LABEL_13;
  }
LABEL_20:
  v17 = 0LL;
LABEL_13:
  if ( v7 != (unsigned __int8 *)v28 && v7 != v29 )
  {
    v19 = (PVOID *)(v7 + 32);
    if ( *((_QWORD *)v7 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v19, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v26, (__int64)v19, v8, v9);
  }
  return (unsigned __int8 *)v17;
}
