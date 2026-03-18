/*
 * XREFs of SfnOUTSTRING @ 0x1C001FAA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0020A2C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0052E24 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0053670 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 *__fastcall SfnOUTSTRING(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v10; // rsi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v12; // r15
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // r12
  int v15; // r8d
  ULONG64 v16; // rcx
  unsigned int v17; // edx
  unsigned __int64 v18; // rax
  __int64 v19; // r13
  unsigned __int8 *result; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _KTHREAD *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _KTHREAD *v26; // r15
  __int64 v27; // r14
  __int64 *v28; // rax
  unsigned __int8 **v29; // r8
  unsigned int v30; // r9d
  unsigned __int8 *v31; // rcx
  struct _KTHREAD *v32; // r15
  __int64 v33; // r14
  __int64 *v34; // rax
  __int64 v35; // r13
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  char v43; // bl
  int v44; // r15d
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct _KTHREAD *v47; // rbx
  __int64 v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 *v52; // rax
  char v53; // bl
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax
  __int64 v56; // rax
  __int64 *v57; // rbx
  __int64 v58; // rbx
  ULONG64 v59; // rcx
  __int64 v60; // xmm1_8
  __int64 v61; // rdx
  struct _LARGE_STRING *v62; // rax
  _WORD *v63; // rax
  PVOID *v64; // rdx
  struct _KTHREAD *v65; // rsi
  __int64 v66; // rbx
  __int64 *v67; // rax
  char v68[4]; // [rsp+30h] [rbp-398h] BYREF
  int v69; // [rsp+34h] [rbp-394h]
  struct _LARGE_STRING *v70; // [rsp+38h] [rbp-390h]
  unsigned int v71; // [rsp+40h] [rbp-388h]
  int v72; // [rsp+44h] [rbp-384h]
  unsigned int v73[2]; // [rsp+48h] [rbp-380h]
  unsigned __int8 *v74; // [rsp+50h] [rbp-378h]
  __int64 v75; // [rsp+58h] [rbp-370h]
  int v76; // [rsp+60h] [rbp-368h]
  int v77[5]; // [rsp+64h] [rbp-364h] BYREF
  __int64 v78; // [rsp+78h] [rbp-350h]
  unsigned __int64 v79; // [rsp+80h] [rbp-348h] BYREF
  __int128 v80; // [rsp+88h] [rbp-340h]
  __int64 v81; // [rsp+98h] [rbp-330h]
  _QWORD v82[4]; // [rsp+A0h] [rbp-328h] BYREF
  ULONG_PTR RegionSize; // [rsp+C0h] [rbp-308h] BYREF
  __int64 v84; // [rsp+C8h] [rbp-300h] BYREF
  volatile signed __int32 *v85; // [rsp+D0h] [rbp-2F8h]
  __int64 v86; // [rsp+D8h] [rbp-2F0h]
  __int128 v87; // [rsp+E0h] [rbp-2E8h] BYREF
  __int64 v88; // [rsp+F0h] [rbp-2D8h]
  unsigned __int8 v89[96]; // [rsp+120h] [rbp-2A8h] BYREF
  unsigned __int8 v90[512]; // [rsp+180h] [rbp-248h] BYREF

  v70 = (struct _LARGE_STRING *)a4;
  *(_QWORD *)v73 = a3;
  v76 = a2;
  v69 = a7 & 1;
  v72 = 0;
  v10 = v89;
  v75 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v80 = 0uLL;
  v81 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  v78 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v12 = *ThreadWin32Thread;
      v78 = *ThreadWin32Thread;
    }
  }
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(v12 + 464);
  else
    v14 = 0LL;
  v15 = *(_DWORD *)(a4 + 4);
  v16 = (unsigned int)v15;
  LODWORD(v16) = v15 & 0x7FFFFFFF;
  v17 = -1;
  if ( (int)v16 + 2 >= (unsigned int)v16 )
    v17 = v16 + 2;
  v71 = v17;
  if ( (int)v16 + 2 < (unsigned int)v16 )
    goto LABEL_82;
  v16 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x8000000) == 0 && v15 < 0 && !v69 )
  {
    v18 = 2LL * v17;
    v17 = -1;
    if ( v18 <= 0xFFFFFFFF )
      v17 = v18;
    v71 = v17;
    if ( v18 > 0xFFFFFFFF )
      goto LABEL_82;
  }
  v19 = v17;
  result = (unsigned __int8 *)AllocCallbackMessage(0x60u, 1u, v17, v90, 0, 0x200uLL);
  v10 = result;
  v74 = result;
  if ( !result )
    return result;
  v23 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v22, v21) )
    PsGetThreadWin32Thread(v23);
  if ( v10 != v89 && v10 != v90 )
  {
    v26 = KeGetCurrentThread();
    v27 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v25, v24) )
    {
      v28 = (__int64 *)PsGetThreadWin32Thread(v26);
      if ( v28 )
        v27 = *v28;
    }
    v82[0] = *(_QWORD *)(v27 + 16);
    *(_QWORD *)(v27 + 16) = v82;
    v82[1] = v10;
    v82[2] = Win32FreePool;
  }
  *((_QWORD *)v10 + 5) = v14;
  *((_DWORD *)v10 + 12) = v76;
  v16 = (unsigned int)v69;
  if ( !v69 )
  {
    v24 = gptiCurrent;
    if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x8000000) != 0 )
    {
      *((_QWORD *)v10 + 7) = *(_QWORD *)v73 >> 1;
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x8000000u;
      goto LABEL_32;
    }
LABEL_31:
    *((_QWORD *)v10 + 7) = *(_QWORD *)v73;
    goto LABEL_32;
  }
  if ( *((int *)v70 + 1) < 0 )
    goto LABEL_31;
  *((_QWORD *)v10 + 7) = 2LL * *(_QWORD *)v73;
  v16 = gptiCurrent;
  *(_DWORD *)(gptiCurrent + 480LL) |= 0x8000000u;
  v72 = 1;
LABEL_32:
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  v29 = (unsigned __int8 **)(v10 + 80);
  v30 = v71;
  if ( v71 > *((_DWORD *)v10 + 1) )
    goto LABEL_82;
  v31 = (unsigned __int8 *)*((_QWORD *)v10 + 2);
  *((_QWORD *)v10 + 2) = &v31[(v19 + 7) & 0xFFFFFFFFFFFFFFF8uLL];
  if ( *((_QWORD *)v10 + 4) )
  {
    *v29 = v31;
  }
  else
  {
    *v29 = (unsigned __int8 *)(v31 - v10);
    v24 = *((unsigned int *)v10 + 2);
    v31 = &v10[*((unsigned int *)v10 + 6)];
    *(_DWORD *)&v31[4 * v24] = 80;
    ++*((_DWORD *)v10 + 2);
  }
  *((_DWORD *)v10 + 22) = v30;
  v32 = KeGetCurrentThread();
  v33 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v31, v24) )
  {
    v34 = (__int64 *)PsGetThreadWin32Thread(v32);
    if ( v34 )
      v33 = *v34;
  }
  v84 = *(_QWORD *)(v33 + 408);
  *(_QWORD *)(v33 + 408) = &v84;
  v85 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v35 = v78;
  v36 = *(_QWORD *)(v78 + 472);
  v80 = *(_OWORD *)(v36 + 64);
  v81 = *(_QWORD *)(v36 + 80);
  *(_QWORD *)(v36 + 72) = v14;
  v37 = 0LL;
  if ( a1 )
    v37 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)(v35 + 472) + 64LL) = v37;
  if ( a1 )
    v38 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v38 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v35 + 472) + 80LL) = v38;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v68);
  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) || (v43 = 1, !ExIsResourceAcquiredSharedLite(gpresUser)) )
    v43 = 0;
  UserSessionSwitchLeaveCrit(v40, v39, v41, v42);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v44 = KeUserModeCallback(35LL, v10, *(unsigned int *)v10, &v79, v77);
  EtwTraceEndCallback(35LL);
  if ( v43 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v47 = KeGetCurrentThread();
  v48 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v46, v45) )
  {
    v52 = (__int64 *)PsGetThreadWin32Thread(v47);
    if ( v52 )
      v48 = *v52;
  }
  v53 = v68[0];
  if ( (v68[0] & 1) != 0 )
  {
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
    tagObjLock::LockShared(DomainLockRef);
    tagObjLock::LockExclusive((tagObjLock *)(v48 + 384));
  }
  *(_BYTE *)(v48 + 1464) = v53;
  ThreadUnlock1(v50, v49, v51);
  v56 = *(_QWORD *)(v35 + 472);
  *(_OWORD *)(v56 + 64) = v80;
  *(_QWORD *)(v56 + 80) = v81;
  if ( v44 < 0 || v77[0] != 24 )
    goto LABEL_82;
  v57 = (__int64 *)v79;
  v16 = v79 + 8;
  if ( v79 + 8 < v79 || v16 > MmUserProbeAddress )
    v57 = (__int64 *)MmUserProbeAddress;
  v58 = *v57;
  v75 = v58;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_83;
  if ( !v58 )
  {
    if ( *(_QWORD *)v73 )
    {
      v16 = (ULONG64)v70;
      v63 = (_WORD *)*((_QWORD *)v70 + 1);
      if ( *((int *)v70 + 1) >= 0 )
        *v63 = 0;
      else
        *(_BYTE *)v63 = 0;
    }
    goto LABEL_83;
  }
  v59 = v79;
  if ( v79 + 24 < v79 || v79 + 24 > MmUserProbeAddress )
    v59 = MmUserProbeAddress;
  v60 = *(_QWORD *)(v59 + 16);
  v87 = *(_OWORD *)v59;
  v88 = v60;
  v16 = gptiCurrent;
  v61 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( !v61 )
  {
    v62 = v70;
LABEL_77:
    v58 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v87, v58, *((_DWORD *)v62 + 1) >> 31, v69);
    v75 = v58;
    CopyOutputString((struct _CALLBACKSTATUS *)&v87, v70, v73[0], v69);
    goto LABEL_83;
  }
  v62 = v70;
  if ( (*(_DWORD *)(v61 + 84) & 1) == 0 || *(struct _LARGE_STRING **)(v61 + 96) != v70 )
    goto LABEL_77;
LABEL_82:
  v58 = 0LL;
  v75 = 0LL;
LABEL_83:
  if ( v10 != v89 && v10 != v90 )
  {
    v64 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v64, &RegionSize, 0x8000u);
    }
    v65 = KeGetCurrentThread();
    v66 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v16, v64) )
    {
      v67 = (__int64 *)PsGetThreadWin32Thread(v65);
      if ( v67 )
        v66 = *v67;
    }
    *(_QWORD *)(v66 + 16) = v82[0];
    _guard_dispatch_icall_fptr();
    v58 = v75;
  }
  if ( v72 )
    *(_DWORD *)(gptiCurrent + 480LL) &= ~0x8000000u;
  return (unsigned __int8 *)v58;
}
