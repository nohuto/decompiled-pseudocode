/*
 * XREFs of SfnPOPTINLPUINT @ 0x1C021BE40
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

unsigned __int8 *__fastcall SfnPOPTINLPUINT(_QWORD *a1, unsigned int a2, __int64 a3, char *a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  __int64 v18; // rsi
  unsigned int v19; // edx
  unsigned __int64 v20; // rax
  unsigned __int8 *result; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // edi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 *v40; // rcx
  __int64 v41; // rdi
  PVOID *v42; // rdx
  char v43; // [rsp+30h] [rbp-368h] BYREF
  _BYTE v44[3]; // [rsp+31h] [rbp-367h] BYREF
  unsigned int v45; // [rsp+34h] [rbp-364h]
  unsigned __int8 *v46; // [rsp+38h] [rbp-360h]
  _DWORD v47[8]; // [rsp+40h] [rbp-358h] BYREF
  unsigned __int64 v48; // [rsp+60h] [rbp-338h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-330h] BYREF
  __int64 v50; // [rsp+70h] [rbp-328h] BYREF
  _QWORD *v51; // [rsp+78h] [rbp-320h]
  __int64 v52; // [rsp+80h] [rbp-318h]
  __int128 v53; // [rsp+88h] [rbp-310h]
  __int64 v54; // [rsp+98h] [rbp-300h]
  _QWORD v55[7]; // [rsp+A0h] [rbp-2F8h] BYREF
  __int128 v56; // [rsp+D8h] [rbp-2C0h]
  _DWORD v57[24]; // [rsp+F0h] [rbp-2A8h] BYREF
  unsigned __int8 v58[512]; // [rsp+150h] [rbp-248h] BYREF

  memset(v57, 0, 0x58uLL);
  v10 = (unsigned __int8 *)v57;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0uLL;
  v54 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  v17 = ThreadWin32Thread;
  if ( a1 )
    v18 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v18 = 0LL;
  if ( a4 )
  {
    v19 = 1;
    v20 = 4LL * (unsigned int)a3;
    if ( v20 > 0xFFFFFFFF )
      goto LABEL_36;
  }
  else
  {
    LODWORD(v20) = 0;
    v19 = 0;
  }
  v45 = v20;
  if ( v19 )
  {
    result = AllocCallbackMessage(88, v19, (unsigned int)v20, v58, 1, 0x200uLL);
    v10 = result;
    v46 = result;
    if ( !result )
      return result;
  }
  else
  {
    v10 = (unsigned __int8 *)v57;
    v46 = (unsigned __int8 *)v57;
    memset(&v57[1], 0, 0x54uLL);
    v57[0] = 88;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24);
  memset(v55, 0, 24);
  if ( v10 != (unsigned __int8 *)v57 && v10 != v58 )
    PushW32ThreadLock((__int64)v10, v55, (__int64)Win32FreePool, v16);
  *((_QWORD *)v10 + 5) = v18;
  *((_DWORD *)v10 + 12) = a2;
  *((_QWORD *)v10 + 7) = a3;
  if ( a4 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v10, a4, v45, (void **)v10 + 8) < 0 )
      goto LABEL_36;
  }
  else
  {
    *((_QWORD *)v10 + 8) = 0LL;
  }
  *((_QWORD *)v10 + 9) = a5;
  *((_QWORD *)v10 + 10) = a6;
  v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v15, v16);
  v50 = *(_QWORD *)(v26 + 408);
  *(_QWORD *)(v26 + 408) = &v50;
  v51 = a1;
  if ( a1 )
    HMLockObject(a1);
  v29 = *(_QWORD *)(v17 + 472);
  v56 = *(_OWORD *)(v29 + 64);
  v53 = v56;
  v54 = *(_QWORD *)(v29 + 80);
  *(_QWORD *)(v29 + 72) = v18;
  if ( a1 )
    v30 = *a1;
  else
    v30 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v17 + 472) + 64LL) = v30;
  if ( a1 )
    v31 = *(_QWORD *)(a1[5] + 224LL);
  else
    v31 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v17 + 472) + 80LL) = v31;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v44,
    gdwInAtomicOperation,
    v27,
    v28);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  EtwTraceBeginCallback(36LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v32 = KeUserModeCallback(36LL, v10, *(unsigned int *)v10, &v48, v47);
  EtwTraceEndCallback(36LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v44,
    v33,
    v34,
    v35);
  ThreadUnlock1(v37, v36, v38);
  v39 = *(_QWORD *)(v17 + 472);
  *(_OWORD *)(v39 + 64) = v56;
  *(_QWORD *)(v39 + 80) = v54;
  if ( v32 >= 0 && v47[0] == 24 )
  {
    v40 = (__int64 *)v48;
    if ( v48 + 8 < v48 || v48 + 8 > MmUserProbeAddress )
      v40 = (__int64 *)MmUserProbeAddress;
    v41 = *v40;
    v55[3] = *v40;
    goto LABEL_37;
  }
LABEL_36:
  v41 = 0LL;
LABEL_37:
  if ( v10 != (unsigned __int8 *)v57 && v10 != v58 )
  {
    v42 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v42, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v55, (__int64)v42, v15, v16);
  }
  return (unsigned __int8 *)v41;
}
