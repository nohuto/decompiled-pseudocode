/*
 * XREFs of SfnINLPMDICREATESTRUCT @ 0x1C0218320
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
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00578F4 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005799C (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

unsigned __int8 *__fastcall SfnINLPMDICREATESTRUCT(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v9; // r15d
  int v10; // r14d
  unsigned __int8 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // r8
  __int64 v16; // r13
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned __int64 v19; // rax
  unsigned int v20; // eax
  unsigned __int64 v21; // rax
  unsigned __int8 *result; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  void **v26; // r9
  unsigned int v27; // r8d
  CHAR *v28; // rdx
  int v29; // eax
  unsigned int v30; // r8d
  unsigned int v31; // r8d
  void **v32; // r9
  CHAR *v33; // rdx
  int v34; // eax
  unsigned int v35; // r8d
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // esi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 *v49; // rcx
  __int64 v50; // rsi
  PVOID *v51; // rdx
  char v52; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v53[3]; // [rsp+31h] [rbp-397h] BYREF
  unsigned int v54; // [rsp+34h] [rbp-394h]
  unsigned int v55; // [rsp+38h] [rbp-390h]
  unsigned __int8 *v56; // [rsp+40h] [rbp-388h]
  unsigned int v57; // [rsp+48h] [rbp-380h]
  _DWORD v58[9]; // [rsp+4Ch] [rbp-37Ch] BYREF
  __int64 v59; // [rsp+70h] [rbp-358h]
  __int128 v60; // [rsp+78h] [rbp-350h]
  unsigned __int64 v61; // [rsp+88h] [rbp-340h] BYREF
  ULONG_PTR RegionSize; // [rsp+90h] [rbp-338h] BYREF
  __int64 v63; // [rsp+98h] [rbp-330h] BYREF
  _QWORD *v64; // [rsp+A0h] [rbp-328h]
  __int64 v65; // [rsp+A8h] [rbp-320h]
  __int128 v66; // [rsp+B0h] [rbp-318h]
  __int64 v67; // [rsp+C0h] [rbp-308h]
  _QWORD v68[7]; // [rsp+C8h] [rbp-300h] BYREF
  _DWORD v69[36]; // [rsp+100h] [rbp-2C8h] BYREF
  unsigned __int8 v70[512]; // [rsp+190h] [rbp-238h] BYREF

  v59 = a3;
  v57 = a2;
  v54 = 0;
  v55 = 0;
  v9 = 0;
  v10 = a7 & 1;
  memset(v69, 0, sizeof(v69));
  v11 = (unsigned __int8 *)v69;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0uLL;
  v67 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13);
  *(_QWORD *)&v60 = ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v16 = 0LL;
  v17 = *(_QWORD *)(a4 + 8);
  if ( v17 && (v17 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 60) >> 31 != v10) )
  {
    v18 = *(_DWORD *)(a4 + 56);
    if ( v18 + 2 < v18 )
      goto LABEL_67;
    v54 = v18 + 2;
    if ( *(int *)(a4 + 60) < 0 && (a7 & 1) == 0 )
    {
      v19 = 2LL * (v18 + 2);
      if ( v19 > 0xFFFFFFFF )
        goto LABEL_67;
      v54 = v19;
    }
    v9 = 1;
  }
  if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_QWORD *)a4 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 76) >> 31 != v10) )
  {
    v20 = *(_DWORD *)(a4 + 72);
    if ( v20 + 2 < v20 )
      goto LABEL_67;
    v55 = v20 + 2;
    if ( *(int *)(a4 + 76) < 0 && (a7 & 1) == 0 )
    {
      v21 = 2LL * (v20 + 2);
      if ( v21 > 0xFFFFFFFF )
        goto LABEL_67;
      v55 = v21;
    }
    ++v9;
  }
  v15 = v54 + v55;
  if ( (unsigned int)v15 < v54 )
    goto LABEL_67;
  v58[5] = v54 + v55;
  if ( v9 )
  {
    result = AllocCallbackMessage(144, v9, v15, v70, 1, 0x200uLL);
    v11 = result;
    v56 = result;
    if ( !result )
      return result;
  }
  else
  {
    v11 = (unsigned __int8 *)v69;
    v56 = (unsigned __int8 *)v69;
    memset(&v69[1], 0, 0x8CuLL);
    v69[0] = 144;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24);
  memset(v68, 0, 24);
  if ( v11 != (unsigned __int8 *)v69 && v11 != v70 )
    PushW32ThreadLock((__int64)v11, v68, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 5) = v16;
  *((_DWORD *)v11 + 12) = v57;
  *((_QWORD *)v11 + 7) = v59;
  *(_DWORD *)(a4 + 44) = 0;
  *((_OWORD *)v11 + 4) = *(_OWORD *)a4;
  *((_OWORD *)v11 + 5) = *(_OWORD *)(a4 + 16);
  *((_OWORD *)v11 + 6) = *(_OWORD *)(a4 + 32);
  *((_QWORD *)v11 + 14) = *(_QWORD *)(a4 + 48);
  if ( v54 )
  {
    v26 = (void **)(v11 + 72);
    v27 = *(_DWORD *)(a4 + 56);
    v28 = *(CHAR **)(a4 + 64);
    if ( *(int *)(a4 + 60) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v29 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v28, 2 * v27 + 2, v26);
LABEL_39:
        if ( v29 < 0 )
          goto LABEL_67;
        goto LABEL_40;
      }
      v30 = v27 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v29 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v28, (v27 >> 1) + 1, v26);
        goto LABEL_39;
      }
      v30 = v27 + 2;
    }
    v29 = CaptureCallbackData((struct _CAPTUREBUF *)v11, v28, v30, v26);
    goto LABEL_39;
  }
LABEL_40:
  if ( v55 )
  {
    v31 = *(_DWORD *)(a4 + 72);
    v32 = (void **)(v11 + 64);
    v33 = *(CHAR **)(a4 + 80);
    if ( *(int *)(a4 + 76) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v34 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v33, 2 * v31 + 2, v32);
LABEL_49:
        if ( v34 < 0 )
          goto LABEL_67;
        goto LABEL_50;
      }
      v35 = v31 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v34 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v33, (v31 >> 1) + 1, v32);
        goto LABEL_49;
      }
      v35 = v31 + 2;
    }
    v34 = CaptureCallbackData((struct _CAPTUREBUF *)v11, v33, v35, v32);
    goto LABEL_49;
  }
LABEL_50:
  *((_QWORD *)v11 + 15) = a5;
  *((_QWORD *)v11 + 16) = a6;
  v36 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v15);
  v63 = *(_QWORD *)(v36 + 408);
  *(_QWORD *)(v36 + 408) = &v63;
  v64 = a1;
  if ( a1 )
    HMLockObject(a1);
  v38 = v60;
  v39 = *(_QWORD *)(v60 + 472);
  v60 = *(_OWORD *)(v39 + 64);
  v66 = v60;
  v67 = *(_QWORD *)(v39 + 80);
  *(_QWORD *)(v39 + 72) = v16;
  if ( a1 )
    v40 = *a1;
  else
    v40 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v38 + 472) + 64LL) = v40;
  if ( a1 )
    v41 = *(_QWORD *)(a1[5] + 224LL);
  else
    v41 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v38 + 472) + 80LL) = v41;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v53,
    gdwInAtomicOperation,
    v37);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v52);
  EtwTraceBeginCallback(15LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v42 = KeUserModeCallback(15LL, v11, *(unsigned int *)v11, &v61, v58);
  EtwTraceEndCallback(15LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v52);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v53,
    v43,
    v44);
  ThreadUnlock1(v46, v45, v47);
  v48 = *(_QWORD *)(v38 + 472);
  *(_OWORD *)(v48 + 64) = v60;
  *(_QWORD *)(v48 + 80) = v67;
  if ( v42 >= 0 && v58[0] == 24 )
  {
    v49 = (__int64 *)v61;
    if ( v61 + 8 < v61 || v61 + 8 > MmUserProbeAddress )
      v49 = (__int64 *)MmUserProbeAddress;
    v50 = *v49;
    v68[3] = *v49;
    goto LABEL_68;
  }
LABEL_67:
  v50 = 0LL;
LABEL_68:
  if ( v11 != (unsigned __int8 *)v69 && v11 != v70 )
  {
    v51 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v51, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v68, (__int64)v51, v15);
  }
  return (unsigned __int8 *)v50;
}
