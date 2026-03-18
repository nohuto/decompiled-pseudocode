/*
 * XREFs of ClientLoadLibrary @ 0x1C00529C0
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C005383C (xxxLoadHmodIndex.c)
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

__int64 __fastcall ClientLoadLibrary(void **a1, void **a2)
{
  unsigned __int8 *v4; // rdi
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // rcx
  __int64 v10; // rbx
  PVOID *v12; // rdx
  char v13; // [rsp+30h] [rbp-2B8h] BYREF
  _BYTE v14[3]; // [rsp+31h] [rbp-2B7h] BYREF
  int v15; // [rsp+34h] [rbp-2B4h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-2B0h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-2A0h] BYREF
  _QWORD v18[6]; // [rsp+50h] [rbp-298h] BYREF
  unsigned __int8 v19[72]; // [rsp+80h] [rbp-268h] BYREF
  unsigned __int8 v20[512]; // [rsp+D0h] [rbp-218h] BYREF

  memset(v19, 0, sizeof(v19));
  v4 = (unsigned __int8 *)AllocCallbackMessage(
                            0x48u,
                            2u,
                            *((unsigned __int16 *)a2 + 1) + (unsigned __int64)*((unsigned __int16 *)a1 + 1),
                            v20,
                            1,
                            0x200uLL);
  v16[1] = v4;
  if ( !v4 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  memset(v18, 0, 24);
  if ( v4 != v19 && v4 != v20 )
    PushW32ThreadLock((__int64)v4, v18, (__int64)Win32FreePool);
  *((_WORD *)v4 + 20) = *(_WORD *)a1;
  *((_WORD *)v4 + 21) = *((_WORD *)a1 + 1);
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v4, a1[1], *(unsigned __int16 *)a1 + 2, (void **)v4 + 6) < 0 )
    goto LABEL_18;
  *((_WORD *)v4 + 28) = *(_WORD *)a2;
  *((_WORD *)v4 + 29) = *((_WORD *)a2 + 1);
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v4, a2[1], *(unsigned __int16 *)a2 + 2, (void **)v4 + 8) < 0 )
    goto LABEL_18;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v14,
    gdwInAtomicOperation,
    v5);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  EtwTraceBeginCallback(75LL);
  *((_QWORD *)v4 + 2) = 0LL;
  v6 = KeUserModeCallback(75LL, v4, *(unsigned int *)v4, v16, &v15);
  EtwTraceEndCallback(75LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v14,
    v7,
    v8);
  if ( v6 < 0 )
    goto LABEL_18;
  if ( v15 == 24 )
  {
    v9 = (__int64 *)v16[0];
    if ( (unsigned __int64)(v16[0] + 8LL) < v16[0] || v16[0] + 8LL > MmUserProbeAddress )
      v9 = (__int64 *)MmUserProbeAddress;
    v10 = *v9;
    v18[3] = *v9;
  }
  else
  {
LABEL_18:
    v10 = 0LL;
  }
  if ( v4 != v19 && v4 != v20 )
  {
    v12 = (PVOID *)(v4 + 32);
    if ( *((_QWORD *)v4 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v12, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v18, (__int64)v12, v5);
  }
  return v10;
}
