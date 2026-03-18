/*
 * XREFs of ClientLoadLibrary @ 0x1C00B1B60
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C00B29DC (xxxLoadHmodIndex.c)
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

__int64 __fastcall ClientLoadLibrary(void **a1, void **a2)
{
  __int64 v4; // rdx
  unsigned __int8 *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rcx
  __int64 v16; // rbx
  PVOID *v18; // rdx
  char v19; // [rsp+30h] [rbp-2B8h] BYREF
  _BYTE v20[3]; // [rsp+31h] [rbp-2B7h] BYREF
  int v21; // [rsp+34h] [rbp-2B4h] BYREF
  _QWORD v22[2]; // [rsp+38h] [rbp-2B0h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-2A0h] BYREF
  _QWORD v24[6]; // [rsp+50h] [rbp-298h] BYREF
  unsigned __int8 v25[72]; // [rsp+80h] [rbp-268h] BYREF
  unsigned __int8 v26[512]; // [rsp+D0h] [rbp-218h] BYREF

  memset(v25, 0, sizeof(v25));
  v5 = (unsigned __int8 *)AllocCallbackMessage(
                            0x48u,
                            2u,
                            *((unsigned __int16 *)a2 + 1) + (unsigned __int64)*((unsigned __int16 *)a1 + 1),
                            v26,
                            1,
                            0x200uLL);
  v22[1] = v5;
  if ( !v5 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v6, v7);
  memset(v24, 0, 24);
  if ( v5 != v25 && v5 != v26 )
    PushW32ThreadLock((__int64)v5, v24, (__int64)Win32FreePool, v8);
  *((_WORD *)v5 + 20) = *(_WORD *)a1;
  *((_WORD *)v5 + 21) = *((_WORD *)a1 + 1);
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v5, a1[1], *(unsigned __int16 *)a1 + 2, (void **)v5 + 6) < 0 )
    goto LABEL_18;
  *((_WORD *)v5 + 28) = *(_WORD *)a2;
  *((_WORD *)v5 + 29) = *((_WORD *)a2 + 1);
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v5, a2[1], *(unsigned __int16 *)a2 + 2, (void **)v5 + 8) < 0 )
    goto LABEL_18;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v20,
    gdwInAtomicOperation,
    v9,
    v10);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
  EtwTraceBeginCallback(75LL);
  *((_QWORD *)v5 + 2) = 0LL;
  v11 = KeUserModeCallback(75LL, v5, *(unsigned int *)v5, v22, &v21);
  EtwTraceEndCallback(75LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v20,
    v12,
    v13,
    v14);
  if ( v11 < 0 )
    goto LABEL_18;
  if ( v21 == 24 )
  {
    v15 = (__int64 *)v22[0];
    if ( (unsigned __int64)(v22[0] + 8LL) < v22[0] || v22[0] + 8LL > MmUserProbeAddress )
      v15 = (__int64 *)MmUserProbeAddress;
    v16 = *v15;
    v24[3] = *v15;
  }
  else
  {
LABEL_18:
    v16 = 0LL;
  }
  if ( v5 != v25 && v5 != v26 )
  {
    v18 = (PVOID *)(v5 + 32);
    if ( *((_QWORD *)v5 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v18, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v24, (__int64)v18, v9, v10);
  }
  return v16;
}
