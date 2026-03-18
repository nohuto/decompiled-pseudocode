/*
 * XREFs of ClientGetListboxString @ 0x1C012CAF8
 * Callers:
 *     SfnOUTCBOXSTRING @ 0x1C012C900 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x1C012CA00 (SfnOUTLBOXSTRING.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0020A2C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0052E24 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0053670 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0053734 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall ClientGetListboxString(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        struct _LARGE_STRING *a4,
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
  __int64 v31; // r8
  __int64 v32; // rcx
  unsigned __int64 *v33; // rdi
  unsigned __int64 v34; // rdi
  ULONG64 v36; // rcx
  __int64 v37; // xmm1_8
  __int64 v38; // rdx
  int v39; // r15d
  int v40; // r8d
  unsigned int v41; // r8d
  unsigned int v42; // eax
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // rcx
  char v46; // [rsp+30h] [rbp-378h] BYREF
  _BYTE v47[3]; // [rsp+31h] [rbp-377h] BYREF
  unsigned int v48; // [rsp+34h] [rbp-374h]
  int v49; // [rsp+38h] [rbp-370h]
  unsigned __int8 *v50; // [rsp+40h] [rbp-368h]
  _DWORD v51[6]; // [rsp+48h] [rbp-360h] BYREF
  unsigned __int64 v52; // [rsp+60h] [rbp-348h] BYREF
  unsigned __int64 v53; // [rsp+68h] [rbp-340h]
  __int128 v54; // [rsp+70h] [rbp-338h]
  __int64 v55; // [rsp+80h] [rbp-328h]
  ULONG_PTR RegionSize; // [rsp+90h] [rbp-318h] BYREF
  __int64 v57; // [rsp+98h] [rbp-310h] BYREF
  volatile signed __int32 *v58; // [rsp+A0h] [rbp-308h]
  __int64 v59; // [rsp+A8h] [rbp-300h]
  __int128 v60; // [rsp+B0h] [rbp-2F8h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-2E8h]
  _QWORD v62[4]; // [rsp+F0h] [rbp-2B8h] BYREF
  unsigned __int8 v63[96]; // [rsp+110h] [rbp-298h] BYREF
  unsigned __int8 v64[512]; // [rsp+170h] [rbp-238h] BYREF

  v11 = a2;
  v49 = a7 & 1;
  v13 = v63;
  v53 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v54 = 0uLL;
  v55 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v16 = 0LL;
  v17 = *((_DWORD *)a4 + 1);
  v18 = v17 & 0x7FFFFFFF;
  v19 = -1;
  if ( v18 + 2 >= v18 )
    v19 = v18 + 2;
  v48 = v19;
  if ( v18 + 2 < v18 )
    goto LABEL_50;
  if ( v17 < 0 && !v49 )
  {
    v43 = 2LL * v19;
    v19 = -1;
    if ( v43 <= 0xFFFFFFFF )
      v19 = v43;
    v48 = v19;
    if ( v43 > 0xFFFFFFFF )
      goto LABEL_50;
  }
  v13 = AllocCallbackMessage(96, 1u, v19, v64, 0, 0x200uLL);
  v50 = v13;
  if ( !v13 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
  if ( v13 != v63 && v13 != v64 )
    PushW32ThreadLock((__int64)v13, v62, (__int64)Win32FreePool);
  *((_QWORD *)v13 + 5) = v16;
  *((_DWORD *)v13 + 12) = v11;
  *((_QWORD *)v13 + 7) = a3;
  *((_QWORD *)v13 + 8) = a5;
  *((_QWORD *)v13 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v13, v48, (void **)v13 + 10) < 0 )
    goto LABEL_50;
  *((_DWORD *)v13 + 22) = v22;
  v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21);
  v57 = *(_QWORD *)(v23 + 408);
  *(_QWORD *)(v23 + 408) = &v57;
  v58 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v24 = *(_QWORD *)(v15 + 472);
  v54 = *(_OWORD *)(v24 + 64);
  v55 = *(_QWORD *)(v24 + 80);
  *(_QWORD *)(v24 + 72) = v16;
  if ( a1 )
    v25 = *(_QWORD *)a1;
  else
    v25 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 472) + 64LL) = v25;
  if ( a1 )
    v26 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 472) + 80LL) = v26;
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
  ThreadUnlock1(v30, v29, v31);
  v32 = *(_QWORD *)(v15 + 472);
  *(_OWORD *)(v32 + 64) = v54;
  *(_QWORD *)(v32 + 80) = v55;
  if ( v27 < 0 || v51[0] != 24 )
    goto LABEL_50;
  v33 = (unsigned __int64 *)v52;
  if ( v52 + 8 < v52 || v52 + 8 > MmUserProbeAddress )
    v33 = (unsigned __int64 *)MmUserProbeAddress;
  v34 = *v33;
  v53 = v34;
  if ( (v34 & 0x80000000) != 0LL || a9 && (*(_DWORD *)(a9 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_29;
  if ( !a8 )
  {
    v36 = v52;
    if ( v52 + 24 < v52 || v52 + 24 > MmUserProbeAddress )
      v36 = MmUserProbeAddress;
    v37 = *(_QWORD *)(v36 + 16);
    v60 = *(_OWORD *)v36;
    v61 = v37;
    v38 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( v38 && (*(_DWORD *)(v38 + 84) & 1) != 0 && *(struct _LARGE_STRING **)(v38 + 96) == a4 )
      goto LABEL_50;
    v39 = v49;
    v34 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v60, v34, *((_DWORD *)a4 + 1) >> 31, v49);
    v53 = v34;
    v40 = *((_DWORD *)a4 + 1);
    if ( v40 < 0 )
      v41 = v40 & 0x7FFFFFFF;
    else
      v41 = ((unsigned int)v40 >> 1) & 0x3FFFFFFF;
    CopyOutputString((volatile void **)&v60, a4, v41, v39);
LABEL_44:
    v42 = *(_DWORD *)a4;
    if ( *((int *)a4 + 1) >= 0 )
      v42 >>= 1;
    if ( !a8 && v34 != -1LL && v34 > v42 )
      LODWORD(v34) = v42;
    goto LABEL_29;
  }
  v44 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( !v44 || (*(_DWORD *)(v44 + 84) & 1) == 0 || *(_QWORD *)(v44 + 96) != *((_QWORD *)a4 + 1) )
  {
    v45 = *(_QWORD **)(v52 + 16);
    if ( v45 + 1 < v45 || (unsigned __int64)(v45 + 1) > MmUserProbeAddress )
      v45 = (_QWORD *)MmUserProbeAddress;
    **((_QWORD **)a4 + 1) = *v45;
    goto LABEL_44;
  }
LABEL_50:
  LODWORD(v34) = 0;
LABEL_29:
  if ( v13 != v63 && v13 != v64 )
  {
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v62);
  }
  return (unsigned int)v34;
}
