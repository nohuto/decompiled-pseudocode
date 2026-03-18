/*
 * XREFs of ClientGetListboxString @ 0x1C014F55C
 * Callers:
 *     SfnOUTCBOXSTRING @ 0x1C014F360 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x1C014F460 (SfnOUTLBOXSTRING.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C001A718 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00AF69C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00B0068 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00B01B4 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall ClientGetListboxString(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 a9)
{
  int v11; // r13d
  unsigned __int8 *v13; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // r15
  __int64 v16; // rsi
  int v17; // r8d
  unsigned int v18; // ecx
  unsigned int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // r11d
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned __int64 *v32; // rdi
  unsigned __int64 v33; // rdi
  ULONG64 v34; // rcx
  __int64 v35; // xmm0_8
  __int64 v36; // rdx
  int v37; // r15d
  int v38; // r8d
  unsigned int v39; // r8d
  unsigned int v40; // eax
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  _QWORD *v44; // rcx
  PVOID *v45; // rdx
  char v46; // [rsp+30h] [rbp-388h] BYREF
  _BYTE v47[3]; // [rsp+31h] [rbp-387h] BYREF
  unsigned int v48; // [rsp+34h] [rbp-384h]
  int v49; // [rsp+38h] [rbp-380h]
  unsigned __int8 *v50; // [rsp+40h] [rbp-378h]
  _DWORD v51[6]; // [rsp+48h] [rbp-370h] BYREF
  unsigned __int64 v52; // [rsp+60h] [rbp-358h] BYREF
  unsigned __int64 v53; // [rsp+68h] [rbp-350h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-340h] BYREF
  __int64 v55; // [rsp+80h] [rbp-338h] BYREF
  volatile signed __int32 *v56; // [rsp+88h] [rbp-330h]
  __int64 v57; // [rsp+90h] [rbp-328h]
  __int128 v58; // [rsp+98h] [rbp-320h]
  __int64 v59; // [rsp+A8h] [rbp-310h]
  __int128 v60; // [rsp+B0h] [rbp-308h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-2F8h]
  __int128 v62; // [rsp+F0h] [rbp-2C8h]
  _QWORD v63[4]; // [rsp+100h] [rbp-2B8h] BYREF
  unsigned __int8 v64[96]; // [rsp+120h] [rbp-298h] BYREF
  unsigned __int8 v65[512]; // [rsp+180h] [rbp-238h] BYREF

  v11 = a2;
  v49 = a7 & 1;
  v13 = v64;
  v53 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0uLL;
  v59 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v16 = 0LL;
  v17 = a4[1];
  v18 = v17 & 0x7FFFFFFF;
  v19 = -1;
  if ( v18 + 2 >= v18 )
    v19 = v18 + 2;
  v48 = v19;
  if ( v18 + 2 < v18 )
    goto LABEL_52;
  if ( v17 < 0 && !v49 )
  {
    v42 = 2LL * v19;
    v19 = -1;
    if ( v42 <= 0xFFFFFFFF )
      v19 = v42;
    v48 = v19;
    if ( v42 > 0xFFFFFFFF )
      goto LABEL_52;
  }
  v13 = AllocCallbackMessage(96, 1u, v19, v65, 0, 0x200uLL);
  v50 = v13;
  if ( !v13 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
  if ( v13 != v64 && v13 != v65 )
    PushW32ThreadLock((__int64)v13, v63, (__int64)Win32FreePool);
  *((_QWORD *)v13 + 5) = v16;
  *((_DWORD *)v13 + 12) = v11;
  *((_QWORD *)v13 + 7) = a3;
  *((_QWORD *)v13 + 8) = a5;
  *((_QWORD *)v13 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v13, v48, (void **)v13 + 10) < 0 )
    goto LABEL_52;
  *((_DWORD *)v13 + 22) = v22;
  v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21);
  v55 = *(_QWORD *)(v23 + 416);
  *(_QWORD *)(v23 + 416) = &v55;
  v56 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v24 = *(_QWORD *)(v15 + 480);
  v62 = *(_OWORD *)(v24 + 64);
  v58 = v62;
  v59 = *(_QWORD *)(v24 + 80);
  *(_QWORD *)(v24 + 72) = v16;
  if ( a1 )
    v25 = *(_QWORD *)a1;
  else
    v25 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 480) + 64LL) = v25;
  if ( a1 )
    v26 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 480) + 80LL) = v26;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v47,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v46);
  EtwTraceBeginCallback(72LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v27 = KeUserModeCallback(72LL, v13, *(unsigned int *)v13, &v52, v51);
  EtwTraceEndCallback(72LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v46);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v47, v28);
  ThreadUnlock1(v30, v29);
  v31 = *(_QWORD *)(v15 + 480);
  *(_OWORD *)(v31 + 64) = v62;
  *(_QWORD *)(v31 + 80) = v59;
  if ( v27 < 0 || v51[0] != 24 )
    goto LABEL_52;
  v32 = (unsigned __int64 *)v52;
  if ( v52 + 8 < v52 || v52 + 8 > MmUserProbeAddress )
    v32 = (unsigned __int64 *)MmUserProbeAddress;
  v33 = *v32;
  v53 = v33;
  if ( (v33 & 0x80000000) != 0LL || a9 && (*(_DWORD *)(a9 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_47;
  if ( !a8 )
  {
    v34 = v52;
    if ( v52 + 24 < v52 || v52 + 24 > MmUserProbeAddress )
      v34 = MmUserProbeAddress;
    v35 = *(_QWORD *)(v34 + 16);
    v60 = *(_OWORD *)v34;
    v61 = v35;
    v36 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( v36 && (*(_DWORD *)(v36 + 84) & 1) != 0 && *(int **)(v36 + 96) == a4 )
      goto LABEL_52;
    v37 = v49;
    v33 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v60, v33, (unsigned int)a4[1] >> 31, v49);
    v53 = v33;
    v38 = a4[1];
    if ( v38 < 0 )
      v39 = v38 & 0x7FFFFFFF;
    else
      v39 = ((unsigned int)v38 >> 1) & 0x3FFFFFFF;
    CopyOutputString((struct _CALLBACKSTATUS *)&v60, (PWCH *)a4, v39, v37);
LABEL_41:
    if ( !a8 && v33 != -1LL )
    {
      v40 = (unsigned int)*a4 >> 1;
      if ( a4[1] < 0 )
        v40 = *a4;
      if ( v33 > v40 )
        LODWORD(v33) = v40;
    }
    goto LABEL_47;
  }
  v43 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( !v43 || (*(_DWORD *)(v43 + 84) & 1) == 0 || *(_QWORD *)(v43 + 96) != *((_QWORD *)a4 + 1) )
  {
    v44 = *(_QWORD **)(v52 + 16);
    if ( v44 + 1 < v44 || (unsigned __int64)(v44 + 1) > MmUserProbeAddress )
      v44 = (_QWORD *)MmUserProbeAddress;
    **((_QWORD **)a4 + 1) = *v44;
    goto LABEL_41;
  }
LABEL_52:
  LODWORD(v33) = 0;
LABEL_47:
  if ( v13 != v64 && v13 != v65 )
  {
    v45 = (PVOID *)(v13 + 32);
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v45, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v63, (__int64)v45);
  }
  return (unsigned int)v33;
}
