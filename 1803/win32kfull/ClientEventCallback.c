/*
 * XREFs of ClientEventCallback @ 0x1C01D8828
 * Callers:
 *     xxxEventWndProc @ 0x1C006C550 (xxxEventWndProc.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0020A2C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0020B54 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
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
  char v12; // [rsp+30h] [rbp-298h] BYREF
  _BYTE v13[3]; // [rsp+31h] [rbp-297h] BYREF
  int v14; // [rsp+34h] [rbp-294h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-290h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+48h] [rbp-280h] BYREF
  _QWORD v17[3]; // [rsp+60h] [rbp-268h] BYREF
  _BYTE v18[56]; // [rsp+78h] [rbp-250h] BYREF
  unsigned __int8 v19[512]; // [rsp+B0h] [rbp-218h] BYREF

  v4 = *(unsigned __int16 *)(a2 + 6) + 8;
  result = AllocCallbackMessage(56, 1u, v4, v19, 1, 0x200uLL);
  v7 = result;
  v15[1] = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
    if ( v7 != v18 && v7 != v19 )
      PushW32ThreadLock((__int64)v7, v17, (__int64)Win32FreePool);
    *((_QWORD *)v7 + 5) = a1;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v7, a2, v4, (void **)v7 + 6) < 0 )
      goto LABEL_15;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v13,
      gdwInAtomicOperation);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
    EtwTraceBeginCallback(65LL);
    *((_QWORD *)v7 + 2) = 0LL;
    v8 = KeUserModeCallback(65LL, v7, *(unsigned int *)v7, v15, &v14);
    EtwTraceEndCallback(65LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v13, v9);
    if ( v8 < 0 )
      goto LABEL_15;
    if ( v14 == 24 )
    {
      v10 = (ULONG_PTR *)v15[0];
      if ( (unsigned __int64)(v15[0] + 8LL) < v15[0] || v15[0] + 8LL > MmUserProbeAddress )
        v10 = (ULONG_PTR *)MmUserProbeAddress;
      v11 = *v10;
      RegionSize[1] = *v10;
    }
    else
    {
LABEL_15:
      LODWORD(v11) = 0;
    }
    if ( v7 != v18 && v7 != v19 )
    {
      if ( *((_QWORD *)v7 + 4) )
      {
        RegionSize[0] = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v7 + 4, RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v17);
    }
    return (unsigned __int8 *)(unsigned int)v11;
  }
  return result;
}
