/*
 * XREFs of SfnINLPMDICREATESTRUCT @ 0x1C0218860
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
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E3B50 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E3BF8 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  __int64 v14; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r13
  unsigned __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  unsigned __int64 v23; // rax
  unsigned __int8 *result; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  void **v29; // r9
  unsigned int v30; // r8d
  CHAR *v31; // rdx
  int v32; // eax
  unsigned int v33; // r8d
  unsigned int v34; // r8d
  void **v35; // r9
  CHAR *v36; // rdx
  int v37; // eax
  unsigned int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // esi
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 *v54; // rcx
  __int64 v55; // rsi
  PVOID *v56; // rdx
  char v57; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v58[3]; // [rsp+31h] [rbp-397h] BYREF
  unsigned int v59; // [rsp+34h] [rbp-394h]
  unsigned int v60; // [rsp+38h] [rbp-390h]
  unsigned __int8 *v61; // [rsp+40h] [rbp-388h]
  unsigned int v62; // [rsp+48h] [rbp-380h]
  _DWORD v63[9]; // [rsp+4Ch] [rbp-37Ch] BYREF
  __int64 v64; // [rsp+70h] [rbp-358h]
  __int128 v65; // [rsp+78h] [rbp-350h]
  unsigned __int64 v66; // [rsp+88h] [rbp-340h] BYREF
  ULONG_PTR RegionSize; // [rsp+90h] [rbp-338h] BYREF
  __int64 v68; // [rsp+98h] [rbp-330h] BYREF
  _QWORD *v69; // [rsp+A0h] [rbp-328h]
  __int64 v70; // [rsp+A8h] [rbp-320h]
  __int128 v71; // [rsp+B0h] [rbp-318h]
  __int64 v72; // [rsp+C0h] [rbp-308h]
  _QWORD v73[7]; // [rsp+C8h] [rbp-300h] BYREF
  _DWORD v74[36]; // [rsp+100h] [rbp-2C8h] BYREF
  unsigned __int8 v75[512]; // [rsp+190h] [rbp-238h] BYREF

  v64 = a3;
  v62 = a2;
  v59 = 0;
  v60 = 0;
  v9 = 0;
  v10 = a7 & 1;
  memset(v74, 0, sizeof(v74));
  v11 = (unsigned __int8 *)v74;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0uLL;
  v72 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14);
  *(_QWORD *)&v65 = ThreadWin32Thread;
  if ( a1 )
    v18 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v18 = 0LL;
  v19 = *(_QWORD *)(a4 + 8);
  if ( v19 && (v19 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 60) >> 31 != v10) )
  {
    v20 = *(_DWORD *)(a4 + 56);
    if ( v20 + 2 < v20 )
      goto LABEL_67;
    v59 = v20 + 2;
    if ( *(int *)(a4 + 60) < 0 && (a7 & 1) == 0 )
    {
      v21 = 2LL * (v20 + 2);
      if ( v21 > 0xFFFFFFFF )
        goto LABEL_67;
      v59 = v21;
    }
    v9 = 1;
  }
  if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_QWORD *)a4 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 76) >> 31 != v10) )
  {
    v22 = *(_DWORD *)(a4 + 72);
    if ( v22 + 2 < v22 )
      goto LABEL_67;
    v60 = v22 + 2;
    if ( *(int *)(a4 + 76) < 0 && (a7 & 1) == 0 )
    {
      v23 = 2LL * (v22 + 2);
      if ( v23 > 0xFFFFFFFF )
        goto LABEL_67;
      v60 = v23;
    }
    ++v9;
  }
  v16 = v59 + v60;
  if ( (unsigned int)v16 < v59 )
    goto LABEL_67;
  v63[5] = v59 + v60;
  if ( v9 )
  {
    result = AllocCallbackMessage(144, v9, v16, v75, 1, 0x200uLL);
    v11 = result;
    v61 = result;
    if ( !result )
      return result;
  }
  else
  {
    v11 = (unsigned __int8 *)v74;
    v61 = (unsigned __int8 *)v74;
    memset(&v74[1], 0, 0x8CuLL);
    v74[0] = 144;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27);
  memset(v73, 0, 24);
  if ( v11 != (unsigned __int8 *)v74 && v11 != v75 )
    PushW32ThreadLock((__int64)v11, v73, (__int64)Win32FreePool, v17);
  *((_QWORD *)v11 + 5) = v18;
  *((_DWORD *)v11 + 12) = v62;
  *((_QWORD *)v11 + 7) = v64;
  *(_DWORD *)(a4 + 44) = 0;
  *((_OWORD *)v11 + 4) = *(_OWORD *)a4;
  *((_OWORD *)v11 + 5) = *(_OWORD *)(a4 + 16);
  *((_OWORD *)v11 + 6) = *(_OWORD *)(a4 + 32);
  *((_QWORD *)v11 + 14) = *(_QWORD *)(a4 + 48);
  if ( v59 )
  {
    v29 = (void **)(v11 + 72);
    v30 = *(_DWORD *)(a4 + 56);
    v31 = *(CHAR **)(a4 + 64);
    if ( *(int *)(a4 + 60) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v32 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v31, 2 * v30 + 2, v29);
LABEL_39:
        if ( v32 < 0 )
          goto LABEL_67;
        goto LABEL_40;
      }
      v33 = v30 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v32 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v31, (v30 >> 1) + 1, v29);
        goto LABEL_39;
      }
      v33 = v30 + 2;
    }
    v32 = CaptureCallbackData((struct _CAPTUREBUF *)v11, v31, v33, v29);
    goto LABEL_39;
  }
LABEL_40:
  if ( v60 )
  {
    v34 = *(_DWORD *)(a4 + 72);
    v35 = (void **)(v11 + 64);
    v36 = *(CHAR **)(a4 + 80);
    if ( *(int *)(a4 + 76) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v37 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v36, 2 * v34 + 2, v35);
LABEL_49:
        if ( v37 < 0 )
          goto LABEL_67;
        goto LABEL_50;
      }
      v38 = v34 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v37 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v36, (v34 >> 1) + 1, v35);
        goto LABEL_49;
      }
      v38 = v34 + 2;
    }
    v37 = CaptureCallbackData((struct _CAPTUREBUF *)v11, v36, v38, v35);
    goto LABEL_49;
  }
LABEL_50:
  *((_QWORD *)v11 + 15) = a5;
  *((_QWORD *)v11 + 16) = a6;
  v39 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v16, v17);
  v68 = *(_QWORD *)(v39 + 408);
  *(_QWORD *)(v39 + 408) = &v68;
  v69 = a1;
  if ( a1 )
    HMLockObject(a1);
  v42 = v65;
  v43 = *(_QWORD *)(v65 + 472);
  v65 = *(_OWORD *)(v43 + 64);
  v71 = v65;
  v72 = *(_QWORD *)(v43 + 80);
  *(_QWORD *)(v43 + 72) = v18;
  if ( a1 )
    v44 = *a1;
  else
    v44 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v42 + 472) + 64LL) = v44;
  if ( a1 )
    v45 = *(_QWORD *)(a1[5] + 224LL);
  else
    v45 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v42 + 472) + 80LL) = v45;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v58,
    gdwInAtomicOperation,
    v40,
    v41);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v57);
  EtwTraceBeginCallback(15LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v46 = KeUserModeCallback(15LL, v11, *(unsigned int *)v11, &v66, v63);
  EtwTraceEndCallback(15LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v57);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v58,
    v47,
    v48,
    v49);
  ThreadUnlock1(v51, v50, v52);
  v53 = *(_QWORD *)(v42 + 472);
  *(_OWORD *)(v53 + 64) = v65;
  *(_QWORD *)(v53 + 80) = v72;
  if ( v46 >= 0 && v63[0] == 24 )
  {
    v54 = (__int64 *)v66;
    if ( v66 + 8 < v66 || v66 + 8 > MmUserProbeAddress )
      v54 = (__int64 *)MmUserProbeAddress;
    v55 = *v54;
    v73[3] = *v54;
    goto LABEL_68;
  }
LABEL_67:
  v55 = 0LL;
LABEL_68:
  if ( v11 != (unsigned __int8 *)v74 && v11 != v75 )
  {
    v56 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v56, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v73, (__int64)v56, v16, v17);
  }
  return (unsigned __int8 *)v55;
}
