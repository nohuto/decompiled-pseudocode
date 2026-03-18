/*
 * XREFs of ClientGetListboxString @ 0x1C0155C6C
 * Callers:
 *     SfnOUTCBOXSTRING @ 0x1C0155A30 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x1C0155B50 (SfnOUTLBOXSTRING.c)
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
  __int64 v16; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r15
  __int64 v21; // rsi
  int v22; // ecx
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r9
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
  unsigned __int64 *v44; // rdi
  unsigned __int64 v45; // rdi
  ULONG64 v46; // rcx
  __int64 v47; // xmm0_8
  __int64 v48; // rdx
  int v49; // r15d
  int v50; // r8d
  unsigned int v51; // r8d
  unsigned int v52; // eax
  __int64 v54; // rdx
  _QWORD *v55; // rcx
  PVOID *v56; // rdx
  char v57; // [rsp+30h] [rbp-388h] BYREF
  _BYTE v58[3]; // [rsp+31h] [rbp-387h] BYREF
  unsigned int v59; // [rsp+34h] [rbp-384h]
  int v60; // [rsp+38h] [rbp-380h]
  unsigned __int8 *v61; // [rsp+40h] [rbp-378h]
  _DWORD v62[6]; // [rsp+48h] [rbp-370h] BYREF
  unsigned __int64 v63; // [rsp+60h] [rbp-358h] BYREF
  unsigned __int64 v64; // [rsp+68h] [rbp-350h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-340h] BYREF
  __int64 v66; // [rsp+80h] [rbp-338h] BYREF
  _QWORD *v67; // [rsp+88h] [rbp-330h]
  __int64 v68; // [rsp+90h] [rbp-328h]
  __int128 v69; // [rsp+98h] [rbp-320h]
  __int64 v70; // [rsp+A8h] [rbp-310h]
  _QWORD v71[3]; // [rsp+B0h] [rbp-308h] BYREF
  __int128 v72; // [rsp+C8h] [rbp-2F0h] BYREF
  __int64 v73; // [rsp+D8h] [rbp-2E0h]
  __int128 v74; // [rsp+108h] [rbp-2B0h]
  unsigned __int8 v75[96]; // [rsp+120h] [rbp-298h] BYREF
  unsigned __int8 v76[512]; // [rsp+180h] [rbp-238h] BYREF

  v60 = a7 & 1;
  memset(v75, 0, sizeof(v75));
  v13 = v75;
  v64 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0uLL;
  v70 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16);
  v20 = ThreadWin32Thread;
  if ( a1 )
    v21 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v21 = 0LL;
  v22 = *((_DWORD *)a4 + 1);
  v23 = (v22 & 0x7FFFFFFFu) + 2;
  if ( (unsigned int)v23 < (v22 & 0x7FFFFFFFu) )
    goto LABEL_50;
  v59 = (v22 & 0x7FFFFFFF) + 2;
  if ( v22 < 0 && !v60 )
  {
    v23 *= 2LL;
    if ( v23 > 0xFFFFFFFF )
      goto LABEL_50;
    v59 = v23;
  }
  v13 = AllocCallbackMessage(96, 1u, (unsigned int)v23, v76, 0, 0x200uLL);
  v61 = v13;
  if ( !v13 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26);
  memset(v71, 0, sizeof(v71));
  if ( v13 != v75 && v13 != v76 )
    PushW32ThreadLock((__int64)v13, v71, (__int64)Win32FreePool, v27);
  *((_QWORD *)v13 + 5) = v21;
  *((_DWORD *)v13 + 12) = a2;
  *((_QWORD *)v13 + 7) = a3;
  *((_QWORD *)v13 + 8) = a5;
  *((_QWORD *)v13 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v13, v59, (void **)v13 + 10) < 0 )
    goto LABEL_50;
  *((_DWORD *)v13 + 22) = v29;
  v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v18, v19);
  v66 = *(_QWORD *)(v30 + 408);
  *(_QWORD *)(v30 + 408) = &v66;
  v67 = a1;
  if ( a1 )
    HMLockObject(a1);
  v33 = *(_QWORD *)(v20 + 472);
  v74 = *(_OWORD *)(v33 + 64);
  v69 = v74;
  v70 = *(_QWORD *)(v33 + 80);
  *(_QWORD *)(v33 + 72) = v21;
  if ( a1 )
    v34 = *a1;
  else
    v34 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v20 + 472) + 64LL) = v34;
  if ( a1 )
    v35 = *(_QWORD *)(a1[5] + 224LL);
  else
    v35 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v20 + 472) + 80LL) = v35;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v58,
    gdwInAtomicOperation,
    v31,
    v32);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v57);
  EtwTraceBeginCallback(72LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v36 = KeUserModeCallback(72LL, v13, *(unsigned int *)v13, &v63, v62);
  EtwTraceEndCallback(72LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v57);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v58,
    v37,
    v38,
    v39);
  ThreadUnlock1(v41, v40, v42);
  v43 = *(_QWORD *)(v20 + 472);
  *(_OWORD *)(v43 + 64) = v74;
  *(_QWORD *)(v43 + 80) = v70;
  if ( v36 < 0 || v62[0] != 24 )
    goto LABEL_50;
  v44 = (unsigned __int64 *)v63;
  if ( v63 + 8 < v63 || v63 + 8 > MmUserProbeAddress )
    v44 = (unsigned __int64 *)MmUserProbeAddress;
  v45 = *v44;
  v64 = v45;
  if ( (v45 & 0x80000000) != 0LL || a9 && (*(_DWORD *)(a9 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_45;
  if ( !a8 )
  {
    v46 = v63;
    if ( v63 + 24 < v63 || v63 + 24 > MmUserProbeAddress )
      v46 = MmUserProbeAddress;
    v47 = *(_QWORD *)(v46 + 16);
    v72 = *(_OWORD *)v46;
    v73 = v47;
    v48 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( v48 && (*(_DWORD *)(v48 + 84) & 1) != 0 && *(struct _LARGE_STRING **)(v48 + 96) == a4 )
      goto LABEL_50;
    v49 = v60;
    v45 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v72, v45, *((_DWORD *)a4 + 1) >> 31, v60);
    v64 = v45;
    v50 = *((_DWORD *)a4 + 1);
    if ( v50 < 0 )
      v51 = v50 & 0x7FFFFFFF;
    else
      v51 = ((unsigned int)v50 >> 1) & 0x3FFFFFFF;
    CopyOutputString((volatile void **)&v72, a4, v51, v49);
LABEL_39:
    if ( !a8 && v45 != -1LL )
    {
      v52 = *(_DWORD *)a4 >> 1;
      if ( *((int *)a4 + 1) < 0 )
        v52 = *(_DWORD *)a4;
      if ( v45 > v52 )
        LODWORD(v45) = v52;
    }
    goto LABEL_45;
  }
  v54 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( !v54 || (*(_DWORD *)(v54 + 84) & 1) == 0 || *(_QWORD *)(v54 + 96) != *((_QWORD *)a4 + 1) )
  {
    v55 = *(_QWORD **)(v63 + 16);
    if ( v55 + 1 < v55 || (unsigned __int64)(v55 + 1) > MmUserProbeAddress )
      v55 = (_QWORD *)MmUserProbeAddress;
    **((_QWORD **)a4 + 1) = *v55;
    goto LABEL_39;
  }
LABEL_50:
  LODWORD(v45) = 0;
LABEL_45:
  if ( v13 != v75 && v13 != v76 )
  {
    v56 = (PVOID *)(v13 + 32);
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v56, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v71, (__int64)v56, v18, v19);
  }
  return (unsigned int)v45;
}
