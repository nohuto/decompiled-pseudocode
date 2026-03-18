/*
 * XREFs of ClientGetListboxString @ 0x1C0156A2C
 * Callers:
 *     SfnOUTCBOXSTRING @ 0x1C01567F0 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x1C0156910 (SfnOUTLBOXSTRING.c)
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

__int64 __fastcall ClientGetListboxString(
        _QWORD *a1,
        int a2,
        __int64 a3,
        struct _LARGE_STRING *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 a9)
{
  unsigned __int8 *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // r8
  __int64 v18; // r15
  __int64 v19; // rsi
  int v20; // ecx
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // r11d
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  unsigned __int64 *v38; // rdi
  unsigned __int64 v39; // rdi
  ULONG64 v40; // rcx
  __int64 v41; // xmm0_8
  __int64 v42; // rdx
  int v43; // r15d
  int v44; // r8d
  unsigned int v45; // r8d
  unsigned int v46; // eax
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  PVOID *v50; // rdx
  char v51; // [rsp+30h] [rbp-388h] BYREF
  _BYTE v52[3]; // [rsp+31h] [rbp-387h] BYREF
  unsigned int v53; // [rsp+34h] [rbp-384h]
  int v54; // [rsp+38h] [rbp-380h]
  unsigned __int8 *v55; // [rsp+40h] [rbp-378h]
  _DWORD v56[6]; // [rsp+48h] [rbp-370h] BYREF
  unsigned __int64 v57; // [rsp+60h] [rbp-358h] BYREF
  unsigned __int64 v58; // [rsp+68h] [rbp-350h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-340h] BYREF
  __int64 v60; // [rsp+80h] [rbp-338h] BYREF
  _QWORD *v61; // [rsp+88h] [rbp-330h]
  __int64 v62; // [rsp+90h] [rbp-328h]
  __int128 v63; // [rsp+98h] [rbp-320h]
  __int64 v64; // [rsp+A8h] [rbp-310h]
  _QWORD v65[3]; // [rsp+B0h] [rbp-308h] BYREF
  __int128 v66; // [rsp+C8h] [rbp-2F0h] BYREF
  __int64 v67; // [rsp+D8h] [rbp-2E0h]
  __int128 v68; // [rsp+108h] [rbp-2B0h]
  unsigned __int8 v69[96]; // [rsp+120h] [rbp-298h] BYREF
  unsigned __int8 v70[512]; // [rsp+180h] [rbp-238h] BYREF

  v54 = a7 & 1;
  memset(v69, 0, sizeof(v69));
  v13 = v69;
  v58 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0uLL;
  v64 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15);
  v18 = ThreadWin32Thread;
  if ( a1 )
    v19 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v19 = 0LL;
  v20 = *((_DWORD *)a4 + 1);
  v21 = (v20 & 0x7FFFFFFFu) + 2;
  if ( (unsigned int)v21 < (v20 & 0x7FFFFFFFu) )
    goto LABEL_50;
  v53 = (v20 & 0x7FFFFFFF) + 2;
  if ( v20 < 0 && !v54 )
  {
    v21 *= 2LL;
    if ( v21 > 0xFFFFFFFF )
      goto LABEL_50;
    v53 = v21;
  }
  v13 = AllocCallbackMessage(96, 1u, (unsigned int)v21, v70, 0, 0x200uLL);
  v55 = v13;
  if ( !v13 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23);
  memset(v65, 0, sizeof(v65));
  if ( v13 != v69 && v13 != v70 )
    PushW32ThreadLock((__int64)v13, v65, (__int64)Win32FreePool);
  *((_QWORD *)v13 + 5) = v19;
  *((_DWORD *)v13 + 12) = a2;
  *((_QWORD *)v13 + 7) = a3;
  *((_QWORD *)v13 + 8) = a5;
  *((_QWORD *)v13 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v13, v53, (void **)v13 + 10) < 0 )
    goto LABEL_50;
  *((_DWORD *)v13 + 22) = v25;
  v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v17);
  v60 = *(_QWORD *)(v26 + 408);
  *(_QWORD *)(v26 + 408) = &v60;
  v61 = a1;
  if ( a1 )
    HMLockObject(a1);
  v28 = *(_QWORD *)(v18 + 472);
  v68 = *(_OWORD *)(v28 + 64);
  v63 = v68;
  v64 = *(_QWORD *)(v28 + 80);
  *(_QWORD *)(v28 + 72) = v19;
  if ( a1 )
    v29 = *a1;
  else
    v29 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v18 + 472) + 64LL) = v29;
  if ( a1 )
    v30 = *(_QWORD *)(a1[5] + 224LL);
  else
    v30 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v18 + 472) + 80LL) = v30;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v52,
    gdwInAtomicOperation,
    v27);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
  EtwTraceBeginCallback(72LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v31 = KeUserModeCallback(72LL, v13, *(unsigned int *)v13, &v57, v56);
  EtwTraceEndCallback(72LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v52,
    v32,
    v33);
  ThreadUnlock1(v35, v34, v36);
  v37 = *(_QWORD *)(v18 + 472);
  *(_OWORD *)(v37 + 64) = v68;
  *(_QWORD *)(v37 + 80) = v64;
  if ( v31 < 0 || v56[0] != 24 )
    goto LABEL_50;
  v38 = (unsigned __int64 *)v57;
  if ( v57 + 8 < v57 || v57 + 8 > MmUserProbeAddress )
    v38 = (unsigned __int64 *)MmUserProbeAddress;
  v39 = *v38;
  v58 = v39;
  if ( (v39 & 0x80000000) != 0LL || a9 && (*(_DWORD *)(a9 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_45;
  if ( !a8 )
  {
    v40 = v57;
    if ( v57 + 24 < v57 || v57 + 24 > MmUserProbeAddress )
      v40 = MmUserProbeAddress;
    v41 = *(_QWORD *)(v40 + 16);
    v66 = *(_OWORD *)v40;
    v67 = v41;
    v42 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( v42 && (*(_DWORD *)(v42 + 84) & 1) != 0 && *(struct _LARGE_STRING **)(v42 + 96) == a4 )
      goto LABEL_50;
    v43 = v54;
    v39 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v66, v39, *((_DWORD *)a4 + 1) >> 31, v54);
    v58 = v39;
    v44 = *((_DWORD *)a4 + 1);
    if ( v44 < 0 )
      v45 = v44 & 0x7FFFFFFF;
    else
      v45 = ((unsigned int)v44 >> 1) & 0x3FFFFFFF;
    CopyOutputString((volatile void **)&v66, a4, v45, v43);
LABEL_39:
    if ( !a8 && v39 != -1LL )
    {
      v46 = *(_DWORD *)a4 >> 1;
      if ( *((int *)a4 + 1) < 0 )
        v46 = *(_DWORD *)a4;
      if ( v39 > v46 )
        LODWORD(v39) = v46;
    }
    goto LABEL_45;
  }
  v48 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( !v48 || (*(_DWORD *)(v48 + 84) & 1) == 0 || *(_QWORD *)(v48 + 96) != *((_QWORD *)a4 + 1) )
  {
    v49 = *(_QWORD **)(v57 + 16);
    if ( v49 + 1 < v49 || (unsigned __int64)(v49 + 1) > MmUserProbeAddress )
      v49 = (_QWORD *)MmUserProbeAddress;
    **((_QWORD **)a4 + 1) = *v49;
    goto LABEL_39;
  }
LABEL_50:
  LODWORD(v39) = 0;
LABEL_45:
  if ( v13 != v69 && v13 != v70 )
  {
    v50 = (PVOID *)(v13 + 32);
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v50, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v65, (__int64)v50, v17);
  }
  return (unsigned int)v39;
}
