/*
 * XREFs of SfnINSTRINGNULL @ 0x1C00AF910
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C01287E8 (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
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

__int64 __fastcall SfnINSTRINGNULL(_QWORD *a1, unsigned int a2, __int64 a3, int *a4, __int64 a5, __int64 a6, char a7)
{
  unsigned __int8 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r13
  __int64 v17; // r12
  unsigned int v18; // r14d
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 *v39; // rcx
  __int64 v40; // rdi
  void **v42; // r9
  unsigned int v43; // r8d
  CHAR *v44; // rdx
  unsigned int v45; // r8d
  int v46; // eax
  PVOID *v47; // rdx
  char v48; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v49[3]; // [rsp+31h] [rbp-357h] BYREF
  int v50; // [rsp+34h] [rbp-354h]
  unsigned __int8 *v51; // [rsp+38h] [rbp-350h]
  unsigned int v52; // [rsp+40h] [rbp-348h]
  int v53[7]; // [rsp+44h] [rbp-344h] BYREF
  __int128 v54; // [rsp+60h] [rbp-328h]
  unsigned __int64 v55; // [rsp+70h] [rbp-318h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-310h] BYREF
  __int64 v57; // [rsp+80h] [rbp-308h] BYREF
  _QWORD *v58; // [rsp+88h] [rbp-300h]
  __int64 v59; // [rsp+90h] [rbp-2F8h]
  __int128 v60; // [rsp+98h] [rbp-2F0h]
  __int64 v61; // [rsp+A8h] [rbp-2E0h]
  _QWORD v62[8]; // [rsp+B0h] [rbp-2D8h] BYREF
  _DWORD v63[24]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int8 v64[512]; // [rsp+150h] [rbp-238h] BYREF

  *(_QWORD *)&v54 = a3;
  v52 = a2;
  memset(v63, 0, 0x58uLL);
  v9 = (unsigned __int8 *)v63;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0uLL;
  v61 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
  v16 = ThreadWin32Thread;
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v17 = 0LL;
  v18 = 0;
  LODWORD(v19) = 0;
  v50 = 0;
  if ( a4 && (*((_QWORD *)a4 + 1) >= (unsigned __int64)MmSystemRangeStart || (unsigned int)a4[1] >> 31 != (a7 & 1)) )
  {
    v18 = 1;
    v19 = (unsigned int)(*a4 + 2);
    if ( (unsigned int)v19 < *a4 )
      goto LABEL_44;
    v50 = *a4 + 2;
    if ( a4[1] < 0 && (a7 & 1) == 0 )
    {
      v19 *= 2LL;
      if ( v19 > 0xFFFFFFFF )
        goto LABEL_44;
      v50 = v19;
    }
  }
  if ( v18 )
  {
    v9 = (unsigned __int8 *)AllocCallbackMessage(0x58u, v18, (unsigned int)v19, v64, 1, 0x200uLL);
    v51 = v9;
    if ( !v9 )
      return 0LL;
  }
  else
  {
    v9 = (unsigned __int8 *)v63;
    v51 = (unsigned __int8 *)v63;
    memset(&v63[1], 0, 0x54uLL);
    v63[0] = 88;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22);
  memset(v62, 0, 24);
  if ( v9 != (unsigned __int8 *)v63 && v9 != v64 )
    PushW32ThreadLock((__int64)v9, v62, (__int64)Win32FreePool, v15);
  *((_QWORD *)v9 + 5) = v17;
  *((_DWORD *)v9 + 12) = v52;
  *((_QWORD *)v9 + 7) = v54;
  if ( v18 )
  {
    v42 = (void **)(v9 + 80);
    v43 = *a4;
    v44 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] < 0 )
    {
      if ( (a7 & 1) != 0 )
      {
        v45 = v43 + 1;
        goto LABEL_42;
      }
      v46 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v44, 2 * v43 + 2, v42);
    }
    else
    {
      if ( (a7 & 1) == 0 )
      {
        v45 = v43 + 2;
LABEL_42:
        v46 = CaptureCallbackData((struct _CAPTUREBUF *)v9, v44, v45, v42);
        goto LABEL_43;
      }
      v46 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v44, (v43 >> 1) + 1, v42);
    }
LABEL_43:
    if ( v46 < 0 )
      goto LABEL_44;
    goto LABEL_13;
  }
  if ( a4 )
    v24 = *((_QWORD *)a4 + 1);
  else
    v24 = 0LL;
  *((_QWORD *)v9 + 10) = v24;
LABEL_13:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v14, v15);
  v57 = *(_QWORD *)(v25 + 408);
  *(_QWORD *)(v25 + 408) = &v57;
  v58 = a1;
  if ( a1 )
    HMLockObject(a1);
  v28 = *(_QWORD *)(v16 + 472);
  v54 = *(_OWORD *)(v28 + 64);
  v60 = v54;
  v61 = *(_QWORD *)(v28 + 80);
  *(_QWORD *)(v28 + 72) = v17;
  if ( a1 )
    v29 = *a1;
  else
    v29 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v16 + 472) + 64LL) = v29;
  if ( a1 )
    v30 = *(_QWORD *)(a1[5] + 224LL);
  else
    v30 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v16 + 472) + 80LL) = v30;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v49,
    gdwInAtomicOperation,
    v26,
    v27);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v48);
  EtwTraceBeginCallback(27LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v31 = KeUserModeCallback(27LL, v9, *(unsigned int *)v9, &v55, v53);
  EtwTraceEndCallback(27LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v48);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v49,
    v32,
    v33,
    v34);
  ThreadUnlock1(v36, v35, v37);
  v38 = *(_QWORD *)(v16 + 472);
  *(_OWORD *)(v38 + 64) = v54;
  *(_QWORD *)(v38 + 80) = v61;
  if ( v31 >= 0 && v53[0] == 24 )
  {
    v39 = (__int64 *)v55;
    if ( v55 + 8 < v55 || v55 + 8 > MmUserProbeAddress )
      v39 = (__int64 *)MmUserProbeAddress;
    v40 = *v39;
    v62[3] = *v39;
    goto LABEL_28;
  }
LABEL_44:
  v40 = 0LL;
LABEL_28:
  if ( v9 != (unsigned __int8 *)v63 && v9 != v64 )
  {
    v47 = (PVOID *)(v9 + 32);
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v47, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v62, (__int64)v47, v14, v15);
  }
  return v40;
}
