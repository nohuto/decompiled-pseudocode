/*
 * XREFs of SfnGETDBCSTEXTLENGTHS @ 0x1C00518F0
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
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0057820 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0057A5C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall SfnGETDBCSTEXTLENGTHS(
        _QWORD *a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 *v26; // rbx
  __int64 v27; // rbx
  __int64 v29; // rdx
  unsigned int v30; // ebx
  __int64 v31; // rsi
  __int64 v32; // r13
  unsigned int v33; // edx
  unsigned int v34; // r12d
  unsigned __int8 *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // rax
  int v41; // edi
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 *v48; // rdi
  __int64 v49; // rdi
  ULONG64 v50; // rcx
  __int64 v51; // xmm0_8
  PVOID *v52; // rdx
  char v53; // [rsp+30h] [rbp-418h] BYREF
  char v54; // [rsp+31h] [rbp-417h] BYREF
  char v55; // [rsp+32h] [rbp-416h] BYREF
  char v56; // [rsp+33h] [rbp-415h] BYREF
  int v57; // [rsp+34h] [rbp-414h]
  int v58; // [rsp+38h] [rbp-410h]
  int v59; // [rsp+3Ch] [rbp-40Ch] BYREF
  unsigned int v60; // [rsp+40h] [rbp-408h]
  int v61[9]; // [rsp+44h] [rbp-404h] BYREF
  __int128 v62; // [rsp+68h] [rbp-3E0h]
  __int64 v63; // [rsp+78h] [rbp-3D0h]
  __int64 v64; // [rsp+80h] [rbp-3C8h]
  unsigned __int64 v65[3]; // [rsp+88h] [rbp-3C0h] BYREF
  unsigned __int64 v66; // [rsp+A0h] [rbp-3A8h] BYREF
  __int128 v67; // [rsp+A8h] [rbp-3A0h]
  ULONG_PTR RegionSize; // [rsp+B8h] [rbp-390h] BYREF
  __int64 v69; // [rsp+C0h] [rbp-388h] BYREF
  _QWORD *v70; // [rsp+C8h] [rbp-380h]
  __int64 v71; // [rsp+D0h] [rbp-378h]
  __int128 v72; // [rsp+D8h] [rbp-370h]
  __int64 v73; // [rsp+E8h] [rbp-360h]
  __int64 v74; // [rsp+F0h] [rbp-358h] BYREF
  _QWORD *v75; // [rsp+F8h] [rbp-350h]
  __int64 v76; // [rsp+100h] [rbp-348h]
  __int128 v77; // [rsp+108h] [rbp-340h]
  __int64 v78; // [rsp+118h] [rbp-330h]
  _QWORD v79[3]; // [rsp+120h] [rbp-328h] BYREF
  __int64 v80; // [rsp+138h] [rbp-310h] BYREF
  int v81; // [rsp+140h] [rbp-308h]
  int v82; // [rsp+144h] [rbp-304h]
  __int64 v83; // [rsp+148h] [rbp-300h]
  __int64 v84; // [rsp+150h] [rbp-2F8h]
  __int64 v85; // [rsp+158h] [rbp-2F0h]
  __int128 v86; // [rsp+198h] [rbp-2B0h] BYREF
  __int64 v87; // [rsp+1A8h] [rbp-2A0h]
  unsigned __int8 v88[96]; // [rsp+1B0h] [rbp-298h] BYREF
  unsigned __int8 v89[512]; // [rsp+210h] [rbp-238h] BYREF

  *(_QWORD *)&v67 = a3;
  v58 = a4 != 0;
  v57 = a7 & 1;
  v64 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0uLL;
  v73 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  if ( !a1 )
    return 0LL;
  v15 = *(_QWORD *)(a1[5] + 120LL);
  v82 = 0;
  v80 = v14;
  v81 = a2;
  v83 = a3;
  v84 = a5;
  v85 = a6;
  v16 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v69 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v69;
  v70 = a1;
  HMLockObject(a1);
  v18 = *(_QWORD *)(v13 + 472);
  v62 = *(_OWORD *)(v18 + 64);
  v72 = v62;
  v73 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v14;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = *a1;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = *(_QWORD *)(a1[5] + 224LL);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v54,
    gdwInAtomicOperation,
    v17);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v53);
  EtwTraceBeginCallback(6LL);
  v19 = KeUserModeCallback(6LL, &v80, 40LL, &v66, &v59);
  EtwTraceEndCallback(6LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v53);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v54,
    v20,
    v21);
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v25 + 64) = v62;
  *(_QWORD *)(v25 + 80) = v73;
  if ( v19 < 0 || v59 != 24 )
    return 0LL;
  v26 = (__int64 *)v66;
  if ( v66 + 8 < v66 || v66 + 8 > MmUserProbeAddress )
    v26 = (__int64 *)MmUserProbeAddress;
  v27 = *v26;
  v64 = v27;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 || (int)v27 <= 0 || v58 == v57 )
    return v27;
  if ( *(_QWORD *)(a1[5] + 120LL) != v15 )
    goto LABEL_64;
  v29 = 0LL;
  if ( a2 != 14 )
  {
    LOBYTE(v29) = 1;
    if ( HMValidateHandleNoSecure(*a1, v29) )
    {
      if ( a2 == 394 )
      {
        LODWORD(v29) = (*(_DWORD *)(a1[5] + 28LL) & 0x40) == 0 && (*(_DWORD *)(a1[5] + 28LL) & 0x30) != 0;
        goto LABEL_61;
      }
      if ( a2 == 329 )
      {
        if ( (*(_DWORD *)(a1[5] + 28LL) & 0x30) != 0 && (*(_DWORD *)(a1[5] + 28LL) & 0x200) == 0 )
        {
          LODWORD(v29) = 1;
LABEL_62:
          v27 = 8LL;
          v64 = 8LL;
          goto LABEL_19;
        }
        LODWORD(v29) = 0;
LABEL_61:
        if ( !(_DWORD)v29 )
          goto LABEL_20;
        goto LABEL_62;
      }
    }
    return 0LL;
  }
LABEL_19:
  if ( (_DWORD)v29 )
    return v27;
LABEL_20:
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x4000000) != 0 )
  {
    if ( a4 )
LABEL_64:
      v27 *= 2LL;
    return v27;
  }
  v30 = v27 + 1;
  v60 = v30;
  memset(v88, 0, sizeof(v88));
  v63 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0uLL;
  v78 = 0LL;
  v31 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v32 = a1[5] - *(_QWORD *)(v31 + 464);
  *(_DWORD *)(gptiCurrent + 480LL) |= 0x4000000u;
  v33 = 2 * v30;
  if ( v57 )
    v33 = v30;
  v34 = v33;
  v35 = (unsigned __int8 *)AllocCallbackMessage(0x60u, 1u, v33, v89, 0, 0x200uLL);
  *(_QWORD *)&v62 = v35;
  if ( !v35 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  memset(v79, 0, sizeof(v79));
  if ( v35 != v88 && v35 != v89 )
    PushW32ThreadLock((__int64)v35, v79, (__int64)Win32FreePool);
  *((_QWORD *)v35 + 5) = v32;
  *((_DWORD *)v35 + 12) = a2 - 1;
  v36 = v60;
  if ( a2 != 14 )
    v36 = v67;
  *((_QWORD *)v35 + 7) = v36;
  *((_QWORD *)v35 + 8) = a5;
  *((_QWORD *)v35 + 9) = a6;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v35, v34, (void **)v35 + 10) < 0 )
    goto LABEL_67;
  *((_DWORD *)v35 + 22) = v34;
  v38 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v74 = *(_QWORD *)(v38 + 408);
  *(_QWORD *)(v38 + 408) = &v74;
  v75 = a1;
  HMLockObject(a1);
  v40 = *(_QWORD *)(v31 + 472);
  v67 = *(_OWORD *)(v40 + 64);
  v77 = v67;
  v78 = *(_QWORD *)(v40 + 80);
  *(_QWORD *)(v40 + 72) = v32;
  *(_QWORD *)(*(_QWORD *)(v31 + 472) + 64LL) = *a1;
  *(_QWORD *)(*(_QWORD *)(v31 + 472) + 80LL) = *(_QWORD *)(a1[5] + 224LL);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v56,
    gdwInAtomicOperation,
    v39);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v55);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v35 + 2) = 0LL;
  v41 = KeUserModeCallback(35LL, v35, *(unsigned int *)v35, v65, v61);
  EtwTraceEndCallback(35LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v55);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v56,
    v42,
    v43);
  ThreadUnlock1(v45, v44, v46);
  v47 = *(_QWORD *)(v31 + 472);
  *(_OWORD *)(v47 + 64) = v67;
  *(_QWORD *)(v47 + 80) = v78;
  if ( v41 < 0 )
    goto LABEL_67;
  if ( v61[0] == 24 )
  {
    v48 = (__int64 *)v65[0];
    if ( v65[0] + 8 < v65[0] || v65[0] + 8 > MmUserProbeAddress )
      v48 = (__int64 *)MmUserProbeAddress;
    v49 = *v48;
    v63 = v49;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (int)v49 > 0 )
    {
      v50 = v65[0];
      if ( v65[0] + 24 < v65[0] || v65[0] + 24 > MmUserProbeAddress )
        v50 = MmUserProbeAddress;
      v51 = *(_QWORD *)(v50 + 16);
      v86 = *(_OWORD *)v50;
      v87 = v51;
      v49 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v86, v49, v58, v57);
      v63 = v49;
    }
    *(_DWORD *)(gptiCurrent + 480LL) &= ~0x4000000u;
  }
  else
  {
LABEL_67:
    v49 = 0LL;
  }
  if ( v35 != v88 && v35 != v89 )
  {
    v52 = (PVOID *)(v35 + 32);
    if ( *((_QWORD *)v35 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v52, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v79, (__int64)v52, v37);
  }
  return v49;
}
