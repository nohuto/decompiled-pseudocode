/*
 * XREFs of SfnINDEVICECHANGE @ 0x1C00B2DC0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
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

__int64 __fastcall SfnINDEVICECHANGE(_QWORD *a1, int a2, __int64 a3, char *a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // r15
  __int64 v16; // r14
  unsigned int v17; // r12d
  __int64 v18; // rdx
  unsigned __int8 *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 *v39; // rcx
  __int64 v40; // rdi
  PVOID *v42; // rdx
  char v43; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v44[3]; // [rsp+31h] [rbp-357h] BYREF
  int v45; // [rsp+34h] [rbp-354h]
  _DWORD v46[6]; // [rsp+38h] [rbp-350h] BYREF
  unsigned __int8 *v47; // [rsp+50h] [rbp-338h]
  unsigned __int64 v48; // [rsp+60h] [rbp-328h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-320h] BYREF
  __int64 v50; // [rsp+70h] [rbp-318h] BYREF
  _QWORD *v51; // [rsp+78h] [rbp-310h]
  __int64 v52; // [rsp+80h] [rbp-308h]
  __int128 v53; // [rsp+88h] [rbp-300h]
  __int64 v54; // [rsp+98h] [rbp-2F0h]
  _QWORD v55[7]; // [rsp+A0h] [rbp-2E8h] BYREF
  __int128 v56; // [rsp+D8h] [rbp-2B0h]
  unsigned __int8 v57[96]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int8 v58[512]; // [rsp+150h] [rbp-238h] BYREF
  int v59; // [rsp+3C0h] [rbp+38h]

  v45 = a2;
  v59 = a7 & 1;
  v10 = (unsigned __int16)a3 & 0x8000;
  memset(v57, 0, sizeof(v57));
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0uLL;
  v54 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v16 = 0LL;
  v17 = 0;
  if ( v10 && a4 && a4 >= MmSystemRangeStart )
    v17 = *(_DWORD *)a4;
  v19 = AllocCallbackMessage(96, 1u, v17, v58, 1, 0x200uLL);
  v47 = v19;
  if ( !v19 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v20, v21);
  memset(v55, 0, 24);
  if ( v19 != v57 && v19 != v58 )
    PushW32ThreadLock((__int64)v19, v55, (__int64)Win32FreePool, v24);
  *((_QWORD *)v19 + 5) = v16;
  *((_DWORD *)v19 + 12) = v45;
  *((_QWORD *)v19 + 7) = a3;
  if ( v17 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v19, a4, *(_DWORD *)a4, (void **)v19 + 10) < 0 )
      goto LABEL_32;
  }
  else
  {
    *((_QWORD *)v19 + 10) = a4;
  }
  *((_DWORD *)v19 + 22) = v59;
  *((_QWORD *)v19 + 8) = a5;
  *((_QWORD *)v19 + 9) = a6;
  v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24);
  v50 = *(_QWORD *)(v25 + 408);
  *(_QWORD *)(v25 + 408) = &v50;
  v51 = a1;
  if ( a1 )
    HMLockObject(a1);
  v28 = *(_QWORD *)(v15 + 472);
  v56 = *(_OWORD *)(v28 + 64);
  v53 = v56;
  v54 = *(_QWORD *)(v28 + 80);
  *(_QWORD *)(v28 + 72) = v16;
  if ( a1 )
    v29 = *a1;
  else
    v29 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 472) + 64LL) = v29;
  if ( a1 )
    v30 = *(_QWORD *)(a1[5] + 224LL);
  else
    v30 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 472) + 80LL) = v30;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v44,
    gdwInAtomicOperation,
    v26,
    v27);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  EtwTraceBeginCallback(28LL);
  *((_QWORD *)v19 + 2) = 0LL;
  v31 = KeUserModeCallback(28LL, v19, *(unsigned int *)v19, &v48, v46);
  EtwTraceEndCallback(28LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v44,
    v32,
    v33,
    v34);
  ThreadUnlock1(v36, v35, v37);
  v38 = *(_QWORD *)(v15 + 472);
  *(_OWORD *)(v38 + 64) = v56;
  *(_QWORD *)(v38 + 80) = v54;
  if ( v31 >= 0 && v46[0] == 24 )
  {
    v39 = (__int64 *)v48;
    if ( v48 + 8 < v48 || v48 + 8 > MmUserProbeAddress )
      v39 = (__int64 *)MmUserProbeAddress;
    v40 = *v39;
    v55[3] = *v39;
    goto LABEL_25;
  }
LABEL_32:
  v40 = 0LL;
LABEL_25:
  if ( v19 != v57 && v19 != v58 )
  {
    v42 = (PVOID *)(v19 + 32);
    if ( *((_QWORD *)v19 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v42, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v55, (__int64)v42, v23, v24);
  }
  return v40;
}
