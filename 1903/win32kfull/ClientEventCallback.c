/*
 * XREFs of ClientEventCallback @ 0x1C0214EF4
 * Callers:
 *     xxxEventWndProc @ 0x1C00B4BC0 (xxxEventWndProc.c)
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
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

unsigned __int8 *__fastcall ClientEventCallback(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned __int8 *result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rcx
  __int64 v18; // rbx
  PVOID *v19; // rdx
  char v20; // [rsp+30h] [rbp-298h] BYREF
  _BYTE v21[3]; // [rsp+31h] [rbp-297h] BYREF
  int v22; // [rsp+34h] [rbp-294h] BYREF
  _QWORD v23[2]; // [rsp+38h] [rbp-290h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-280h] BYREF
  _QWORD v25[5]; // [rsp+50h] [rbp-278h] BYREF
  unsigned __int8 v26[56]; // [rsp+78h] [rbp-250h] BYREF
  unsigned __int8 v27[512]; // [rsp+B0h] [rbp-218h] BYREF

  v4 = *(unsigned __int16 *)(a2 + 6) + 8;
  memset(v26, 0, sizeof(v26));
  result = AllocCallbackMessage(56, 1u, v4, v27, 1, 0x200uLL);
  v9 = result;
  v23[1] = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8);
    memset(v25, 0, 24);
    if ( v9 != v26 && v9 != v27 )
      PushW32ThreadLock((__int64)v9, v25, (__int64)Win32FreePool, v10);
    *((_QWORD *)v9 + 5) = a1;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v9, (char *)a2, v4, (void **)v9 + 6) < 0 )
      goto LABEL_15;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v21,
      gdwInAtomicOperation,
      v11,
      v12);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
    EtwTraceBeginCallback(65LL);
    *((_QWORD *)v9 + 2) = 0LL;
    v13 = KeUserModeCallback(65LL, v9, *(unsigned int *)v9, v23, &v22);
    EtwTraceEndCallback(65LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v21,
      v14,
      v15,
      v16);
    if ( v13 < 0 )
      goto LABEL_15;
    if ( v22 == 24 )
    {
      v17 = (__int64 *)v23[0];
      if ( (unsigned __int64)(v23[0] + 8LL) < v23[0] || v23[0] + 8LL > MmUserProbeAddress )
        v17 = (__int64 *)MmUserProbeAddress;
      v18 = *v17;
      v25[3] = *v17;
    }
    else
    {
LABEL_15:
      LODWORD(v18) = 0;
    }
    if ( v9 != v26 && v9 != v27 )
    {
      v19 = (PVOID *)(v9 + 32);
      if ( *((_QWORD *)v9 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v19, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v25, (__int64)v19, v11, v12);
    }
    return (unsigned __int8 *)(unsigned int)v18;
  }
  return result;
}
