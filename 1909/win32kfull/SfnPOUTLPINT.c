/*
 * XREFs of SfnPOUTLPINT @ 0x1C021BDC0
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
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0057A5C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

unsigned __int8 *__fastcall SfnPOUTLPINT(
        _QWORD *a1,
        int a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // r8
  __int64 v16; // r14
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  SIZE_T v19; // r13
  unsigned __int8 *result; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // r8d
  void *v24; // r12
  __int64 v25; // rdx
  int v26; // r11d
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // edi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 *v39; // rcx
  __int64 v40; // rdi
  ULONG64 v41; // rcx
  PVOID *v42; // rdx
  char v43; // [rsp+30h] [rbp-3A8h] BYREF
  _BYTE v44[3]; // [rsp+31h] [rbp-3A7h] BYREF
  unsigned int v45; // [rsp+34h] [rbp-3A4h]
  unsigned __int8 *v46; // [rsp+38h] [rbp-3A0h]
  _DWORD v47[8]; // [rsp+40h] [rbp-398h] BYREF
  unsigned __int64 v48; // [rsp+60h] [rbp-378h] BYREF
  void *v49[2]; // [rsp+68h] [rbp-370h]
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-350h] BYREF
  __int64 v51; // [rsp+90h] [rbp-348h] BYREF
  _QWORD *v52; // [rsp+98h] [rbp-340h]
  __int64 v53; // [rsp+A0h] [rbp-338h]
  __int128 v54; // [rsp+A8h] [rbp-330h]
  __int64 v55; // [rsp+B8h] [rbp-320h]
  _QWORD v56[3]; // [rsp+C0h] [rbp-318h] BYREF
  __int128 v57; // [rsp+D8h] [rbp-300h]
  volatile void *Address; // [rsp+E8h] [rbp-2F0h]
  __int64 v59; // [rsp+F0h] [rbp-2E8h]
  __int128 v60; // [rsp+118h] [rbp-2C0h]
  volatile void *v61; // [rsp+128h] [rbp-2B0h]
  unsigned __int8 v62[96]; // [rsp+130h] [rbp-2A8h] BYREF
  unsigned __int8 v63[512]; // [rsp+190h] [rbp-248h] BYREF

  v49[0] = a4;
  memset(v62, 0, sizeof(v62));
  v11 = v62;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0uLL;
  v55 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13);
  v16 = ThreadWin32Thread;
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v17 = 0LL;
  v18 = 4LL * (unsigned int)a3;
  if ( v18 > 0xFFFFFFFF )
    goto LABEL_38;
  v45 = 4 * a3;
  v19 = (unsigned int)v18;
  result = AllocCallbackMessage(96, 1u, (unsigned int)v18, v63, 0, 0x200uLL);
  v11 = result;
  v46 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22);
  memset(v56, 0, sizeof(v56));
  if ( v11 != v62 && v11 != v63 )
    PushW32ThreadLock((__int64)v11, v56, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 5) = v17;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = a3;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (a7 & 2) != 0 )
  {
    v23 = v45;
    *((_DWORD *)v11 + 22) = v45;
    v24 = v49[0];
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, (char *)v49[0], v23, (void **)v11 + 10) < 0 )
      goto LABEL_38;
  }
  else
  {
    if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v45, (void **)v11 + 10) < 0 )
      goto LABEL_38;
    *((_DWORD *)v11 + 22) = v26;
    v24 = v49[0];
  }
  v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v15);
  v51 = *(_QWORD *)(v27 + 408);
  *(_QWORD *)(v27 + 408) = &v51;
  v52 = a1;
  if ( a1 )
    HMLockObject(a1);
  v29 = *(_QWORD *)(v16 + 472);
  *(_OWORD *)v49 = *(_OWORD *)(v29 + 64);
  v54 = *(_OWORD *)v49;
  v55 = *(_QWORD *)(v29 + 80);
  *(_QWORD *)(v29 + 72) = v17;
  if ( a1 )
    v30 = *a1;
  else
    v30 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v16 + 472) + 64LL) = v30;
  if ( a1 )
    v31 = *(_QWORD *)(a1[5] + 224LL);
  else
    v31 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v16 + 472) + 80LL) = v31;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v44,
    gdwInAtomicOperation,
    v28);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  EtwTraceBeginCallback(37LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v32 = KeUserModeCallback(37LL, v11, *(unsigned int *)v11, &v48, v47);
  EtwTraceEndCallback(37LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v44,
    v33,
    v34);
  ThreadUnlock1(v36, v35, v37);
  v38 = *(_QWORD *)(v16 + 472);
  *(_OWORD *)(v38 + 64) = *(_OWORD *)v49;
  *(_QWORD *)(v38 + 80) = v55;
  if ( v32 >= 0 && v47[0] == 24 )
  {
    v39 = (__int64 *)v48;
    if ( v48 + 8 < v48 || v48 + 8 > MmUserProbeAddress )
      v39 = (__int64 *)MmUserProbeAddress;
    v40 = *v39;
    v59 = *v39;
    if ( v45 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v41 = v48;
      if ( v48 + 24 < v48 || v48 + 24 > MmUserProbeAddress )
        v41 = MmUserProbeAddress;
      v57 = *(_OWORD *)v41;
      Address = *(volatile void **)(v41 + 16);
      v60 = v57;
      v61 = Address;
      ProbeForRead(Address, v19, 4u);
      memmove(v24, (const void *)Address, v19);
    }
    goto LABEL_39;
  }
LABEL_38:
  v40 = 0LL;
LABEL_39:
  if ( v11 != v62 && v11 != v63 )
  {
    v42 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v42, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v56, (__int64)v42, v15);
  }
  return (unsigned __int8 *)v40;
}
