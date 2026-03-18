/*
 * XREFs of SfnPOUTLPINT @ 0x1C0204710
 * Callers:
 *     <none>
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
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00AF69C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
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
  __int64 v32; // rcx
  __int64 *v33; // rcx
  __int64 v34; // rdi
  ULONG64 v35; // rcx
  __int128 v36; // xmm2
  PVOID *v37; // rdx
  char v38; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v39[3]; // [rsp+31h] [rbp-397h] BYREF
  unsigned int v40; // [rsp+34h] [rbp-394h]
  unsigned __int8 *v41; // [rsp+38h] [rbp-390h]
  _DWORD v42[8]; // [rsp+40h] [rbp-388h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-368h] BYREF
  void *v44[2]; // [rsp+68h] [rbp-360h]
  volatile void *Address; // [rsp+78h] [rbp-350h]
  ULONG_PTR RegionSize; // [rsp+90h] [rbp-338h] BYREF
  __int64 v47; // [rsp+98h] [rbp-330h] BYREF
  volatile signed __int32 *v48; // [rsp+A0h] [rbp-328h]
  __int64 v49; // [rsp+A8h] [rbp-320h]
  __int128 v50; // [rsp+B0h] [rbp-318h]
  __int64 v51; // [rsp+C0h] [rbp-308h]
  __int64 v52; // [rsp+C8h] [rbp-300h]
  __int128 v53; // [rsp+F0h] [rbp-2D8h]
  volatile void *v54; // [rsp+100h] [rbp-2C8h]
  _QWORD v55[3]; // [rsp+108h] [rbp-2C0h] BYREF
  unsigned __int8 v56[96]; // [rsp+120h] [rbp-2A8h] BYREF
  unsigned __int8 v57[512]; // [rsp+180h] [rbp-248h] BYREF

  v44[0] = a4;
  v9 = a2;
  v11 = v56;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0uLL;
  v51 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v15 = 4LL * (unsigned int)a3;
  v16 = -1;
  if ( v15 <= 0xFFFFFFFF )
    v16 = 4 * a3;
  v40 = v16;
  if ( v15 > 0xFFFFFFFF )
    goto LABEL_40;
  v17 = v16;
  result = AllocCallbackMessage(96, 1u, v16, v57, 0, 0x200uLL);
  v11 = result;
  v41 = result;
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
    v20 = v40;
    *((_DWORD *)v11 + 22) = v40;
    v21 = v44[0];
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, (unsigned __int64)v44[0], v20, (void **)v11 + 10) < 0 )
      goto LABEL_40;
  }
  else
  {
    if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v40, (void **)v11 + 10) < 0 )
      goto LABEL_40;
    *((_DWORD *)v11 + 22) = v23;
    v21 = v44[0];
  }
  v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
  v47 = *(_QWORD *)(v24 + 416);
  *(_QWORD *)(v24 + 416) = &v47;
  v48 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v25 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)v44 = *(_OWORD *)(v25 + 64);
  v50 = *(_OWORD *)v44;
  v51 = *(_QWORD *)(v25 + 80);
  *(_QWORD *)(v25 + 72) = v14;
  if ( a1 )
    v26 = *(_QWORD *)a1;
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v26;
  if ( a1 )
    v27 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v27 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v27;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v39,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  EtwTraceBeginCallback(37LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v28 = KeUserModeCallback(37LL, v11, *(unsigned int *)v11, &v43, v42);
  EtwTraceEndCallback(37LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v39, v29);
  ThreadUnlock1(v31, v30);
  v32 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v32 + 64) = *(_OWORD *)v44;
  *(_QWORD *)(v32 + 80) = v51;
  if ( v28 >= 0 && v42[0] == 24 )
  {
    v33 = (__int64 *)v43;
    if ( v43 + 8 < v43 || v43 + 8 > MmUserProbeAddress )
      v33 = (__int64 *)MmUserProbeAddress;
    v34 = *v33;
    v52 = *v33;
    if ( v40 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v35 = v43;
      if ( v43 + 24 < v43 || v43 + 24 > MmUserProbeAddress )
        v35 = MmUserProbeAddress;
      v36 = *(_OWORD *)v35;
      Address = *(volatile void **)(v35 + 16);
      v53 = v36;
      v54 = Address;
      ProbeForRead(Address, v17, 4u);
      memmove(v21, (const void *)Address, v17);
    }
    goto LABEL_41;
  }
LABEL_40:
  v34 = 0LL;
LABEL_41:
  if ( v11 != v56 && v11 != v57 )
  {
    v37 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v37, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v55, (__int64)v37);
  }
  return (unsigned __int8 *)v34;
}
