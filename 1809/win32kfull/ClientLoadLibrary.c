/*
 * XREFs of ClientLoadLibrary @ 0x1C00B622C
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C00B5F5C (xxxLoadHmodIndex.c)
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

ULONG_PTR __fastcall ClientLoadLibrary(unsigned __int16 *a1, unsigned __int16 *a2)
{
  __int64 v4; // rdx
  unsigned __int8 *v5; // rdi
  int v6; // ebx
  __int64 v7; // rdx
  ULONG_PTR *v8; // rcx
  ULONG_PTR v9; // rbx
  PVOID *v11; // rdx
  char v12; // [rsp+30h] [rbp-2B8h] BYREF
  _BYTE v13[3]; // [rsp+31h] [rbp-2B7h] BYREF
  int v14; // [rsp+34h] [rbp-2B4h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-2B0h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+48h] [rbp-2A0h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-288h] BYREF
  unsigned __int8 v18[80]; // [rsp+80h] [rbp-268h] BYREF
  unsigned __int8 v19[512]; // [rsp+D0h] [rbp-218h] BYREF

  v5 = AllocCallbackMessage(72, 2u, a2[1] + (unsigned __int64)a1[1], v19, 1, 0x200uLL);
  v15[1] = v5;
  if ( !v5 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  if ( v5 != v18 && v5 != v19 )
    PushW32ThreadLock((__int64)v5, v17, (__int64)Win32FreePool);
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
    (ReleaseAndReacquirePerObjectLocks *)v13,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  EtwTraceBeginCallback(75LL);
  *((_QWORD *)v5 + 2) = 0LL;
  v6 = KeUserModeCallback(75LL, v5, *(unsigned int *)v5, v15, &v14);
  EtwTraceEndCallback(75LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v13, v7);
  if ( v6 < 0 )
    goto LABEL_18;
  if ( v14 == 24 )
  {
    v8 = (ULONG_PTR *)v15[0];
    if ( (unsigned __int64)(v15[0] + 8LL) < v15[0] || v15[0] + 8LL > MmUserProbeAddress )
      v8 = (ULONG_PTR *)MmUserProbeAddress;
    v9 = *v8;
    RegionSize[1] = *v8;
  }
  else
  {
LABEL_18:
    v9 = 0LL;
  }
  if ( v5 != v18 && v5 != v19 )
  {
    v11 = (PVOID *)(v5 + 32);
    if ( *((_QWORD *)v5 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v11, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v17, (__int64)v11);
  }
  return v9;
}
