/*
 * XREFs of SfnINDEVICECHANGE @ 0x1C00EE530
 * Callers:
 *     <none>
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
 */

__int64 __fastcall SfnINDEVICECHANGE(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r13
  __int64 v13; // r14
  unsigned int v14; // r15d
  __int64 v15; // rdx
  unsigned __int8 *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 *v28; // rcx
  __int64 v29; // rdi
  char v31; // [rsp+30h] [rbp-348h] BYREF
  _BYTE v32[3]; // [rsp+31h] [rbp-347h] BYREF
  int v33; // [rsp+34h] [rbp-344h]
  _DWORD v34[6]; // [rsp+38h] [rbp-340h] BYREF
  unsigned __int8 *v35; // [rsp+50h] [rbp-328h]
  __int128 v36; // [rsp+58h] [rbp-320h]
  __int64 v37; // [rsp+68h] [rbp-310h]
  unsigned __int64 v38; // [rsp+78h] [rbp-300h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v40; // [rsp+88h] [rbp-2F0h] BYREF
  volatile signed __int32 *v41; // [rsp+90h] [rbp-2E8h]
  __int64 v42; // [rsp+98h] [rbp-2E0h]
  __int64 v43; // [rsp+A0h] [rbp-2D8h]
  _QWORD v44[4]; // [rsp+C0h] [rbp-2B8h] BYREF
  unsigned __int8 v45[96]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v46[512]; // [rsp+140h] [rbp-238h] BYREF
  int v47; // [rsp+3B0h] [rbp+38h]

  v33 = a2;
  v47 = a7 & 1;
  v10 = (unsigned __int16)a3 & 0x8000;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v36 = 0uLL;
  v37 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  v14 = 0;
  if ( v10 && a4 && a4 >= MmSystemRangeStart )
    v14 = *a4;
  v16 = AllocCallbackMessage(96, 1u, v14, v46, 1, 0x200uLL);
  v35 = v16;
  if ( !v16 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  if ( v16 != v45 && v16 != v46 )
    PushW32ThreadLock((__int64)v16, v44, (__int64)Win32FreePool);
  *((_QWORD *)v16 + 5) = v13;
  *((_DWORD *)v16 + 12) = v33;
  *((_QWORD *)v16 + 7) = a3;
  if ( v14 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v16, (unsigned __int64)a4, *a4, (void **)v16 + 10) < 0 )
      goto LABEL_32;
  }
  else
  {
    *((_QWORD *)v16 + 10) = a4;
  }
  *((_DWORD *)v16 + 22) = v47;
  *((_QWORD *)v16 + 8) = a5;
  *((_QWORD *)v16 + 9) = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17);
  v40 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v40;
  v41 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v19 = *(_QWORD *)(v12 + 472);
  v36 = *(_OWORD *)(v19 + 64);
  v37 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v13;
  if ( a1 )
    v20 = *(_QWORD *)a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v32,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
  EtwTraceBeginCallback(28LL);
  *((_QWORD *)v16 + 2) = 0LL;
  v22 = KeUserModeCallback(28LL, v16, *(unsigned int *)v16, &v38, v34);
  EtwTraceEndCallback(28LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v32, v23);
  ThreadUnlock1(v25, v24, v26);
  v27 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v27 + 64) = v36;
  *(_QWORD *)(v27 + 80) = v37;
  if ( v22 >= 0 && v34[0] == 24 )
  {
    v28 = (__int64 *)v38;
    if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
      v28 = (__int64 *)MmUserProbeAddress;
    v29 = *v28;
    v43 = *v28;
    goto LABEL_25;
  }
LABEL_32:
  v29 = 0LL;
LABEL_25:
  if ( v16 != v45 && v16 != v46 )
  {
    if ( *((_QWORD *)v16 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v16 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v44);
  }
  return v29;
}
