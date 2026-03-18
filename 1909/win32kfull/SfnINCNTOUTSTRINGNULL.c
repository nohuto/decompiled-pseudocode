/*
 * XREFs of SfnINCNTOUTSTRINGNULL @ 0x1C02168B0
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
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00534F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0057744 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0057820 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0057A5C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

unsigned __int8 *__fastcall SfnINCNTOUTSTRINGNULL(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v11; // r12d
  unsigned __int8 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // r8
  __int64 v17; // r14
  __int64 v18; // rsi
  int v19; // ecx
  unsigned __int64 v20; // rdx
  unsigned __int8 *result; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // r11d
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // edi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 *v39; // rdi
  __int64 v40; // rdi
  __m128i *v41; // rcx
  __int64 v42; // xmm0_8
  __int64 v43; // rdx
  PVOID *v44; // rdx
  char v45; // [rsp+30h] [rbp-388h] BYREF
  _BYTE v46[3]; // [rsp+31h] [rbp-387h] BYREF
  unsigned int v47; // [rsp+34h] [rbp-384h]
  unsigned __int8 *v48; // [rsp+38h] [rbp-380h]
  int v49[6]; // [rsp+40h] [rbp-378h] BYREF
  unsigned __int64 v50; // [rsp+58h] [rbp-360h] BYREF
  __int64 v51; // [rsp+60h] [rbp-358h]
  unsigned int v52[4]; // [rsp+68h] [rbp-350h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-340h] BYREF
  __int64 v54; // [rsp+80h] [rbp-338h] BYREF
  _QWORD *v55; // [rsp+88h] [rbp-330h]
  __int64 v56; // [rsp+90h] [rbp-328h]
  __int128 v57; // [rsp+98h] [rbp-320h]
  __int64 v58; // [rsp+A8h] [rbp-310h]
  _QWORD v59[3]; // [rsp+B0h] [rbp-308h] BYREF
  __m128i v60; // [rsp+C8h] [rbp-2F0h] BYREF
  __int64 v61; // [rsp+D8h] [rbp-2E0h]
  __int128 v62; // [rsp+100h] [rbp-2B8h]
  unsigned __int8 v63[96]; // [rsp+110h] [rbp-2A8h] BYREF
  unsigned __int8 v64[512]; // [rsp+170h] [rbp-248h] BYREF

  *(_QWORD *)v52 = a3;
  v11 = a7 & 1;
  memset(v63, 0, sizeof(v63));
  v12 = v63;
  v51 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0uLL;
  v58 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14);
  v17 = ThreadWin32Thread;
  if ( a1 )
    v18 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v18 = 0LL;
  v19 = *(_DWORD *)(a4 + 4);
  v20 = (v19 & 0x7FFFFFFFu) + 2;
  if ( (unsigned int)v20 < (v19 & 0x7FFFFFFFu) )
    goto LABEL_43;
  v47 = (v19 & 0x7FFFFFFF) + 2;
  if ( v19 >= 0 || (a7 & 1) != 0 )
    goto LABEL_9;
  v20 *= 2LL;
  if ( v20 > 0xFFFFFFFF )
  {
LABEL_43:
    v40 = 0LL;
    goto LABEL_44;
  }
  v47 = v20;
LABEL_9:
  result = AllocCallbackMessage(96, 1u, (unsigned int)v20, v64, 0, 0x200uLL);
  v12 = result;
  v48 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23);
  memset(v59, 0, sizeof(v59));
  if ( v12 != v63 && v12 != v64 )
    PushW32ThreadLock((__int64)v12, v59, (__int64)Win32FreePool);
  v24 = *(_QWORD *)v52;
  if ( *(_QWORD *)v52 < 2uLL )
    goto LABEL_43;
  *((_QWORD *)v12 + 5) = v18;
  *((_DWORD *)v12 + 12) = a2;
  *((_QWORD *)v12 + 7) = v24;
  *((_QWORD *)v12 + 8) = a5;
  *((_QWORD *)v12 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v12, v47, (void **)v12 + 10) < 0 )
    goto LABEL_43;
  *((_DWORD *)v12 + 22) = v26;
  v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v16);
  v54 = *(_QWORD *)(v27 + 408);
  *(_QWORD *)(v27 + 408) = &v54;
  v55 = a1;
  if ( a1 )
    HMLockObject(a1);
  v29 = *(_QWORD *)(v17 + 472);
  v62 = *(_OWORD *)(v29 + 64);
  v57 = v62;
  v58 = *(_QWORD *)(v29 + 80);
  *(_QWORD *)(v29 + 72) = v18;
  if ( a1 )
    v30 = *a1;
  else
    v30 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v17 + 472) + 64LL) = v30;
  if ( a1 )
    v31 = *(_QWORD *)(a1[5] + 224LL);
  else
    v31 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v17 + 472) + 80LL) = v31;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v46,
    gdwInAtomicOperation,
    v28);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  EtwTraceBeginCallback(8LL);
  *((_QWORD *)v12 + 2) = 0LL;
  v32 = KeUserModeCallback(8LL, v12, *(unsigned int *)v12, &v50, v49);
  EtwTraceEndCallback(8LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v46,
    v33,
    v34);
  ThreadUnlock1(v36, v35, v37);
  v38 = *(_QWORD *)(v17 + 472);
  *(_OWORD *)(v38 + 64) = v62;
  *(_QWORD *)(v38 + 80) = v58;
  if ( v32 < 0 || v49[0] != 24 )
    goto LABEL_43;
  v39 = (__int64 *)v50;
  if ( v50 + 8 < v50 || v50 + 8 > MmUserProbeAddress )
    v39 = (__int64 *)MmUserProbeAddress;
  v40 = *v39;
  v51 = v40;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_44;
  v41 = (__m128i *)v50;
  if ( v50 + 24 < v50 || v50 + 24 > MmUserProbeAddress )
    v41 = (__m128i *)MmUserProbeAddress;
  v42 = v41[1].m128i_i64[0];
  v60 = *v41;
  v61 = v42;
  if ( !_mm_cvtsi128_si32(_mm_srli_si128(v60, 8)) )
    goto LABEL_44;
  v43 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v43 )
  {
    if ( (*(_DWORD *)(v43 + 84) & 1) != 0 && *(_QWORD *)(v43 + 96) == a4 )
      goto LABEL_43;
  }
  v40 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v60, v40, *(_DWORD *)(a4 + 4) >> 31, v11);
  v51 = v40;
  CopyOutputString((volatile void **)&v60, (struct _LARGE_STRING *)a4, v52[0], v11);
LABEL_44:
  if ( v12 != v63 && v12 != v64 )
  {
    v44 = (PVOID *)(v12 + 32);
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v44, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v59, (__int64)v44, v16);
  }
  return (unsigned __int8 *)v40;
}
