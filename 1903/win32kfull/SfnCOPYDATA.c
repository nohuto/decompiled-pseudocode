/*
 * XREFs of SfnCOPYDATA @ 0x1C00B62F0
 * Callers:
 *     xxxSendShutdownData @ 0x1C021FE54 (xxxSendShutdownData.c)
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

__int64 __fastcall SfnCOPYDATA(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r15
  __int64 v14; // rsi
  unsigned int v15; // r12d
  __int64 v16; // rdx
  unsigned __int8 *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 *v37; // rcx
  __int64 v38; // rdi
  PVOID *v39; // rdx
  char v41; // [rsp+30h] [rbp-368h] BYREF
  _BYTE v42[7]; // [rsp+31h] [rbp-367h] BYREF
  unsigned __int8 *v43; // [rsp+38h] [rbp-360h]
  int v44; // [rsp+40h] [rbp-358h]
  _DWORD v45[7]; // [rsp+44h] [rbp-354h] BYREF
  unsigned __int64 v46; // [rsp+60h] [rbp-338h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-330h] BYREF
  __int64 v48; // [rsp+70h] [rbp-328h] BYREF
  _QWORD *v49; // [rsp+78h] [rbp-320h]
  __int64 v50; // [rsp+80h] [rbp-318h]
  __int128 v51; // [rsp+88h] [rbp-310h]
  __int64 v52; // [rsp+98h] [rbp-300h]
  _QWORD v53[7]; // [rsp+A0h] [rbp-2F8h] BYREF
  __int128 v54; // [rsp+D8h] [rbp-2C0h]
  _DWORD v55[28]; // [rsp+F0h] [rbp-2A8h] BYREF
  unsigned __int8 v56[512]; // [rsp+160h] [rbp-238h] BYREF

  v44 = a2;
  memset(v55, 0, sizeof(v55));
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0uLL;
  v52 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  if ( a4 )
  {
    v15 = *(_DWORD *)(a4 + 8);
    v17 = AllocCallbackMessage(112, 1u, v15, v56, 1, 0x200uLL);
    v43 = v17;
    if ( !v17 )
      return 0LL;
  }
  else
  {
    v15 = 0;
    v17 = (unsigned __int8 *)v55;
    v43 = (unsigned __int8 *)v55;
    memset(&v55[1], 0, 0x6CuLL);
    v55[0] = 112;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v18, v19);
  memset(v53, 0, 24);
  if ( v17 != (unsigned __int8 *)v55 && v17 != v56 )
    PushW32ThreadLock((__int64)v17, v53, (__int64)Win32FreePool, v22);
  *((_QWORD *)v17 + 5) = v14;
  *((_DWORD *)v17 + 12) = v44;
  *((_QWORD *)v17 + 7) = a3;
  if ( a4 )
  {
    *((_DWORD *)v17 + 16) = 1;
    *(_DWORD *)(a4 + 12) = 0;
    *(_OWORD *)(v17 + 72) = *(_OWORD *)a4;
    *((_QWORD *)v17 + 11) = *(_QWORD *)(a4 + 16);
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v17, *(char **)(a4 + 16), v15, (void **)v17 + 11) < 0 )
      goto LABEL_32;
  }
  else
  {
    *((_DWORD *)v17 + 16) = 0;
  }
  *((_QWORD *)v17 + 12) = a5;
  *((_QWORD *)v17 + 13) = a6;
  v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22);
  v48 = *(_QWORD *)(v23 + 408);
  *(_QWORD *)(v23 + 408) = &v48;
  v49 = a1;
  if ( a1 )
    HMLockObject(a1);
  v26 = *(_QWORD *)(v13 + 472);
  v54 = *(_OWORD *)(v26 + 64);
  v51 = v54;
  v52 = *(_QWORD *)(v26 + 80);
  *(_QWORD *)(v26 + 72) = v14;
  if ( a1 )
    v27 = *a1;
  else
    v27 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v27;
  if ( a1 )
    v28 = *(_QWORD *)(a1[5] + 224LL);
  else
    v28 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v28;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v42,
    gdwInAtomicOperation,
    v24,
    v25);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  EtwTraceBeginCallback(0LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v29 = KeUserModeCallback(0LL, v17, *(unsigned int *)v17, &v46, v45);
  EtwTraceEndCallback(0LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v42,
    v30,
    v31,
    v32);
  ThreadUnlock1(v34, v33, v35);
  v36 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v36 + 64) = v54;
  *(_QWORD *)(v36 + 80) = v52;
  if ( v29 >= 0 && v45[0] == 24 )
  {
    v37 = (__int64 *)v46;
    if ( v46 + 8 < v46 || v46 + 8 > MmUserProbeAddress )
      v37 = (__int64 *)MmUserProbeAddress;
    v38 = *v37;
    v53[3] = *v37;
    goto LABEL_25;
  }
LABEL_32:
  v38 = 0LL;
LABEL_25:
  if ( v17 != (unsigned __int8 *)v55 && v17 != v56 )
  {
    v39 = (PVOID *)(v17 + 32);
    if ( *((_QWORD *)v17 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v39, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v53, (__int64)v39, v21, v22);
  }
  return v38;
}
