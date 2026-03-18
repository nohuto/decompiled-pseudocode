/*
 * XREFs of SfnINSTRINGNULL @ 0x1C0050770
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C0103898 (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
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

__int64 __fastcall SfnINSTRINGNULL(_QWORD *a1, unsigned int a2, __int64 a3, int *a4, __int64 a5, __int64 a6, char a7)
{
  unsigned __int8 *v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // r12
  unsigned int v14; // r14d
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 *v29; // rcx
  __int64 v30; // rdi
  void **v32; // r9
  unsigned int v33; // r8d
  CHAR *v34; // rdx
  unsigned int v35; // r8d
  int v36; // eax
  PVOID *v37; // rdx
  char v38; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v39[3]; // [rsp+31h] [rbp-357h] BYREF
  int v40; // [rsp+34h] [rbp-354h]
  unsigned __int8 *v41; // [rsp+38h] [rbp-350h]
  unsigned int v42; // [rsp+40h] [rbp-348h]
  int v43[7]; // [rsp+44h] [rbp-344h] BYREF
  __int128 v44; // [rsp+60h] [rbp-328h]
  unsigned __int64 v45; // [rsp+70h] [rbp-318h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-310h] BYREF
  __int64 v47; // [rsp+80h] [rbp-308h] BYREF
  _QWORD *v48; // [rsp+88h] [rbp-300h]
  __int64 v49; // [rsp+90h] [rbp-2F8h]
  __int128 v50; // [rsp+98h] [rbp-2F0h]
  __int64 v51; // [rsp+A8h] [rbp-2E0h]
  _QWORD v52[8]; // [rsp+B0h] [rbp-2D8h] BYREF
  _DWORD v53[24]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int8 v54[512]; // [rsp+150h] [rbp-238h] BYREF

  *(_QWORD *)&v44 = a3;
  v42 = a2;
  memset(v53, 0, 0x58uLL);
  v9 = (unsigned __int8 *)v53;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0uLL;
  v51 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  v14 = 0;
  LODWORD(v15) = 0;
  v40 = 0;
  if ( a4 && (*((_QWORD *)a4 + 1) >= (unsigned __int64)MmSystemRangeStart || (unsigned int)a4[1] >> 31 != (a7 & 1)) )
  {
    v14 = 1;
    v15 = (unsigned int)(*a4 + 2);
    if ( (unsigned int)v15 < *a4 )
      goto LABEL_44;
    v40 = *a4 + 2;
    if ( a4[1] < 0 && (a7 & 1) == 0 )
    {
      v15 *= 2LL;
      if ( v15 > 0xFFFFFFFF )
        goto LABEL_44;
      v40 = v15;
    }
  }
  if ( v14 )
  {
    v9 = (unsigned __int8 *)AllocCallbackMessage(0x58u, v14, (unsigned int)v15, v54, 1, 0x200uLL);
    v41 = v9;
    if ( !v9 )
      return 0LL;
  }
  else
  {
    v9 = (unsigned __int8 *)v53;
    v41 = (unsigned __int8 *)v53;
    memset(&v53[1], 0, 0x54uLL);
    v53[0] = 88;
  }
  W32GetThreadWin32Thread(KeGetCurrentThread());
  memset(v52, 0, 24);
  if ( v9 != (unsigned __int8 *)v53 && v9 != v54 )
    PushW32ThreadLock((__int64)v9, v52, (__int64)Win32FreePool);
  *((_QWORD *)v9 + 5) = v13;
  *((_DWORD *)v9 + 12) = v42;
  *((_QWORD *)v9 + 7) = v44;
  if ( v14 )
  {
    v32 = (void **)(v9 + 80);
    v33 = *a4;
    v34 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] < 0 )
    {
      if ( (a7 & 1) != 0 )
      {
        v35 = v33 + 1;
        goto LABEL_42;
      }
      v36 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v34, 2 * v33 + 2, v32);
    }
    else
    {
      if ( (a7 & 1) == 0 )
      {
        v35 = v33 + 2;
LABEL_42:
        v36 = CaptureCallbackData((struct _CAPTUREBUF *)v9, v34, v35, v32);
        goto LABEL_43;
      }
      v36 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v34, (v33 >> 1) + 1, v32);
    }
LABEL_43:
    if ( v36 < 0 )
      goto LABEL_44;
    goto LABEL_13;
  }
  if ( a4 )
    v16 = *((_QWORD *)a4 + 1);
  else
    v16 = 0LL;
  *((_QWORD *)v9 + 10) = v16;
LABEL_13:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  v17 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v47 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v47;
  v48 = a1;
  if ( a1 )
    HMLockObject(a1);
  v19 = *(_QWORD *)(v12 + 472);
  v44 = *(_OWORD *)(v19 + 64);
  v50 = v44;
  v51 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v13;
  if ( a1 )
    v20 = *a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(a1[5] + 224LL);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v39,
    gdwInAtomicOperation,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  EtwTraceBeginCallback(27LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v22 = KeUserModeCallback(27LL, v9, *(unsigned int *)v9, &v45, v43);
  EtwTraceEndCallback(27LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v39,
    v23,
    v24);
  ThreadUnlock1(v26, v25, v27);
  v28 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v28 + 64) = v44;
  *(_QWORD *)(v28 + 80) = v51;
  if ( v22 >= 0 && v43[0] == 24 )
  {
    v29 = (__int64 *)v45;
    if ( v45 + 8 < v45 || v45 + 8 > MmUserProbeAddress )
      v29 = (__int64 *)MmUserProbeAddress;
    v30 = *v29;
    v52[3] = *v29;
    goto LABEL_28;
  }
LABEL_44:
  v30 = 0LL;
LABEL_28:
  if ( v9 != (unsigned __int8 *)v53 && v9 != v54 )
  {
    v37 = (PVOID *)(v9 + 32);
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v37, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v52, (__int64)v37, v11);
  }
  return v30;
}
