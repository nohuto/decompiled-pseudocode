/*
 * XREFs of SfnINSTRING @ 0x1C0103970
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

unsigned __int8 *__fastcall SfnINSTRING(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int8 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r8
  __int64 v14; // r13
  __int64 v15; // r12
  unsigned __int64 v16; // rcx
  unsigned int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 *v34; // rcx
  __int64 v35; // rdi
  unsigned __int8 *result; // rax
  void **v37; // r9
  unsigned int v38; // r8d
  CHAR *v39; // rdx
  unsigned int v40; // r8d
  int v41; // eax
  PVOID *v42; // rdx
  char v43; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v44[3]; // [rsp+31h] [rbp-357h] BYREF
  int v45; // [rsp+34h] [rbp-354h]
  unsigned __int8 *v46; // [rsp+38h] [rbp-350h]
  unsigned int v47; // [rsp+40h] [rbp-348h]
  int v48[7]; // [rsp+44h] [rbp-344h] BYREF
  __int128 v49; // [rsp+60h] [rbp-328h]
  unsigned __int64 v50; // [rsp+70h] [rbp-318h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-310h] BYREF
  __int64 v52; // [rsp+80h] [rbp-308h] BYREF
  _QWORD *v53; // [rsp+88h] [rbp-300h]
  __int64 v54; // [rsp+90h] [rbp-2F8h]
  __int128 v55; // [rsp+98h] [rbp-2F0h]
  __int64 v56; // [rsp+A8h] [rbp-2E0h]
  _QWORD v57[8]; // [rsp+B0h] [rbp-2D8h] BYREF
  _DWORD v58[24]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int8 v59[512]; // [rsp+150h] [rbp-238h] BYREF

  *(_QWORD *)&v49 = a3;
  v47 = a2;
  memset(v58, 0, 0x58uLL);
  v9 = (unsigned __int8 *)v58;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0uLL;
  v56 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11);
  v14 = ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v15 = 0LL;
  if ( !a4 || *((_QWORD *)a4 + 1) < (unsigned __int64)MmSystemRangeStart && (unsigned int)a4[1] >> 31 == (a7 & 1) )
  {
    LODWORD(v16) = 0;
    v17 = 0;
LABEL_7:
    v45 = v16;
    goto LABEL_8;
  }
  v17 = 1;
  v16 = (unsigned int)(*a4 + 2);
  if ( (unsigned int)v16 < *a4 )
    goto LABEL_44;
  v45 = *a4 + 2;
  if ( a4[1] < 0 && (a7 & 1) == 0 )
  {
    v16 *= 2LL;
    if ( v16 > 0xFFFFFFFF )
      goto LABEL_44;
    goto LABEL_7;
  }
LABEL_8:
  if ( v17 )
  {
    result = AllocCallbackMessage(88, v17, (unsigned int)v16, v59, 1, 0x200uLL);
    v9 = result;
    v46 = result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = (unsigned __int8 *)v58;
    v46 = (unsigned __int8 *)v58;
    memset(&v58[1], 0, 0x54uLL);
    v58[0] = 88;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19);
  memset(v57, 0, 24);
  if ( v9 != (unsigned __int8 *)v58 && v9 != v59 )
    PushW32ThreadLock((__int64)v9, v57, (__int64)Win32FreePool);
  *((_QWORD *)v9 + 5) = v15;
  *((_DWORD *)v9 + 12) = v47;
  *((_QWORD *)v9 + 7) = v49;
  if ( v17 )
  {
    v37 = (void **)(v9 + 80);
    v38 = *a4;
    v39 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] < 0 )
    {
      if ( (a7 & 1) != 0 )
      {
        v40 = v38 + 1;
        goto LABEL_42;
      }
      v41 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v39, 2 * v38 + 2, v37);
    }
    else
    {
      if ( (a7 & 1) == 0 )
      {
        v40 = v38 + 2;
LABEL_42:
        v41 = CaptureCallbackData((struct _CAPTUREBUF *)v9, v39, v40, v37);
        goto LABEL_43;
      }
      v41 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v39, (v38 >> 1) + 1, v37);
    }
LABEL_43:
    if ( v41 < 0 )
      goto LABEL_44;
    goto LABEL_15;
  }
  if ( a4 )
    v21 = *((_QWORD *)a4 + 1);
  else
    v21 = 0LL;
  *((_QWORD *)v9 + 10) = v21;
LABEL_15:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v13);
  v52 = *(_QWORD *)(v22 + 408);
  *(_QWORD *)(v22 + 408) = &v52;
  v53 = a1;
  if ( a1 )
    HMLockObject(a1);
  v24 = *(_QWORD *)(v14 + 472);
  v49 = *(_OWORD *)(v24 + 64);
  v55 = v49;
  v56 = *(_QWORD *)(v24 + 80);
  *(_QWORD *)(v24 + 72) = v15;
  if ( a1 )
    v25 = *a1;
  else
    v25 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 64LL) = v25;
  if ( a1 )
    v26 = *(_QWORD *)(a1[5] + 224LL);
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 80LL) = v26;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v44,
    gdwInAtomicOperation,
    v23);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  EtwTraceBeginCallback(26LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v27 = KeUserModeCallback(26LL, v9, *(unsigned int *)v9, &v50, v48);
  EtwTraceEndCallback(26LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v44,
    v28,
    v29);
  ThreadUnlock1(v31, v30, v32);
  v33 = *(_QWORD *)(v14 + 472);
  *(_OWORD *)(v33 + 64) = v49;
  *(_QWORD *)(v33 + 80) = v56;
  if ( v27 >= 0 && v48[0] == 24 )
  {
    v34 = (__int64 *)v50;
    if ( v50 + 8 < v50 || v50 + 8 > MmUserProbeAddress )
      v34 = (__int64 *)MmUserProbeAddress;
    v35 = *v34;
    v57[3] = *v34;
    goto LABEL_30;
  }
LABEL_44:
  v35 = 0LL;
LABEL_30:
  if ( v9 != (unsigned __int8 *)v58 && v9 != v59 )
  {
    v42 = (PVOID *)(v9 + 32);
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v42, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v57, (__int64)v42, v13);
  }
  return (unsigned __int8 *)v35;
}
