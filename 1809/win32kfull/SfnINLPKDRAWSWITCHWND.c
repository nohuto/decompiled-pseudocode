/*
 * XREFs of SfnINLPKDRAWSWITCHWND @ 0x1C0200C70
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
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     GreSetTextColor @ 0x1C006DDEC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C006DE74 (GreSetBkColor.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     GetDPIServerInfo @ 0x1C00AB9F8 (GetDPIServerInfo.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     _WindowFromDC @ 0x1C00FF34C (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall SfnINLPKDRAWSWITCHWND(
        volatile signed __int32 *a1,
        __int64 a2,
        HDC a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // r13d
  unsigned __int8 *v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r14
  __int64 v13; // rsi
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned __int64 v16; // rax
  unsigned __int8 *result; // rax
  __int64 v18; // rdx
  struct tagWND *v19; // rax
  HDC DC; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int128 v26; // xmm6
  __int64 v27; // xmm7_8
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // edi
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 *v35; // rcx
  __int64 v36; // rdi
  PVOID *v37; // rdx
  char v38; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v39[3]; // [rsp+31h] [rbp-397h] BYREF
  unsigned int v40; // [rsp+34h] [rbp-394h]
  int v41; // [rsp+38h] [rbp-390h]
  int v42; // [rsp+3Ch] [rbp-38Ch]
  _DWORD v43[6]; // [rsp+40h] [rbp-388h] BYREF
  unsigned __int8 *v44; // [rsp+58h] [rbp-370h]
  __int64 v45; // [rsp+68h] [rbp-360h]
  unsigned __int64 v46; // [rsp+70h] [rbp-358h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-350h] BYREF
  __int64 v48; // [rsp+80h] [rbp-348h] BYREF
  volatile signed __int32 *v49; // [rsp+88h] [rbp-340h]
  __int64 v50; // [rsp+90h] [rbp-338h]
  __int128 v51; // [rsp+98h] [rbp-330h]
  __int64 v52; // [rsp+A8h] [rbp-320h]
  __int64 v53; // [rsp+B0h] [rbp-318h]
  _QWORD v54[4]; // [rsp+D0h] [rbp-2F8h] BYREF
  unsigned __int8 v55[112]; // [rsp+F0h] [rbp-2D8h] BYREF
  unsigned __int8 v56[512]; // [rsp+160h] [rbp-268h] BYREF

  v8 = a2;
  v10 = v55;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0uLL;
  v52 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v14 = *(_DWORD *)(a4 + 16);
  v15 = -1;
  if ( v14 + 2 >= v14 )
    v15 = v14 + 2;
  v40 = v15;
  if ( v14 + 2 < v14 )
    goto LABEL_33;
  if ( *(int *)(a4 + 20) < 0 )
  {
    v16 = 2LL * v15;
    v15 = -1;
    if ( v16 <= 0xFFFFFFFF )
      v15 = v16;
    v40 = v15;
    if ( v16 > 0xFFFFFFFF )
      goto LABEL_33;
  }
  result = AllocCallbackMessage(104, 1u, v15, v56, 1, 0x200uLL);
  v10 = result;
  v44 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18);
  if ( v10 != v55 && v10 != v56 )
    PushW32ThreadLock((__int64)v10, v54, (__int64)Win32FreePool);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              *(_QWORD *)(a4 + 24),
              *(_DWORD *)(a4 + 16) + 2,
              (void **)v10 + 10) < 0 )
    goto LABEL_33;
  v19 = WindowFromDC(a3);
  DC = (HDC)_GetDC(v19);
  v42 = GreSetTextColor(DC, *(_DWORD *)(gpsi + 4640LL));
  v41 = GreSetBkColor(DC, *(_DWORD *)(gpsi + 4628LL));
  GetDPIServerInfo(v22, v21);
  v45 = GreSelectFont(DC);
  *((_QWORD *)v10 + 5) = v13;
  *((_DWORD *)v10 + 12) = v8;
  *((_QWORD *)v10 + 7) = DC;
  *(_OWORD *)(v10 + 88) = *(_OWORD *)a4;
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23);
  v48 = *(_QWORD *)(v24 + 416);
  *(_QWORD *)(v24 + 416) = &v48;
  v49 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v25 = *(_QWORD *)(v12 + 480);
  v26 = *(_OWORD *)(v25 + 64);
  v51 = v26;
  v27 = *(_QWORD *)(v25 + 80);
  v52 = v27;
  *(_QWORD *)(v25 + 72) = v13;
  if ( a1 )
    v28 = *(_QWORD *)a1;
  else
    v28 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v28;
  if ( a1 )
    v29 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v29 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v29;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v39,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  EtwTraceBeginCallback(97LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v30 = KeUserModeCallback(97LL, v10, *(unsigned int *)v10, &v46, v43);
  EtwTraceEndCallback(97LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v39, v31);
  ThreadUnlock1(v33, v32);
  v34 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v34 + 64) = v26;
  *(_QWORD *)(v34 + 80) = v27;
  GreSelectFont(DC);
  GreSetBkColor(DC, v41);
  GreSetTextColor(DC, v42);
  _ReleaseDC(DC);
  if ( v30 < 0 )
    goto LABEL_33;
  if ( v43[0] == 24 )
  {
    v35 = (__int64 *)v46;
    if ( v46 + 8 < v46 || v46 + 8 > MmUserProbeAddress )
      v35 = (__int64 *)MmUserProbeAddress;
    v36 = *v35;
    v53 = *v35;
  }
  else
  {
LABEL_33:
    v36 = 0LL;
  }
  if ( v10 != v55 && v10 != v56 )
  {
    v37 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v37, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v54, (__int64)v37);
  }
  return (unsigned __int8 *)v36;
}
