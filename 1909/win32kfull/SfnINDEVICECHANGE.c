/*
 * XREFs of SfnINDEVICECHANGE @ 0x1C0053C20
 * Callers:
 *     <none>
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

__int64 __fastcall SfnINDEVICECHANGE(_QWORD *a1, int a2, __int64 a3, char *a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned int v14; // r12d
  unsigned __int8 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 *v29; // rcx
  __int64 v30; // rdi
  PVOID *v32; // rdx
  char v33; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v34[3]; // [rsp+31h] [rbp-357h] BYREF
  int v35; // [rsp+34h] [rbp-354h]
  _DWORD v36[6]; // [rsp+38h] [rbp-350h] BYREF
  unsigned __int8 *v37; // [rsp+50h] [rbp-338h]
  unsigned __int64 v38; // [rsp+60h] [rbp-328h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-320h] BYREF
  __int64 v40; // [rsp+70h] [rbp-318h] BYREF
  _QWORD *v41; // [rsp+78h] [rbp-310h]
  __int64 v42; // [rsp+80h] [rbp-308h]
  __int128 v43; // [rsp+88h] [rbp-300h]
  __int64 v44; // [rsp+98h] [rbp-2F0h]
  _QWORD v45[7]; // [rsp+A0h] [rbp-2E8h] BYREF
  __int128 v46; // [rsp+D8h] [rbp-2B0h]
  unsigned __int8 v47[96]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int8 v48[512]; // [rsp+150h] [rbp-238h] BYREF
  int v49; // [rsp+3C0h] [rbp+38h]

  v35 = a2;
  v49 = a7 & 1;
  v10 = (unsigned __int16)a3 & 0x8000;
  memset(v47, 0, sizeof(v47));
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0uLL;
  v44 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  v14 = 0;
  if ( v10 && a4 && a4 >= MmSystemRangeStart )
    v14 = *(_DWORD *)a4;
  v15 = AllocCallbackMessage(96, 1u, v14, v48, 1, 0x200uLL);
  v37 = v15;
  if ( !v15 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  memset(v45, 0, 24);
  if ( v15 != v47 && v15 != v48 )
    PushW32ThreadLock((__int64)v15, v45, (__int64)Win32FreePool);
  *((_QWORD *)v15 + 5) = v13;
  *((_DWORD *)v15 + 12) = v35;
  *((_QWORD *)v15 + 7) = a3;
  if ( v14 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v15, a4, *(_DWORD *)a4, (void **)v15 + 10) < 0 )
      goto LABEL_32;
  }
  else
  {
    *((_QWORD *)v15 + 10) = a4;
  }
  *((_DWORD *)v15 + 22) = v49;
  *((_QWORD *)v15 + 8) = a5;
  *((_QWORD *)v15 + 9) = a6;
  v16 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v40 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v40;
  v41 = a1;
  if ( a1 )
    HMLockObject(a1);
  v18 = *(_QWORD *)(v12 + 472);
  v46 = *(_OWORD *)(v18 + 64);
  v43 = v46;
  v44 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v13;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1[5] + 224LL);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v20;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v34,
    gdwInAtomicOperation,
    v17);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  EtwTraceBeginCallback(28LL);
  *((_QWORD *)v15 + 2) = 0LL;
  v21 = KeUserModeCallback(28LL, v15, *(unsigned int *)v15, &v38, v36);
  EtwTraceEndCallback(28LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v34,
    v22,
    v23);
  ThreadUnlock1(v25, v24, v26);
  v28 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v28 + 64) = v46;
  *(_QWORD *)(v28 + 80) = v44;
  if ( v21 >= 0 && v36[0] == 24 )
  {
    v29 = (__int64 *)v38;
    if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
      v29 = (__int64 *)MmUserProbeAddress;
    v30 = *v29;
    v45[3] = *v29;
    goto LABEL_25;
  }
LABEL_32:
  v30 = 0LL;
LABEL_25:
  if ( v15 != v47 && v15 != v48 )
  {
    v32 = (PVOID *)(v15 + 32);
    if ( *((_QWORD *)v15 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v32, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v45, (__int64)v32, v27);
  }
  return v30;
}
