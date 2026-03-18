/*
 * XREFs of SfnINLPKDRAWSWITCHWND @ 0x1C0217DE0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     GreSetTextColor @ 0x1C0022D4C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0022E5C (GreSetBkColor.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0053454 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00534F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _WindowFromDC @ 0x1C00E3ECC (_WindowFromDC.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

unsigned __int8 *__fastcall SfnINLPKDRAWSWITCHWND(_QWORD *a1, int a2, HDC a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // rsi
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  unsigned __int8 *result; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  struct tagWND *v22; // rax
  HDC DC; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  __int128 v32; // xmm6
  __int64 v33; // xmm7_8
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 *v43; // rcx
  __int64 v44; // rdi
  PVOID *v45; // rdx
  char v46; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v47[3]; // [rsp+31h] [rbp-397h] BYREF
  unsigned int v48; // [rsp+34h] [rbp-394h]
  int v49; // [rsp+38h] [rbp-390h]
  int v50; // [rsp+3Ch] [rbp-38Ch]
  _DWORD v51[6]; // [rsp+40h] [rbp-388h] BYREF
  unsigned __int8 *v52; // [rsp+58h] [rbp-370h]
  __int64 v53; // [rsp+68h] [rbp-360h]
  unsigned __int64 v54; // [rsp+70h] [rbp-358h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-350h] BYREF
  __int64 v56; // [rsp+80h] [rbp-348h] BYREF
  _QWORD *v57; // [rsp+88h] [rbp-340h]
  __int64 v58; // [rsp+90h] [rbp-338h]
  __int128 v59; // [rsp+98h] [rbp-330h]
  __int64 v60; // [rsp+A8h] [rbp-320h]
  _QWORD v61[8]; // [rsp+B0h] [rbp-318h] BYREF
  unsigned __int8 v62[112]; // [rsp+F0h] [rbp-2D8h] BYREF
  unsigned __int8 v63[512]; // [rsp+160h] [rbp-268h] BYREF

  memset(v62, 0, 0x68uLL);
  v10 = v62;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0uLL;
  v60 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v16 = 0LL;
  v17 = *(_DWORD *)(a4 + 16);
  v18 = v17 + 2;
  if ( (unsigned int)v18 < v17 )
    goto LABEL_30;
  v48 = v17 + 2;
  if ( *(int *)(a4 + 20) < 0 )
  {
    v18 *= 2LL;
    if ( v18 > 0xFFFFFFFF )
      goto LABEL_30;
    v48 = v18;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v18, v63, 1, 0x200uLL);
  v10 = result;
  v52 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21);
  memset(v61, 0, 24);
  if ( v10 != v62 && v10 != v63 )
    PushW32ThreadLock((__int64)v10, v61, (__int64)Win32FreePool);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              *(char **)(a4 + 24),
              *(_DWORD *)(a4 + 16) + 2,
              (void **)v10 + 10) >= 0 )
  {
    v22 = WindowFromDC(a3);
    DC = (HDC)_GetDC(v22);
    v50 = GreSetTextColor(DC, *(_DWORD *)(gpsi + 4640LL));
    v49 = GreSetBkColor(DC, *(_DWORD *)(gpsi + 4628LL));
    GetDPIServerInfo(v25, v24, v26);
    v53 = GreSelectFont(DC);
    *((_QWORD *)v10 + 5) = v16;
    *((_DWORD *)v10 + 12) = a2;
    *((_QWORD *)v10 + 7) = DC;
    *(_OWORD *)(v10 + 88) = *(_OWORD *)a4;
    *((_QWORD *)v10 + 8) = a5;
    *((_QWORD *)v10 + 9) = a6;
    v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28);
    v56 = *(_QWORD *)(v29 + 408);
    *(_QWORD *)(v29 + 408) = &v56;
    v57 = a1;
    if ( a1 )
      HMLockObject(a1);
    v31 = *(_QWORD *)(v15 + 472);
    v32 = *(_OWORD *)(v31 + 64);
    v59 = v32;
    v33 = *(_QWORD *)(v31 + 80);
    v60 = v33;
    *(_QWORD *)(v31 + 72) = v16;
    if ( a1 )
      v34 = *a1;
    else
      v34 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v15 + 472) + 64LL) = v34;
    if ( a1 )
      v35 = *(_QWORD *)(a1[5] + 224LL);
    else
      v35 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v15 + 472) + 80LL) = v35;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v47,
      gdwInAtomicOperation,
      v30);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v46);
    EtwTraceBeginCallback(97LL);
    *((_QWORD *)v10 + 2) = 0LL;
    v36 = KeUserModeCallback(97LL, v10, *(unsigned int *)v10, &v54, v51);
    EtwTraceEndCallback(97LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v46);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v47,
      v37,
      v38);
    ThreadUnlock1(v40, v39, v41);
    v42 = *(_QWORD *)(v15 + 472);
    *(_OWORD *)(v42 + 64) = v32;
    *(_QWORD *)(v42 + 80) = v33;
    GreSelectFont(DC);
    GreSetBkColor(DC, v49);
    GreSetTextColor(DC, v50);
    _ReleaseDC(DC);
    if ( v36 >= 0 && v51[0] == 24 )
    {
      v43 = (__int64 *)v54;
      if ( v54 + 8 < v54 || v54 + 8 > MmUserProbeAddress )
        v43 = (__int64 *)MmUserProbeAddress;
      v44 = *v43;
      v61[3] = *v43;
      goto LABEL_31;
    }
  }
LABEL_30:
  v44 = 0LL;
LABEL_31:
  if ( v10 != v62 && v10 != v63 )
  {
    v45 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v45, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v61, (__int64)v45, v14);
  }
  return (unsigned __int8 *)v44;
}
