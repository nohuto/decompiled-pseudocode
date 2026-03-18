/*
 * XREFs of SfnGETDBCSTEXTLENGTHS @ 0x1C01022C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C001A718 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00AF69C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00B01B4 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  int v10; // r15d
  __int64 v12; // r12
  __int64 ThreadWin32Thread; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rbx
  __int64 v24; // rbx
  __int64 v26; // rdx
  unsigned int v27; // r13d
  __int64 v28; // rsi
  __int64 v29; // r12
  unsigned int v30; // ecx
  unsigned int v31; // r15d
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
  __int64 v43; // rcx
  __int64 *v44; // rdi
  __int64 v45; // rdi
  ULONG64 v46; // rcx
  __int64 v47; // xmm0_8
  PVOID *v48; // rdx
  char v49; // [rsp+30h] [rbp-428h] BYREF
  char v50; // [rsp+31h] [rbp-427h] BYREF
  char v51; // [rsp+32h] [rbp-426h] BYREF
  char v52; // [rsp+33h] [rbp-425h] BYREF
  int v53; // [rsp+34h] [rbp-424h]
  int v54; // [rsp+38h] [rbp-420h]
  int v55; // [rsp+3Ch] [rbp-41Ch] BYREF
  int v56; // [rsp+40h] [rbp-418h]
  _DWORD v57[9]; // [rsp+44h] [rbp-414h] BYREF
  __int128 v58; // [rsp+68h] [rbp-3F0h]
  __int64 v59; // [rsp+78h] [rbp-3E0h]
  unsigned __int64 v60; // [rsp+80h] [rbp-3D8h] BYREF
  __int64 v61; // [rsp+88h] [rbp-3D0h]
  unsigned __int64 v62; // [rsp+A0h] [rbp-3B8h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-3B0h]
  __int64 v64; // [rsp+B0h] [rbp-3A8h]
  __int128 v65; // [rsp+B8h] [rbp-3A0h]
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp-390h] BYREF
  __int128 v67; // [rsp+D0h] [rbp-388h]
  __int64 v68; // [rsp+E0h] [rbp-378h]
  __int64 v69; // [rsp+E8h] [rbp-370h] BYREF
  __int64 v70; // [rsp+F0h] [rbp-368h]
  __int64 v71; // [rsp+F8h] [rbp-360h]
  __int128 v72; // [rsp+100h] [rbp-358h]
  __int64 v73; // [rsp+110h] [rbp-348h]
  __int64 v74; // [rsp+118h] [rbp-340h] BYREF
  __int64 v75; // [rsp+120h] [rbp-338h]
  __int64 v76; // [rsp+128h] [rbp-330h]
  _QWORD v77[12]; // [rsp+130h] [rbp-328h] BYREF
  __int128 v78; // [rsp+190h] [rbp-2C8h] BYREF
  __int64 v79; // [rsp+1A0h] [rbp-2B8h]
  _QWORD v80[3]; // [rsp+1A8h] [rbp-2B0h] BYREF
  unsigned __int8 v81[96]; // [rsp+1C0h] [rbp-298h] BYREF
  unsigned __int8 v82[512]; // [rsp+220h] [rbp-238h] BYREF

  v63 = a3;
  v10 = a2;
  v56 = a2;
  v54 = a4 != 0;
  v53 = a7 & 1;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  v59 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0uLL;
  v73 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v14 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(ThreadWin32Thread + 472);
  memset(v77, 0, 0x28uLL);
  v77[0] = v14;
  LODWORD(v77[1]) = v10;
  v77[2] = a3;
  v64 = a5;
  v77[3] = a5;
  *(_QWORD *)&v65 = a6;
  v77[4] = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v69 = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = &v69;
  v70 = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v17 = *(_QWORD *)(ThreadWin32Thread + 480);
  v58 = *(_OWORD *)(v17 + 64);
  v72 = v58;
  v73 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v14;
  *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 64LL) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 80LL) = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 224LL);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v50,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v49);
  EtwTraceBeginCallback(6LL);
  v18 = KeUserModeCallback(6LL, v77, 40LL, &v62, &v55);
  EtwTraceEndCallback(6LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v49);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v50, v19);
  ThreadUnlock1(v21, v20);
  v22 = *(_QWORD *)(ThreadWin32Thread + 480);
  *(_OWORD *)(v22 + 64) = v58;
  *(_QWORD *)(v22 + 80) = v73;
  if ( v18 < 0 || v55 != 24 )
    return 0LL;
  v23 = (__int64 *)v62;
  if ( v62 + 8 < v62 || v62 + 8 > MmUserProbeAddress )
    v23 = (__int64 *)MmUserProbeAddress;
  v24 = *v23;
  v59 = v24;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 || (int)v24 <= 0 || v54 == v53 )
    return v24;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL) != v12 )
    goto LABEL_58;
  v26 = 0LL;
  if ( v10 != 14 )
  {
    LOBYTE(v26) = 1;
    if ( HMValidateHandleNoSecure(*(_QWORD *)a1, v26) )
    {
      if ( v10 == 394 )
      {
        v26 = ((*(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL) & 0x40) == 0) & (unsigned __int8)((*(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL) & 0x30) != 0);
        goto LABEL_55;
      }
      if ( v10 == 329 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL) & 0x30) != 0
          && (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL) & 0x200) == 0 )
        {
          v26 = 1LL;
LABEL_56:
          v24 = 8LL;
          v59 = 8LL;
          goto LABEL_16;
        }
        v26 = 0LL;
LABEL_55:
        if ( !(_DWORD)v26 )
          goto LABEL_17;
        goto LABEL_56;
      }
    }
    return 0LL;
  }
LABEL_16:
  if ( (_DWORD)v26 )
    return v24;
LABEL_17:
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x4000000) != 0 )
  {
    if ( a4 )
LABEL_58:
      v24 *= 2LL;
    return v24;
  }
  v27 = v24 + 1;
  v61 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v67 = 0uLL;
  v68 = 0LL;
  v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26);
  v29 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(v28 + 472);
  *(_DWORD *)(gptiCurrent + 488LL) |= 0x4000000u;
  v30 = 2 * (v24 + 1);
  if ( v53 )
    v30 = v24 + 1;
  v31 = v30;
  v33 = AllocCallbackMessage(96, 1u, v30, v82, 0, 0x200uLL);
  *(_QWORD *)&v58 = v33;
  if ( !v33 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32);
  if ( v33 != v81 && v33 != v82 )
    PushW32ThreadLock((__int64)v33, v80, (__int64)Win32FreePool);
  *((_QWORD *)v33 + 5) = v29;
  v34 = v56;
  *((_DWORD *)v33 + 12) = v56 - 1;
  v35 = v27;
  if ( v34 != 14 )
    v35 = v63;
  *((_QWORD *)v33 + 7) = v35;
  *((_QWORD *)v33 + 8) = v64;
  *((_QWORD *)v33 + 9) = v65;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v33, v31, (void **)v33 + 10) < 0 )
    goto LABEL_45;
  *((_DWORD *)v33 + 22) = v31;
  v37 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36);
  v74 = *(_QWORD *)(v37 + 416);
  *(_QWORD *)(v37 + 416) = &v74;
  v75 = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v38 = *(_QWORD *)(v28 + 480);
  v65 = *(_OWORD *)(v38 + 64);
  v67 = v65;
  v68 = *(_QWORD *)(v38 + 80);
  *(_QWORD *)(v38 + 72) = v29;
  *(_QWORD *)(*(_QWORD *)(v28 + 480) + 64LL) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)(v28 + 480) + 80LL) = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 224LL);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v52,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v33 + 2) = 0LL;
  v39 = KeUserModeCallback(35LL, v33, *(unsigned int *)v33, &v60, v57);
  EtwTraceEndCallback(35LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v52, v40);
  ThreadUnlock1(v42, v41);
  v43 = *(_QWORD *)(v28 + 480);
  *(_OWORD *)(v43 + 64) = v65;
  *(_QWORD *)(v43 + 80) = v68;
  if ( v39 < 0 )
    goto LABEL_45;
  if ( v57[0] == 24 )
  {
    v44 = (__int64 *)v60;
    if ( v60 + 8 < v60 || v60 + 8 > MmUserProbeAddress )
      v44 = (__int64 *)MmUserProbeAddress;
    v45 = *v44;
    v61 = v45;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (int)v45 > 0 )
    {
      v46 = v60;
      if ( v60 + 24 < v60 || v60 + 24 > MmUserProbeAddress )
        v46 = MmUserProbeAddress;
      v47 = *(_QWORD *)(v46 + 16);
      v78 = *(_OWORD *)v46;
      v79 = v47;
      v45 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v78, v45, v54, v53);
      v61 = v45;
    }
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x4000000u;
  }
  else
  {
LABEL_45:
    v45 = 0LL;
  }
  if ( v33 != v81 && v33 != v82 )
  {
    v48 = (PVOID *)(v33 + 32);
    if ( *((_QWORD *)v33 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v48, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v80, (__int64)v48);
  }
  return v45;
}
