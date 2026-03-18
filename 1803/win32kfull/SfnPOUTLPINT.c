/*
 * XREFs of SfnPOUTLPINT @ 0x1C01DEF50
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
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0053734 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

unsigned __int8 *__fastcall SfnPOUTLPINT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v9; // r12d
  unsigned __int8 *v11; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r14
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned int v16; // ecx
  SIZE_T v17; // r13
  unsigned __int8 *result; // rax
  __int64 v19; // rdx
  unsigned int v20; // r8d
  void *v21; // r12
  __int64 v22; // rdx
  int v23; // r11d
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // edi
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 *v34; // rcx
  __int64 v35; // rdi
  ULONG64 v36; // rcx
  char v37; // [rsp+30h] [rbp-3A8h] BYREF
  _BYTE v38[3]; // [rsp+31h] [rbp-3A7h] BYREF
  unsigned int v39; // [rsp+34h] [rbp-3A4h]
  unsigned __int8 *v40; // [rsp+38h] [rbp-3A0h]
  _DWORD v41[8]; // [rsp+40h] [rbp-398h] BYREF
  void *v42; // [rsp+60h] [rbp-378h]
  unsigned __int64 v43; // [rsp+68h] [rbp-370h] BYREF
  __int128 v44; // [rsp+70h] [rbp-368h]
  __int64 v45; // [rsp+80h] [rbp-358h]
  ULONG_PTR RegionSize; // [rsp+98h] [rbp-340h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-338h] BYREF
  volatile signed __int32 *v48; // [rsp+A8h] [rbp-330h]
  __int64 v49; // [rsp+B0h] [rbp-328h]
  __int128 v50; // [rsp+B8h] [rbp-320h]
  volatile void *Address; // [rsp+C8h] [rbp-310h]
  __int64 v52; // [rsp+D0h] [rbp-308h]
  __int128 v53; // [rsp+F8h] [rbp-2E0h]
  volatile void *v54; // [rsp+108h] [rbp-2D0h]
  _QWORD v55[4]; // [rsp+110h] [rbp-2C8h] BYREF
  unsigned __int8 v56[96]; // [rsp+130h] [rbp-2A8h] BYREF
  unsigned __int8 v57[512]; // [rsp+190h] [rbp-248h] BYREF

  v42 = a4;
  v9 = a2;
  v11 = v56;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v44 = 0uLL;
  v45 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v15 = 4LL * (unsigned int)a3;
  v16 = -1;
  if ( v15 <= 0xFFFFFFFF )
    v16 = 4 * a3;
  v39 = v16;
  if ( v15 > 0xFFFFFFFF )
    goto LABEL_40;
  v17 = v16;
  result = AllocCallbackMessage(96, 1u, v16, v57, 0, 0x200uLL);
  v11 = result;
  v40 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19);
  if ( v11 != v56 && v11 != v57 )
    PushW32ThreadLock((__int64)v11, v55, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 5) = v14;
  *((_DWORD *)v11 + 12) = v9;
  *((_QWORD *)v11 + 7) = a3;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (a7 & 2) != 0 )
  {
    v20 = v39;
    *((_DWORD *)v11 + 22) = v39;
    v21 = v42;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, (unsigned __int64)v42, v20, (void **)v11 + 10) < 0 )
      goto LABEL_40;
  }
  else
  {
    if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v39, (void **)v11 + 10) < 0 )
      goto LABEL_40;
    *((_DWORD *)v11 + 22) = v23;
    v21 = v42;
  }
  v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
  v47 = *(_QWORD *)(v24 + 408);
  *(_QWORD *)(v24 + 408) = &v47;
  v48 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v25 = *(_QWORD *)(v13 + 472);
  v44 = *(_OWORD *)(v25 + 64);
  v45 = *(_QWORD *)(v25 + 80);
  *(_QWORD *)(v25 + 72) = v14;
  if ( a1 )
    v26 = *(_QWORD *)a1;
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v26;
  if ( a1 )
    v27 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v27 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v27;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v38,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  EtwTraceBeginCallback(37LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v28 = KeUserModeCallback(37LL, v11, *(unsigned int *)v11, &v43, v41);
  EtwTraceEndCallback(37LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v38, v29);
  ThreadUnlock1(v31, v30, v32);
  v33 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v33 + 64) = v44;
  *(_QWORD *)(v33 + 80) = v45;
  if ( v28 >= 0 && v41[0] == 24 )
  {
    v34 = (__int64 *)v43;
    if ( v43 + 8 < v43 || v43 + 8 > MmUserProbeAddress )
      v34 = (__int64 *)MmUserProbeAddress;
    v35 = *v34;
    v52 = *v34;
    if ( v39 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v36 = v43;
      if ( v43 + 24 < v43 || v43 + 24 > MmUserProbeAddress )
        v36 = MmUserProbeAddress;
      v50 = *(_OWORD *)v36;
      Address = *(volatile void **)(v36 + 16);
      v53 = v50;
      v54 = Address;
      ProbeForRead(Address, v17, 4u);
      memmove(v21, (const void *)Address, v17);
    }
    goto LABEL_41;
  }
LABEL_40:
  v35 = 0LL;
LABEL_41:
  if ( v11 != v56 && v11 != v57 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v55);
  }
  return (unsigned __int8 *)v35;
}
