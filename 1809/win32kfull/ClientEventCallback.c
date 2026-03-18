/*
 * XREFs of ClientEventCallback @ 0x1C01FD9BC
 * Callers:
 *     xxxEventWndProc @ 0x1C00B49A0 (xxxEventWndProc.c)
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
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall ClientEventCallback(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // ebx
  unsigned __int8 *result; // rax
  __int64 v6; // rdx
  unsigned __int8 *v7; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  ULONG_PTR *v10; // rcx
  ULONG_PTR v11; // rbx
  PVOID *v12; // rdx
  char v13; // [rsp+30h] [rbp-298h] BYREF
  _BYTE v14[3]; // [rsp+31h] [rbp-297h] BYREF
  int v15; // [rsp+34h] [rbp-294h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-290h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+48h] [rbp-280h] BYREF
  _QWORD v18[3]; // [rsp+60h] [rbp-268h] BYREF
  _BYTE v19[56]; // [rsp+78h] [rbp-250h] BYREF
  unsigned __int8 v20[512]; // [rsp+B0h] [rbp-218h] BYREF

  v4 = *(unsigned __int16 *)(a2 + 6) + 8;
  result = AllocCallbackMessage(56, 1u, v4, v20, 1, 0x200uLL);
  v7 = result;
  v16[1] = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
    if ( v7 != v19 && v7 != v20 )
      PushW32ThreadLock((__int64)v7, v18, (__int64)Win32FreePool);
    *((_QWORD *)v7 + 5) = a1;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v7, a2, v4, (void **)v7 + 6) < 0 )
      goto LABEL_15;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v14,
      gdwInAtomicOperation);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
    EtwTraceBeginCallback(65LL);
    *((_QWORD *)v7 + 2) = 0LL;
    v8 = KeUserModeCallback(65LL, v7, *(unsigned int *)v7, v16, &v15);
    EtwTraceEndCallback(65LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v14, v9);
    if ( v8 < 0 )
      goto LABEL_15;
    if ( v15 == 24 )
    {
      v10 = (ULONG_PTR *)v16[0];
      if ( (unsigned __int64)(v16[0] + 8LL) < v16[0] || v16[0] + 8LL > MmUserProbeAddress )
        v10 = (ULONG_PTR *)MmUserProbeAddress;
      v11 = *v10;
      RegionSize[1] = *v10;
    }
    else
    {
LABEL_15:
      LODWORD(v11) = 0;
    }
    if ( v7 != v19 && v7 != v20 )
    {
      v12 = (PVOID *)(v7 + 32);
      if ( *((_QWORD *)v7 + 4) )
      {
        RegionSize[0] = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v12, RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v18, (__int64)v12);
    }
    return (unsigned __int8 *)(unsigned int)v11;
  }
  return result;
}
