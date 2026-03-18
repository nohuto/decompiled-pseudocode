/*
 * XREFs of SfnCOPYDATA @ 0x1C00FA200
 * Callers:
 *     xxxSendShutdownData @ 0x1C01E264C (xxxSendShutdownData.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0020A2C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0020B54 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
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
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rdi
  char v29; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v30[7]; // [rsp+31h] [rbp-357h] BYREF
  unsigned __int8 *v31; // [rsp+38h] [rbp-350h]
  int v32; // [rsp+40h] [rbp-348h]
  _DWORD v33[5]; // [rsp+44h] [rbp-344h] BYREF
  __int128 v34; // [rsp+58h] [rbp-330h]
  __int64 v35; // [rsp+68h] [rbp-320h]
  unsigned __int64 v36; // [rsp+78h] [rbp-310h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-308h] BYREF
  __int64 v38; // [rsp+88h] [rbp-300h] BYREF
  volatile signed __int32 *v39; // [rsp+90h] [rbp-2F8h]
  __int64 v40; // [rsp+98h] [rbp-2F0h]
  __int64 v41; // [rsp+A0h] [rbp-2E8h]
  _QWORD v42[4]; // [rsp+C0h] [rbp-2C8h] BYREF
  _DWORD v43[28]; // [rsp+E0h] [rbp-2A8h] BYREF
  unsigned __int8 v44[512]; // [rsp+150h] [rbp-238h] BYREF

  v32 = a2;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v34 = 0uLL;
  v35 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v10 = ThreadWin32Thread;
  if ( a1 )
    v11 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v11 = 0LL;
  if ( a4 )
    v12 = *(_DWORD *)(a4 + 8);
  else
    v12 = 0;
  if ( a4 )
  {
    v14 = AllocCallbackMessage(112, a4 != 0, v12, v44, 1, 0x200uLL);
    v31 = v14;
    if ( !v14 )
      return 0LL;
  }
  else
  {
    v14 = (unsigned __int8 *)v43;
    v31 = (unsigned __int8 *)v43;
    memset(v43, 0, sizeof(v43));
    v43[0] = 112;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
  if ( v14 != (unsigned __int8 *)v43 && v14 != v44 )
    PushW32ThreadLock((__int64)v14, v42, (__int64)Win32FreePool);
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
  v38 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v38;
  v39 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v10 + 472);
  v34 = *(_OWORD *)(v17 + 64);
  v35 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v11;
  if ( a1 )
    v18 = *(_QWORD *)a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v10 + 472) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v10 + 472) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v30,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  EtwTraceBeginCallback(0LL);
  *((_QWORD *)v14 + 2) = 0LL;
  v20 = KeUserModeCallback(0LL, v14, *(unsigned int *)v14, &v36, v33);
  EtwTraceEndCallback(0LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30, v21);
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v10 + 472);
  *(_OWORD *)(v25 + 64) = v34;
  *(_QWORD *)(v25 + 80) = v35;
  if ( v20 >= 0 && v33[0] == 24 )
  {
    v26 = (__int64 *)v36;
    if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
      v26 = (__int64 *)MmUserProbeAddress;
    v27 = *v26;
    v41 = *v26;
    goto LABEL_27;
  }
LABEL_34:
  v27 = 0LL;
LABEL_27:
  if ( v14 != (unsigned __int8 *)v43 && v14 != v44 )
  {
    if ( *((_QWORD *)v14 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v14 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v42);
  }
  return v27;
}
