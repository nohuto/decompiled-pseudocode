/*
 * XREFs of ClientEventCallback @ 0x1C02149B4
 * Callers:
 *     xxxEventWndProc @ 0x1C0055930 (xxxEventWndProc.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0053454 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00534F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

unsigned __int8 *__fastcall ClientEventCallback(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned __int8 *result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int8 *v8; // rdi
  __int64 v9; // r8
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *v13; // rcx
  __int64 v14; // rbx
  PVOID *v15; // rdx
  char v16; // [rsp+30h] [rbp-298h] BYREF
  _BYTE v17[3]; // [rsp+31h] [rbp-297h] BYREF
  int v18; // [rsp+34h] [rbp-294h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-290h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-280h] BYREF
  _QWORD v21[5]; // [rsp+50h] [rbp-278h] BYREF
  unsigned __int8 v22[56]; // [rsp+78h] [rbp-250h] BYREF
  unsigned __int8 v23[512]; // [rsp+B0h] [rbp-218h] BYREF

  v4 = *(unsigned __int16 *)(a2 + 6) + 8;
  memset(v22, 0, sizeof(v22));
  result = AllocCallbackMessage(56, 1u, v4, v23, 1, 0x200uLL);
  v8 = result;
  v19[1] = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7);
    memset(v21, 0, 24);
    if ( v8 != v22 && v8 != v23 )
      PushW32ThreadLock((__int64)v8, v21, (__int64)Win32FreePool);
    *((_QWORD *)v8 + 5) = a1;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v8, (char *)a2, v4, (void **)v8 + 6) < 0 )
      goto LABEL_15;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v17,
      gdwInAtomicOperation,
      v9);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
    EtwTraceBeginCallback(65LL);
    *((_QWORD *)v8 + 2) = 0LL;
    v10 = KeUserModeCallback(65LL, v8, *(unsigned int *)v8, v19, &v18);
    EtwTraceEndCallback(65LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v17,
      v11,
      v12);
    if ( v10 < 0 )
      goto LABEL_15;
    if ( v18 == 24 )
    {
      v13 = (__int64 *)v19[0];
      if ( (unsigned __int64)(v19[0] + 8LL) < v19[0] || v19[0] + 8LL > MmUserProbeAddress )
        v13 = (__int64 *)MmUserProbeAddress;
      v14 = *v13;
      v21[3] = *v13;
    }
    else
    {
LABEL_15:
      LODWORD(v14) = 0;
    }
    if ( v8 != v22 && v8 != v23 )
    {
      v15 = (PVOID *)(v8 + 32);
      if ( *((_QWORD *)v8 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v15, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v21, (__int64)v15, v9);
    }
    return (unsigned __int8 *)(unsigned int)v14;
  }
  return result;
}
