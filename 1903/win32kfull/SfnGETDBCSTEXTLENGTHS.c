/*
 * XREFs of SfnGETDBCSTEXTLENGTHS @ 0x1C00B0A90
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
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00E3A7C (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00E3CB8 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall SfnGETDBCSTEXTLENGTHS(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v8; // r12d
  int v10; // r14d
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 *v31; // rbx
  __int64 v32; // rbx
  __int64 v34; // rdx
  unsigned int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rsi
  __int64 v40; // r13
  unsigned int v41; // edx
  unsigned int v42; // r12d
  __int64 v43; // rdx
  unsigned __int8 *v44; // rbx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  int v56; // edi
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rcx
  __int64 *v64; // rdi
  __int64 v65; // rdi
  ULONG64 v66; // rcx
  __int64 v67; // xmm0_8
  PVOID *v68; // rdx
  char v69; // [rsp+30h] [rbp-418h] BYREF
  char v70; // [rsp+31h] [rbp-417h] BYREF
  char v71; // [rsp+32h] [rbp-416h] BYREF
  char v72; // [rsp+33h] [rbp-415h] BYREF
  int v73; // [rsp+34h] [rbp-414h]
  int v74; // [rsp+38h] [rbp-410h]
  int v75; // [rsp+3Ch] [rbp-40Ch] BYREF
  unsigned int v76; // [rsp+40h] [rbp-408h]
  int v77[9]; // [rsp+44h] [rbp-404h] BYREF
  __int128 v78; // [rsp+68h] [rbp-3E0h]
  __int64 v79; // [rsp+78h] [rbp-3D0h]
  __int64 v80; // [rsp+80h] [rbp-3C8h]
  unsigned __int64 v81[3]; // [rsp+88h] [rbp-3C0h] BYREF
  unsigned __int64 v82; // [rsp+A0h] [rbp-3A8h] BYREF
  __int128 v83; // [rsp+A8h] [rbp-3A0h]
  ULONG_PTR RegionSize; // [rsp+B8h] [rbp-390h] BYREF
  __int64 v85; // [rsp+C0h] [rbp-388h] BYREF
  _QWORD *v86; // [rsp+C8h] [rbp-380h]
  __int64 v87; // [rsp+D0h] [rbp-378h]
  __int128 v88; // [rsp+D8h] [rbp-370h]
  __int64 v89; // [rsp+E8h] [rbp-360h]
  __int64 v90; // [rsp+F0h] [rbp-358h] BYREF
  _QWORD *v91; // [rsp+F8h] [rbp-350h]
  __int64 v92; // [rsp+100h] [rbp-348h]
  __int128 v93; // [rsp+108h] [rbp-340h]
  __int64 v94; // [rsp+118h] [rbp-330h]
  _QWORD v95[3]; // [rsp+120h] [rbp-328h] BYREF
  __int64 v96; // [rsp+138h] [rbp-310h] BYREF
  int v97; // [rsp+140h] [rbp-308h]
  int v98; // [rsp+144h] [rbp-304h]
  __int64 v99; // [rsp+148h] [rbp-300h]
  __int64 v100; // [rsp+150h] [rbp-2F8h]
  __int64 v101; // [rsp+158h] [rbp-2F0h]
  __int128 v102; // [rsp+198h] [rbp-2B0h] BYREF
  __int64 v103; // [rsp+1A8h] [rbp-2A0h]
  unsigned __int8 v104[96]; // [rsp+1B0h] [rbp-298h] BYREF
  unsigned __int8 v105[512]; // [rsp+210h] [rbp-238h] BYREF

  v8 = a4;
  *(_QWORD *)&v83 = a3;
  v10 = a2;
  v74 = a4 != 0;
  v73 = a7 & 1;
  v80 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0uLL;
  v89 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v16 = ThreadWin32Thread;
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v17 = 0LL;
  if ( !a1 )
    return 0LL;
  v18 = *(_QWORD *)(a1[5] + 120LL);
  v98 = 0;
  v96 = v17;
  v97 = v10;
  v99 = a3;
  v100 = a5;
  v101 = a6;
  v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v85 = *(_QWORD *)(v19 + 408);
  *(_QWORD *)(v19 + 408) = &v85;
  v86 = a1;
  HMLockObject(a1);
  v22 = *(_QWORD *)(v16 + 472);
  v78 = *(_OWORD *)(v22 + 64);
  v88 = v78;
  v89 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v17;
  *(_QWORD *)(*(_QWORD *)(v16 + 472) + 64LL) = *a1;
  *(_QWORD *)(*(_QWORD *)(v16 + 472) + 80LL) = *(_QWORD *)(a1[5] + 224LL);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v70,
    gdwInAtomicOperation,
    v20,
    v21);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v69);
  EtwTraceBeginCallback(6LL);
  v23 = KeUserModeCallback(6LL, &v96, 40LL, &v82, &v75);
  EtwTraceEndCallback(6LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v69);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v70,
    v24,
    v25,
    v26);
  ThreadUnlock1(v28, v27, v29);
  v30 = *(_QWORD *)(v16 + 472);
  *(_OWORD *)(v30 + 64) = v78;
  *(_QWORD *)(v30 + 80) = v89;
  if ( v23 < 0 || v75 != 24 )
    return 0LL;
  v31 = (__int64 *)v82;
  if ( v82 + 8 < v82 || v82 + 8 > MmUserProbeAddress )
    v31 = (__int64 *)MmUserProbeAddress;
  v32 = *v31;
  v80 = v32;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 || (int)v32 <= 0 || v74 == v73 )
    return v32;
  if ( *(_QWORD *)(a1[5] + 120LL) != v18 )
    goto LABEL_64;
  v34 = 0LL;
  if ( v10 != 14 )
  {
    LOBYTE(v34) = 1;
    if ( HMValidateHandleNoSecure(*a1, v34) )
    {
      if ( v10 == 394 )
      {
        LODWORD(v34) = (*(_DWORD *)(a1[5] + 28LL) & 0x40) == 0 && (*(_DWORD *)(a1[5] + 28LL) & 0x30) != 0;
        goto LABEL_61;
      }
      if ( v10 == 329 )
      {
        if ( (*(_DWORD *)(a1[5] + 28LL) & 0x30) != 0 && (*(_DWORD *)(a1[5] + 28LL) & 0x200) == 0 )
        {
          LODWORD(v34) = 1;
LABEL_62:
          v32 = 8LL;
          v80 = 8LL;
          goto LABEL_19;
        }
        LODWORD(v34) = 0;
LABEL_61:
        if ( !(_DWORD)v34 )
          goto LABEL_20;
        goto LABEL_62;
      }
    }
    return 0LL;
  }
LABEL_19:
  if ( (_DWORD)v34 )
    return v32;
LABEL_20:
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x4000000) != 0 )
  {
    if ( v8 )
LABEL_64:
      v32 *= 2LL;
    return v32;
  }
  v35 = v32 + 1;
  v76 = v35;
  memset(v104, 0, sizeof(v104));
  v79 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0uLL;
  v94 = 0LL;
  v39 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37, v38);
  v40 = a1[5] - *(_QWORD *)(v39 + 464);
  *(_DWORD *)(gptiCurrent + 480LL) |= 0x4000000u;
  v41 = 2 * v35;
  if ( v73 )
    v41 = v35;
  v42 = v41;
  v44 = (unsigned __int8 *)AllocCallbackMessage(0x60u, 1u, v41, v105, 0, 0x200uLL);
  *(_QWORD *)&v78 = v44;
  if ( !v44 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v45, v46);
  memset(v95, 0, sizeof(v95));
  if ( v44 != v104 && v44 != v105 )
    PushW32ThreadLock((__int64)v44, v95, (__int64)Win32FreePool, v47);
  *((_QWORD *)v44 + 5) = v40;
  *((_DWORD *)v44 + 12) = v10 - 1;
  v48 = v76;
  if ( v10 != 14 )
    v48 = v83;
  *((_QWORD *)v44 + 7) = v48;
  *((_QWORD *)v44 + 8) = a5;
  *((_QWORD *)v44 + 9) = a6;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v44, v42, (void **)v44 + 10) < 0 )
    goto LABEL_67;
  *((_DWORD *)v44 + 22) = v42;
  v52 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50, v51);
  v90 = *(_QWORD *)(v52 + 408);
  *(_QWORD *)(v52 + 408) = &v90;
  v91 = a1;
  HMLockObject(a1);
  v55 = *(_QWORD *)(v39 + 472);
  v83 = *(_OWORD *)(v55 + 64);
  v93 = v83;
  v94 = *(_QWORD *)(v55 + 80);
  *(_QWORD *)(v55 + 72) = v40;
  *(_QWORD *)(*(_QWORD *)(v39 + 472) + 64LL) = *a1;
  *(_QWORD *)(*(_QWORD *)(v39 + 472) + 80LL) = *(_QWORD *)(a1[5] + 224LL);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v72,
    gdwInAtomicOperation,
    v53,
    v54);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v71);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v44 + 2) = 0LL;
  v56 = KeUserModeCallback(35LL, v44, *(unsigned int *)v44, v81, v77);
  EtwTraceEndCallback(35LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v71);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v72,
    v57,
    v58,
    v59);
  ThreadUnlock1(v61, v60, v62);
  v63 = *(_QWORD *)(v39 + 472);
  *(_OWORD *)(v63 + 64) = v83;
  *(_QWORD *)(v63 + 80) = v94;
  if ( v56 < 0 )
    goto LABEL_67;
  if ( v77[0] == 24 )
  {
    v64 = (__int64 *)v81[0];
    if ( v81[0] + 8 < v81[0] || v81[0] + 8 > MmUserProbeAddress )
      v64 = (__int64 *)MmUserProbeAddress;
    v65 = *v64;
    v79 = v65;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (int)v65 > 0 )
    {
      v66 = v81[0];
      if ( v81[0] + 24 < v81[0] || v81[0] + 24 > MmUserProbeAddress )
        v66 = MmUserProbeAddress;
      v67 = *(_QWORD *)(v66 + 16);
      v102 = *(_OWORD *)v66;
      v103 = v67;
      v65 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v102, v65, v74, v73);
      v79 = v65;
    }
    *(_DWORD *)(gptiCurrent + 480LL) &= ~0x4000000u;
  }
  else
  {
LABEL_67:
    v65 = 0LL;
  }
  if ( v44 != v104 && v44 != v105 )
  {
    v68 = (PVOID *)(v44 + 32);
    if ( *((_QWORD *)v44 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v68, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v95, (__int64)v68, v50, v51);
  }
  return v65;
}
