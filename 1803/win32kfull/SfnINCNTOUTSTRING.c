/*
 * XREFs of SfnINCNTOUTSTRING @ 0x1C01D9F10
 * Callers:
 *     <none>
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

unsigned __int8 *__fastcall SfnINCNTOUTSTRING(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v11; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r13
  __int64 v14; // r14
  int v15; // r8d
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned __int64 v18; // rax
  unsigned __int8 *result; // rax
  __int64 v20; // rdx
  unsigned __int16 v21; // r12
  __int16 v22; // ax
  __int64 v23; // rdx
  int v24; // r11d
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // esi
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 *v35; // rsi
  __int64 v36; // rsi
  ULONG64 v37; // rcx
  __int64 v38; // xmm1_8
  __int64 v39; // rdx
  _WORD *v40; // rax
  char v41; // [rsp+30h] [rbp-388h] BYREF
  _BYTE v42[3]; // [rsp+31h] [rbp-387h] BYREF
  unsigned int v43; // [rsp+34h] [rbp-384h]
  int v44; // [rsp+38h] [rbp-380h]
  unsigned __int8 *v45; // [rsp+40h] [rbp-378h]
  int v46; // [rsp+48h] [rbp-370h]
  _DWORD v47[5]; // [rsp+4Ch] [rbp-36Ch] BYREF
  unsigned __int64 v48; // [rsp+60h] [rbp-358h] BYREF
  __int64 v49; // [rsp+68h] [rbp-350h]
  __int128 v50; // [rsp+70h] [rbp-348h]
  __int64 v51; // [rsp+80h] [rbp-338h]
  ULONG_PTR RegionSize; // [rsp+90h] [rbp-328h] BYREF
  __int64 v53; // [rsp+98h] [rbp-320h] BYREF
  volatile signed __int32 *v54; // [rsp+A0h] [rbp-318h]
  __int64 v55; // [rsp+A8h] [rbp-310h]
  __int128 v56; // [rsp+B0h] [rbp-308h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-2F8h]
  _QWORD v58[4]; // [rsp+F0h] [rbp-2C8h] BYREF
  unsigned __int8 v59[112]; // [rsp+110h] [rbp-2A8h] BYREF
  unsigned __int8 v60[512]; // [rsp+180h] [rbp-238h] BYREF

  v46 = a2;
  v44 = a7 & 1;
  v11 = v59;
  v49 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v50 = 0uLL;
  v51 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v15 = *(_DWORD *)(a4 + 4);
  v16 = v15 & 0x7FFFFFFF;
  v17 = -1;
  if ( v16 + 2 >= v16 )
    v17 = v16 + 2;
  v43 = v17;
  if ( v16 + 2 < v16 )
    goto LABEL_50;
  if ( v15 < 0 && !v44 )
  {
    v18 = 2LL * v17;
    v17 = -1;
    if ( v18 <= 0xFFFFFFFF )
      v17 = v18;
    v43 = v17;
    if ( v18 > 0xFFFFFFFF )
      goto LABEL_50;
  }
  result = AllocCallbackMessage(104, 1u, v17, v60, 0, 0x200uLL);
  v11 = result;
  v45 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
  if ( v11 != v59 && v11 != v60 )
    PushW32ThreadLock((__int64)v11, v58, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 5) = v14;
  *((_DWORD *)v11 + 12) = v46;
  *((_QWORD *)v11 + 7) = a3;
  v21 = *(_WORD *)(a4 + 4);
  if ( *(int *)(a4 + 4) >= 0 )
    v21 >>= 1;
  v22 = -1;
  if ( v21 != 0xFFFF )
    v22 = v21;
  *((_WORD *)v11 + 40) = v22;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v43, (void **)v11 + 11) < 0 )
    goto LABEL_50;
  *((_DWORD *)v11 + 24) = v24;
  v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23);
  v53 = *(_QWORD *)(v25 + 408);
  *(_QWORD *)(v25 + 408) = &v53;
  v54 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v26 = *(_QWORD *)(v13 + 472);
  v50 = *(_OWORD *)(v26 + 64);
  v51 = *(_QWORD *)(v26 + 80);
  *(_QWORD *)(v26 + 72) = v14;
  v27 = 0LL;
  if ( a1 )
    v27 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v27;
  if ( a1 )
    v28 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v28 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v28;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v42,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  EtwTraceBeginCallback(7LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v29 = KeUserModeCallback(7LL, v11, *(unsigned int *)v11, &v48, v47);
  EtwTraceEndCallback(7LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v42, v30);
  ThreadUnlock1(v32, v31, v33);
  v34 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v34 + 64) = v50;
  *(_QWORD *)(v34 + 80) = v51;
  if ( v29 < 0 || v47[0] != 24 )
    goto LABEL_50;
  v35 = (__int64 *)v48;
  if ( v48 + 8 < v48 || v48 + 8 > MmUserProbeAddress )
    v35 = (__int64 *)MmUserProbeAddress;
  v36 = *v35;
  v49 = v36;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_51;
  if ( !v36 )
  {
    v40 = *(_WORD **)(a4 + 8);
    if ( *(int *)(a4 + 4) >= 0 )
      *v40 = 0;
    else
      *(_BYTE *)v40 = 0;
    goto LABEL_51;
  }
  v37 = v48;
  if ( v48 + 24 < v48 || v48 + 24 > MmUserProbeAddress )
    v37 = MmUserProbeAddress;
  v38 = *(_QWORD *)(v37 + 16);
  v56 = *(_OWORD *)v37;
  v57 = v38;
  v39 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v39 && (*(_DWORD *)(v39 + 84) & 1) != 0 && *(_QWORD *)(v39 + 96) == a4 )
  {
LABEL_50:
    v36 = 0LL;
  }
  else
  {
    v36 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v56, v36, *(_DWORD *)(a4 + 4) >> 31, v44);
    v49 = v36;
    CopyOutputString((volatile void **)&v56, (struct _LARGE_STRING *)a4, v21, v44);
  }
LABEL_51:
  if ( v11 != v59 && v11 != v60 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v58);
  }
  return (unsigned __int8 *)v36;
}
