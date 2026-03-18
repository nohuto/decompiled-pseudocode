/*
 * XREFs of ClientLoadLibrary @ 0x1C00D8938
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C00D86B0 (xxxLoadHmodIndex.c)
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

ULONG_PTR __fastcall ClientLoadLibrary(unsigned __int16 *a1, unsigned __int16 *a2)
{
  __int64 v4; // rdx
  unsigned __int8 *v5; // rdi
  int v6; // ebx
  __int64 v7; // rdx
  ULONG_PTR *v8; // rcx
  ULONG_PTR v9; // rbx
  char v11; // [rsp+30h] [rbp-2B8h] BYREF
  _BYTE v12[3]; // [rsp+31h] [rbp-2B7h] BYREF
  int v13; // [rsp+34h] [rbp-2B4h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-2B0h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+48h] [rbp-2A0h] BYREF
  _QWORD v16[4]; // [rsp+60h] [rbp-288h] BYREF
  unsigned __int8 v17[80]; // [rsp+80h] [rbp-268h] BYREF
  unsigned __int8 v18[512]; // [rsp+D0h] [rbp-218h] BYREF

  v5 = AllocCallbackMessage(72, 2u, a1[1] + (unsigned int)a2[1], v18, 1, 0x200uLL);
  v14[1] = v5;
  if ( !v5 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  if ( v5 != v17 && v5 != v18 )
    PushW32ThreadLock((__int64)v5, v16, (__int64)Win32FreePool);
  *((_WORD *)v5 + 20) = *a1;
  *((_WORD *)v5 + 21) = a1[1];
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v5, *((_QWORD *)a1 + 1), (unsigned int)*a1 + 2, (void **)v5 + 6) < 0 )
    goto LABEL_18;
  *((_WORD *)v5 + 28) = *a2;
  *((_WORD *)v5 + 29) = a2[1];
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v5, *((_QWORD *)a2 + 1), (unsigned int)*a2 + 2, (void **)v5 + 8) < 0 )
    goto LABEL_18;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v12,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  EtwTraceBeginCallback(75LL);
  *((_QWORD *)v5 + 2) = 0LL;
  v6 = KeUserModeCallback(75LL, v5, *(unsigned int *)v5, v14, &v13);
  EtwTraceEndCallback(75LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v12, v7);
  if ( v6 < 0 )
    goto LABEL_18;
  if ( v13 == 24 )
  {
    v8 = (ULONG_PTR *)v14[0];
    if ( (unsigned __int64)(v14[0] + 8LL) < v14[0] || v14[0] + 8LL > MmUserProbeAddress )
      v8 = (ULONG_PTR *)MmUserProbeAddress;
    v9 = *v8;
    RegionSize[1] = *v8;
  }
  else
  {
LABEL_18:
    v9 = 0LL;
  }
  if ( v5 != v17 && v5 != v18 )
  {
    if ( *((_QWORD *)v5 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v16);
  }
  return v9;
}
