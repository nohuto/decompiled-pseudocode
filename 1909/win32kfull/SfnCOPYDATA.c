/*
 * XREFs of SfnCOPYDATA @ 0x1C00570A0
 * Callers:
 *     xxxSendShutdownData @ 0x1C021F914 (xxxSendShutdownData.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
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

__int64 __fastcall SfnCOPYDATA(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // r15
  __int64 v11; // rsi
  unsigned int v12; // r12d
  unsigned __int8 *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // rdi
  PVOID *v29; // rdx
  char v31; // [rsp+30h] [rbp-368h] BYREF
  _BYTE v32[7]; // [rsp+31h] [rbp-367h] BYREF
  unsigned __int8 *v33; // [rsp+38h] [rbp-360h]
  int v34; // [rsp+40h] [rbp-358h]
  _DWORD v35[7]; // [rsp+44h] [rbp-354h] BYREF
  unsigned __int64 v36; // [rsp+60h] [rbp-338h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-330h] BYREF
  __int64 v38; // [rsp+70h] [rbp-328h] BYREF
  _QWORD *v39; // [rsp+78h] [rbp-320h]
  __int64 v40; // [rsp+80h] [rbp-318h]
  __int128 v41; // [rsp+88h] [rbp-310h]
  __int64 v42; // [rsp+98h] [rbp-300h]
  _QWORD v43[7]; // [rsp+A0h] [rbp-2F8h] BYREF
  __int128 v44; // [rsp+D8h] [rbp-2C0h]
  _DWORD v45[28]; // [rsp+F0h] [rbp-2A8h] BYREF
  unsigned __int8 v46[512]; // [rsp+160h] [rbp-238h] BYREF

  v34 = a2;
  memset(v45, 0, sizeof(v45));
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0uLL;
  v42 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v10 = ThreadWin32Thread;
  if ( a1 )
    v11 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v11 = 0LL;
  if ( a4 )
  {
    v12 = *(_DWORD *)(a4 + 8);
    v13 = AllocCallbackMessage(112, 1u, v12, v46, 1, 0x200uLL);
    v33 = v13;
    if ( !v13 )
      return 0LL;
  }
  else
  {
    v12 = 0;
    v13 = (unsigned __int8 *)v45;
    v33 = (unsigned __int8 *)v45;
    memset(&v45[1], 0, 0x6CuLL);
    v45[0] = 112;
  }
  W32GetThreadWin32Thread(KeGetCurrentThread());
  memset(v43, 0, 24);
  if ( v13 != (unsigned __int8 *)v45 && v13 != v46 )
    PushW32ThreadLock((__int64)v13, v43, (__int64)Win32FreePool);
  *((_QWORD *)v13 + 5) = v11;
  *((_DWORD *)v13 + 12) = v34;
  *((_QWORD *)v13 + 7) = a3;
  if ( a4 )
  {
    *((_DWORD *)v13 + 16) = 1;
    *(_DWORD *)(a4 + 12) = 0;
    *(_OWORD *)(v13 + 72) = *(_OWORD *)a4;
    *((_QWORD *)v13 + 11) = *(_QWORD *)(a4 + 16);
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v13, *(char **)(a4 + 16), v12, (void **)v13 + 11) < 0 )
      goto LABEL_32;
  }
  else
  {
    *((_DWORD *)v13 + 16) = 0;
  }
  *((_QWORD *)v13 + 12) = a5;
  *((_QWORD *)v13 + 13) = a6;
  v15 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v38 = *(_QWORD *)(v15 + 408);
  *(_QWORD *)(v15 + 408) = &v38;
  v39 = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v10 + 472);
  v44 = *(_OWORD *)(v17 + 64);
  v41 = v44;
  v42 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v11;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v10 + 472) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224LL);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v10 + 472) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v32,
    gdwInAtomicOperation,
    v16);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
  EtwTraceBeginCallback(0LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v20 = KeUserModeCallback(0LL, v13, *(unsigned int *)v13, &v36, v35);
  EtwTraceEndCallback(0LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v32,
    v21,
    v22);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v10 + 472);
  *(_OWORD *)(v26 + 64) = v44;
  *(_QWORD *)(v26 + 80) = v42;
  if ( v20 >= 0 && v35[0] == 24 )
  {
    v27 = (__int64 *)v36;
    if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
      v27 = (__int64 *)MmUserProbeAddress;
    v28 = *v27;
    v43[3] = *v27;
    goto LABEL_25;
  }
LABEL_32:
  v28 = 0LL;
LABEL_25:
  if ( v13 != (unsigned __int8 *)v45 && v13 != v46 )
  {
    v29 = (PVOID *)(v13 + 32);
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v29, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v43, (__int64)v29, v14);
  }
  return v28;
}
