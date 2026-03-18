/*
 * XREFs of SfnINCNTOUTSTRINGNULL @ 0x1C01DA4C0
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

unsigned __int8 *__fastcall SfnINCNTOUTSTRINGNULL(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v9; // r15d
  int v11; // r12d
  unsigned __int8 *v12; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // r14
  __int64 v15; // rsi
  int v16; // r8d
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned __int64 v19; // rax
  unsigned __int8 *result; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // r11d
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 *v35; // rdi
  __int64 v36; // rdi
  __m128i *v37; // rcx
  __int64 v38; // xmm1_8
  __int64 v39; // rdx
  char v40; // [rsp+30h] [rbp-378h] BYREF
  _BYTE v41[3]; // [rsp+31h] [rbp-377h] BYREF
  unsigned int v42; // [rsp+34h] [rbp-374h]
  unsigned __int8 *v43; // [rsp+38h] [rbp-370h]
  int v44[6]; // [rsp+40h] [rbp-368h] BYREF
  unsigned __int64 v45; // [rsp+58h] [rbp-350h] BYREF
  __int64 v46; // [rsp+60h] [rbp-348h]
  unsigned int v47[2]; // [rsp+68h] [rbp-340h]
  __int128 v48; // [rsp+70h] [rbp-338h]
  __int64 v49; // [rsp+80h] [rbp-328h]
  ULONG_PTR RegionSize; // [rsp+90h] [rbp-318h] BYREF
  __int64 v51; // [rsp+98h] [rbp-310h] BYREF
  volatile signed __int32 *v52; // [rsp+A0h] [rbp-308h]
  __int64 v53; // [rsp+A8h] [rbp-300h]
  __m128i v54; // [rsp+B0h] [rbp-2F8h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-2E8h]
  _QWORD v56[3]; // [rsp+E8h] [rbp-2C0h] BYREF
  unsigned __int8 v57[96]; // [rsp+100h] [rbp-2A8h] BYREF
  unsigned __int8 v58[512]; // [rsp+160h] [rbp-248h] BYREF

  *(_QWORD *)v47 = a3;
  v9 = a2;
  v11 = a7 & 1;
  v12 = v57;
  v46 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v48 = 0uLL;
  v49 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v14 = ThreadWin32Thread;
  if ( a1 )
    v15 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v15 = 0LL;
  v16 = *(_DWORD *)(a4 + 4);
  v17 = v16 & 0x7FFFFFFF;
  v18 = -1;
  if ( v17 + 2 >= v17 )
    v18 = v17 + 2;
  v42 = v18;
  if ( v17 + 2 < v17 )
    goto LABEL_46;
  if ( v16 < 0 && (a7 & 1) == 0 )
  {
    v19 = 2LL * v18;
    v18 = -1;
    if ( v19 <= 0xFFFFFFFF )
      v18 = v19;
    v42 = v18;
    if ( v19 > 0xFFFFFFFF )
      goto LABEL_46;
  }
  result = AllocCallbackMessage(96, 1u, v18, v58, 0, 0x200uLL);
  v12 = result;
  v43 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21);
  if ( v12 != v57 && v12 != v58 )
    PushW32ThreadLock((__int64)v12, v56, (__int64)Win32FreePool);
  v22 = *(_QWORD *)v47;
  if ( *(_QWORD *)v47 < 2uLL )
    goto LABEL_46;
  *((_QWORD *)v12 + 5) = v15;
  *((_DWORD *)v12 + 12) = v9;
  *((_QWORD *)v12 + 7) = v22;
  *((_QWORD *)v12 + 8) = a5;
  *((_QWORD *)v12 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v12, v42, (void **)v12 + 10) < 0 )
    goto LABEL_46;
  *((_DWORD *)v12 + 22) = v24;
  v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23);
  v51 = *(_QWORD *)(v25 + 408);
  *(_QWORD *)(v25 + 408) = &v51;
  v52 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v26 = *(_QWORD *)(v14 + 472);
  v48 = *(_OWORD *)(v26 + 64);
  v49 = *(_QWORD *)(v26 + 80);
  *(_QWORD *)(v26 + 72) = v15;
  if ( a1 )
    v27 = *(_QWORD *)a1;
  else
    v27 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 64LL) = v27;
  if ( a1 )
    v28 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v28 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 80LL) = v28;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v41,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  EtwTraceBeginCallback(8LL);
  *((_QWORD *)v12 + 2) = 0LL;
  v29 = KeUserModeCallback(8LL, v12, *(unsigned int *)v12, &v45, v44);
  EtwTraceEndCallback(8LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v41, v30);
  ThreadUnlock1(v32, v31, v33);
  v34 = *(_QWORD *)(v14 + 472);
  *(_OWORD *)(v34 + 64) = v48;
  *(_QWORD *)(v34 + 80) = v49;
  if ( v29 < 0 || v44[0] != 24 )
    goto LABEL_46;
  v35 = (__int64 *)v45;
  if ( v45 + 8 < v45 || v45 + 8 > MmUserProbeAddress )
    v35 = (__int64 *)MmUserProbeAddress;
  v36 = *v35;
  v46 = v36;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_47;
  v37 = (__m128i *)v45;
  if ( v45 + 24 < v45 || v45 + 24 > MmUserProbeAddress )
    v37 = (__m128i *)MmUserProbeAddress;
  v38 = v37[1].m128i_i64[0];
  v54 = *v37;
  v55 = v38;
  if ( !_mm_cvtsi128_si32(_mm_srli_si128(v54, 8)) )
    goto LABEL_47;
  v39 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v39 && (*(_DWORD *)(v39 + 84) & 1) != 0 && *(_QWORD *)(v39 + 96) == a4 )
  {
LABEL_46:
    v36 = 0LL;
  }
  else
  {
    v36 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v54, v36, *(_DWORD *)(a4 + 4) >> 31, v11);
    v46 = v36;
    CopyOutputString((volatile void **)&v54, (struct _LARGE_STRING *)a4, v47[0], v11);
  }
LABEL_47:
  if ( v12 != v57 && v12 != v58 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v56);
  }
  return (unsigned __int8 *)v36;
}
