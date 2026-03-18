/*
 * XREFs of SfnINCNTOUTSTRINGNULL @ 0x1C0216DF0
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
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00B2694 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00E39A0 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00E3A7C (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00E3CB8 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  __int64 v15; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  __int64 v20; // rsi
  int v21; // ecx
  unsigned __int64 v22; // rdx
  unsigned __int8 *result; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // r11d
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 *v44; // rdi
  __int64 v45; // rdi
  __m128i *v46; // rcx
  __int64 v47; // xmm0_8
  __int64 v48; // rdx
  PVOID *v49; // rdx
  char v50; // [rsp+30h] [rbp-388h] BYREF
  _BYTE v51[3]; // [rsp+31h] [rbp-387h] BYREF
  unsigned int v52; // [rsp+34h] [rbp-384h]
  unsigned __int8 *v53; // [rsp+38h] [rbp-380h]
  int v54[6]; // [rsp+40h] [rbp-378h] BYREF
  unsigned __int64 v55; // [rsp+58h] [rbp-360h] BYREF
  __int64 v56; // [rsp+60h] [rbp-358h]
  unsigned int v57[4]; // [rsp+68h] [rbp-350h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-340h] BYREF
  __int64 v59; // [rsp+80h] [rbp-338h] BYREF
  _QWORD *v60; // [rsp+88h] [rbp-330h]
  __int64 v61; // [rsp+90h] [rbp-328h]
  __int128 v62; // [rsp+98h] [rbp-320h]
  __int64 v63; // [rsp+A8h] [rbp-310h]
  _QWORD v64[3]; // [rsp+B0h] [rbp-308h] BYREF
  __m128i v65; // [rsp+C8h] [rbp-2F0h] BYREF
  __int64 v66; // [rsp+D8h] [rbp-2E0h]
  __int128 v67; // [rsp+100h] [rbp-2B8h]
  unsigned __int8 v68[96]; // [rsp+110h] [rbp-2A8h] BYREF
  unsigned __int8 v69[512]; // [rsp+170h] [rbp-248h] BYREF

  *(_QWORD *)v57 = a3;
  v11 = a7 & 1;
  memset(v68, 0, sizeof(v68));
  v12 = v68;
  v56 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0uLL;
  v63 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v19 = ThreadWin32Thread;
  if ( a1 )
    v20 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v20 = 0LL;
  v21 = *(_DWORD *)(a4 + 4);
  v22 = (v21 & 0x7FFFFFFFu) + 2;
  if ( (unsigned int)v22 < (v21 & 0x7FFFFFFFu) )
    goto LABEL_43;
  v52 = (v21 & 0x7FFFFFFF) + 2;
  if ( v21 >= 0 || (a7 & 1) != 0 )
    goto LABEL_9;
  v22 *= 2LL;
  if ( v22 > 0xFFFFFFFF )
  {
LABEL_43:
    v45 = 0LL;
    goto LABEL_44;
  }
  v52 = v22;
LABEL_9:
  result = AllocCallbackMessage(96, 1u, (unsigned int)v22, v69, 0, 0x200uLL);
  v12 = result;
  v53 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26);
  memset(v64, 0, sizeof(v64));
  if ( v12 != v68 && v12 != v69 )
    PushW32ThreadLock((__int64)v12, v64, (__int64)Win32FreePool, v18);
  v27 = *(_QWORD *)v57;
  if ( *(_QWORD *)v57 < 2uLL )
    goto LABEL_43;
  *((_QWORD *)v12 + 5) = v20;
  *((_DWORD *)v12 + 12) = a2;
  *((_QWORD *)v12 + 7) = v27;
  *((_QWORD *)v12 + 8) = a5;
  *((_QWORD *)v12 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v12, v52, (void **)v12 + 10) < 0 )
    goto LABEL_43;
  *((_DWORD *)v12 + 22) = v29;
  v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v17, v18);
  v59 = *(_QWORD *)(v30 + 408);
  *(_QWORD *)(v30 + 408) = &v59;
  v60 = a1;
  if ( a1 )
    HMLockObject(a1);
  v33 = *(_QWORD *)(v19 + 472);
  v67 = *(_OWORD *)(v33 + 64);
  v62 = v67;
  v63 = *(_QWORD *)(v33 + 80);
  *(_QWORD *)(v33 + 72) = v20;
  if ( a1 )
    v34 = *a1;
  else
    v34 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v19 + 472) + 64LL) = v34;
  if ( a1 )
    v35 = *(_QWORD *)(a1[5] + 224LL);
  else
    v35 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v19 + 472) + 80LL) = v35;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v51,
    gdwInAtomicOperation,
    v31,
    v32);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v50);
  EtwTraceBeginCallback(8LL);
  *((_QWORD *)v12 + 2) = 0LL;
  v36 = KeUserModeCallback(8LL, v12, *(unsigned int *)v12, &v55, v54);
  EtwTraceEndCallback(8LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v50);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v51,
    v37,
    v38,
    v39);
  ThreadUnlock1(v41, v40, v42);
  v43 = *(_QWORD *)(v19 + 472);
  *(_OWORD *)(v43 + 64) = v67;
  *(_QWORD *)(v43 + 80) = v63;
  if ( v36 < 0 || v54[0] != 24 )
    goto LABEL_43;
  v44 = (__int64 *)v55;
  if ( v55 + 8 < v55 || v55 + 8 > MmUserProbeAddress )
    v44 = (__int64 *)MmUserProbeAddress;
  v45 = *v44;
  v56 = v45;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_44;
  v46 = (__m128i *)v55;
  if ( v55 + 24 < v55 || v55 + 24 > MmUserProbeAddress )
    v46 = (__m128i *)MmUserProbeAddress;
  v47 = v46[1].m128i_i64[0];
  v65 = *v46;
  v66 = v47;
  if ( !_mm_cvtsi128_si32(_mm_srli_si128(v65, 8)) )
    goto LABEL_44;
  v48 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v48 )
  {
    if ( (*(_DWORD *)(v48 + 84) & 1) != 0 && *(_QWORD *)(v48 + 96) == a4 )
      goto LABEL_43;
  }
  v45 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v65, v45, *(_DWORD *)(a4 + 4) >> 31, v11);
  v56 = v45;
  CopyOutputString((volatile void **)&v65, (struct _LARGE_STRING *)a4, v57[0], v11);
LABEL_44:
  if ( v12 != v68 && v12 != v69 )
  {
    v49 = (PVOID *)(v12 + 32);
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v49, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v64, (__int64)v49, v17, v18);
  }
  return (unsigned __int8 *)v45;
}
