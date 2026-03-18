/*
 * XREFs of SfnCOPYDATA @ 0x1C01191C0
 * Callers:
 *     xxxSendShutdownData @ 0x1C0208490 (xxxSendShutdownData.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C001A674 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C001A718 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall SfnCOPYDATA(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // r15
  __int64 v11; // r14
  unsigned int v12; // r12d
  __int64 v13; // rdx
  unsigned __int8 *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rdi
  PVOID *v27; // rdx
  char v29; // [rsp+30h] [rbp-368h] BYREF
  _BYTE v30[7]; // [rsp+31h] [rbp-367h] BYREF
  unsigned __int8 *v31; // [rsp+38h] [rbp-360h]
  int v32; // [rsp+40h] [rbp-358h]
  _DWORD v33[7]; // [rsp+44h] [rbp-354h] BYREF
  unsigned __int64 v34; // [rsp+60h] [rbp-338h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-330h] BYREF
  __int64 v36; // [rsp+70h] [rbp-328h] BYREF
  volatile signed __int32 *v37; // [rsp+78h] [rbp-320h]
  __int64 v38; // [rsp+80h] [rbp-318h]
  __int128 v39; // [rsp+88h] [rbp-310h]
  __int64 v40; // [rsp+98h] [rbp-300h]
  __int64 v41; // [rsp+A0h] [rbp-2F8h]
  __int128 v42; // [rsp+C0h] [rbp-2D8h]
  _QWORD v43[4]; // [rsp+D0h] [rbp-2C8h] BYREF
  _DWORD v44[28]; // [rsp+F0h] [rbp-2A8h] BYREF
  unsigned __int8 v45[512]; // [rsp+160h] [rbp-238h] BYREF

  v32 = a2;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0uLL;
  v40 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v10 = ThreadWin32Thread;
  if ( a1 )
    v11 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v11 = 0LL;
  if ( a4 )
    v12 = *(_DWORD *)(a4 + 8);
  else
    v12 = 0;
  if ( a4 )
  {
    v14 = AllocCallbackMessage(112, a4 != 0, v12, v45, 1, 0x200uLL);
    v31 = v14;
    if ( !v14 )
      return 0LL;
  }
  else
  {
    v14 = (unsigned __int8 *)v44;
    v31 = (unsigned __int8 *)v44;
    memset(v44, 0, sizeof(v44));
    v44[0] = 112;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
  if ( v14 != (unsigned __int8 *)v44 && v14 != v45 )
    PushW32ThreadLock((__int64)v14, v43, (__int64)Win32FreePool);
  *((_QWORD *)v14 + 5) = v11;
  *((_DWORD *)v14 + 12) = v32;
  *((_QWORD *)v14 + 7) = a3;
  if ( a4 )
  {
    *((_DWORD *)v14 + 16) = 1;
    *(_DWORD *)(a4 + 12) = 0;
    *(_OWORD *)(v14 + 72) = *(_OWORD *)a4;
    *((_QWORD *)v14 + 11) = *(_QWORD *)(a4 + 16);
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v14, *(_QWORD *)(a4 + 16), v12, (void **)v14 + 11) < 0 )
      goto LABEL_34;
  }
  else
  {
    *((_DWORD *)v14 + 16) = 0;
  }
  *((_QWORD *)v14 + 12) = a5;
  *((_QWORD *)v14 + 13) = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v36 = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = &v36;
  v37 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v10 + 480);
  v42 = *(_OWORD *)(v17 + 64);
  v39 = v42;
  v40 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v11;
  if ( a1 )
    v18 = *(_QWORD *)a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v10 + 480) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v10 + 480) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v30,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  EtwTraceBeginCallback(0LL);
  *((_QWORD *)v14 + 2) = 0LL;
  v20 = KeUserModeCallback(0LL, v14, *(unsigned int *)v14, &v34, v33);
  EtwTraceEndCallback(0LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30, v21);
  ThreadUnlock1(v23, v22);
  v24 = *(_QWORD *)(v10 + 480);
  *(_OWORD *)(v24 + 64) = v42;
  *(_QWORD *)(v24 + 80) = v40;
  if ( v20 >= 0 && v33[0] == 24 )
  {
    v25 = (__int64 *)v34;
    if ( v34 + 8 < v34 || v34 + 8 > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v26 = *v25;
    v41 = *v25;
    goto LABEL_27;
  }
LABEL_34:
  v26 = 0LL;
LABEL_27:
  if ( v14 != (unsigned __int8 *)v44 && v14 != v45 )
  {
    v27 = (PVOID *)(v14 + 32);
    if ( *((_QWORD *)v14 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v27, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v43, (__int64)v27);
  }
  return v26;
}
