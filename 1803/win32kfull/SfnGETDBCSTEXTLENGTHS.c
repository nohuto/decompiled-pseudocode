/*
 * XREFs of SfnGETDBCSTEXTLENGTHS @ 0x1C0052F70
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
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0053670 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0053734 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall SfnGETDBCSTEXTLENGTHS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r14d
  __int64 v12; // r15
  __int64 ThreadWin32Thread; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 *v24; // rbx
  __int64 v25; // rbx
  __int64 v27; // rdx
  unsigned int v28; // r15d
  unsigned int v29; // esi
  __int64 v30; // r14
  __int64 v31; // r12
  __int64 v32; // rdx
  unsigned __int8 *v33; // rbx
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // edi
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 *v45; // rdi
  __int64 v46; // rdi
  ULONG64 v47; // rcx
  __int64 v48; // xmm1_8
  char v49; // [rsp+30h] [rbp-428h] BYREF
  char v50; // [rsp+31h] [rbp-427h] BYREF
  char v51; // [rsp+32h] [rbp-426h] BYREF
  char v52; // [rsp+33h] [rbp-425h] BYREF
  int v53; // [rsp+34h] [rbp-424h]
  int v54; // [rsp+38h] [rbp-420h]
  unsigned __int8 *v55; // [rsp+40h] [rbp-418h]
  int v56; // [rsp+48h] [rbp-410h] BYREF
  int v57; // [rsp+4Ch] [rbp-40Ch]
  _DWORD v58[10]; // [rsp+50h] [rbp-408h] BYREF
  __int64 v59; // [rsp+78h] [rbp-3E0h]
  unsigned __int64 v60; // [rsp+80h] [rbp-3D8h] BYREF
  __int64 v61; // [rsp+88h] [rbp-3D0h]
  __int128 v62; // [rsp+90h] [rbp-3C8h]
  __int64 v63; // [rsp+A0h] [rbp-3B8h]
  __int128 v64; // [rsp+A8h] [rbp-3B0h]
  __int64 v65; // [rsp+B8h] [rbp-3A0h]
  unsigned __int64 v66; // [rsp+C8h] [rbp-390h] BYREF
  __int64 v67; // [rsp+D0h] [rbp-388h]
  __int64 v68; // [rsp+D8h] [rbp-380h]
  __int64 v69; // [rsp+E0h] [rbp-378h]
  ULONG_PTR RegionSize; // [rsp+E8h] [rbp-370h] BYREF
  __int64 v71; // [rsp+F0h] [rbp-368h] BYREF
  __int64 v72; // [rsp+F8h] [rbp-360h]
  __int64 v73; // [rsp+100h] [rbp-358h]
  __int64 v74; // [rsp+110h] [rbp-348h] BYREF
  __int64 v75; // [rsp+118h] [rbp-340h]
  __int64 v76; // [rsp+120h] [rbp-338h]
  _QWORD v77[12]; // [rsp+128h] [rbp-330h] BYREF
  __int128 v78; // [rsp+188h] [rbp-2D0h] BYREF
  __int64 v79; // [rsp+198h] [rbp-2C0h]
  _BYTE v80[32]; // [rsp+1A0h] [rbp-2B8h] BYREF
  unsigned __int8 v81[96]; // [rsp+1C0h] [rbp-298h] BYREF
  unsigned __int8 v82[512]; // [rsp+220h] [rbp-238h] BYREF

  v67 = a3;
  v10 = a2;
  v57 = a2;
  v54 = a4 != 0;
  v53 = a7 & 1;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  v59 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v62 = 0uLL;
  v63 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v14 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(ThreadWin32Thread + 464);
  memset(v77, 0, 0x28uLL);
  v77[0] = v14;
  LODWORD(v77[1]) = v10;
  v77[2] = a3;
  v68 = a5;
  v77[3] = a5;
  v69 = a6;
  v77[4] = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v74 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v74;
  v75 = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v17 = *(_QWORD *)(ThreadWin32Thread + 472);
  v62 = *(_OWORD *)(v17 + 64);
  v63 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v14;
  *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 64LL) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 80LL) = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 224LL);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v50,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v49);
  EtwTraceBeginCallback(6LL);
  v18 = KeUserModeCallback(6LL, v77, 40LL, &v66, &v56);
  EtwTraceEndCallback(6LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v49);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v50, v19);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(ThreadWin32Thread + 472);
  *(_OWORD *)(v23 + 64) = v62;
  *(_QWORD *)(v23 + 80) = v63;
  if ( v18 < 0 || v56 != 24 )
    return 0LL;
  v24 = (__int64 *)v66;
  if ( v66 + 8 < v66 || v66 + 8 > MmUserProbeAddress )
    v24 = (__int64 *)MmUserProbeAddress;
  v25 = *v24;
  v59 = v25;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 || (int)v25 <= 0 || v54 == v53 )
    return v25;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL) != v12 )
    goto LABEL_60;
  v27 = 0LL;
  if ( v10 != 14 )
  {
    LOBYTE(v27) = 1;
    if ( HMValidateHandleNoSecure(*(_QWORD *)a1, v27) )
    {
      if ( v10 == 394 )
      {
        v27 = ((*(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL) & 0x40) == 0) & (unsigned __int8)((*(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL) & 0x30) != 0);
        goto LABEL_57;
      }
      if ( v10 == 329 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL) & 0x30) != 0
          && (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL) & 0x200) == 0 )
        {
          v27 = 1LL;
LABEL_58:
          v25 = 8LL;
          v59 = 8LL;
          goto LABEL_16;
        }
        v27 = 0LL;
LABEL_57:
        if ( !(_DWORD)v27 )
          goto LABEL_17;
        goto LABEL_58;
      }
    }
    return 0LL;
  }
LABEL_16:
  if ( (_DWORD)v27 )
    return v25;
LABEL_17:
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x4000000) != 0 )
  {
    if ( a4 )
LABEL_60:
      v25 *= 2LL;
    return v25;
  }
  v28 = v25 + 1;
  v29 = v25 + 1;
  v61 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v64 = 0uLL;
  v65 = 0LL;
  v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27);
  v31 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(v30 + 464);
  *(_DWORD *)(gptiCurrent + 480LL) |= 0x4000000u;
  if ( !v53 )
    v29 = 2 * v28;
  v33 = AllocCallbackMessage(96, 1u, v29, v82, 0, 0x200uLL);
  v55 = v33;
  if ( !v33 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32);
  if ( v33 != v81 && v33 != v82 )
    PushW32ThreadLock(v33, v80, Win32FreePool);
  *((_QWORD *)v33 + 5) = v31;
  v34 = v57;
  *((_DWORD *)v33 + 12) = v57 - 1;
  v35 = v28;
  if ( v34 != 14 )
    v35 = v67;
  *((_QWORD *)v33 + 7) = v35;
  *((_QWORD *)v33 + 8) = v68;
  *((_QWORD *)v33 + 9) = v69;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v33, v29, (void **)v33 + 10) < 0 )
    goto LABEL_63;
  *((_DWORD *)v33 + 22) = v29;
  v37 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36);
  v71 = *(_QWORD *)(v37 + 408);
  *(_QWORD *)(v37 + 408) = &v71;
  v72 = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v38 = *(_QWORD *)(v30 + 472);
  v64 = *(_OWORD *)(v38 + 64);
  v65 = *(_QWORD *)(v38 + 80);
  *(_QWORD *)(v38 + 72) = v31;
  *(_QWORD *)(*(_QWORD *)(v30 + 472) + 64LL) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)(v30 + 472) + 80LL) = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 224LL);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v52,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v33 + 2) = 0LL;
  v39 = KeUserModeCallback(35LL, v33, *(unsigned int *)v33, &v60, v58);
  EtwTraceEndCallback(35LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v52, v40);
  ThreadUnlock1(v42, v41, v43);
  v44 = *(_QWORD *)(v30 + 472);
  *(_OWORD *)(v44 + 64) = v64;
  *(_QWORD *)(v44 + 80) = v65;
  if ( v39 < 0 )
    goto LABEL_63;
  if ( v58[0] == 24 )
  {
    v45 = (__int64 *)v60;
    if ( v60 + 8 < v60 || v60 + 8 > MmUserProbeAddress )
      v45 = (__int64 *)MmUserProbeAddress;
    v46 = *v45;
    v61 = v46;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (int)v46 > 0 )
    {
      v47 = v60;
      if ( v60 + 24 < v60 || v60 + 24 > MmUserProbeAddress )
        v47 = MmUserProbeAddress;
      v48 = *(_QWORD *)(v47 + 16);
      v78 = *(_OWORD *)v47;
      v79 = v48;
      v46 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v78, v46, v54, v53);
      v61 = v46;
    }
    *(_DWORD *)(gptiCurrent + 480LL) &= ~0x4000000u;
  }
  else
  {
LABEL_63:
    v46 = 0LL;
  }
  if ( v33 != v81 && v33 != v82 )
  {
    if ( *((_QWORD *)v33 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v33 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v80);
  }
  return v46;
}
