/*
 * XREFs of SfnINLPKDRAWSWITCHWND @ 0x1C0218320
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     GreSetTextColor @ 0x1C002D630 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C002D740 (GreSetBkColor.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00B25F4 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00B2694 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     _WindowFromDC @ 0x1C010992C (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

unsigned __int8 *__fastcall SfnINLPKDRAWSWITCHWND(_QWORD *a1, int a2, HDC a3, __int64 a4, __int64 a5, __int64 a6)
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
  unsigned int v19; // eax
  unsigned __int64 v20; // rdx
  unsigned __int8 *result; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r9
  struct tagWND *v26; // rax
  HDC DC; // r12
  __int64 DPIServerInfo; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int128 v36; // xmm6
  __int64 v37; // xmm7_8
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // edi
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 *v48; // rcx
  __int64 v49; // rdi
  PVOID *v50; // rdx
  char v51; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v52[3]; // [rsp+31h] [rbp-397h] BYREF
  unsigned int v53; // [rsp+34h] [rbp-394h]
  int v54; // [rsp+38h] [rbp-390h]
  int v55; // [rsp+3Ch] [rbp-38Ch]
  _DWORD v56[6]; // [rsp+40h] [rbp-388h] BYREF
  unsigned __int8 *v57; // [rsp+58h] [rbp-370h]
  __int64 v58; // [rsp+68h] [rbp-360h]
  unsigned __int64 v59; // [rsp+70h] [rbp-358h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-350h] BYREF
  __int64 v61; // [rsp+80h] [rbp-348h] BYREF
  _QWORD *v62; // [rsp+88h] [rbp-340h]
  __int64 v63; // [rsp+90h] [rbp-338h]
  __int128 v64; // [rsp+98h] [rbp-330h]
  __int64 v65; // [rsp+A8h] [rbp-320h]
  _QWORD v66[8]; // [rsp+B0h] [rbp-318h] BYREF
  unsigned __int8 v67[112]; // [rsp+F0h] [rbp-2D8h] BYREF
  unsigned __int8 v68[512]; // [rsp+160h] [rbp-268h] BYREF

  memset(v67, 0, 0x68uLL);
  v10 = v67;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0uLL;
  v65 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  v17 = ThreadWin32Thread;
  if ( a1 )
    v18 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v18 = 0LL;
  v19 = *(_DWORD *)(a4 + 16);
  v20 = v19 + 2;
  if ( (unsigned int)v20 < v19 )
    goto LABEL_30;
  v53 = v19 + 2;
  if ( *(int *)(a4 + 20) < 0 )
  {
    v20 *= 2LL;
    if ( v20 > 0xFFFFFFFF )
      goto LABEL_30;
    v53 = v20;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v20, v68, 1, 0x200uLL);
  v10 = result;
  v57 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24);
  memset(v66, 0, 24);
  if ( v10 != v67 && v10 != v68 )
    PushW32ThreadLock((__int64)v10, v66, (__int64)Win32FreePool, v25);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              *(char **)(a4 + 24),
              *(_DWORD *)(a4 + 16) + 2,
              (void **)v10 + 10) >= 0 )
  {
    v26 = WindowFromDC(a3);
    DC = (HDC)_GetDC(v26);
    v55 = GreSetTextColor(DC, *(_DWORD *)(gpsi + 4640LL));
    v54 = GreSetBkColor(DC, *(_DWORD *)(gpsi + 4628LL));
    DPIServerInfo = GetDPIServerInfo();
    v58 = GreSelectFont((__int64)DC, *(_QWORD *)(DPIServerInfo + 8));
    *((_QWORD *)v10 + 5) = v18;
    *((_DWORD *)v10 + 12) = a2;
    *((_QWORD *)v10 + 7) = DC;
    *(_OWORD *)(v10 + 88) = *(_OWORD *)a4;
    *((_QWORD *)v10 + 8) = a5;
    *((_QWORD *)v10 + 9) = a6;
    v32 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31);
    v61 = *(_QWORD *)(v32 + 408);
    *(_QWORD *)(v32 + 408) = &v61;
    v62 = a1;
    if ( a1 )
      HMLockObject(a1);
    v35 = *(_QWORD *)(v17 + 472);
    v36 = *(_OWORD *)(v35 + 64);
    v64 = v36;
    v37 = *(_QWORD *)(v35 + 80);
    v65 = v37;
    *(_QWORD *)(v35 + 72) = v18;
    if ( a1 )
      v38 = *a1;
    else
      v38 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v17 + 472) + 64LL) = v38;
    if ( a1 )
      v39 = *(_QWORD *)(a1[5] + 224LL);
    else
      v39 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v17 + 472) + 80LL) = v39;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v52,
      gdwInAtomicOperation,
      v33,
      v34);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
    EtwTraceBeginCallback(97LL);
    *((_QWORD *)v10 + 2) = 0LL;
    v40 = KeUserModeCallback(97LL, v10, *(unsigned int *)v10, &v59, v56);
    EtwTraceEndCallback(97LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v52,
      v41,
      v42,
      v43);
    ThreadUnlock1(v45, v44, v46);
    v47 = *(_QWORD *)(v17 + 472);
    *(_OWORD *)(v47 + 64) = v36;
    *(_QWORD *)(v47 + 80) = v37;
    GreSelectFont((__int64)DC, v58);
    GreSetBkColor(DC, v54);
    GreSetTextColor(DC, v55);
    _ReleaseDC(DC);
    if ( v40 >= 0 && v56[0] == 24 )
    {
      v48 = (__int64 *)v59;
      if ( v59 + 8 < v59 || v59 + 8 > MmUserProbeAddress )
        v48 = (__int64 *)MmUserProbeAddress;
      v49 = *v48;
      v66[3] = *v48;
      goto LABEL_31;
    }
  }
LABEL_30:
  v49 = 0LL;
LABEL_31:
  if ( v10 != v67 && v10 != v68 )
  {
    v50 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v50, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v66, (__int64)v50, v15, v16);
  }
  return (unsigned __int8 *)v49;
}
