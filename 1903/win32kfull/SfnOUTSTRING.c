/*
 * XREFs of SfnOUTSTRING @ 0x1C00F1120
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     MBToWCSEx @ 0x1C00F1C4C (MBToWCSEx.c)
 *     WCSToMBEx @ 0x1C00F1CB0 (WCSToMBEx.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     strncpycch @ 0x1C025A824 (strncpycch.c)
 */

__int64 __fastcall SfnOUTSTRING(
        _QWORD *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v11; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v13; // r15
  int v14; // edx
  __int64 v15; // rcx
  __int64 *ThreadWin32Thread; // rax
  int v17; // r8d
  unsigned __int64 v18; // rdx
  ULONG_PTR v19; // rbx
  __int64 v20; // rax
  unsigned int *v21; // rdi
  int v22; // edx
  __int64 v23; // rcx
  unsigned int *v25; // rax
  struct _KTHREAD *v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct _KTHREAD *v29; // r13
  __int64 v30; // r15
  __int64 *v31; // rax
  __int64 v32; // r13
  _QWORD *v33; // r8
  unsigned int v34; // r9d
  char *v35; // rcx
  struct _KTHREAD *v36; // r15
  __int64 v37; // rbx
  __int64 *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct _KTHREAD *v43; // rbx
  __int64 v44; // rsi
  __int64 *v45; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v48; // rcx
  bool v49; // si
  int v50; // r15d
  int v51; // edx
  __int64 v52; // rcx
  struct _KTHREAD *v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 *v58; // rax
  unsigned int v59; // eax
  tagDomLock *v60; // rax
  __int64 v61; // rax
  __int64 *v62; // rsi
  __int64 v63; // rsi
  ULONG64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r13
  int v67; // r15d
  SIZE_T v68; // rdi
  WCHAR *v69; // rbx
  bool v70; // sf
  int v71; // r15d
  ULONG v72; // r8d
  SIZE_T v73; // rax
  unsigned __int64 v74; // rcx
  ULONG64 v75; // rcx
  unsigned int v76; // eax
  SIZE_T v77; // rdx
  WCHAR *v78; // rcx
  WCHAR *v79; // r8
  WCHAR v80; // ax
  unsigned int v81; // eax
  SIZE_T v82; // rax
  _WORD *v83; // rax
  _BYTE *v84; // rcx
  PVOID *v85; // rdx
  struct _KTHREAD *v86; // rbx
  __int64 *v87; // rax
  char v88; // [rsp+30h] [rbp-3D8h]
  ULONG BytesInUnicodeString; // [rsp+34h] [rbp-3D4h] BYREF
  int v90; // [rsp+38h] [rbp-3D0h]
  unsigned int v91; // [rsp+3Ch] [rbp-3CCh]
  int v92; // [rsp+40h] [rbp-3C8h]
  __int64 v93; // [rsp+48h] [rbp-3C0h]
  __int64 v94; // [rsp+50h] [rbp-3B8h]
  unsigned int v95; // [rsp+58h] [rbp-3B0h]
  int v96; // [rsp+5Ch] [rbp-3ACh] BYREF
  int v97; // [rsp+60h] [rbp-3A8h]
  __int64 v98; // [rsp+78h] [rbp-390h]
  _BYTE *v99; // [rsp+80h] [rbp-388h]
  __int128 v100; // [rsp+88h] [rbp-380h] BYREF
  void (__fastcall *v101)(_QWORD); // [rsp+98h] [rbp-370h]
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp-368h] BYREF
  __int64 v103; // [rsp+A8h] [rbp-360h]
  unsigned __int64 v104; // [rsp+B0h] [rbp-358h] BYREF
  __int128 v105; // [rsp+B8h] [rbp-350h]
  __int64 v106; // [rsp+C8h] [rbp-340h]
  SIZE_T Length[2]; // [rsp+D0h] [rbp-338h]
  volatile void *Address; // [rsp+E0h] [rbp-328h]
  WCHAR *v109; // [rsp+F0h] [rbp-318h]
  ULONG_PTR v110; // [rsp+F8h] [rbp-310h] BYREF
  WCHAR *v111; // [rsp+100h] [rbp-308h]
  __int64 v112; // [rsp+108h] [rbp-300h] BYREF
  _QWORD *v113; // [rsp+110h] [rbp-2F8h]
  __int64 v114; // [rsp+118h] [rbp-2F0h]
  __int128 v115; // [rsp+148h] [rbp-2C0h]
  volatile void *v116; // [rsp+158h] [rbp-2B0h]
  _BYTE v117[96]; // [rsp+160h] [rbp-2A8h] BYREF
  _BYTE v118[512]; // [rsp+1C0h] [rbp-248h] BYREF

  v93 = a4;
  v95 = a2;
  v90 = a7 & 1;
  v11 = 0LL;
  v92 = 0;
  memset(v117, 0, sizeof(v117));
  v99 = v117;
  v94 = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  v114 = 0LL;
  v105 = 0uLL;
  v106 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  v98 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v13 = *ThreadWin32Thread;
      v98 = *ThreadWin32Thread;
    }
  }
  if ( a1 )
    v103 = a1[5] - *(_QWORD *)(v13 + 464);
  else
    v103 = 0LL;
  v17 = *(_DWORD *)(a4 + 4);
  v18 = (v17 & 0x7FFFFFFFu) + 2;
  if ( (unsigned int)v18 < (v17 & 0x7FFFFFFFu) )
    goto LABEL_138;
  v91 = (v17 & 0x7FFFFFFF) + 2;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x8000000) == 0 && v17 < 0 && (a7 & 1) == 0 )
  {
    v18 *= 2LL;
    if ( v18 <= 0xFFFFFFFF )
    {
      v91 = v18;
      goto LABEL_13;
    }
LABEL_138:
    v63 = 0LL;
    v94 = 0LL;
    goto LABEL_139;
  }
LABEL_13:
  v19 = ((unsigned int)v18 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  RegionSize = v19;
  if ( v19 <= 0x800 )
  {
    if ( v19 + 104 <= 0x200 )
    {
      v21 = (unsigned int *)v118;
      memset(v118, 0, sizeof(v118));
    }
    else
    {
      v21 = (unsigned int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v19 + 104), 1667461973LL);
      if ( !v21 )
        return 0LL;
    }
    v25 = v21 + 26;
    *((_QWORD *)v21 + 4) = 0LL;
    goto LABEL_23;
  }
  v20 = Win32AllocPoolWithQuotaZInit(104LL, 1667461973LL);
  v21 = (unsigned int *)v20;
  if ( !v20 )
    return 0LL;
  *(_QWORD *)(v20 + 32) = 0LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v20 + 32), 0LL, &RegionSize, 0x1000u, 4u) < 0 )
  {
    Win32FreePool(v21);
    return 0LL;
  }
  v25 = (unsigned int *)*((_QWORD *)v21 + 4);
LABEL_23:
  *v21 = 104;
  *((_QWORD *)v21 + 2) = v25;
  v21[1] = RegionSize;
  v21[2] = 0;
  v21[6] = 96;
  v99 = v21;
  v26 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v23, v22) )
    PsGetThreadWin32Thread(v26);
  v100 = 0LL;
  v101 = 0LL;
  if ( v21 != (unsigned int *)v117 && v21 != (unsigned int *)v118 )
  {
    v29 = KeGetCurrentThread();
    v30 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v28, v27) )
    {
      v31 = (__int64 *)PsGetThreadWin32Thread(v29);
      if ( v31 )
        v30 = *v31;
    }
    *(_QWORD *)&v100 = *(_QWORD *)(v30 + 16);
    *(_QWORD *)(v30 + 16) = &v100;
    *((_QWORD *)&v100 + 1) = v21;
    v101 = (void (__fastcall *)(_QWORD))Win32FreePool;
  }
  v32 = v103;
  *((_QWORD *)v21 + 5) = v103;
  v21[12] = v95;
  if ( v90 )
  {
    if ( *(int *)(v93 + 4) >= 0 )
    {
      *((_QWORD *)v21 + 7) = 2 * a3;
      *(_DWORD *)(gptiCurrent + 480LL) |= 0x8000000u;
      v92 = 1;
      goto LABEL_38;
    }
  }
  else
  {
    LODWORD(v27) = gptiCurrent;
    if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x8000000) != 0 )
    {
      *((_QWORD *)v21 + 7) = a3 >> 1;
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x8000000u;
      goto LABEL_38;
    }
  }
  *((_QWORD *)v21 + 7) = a3;
LABEL_38:
  *((_QWORD *)v21 + 8) = a5;
  *((_QWORD *)v21 + 9) = a6;
  v33 = v21 + 20;
  v34 = v91;
  if ( v91 > v21[1] )
    goto LABEL_138;
  v35 = (char *)*((_QWORD *)v21 + 2);
  *((_QWORD *)v21 + 2) = &v35[v19];
  if ( *((_QWORD *)v21 + 4) )
  {
    *v33 = v35;
  }
  else
  {
    *v33 = v35 - (char *)v21;
    v27 = v21[2];
    v35 = (char *)v21 + v21[6];
    *(_DWORD *)&v35[4 * v27] = 80;
    ++v21[2];
  }
  v21[22] = v34;
  v36 = KeGetCurrentThread();
  v37 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v35, v27) )
  {
    v38 = (__int64 *)PsGetThreadWin32Thread(v36);
    if ( v38 )
      v37 = *v38;
  }
  v112 = *(_QWORD *)(v37 + 408);
  *(_QWORD *)(v37 + 408) = &v112;
  v113 = a1;
  if ( a1 )
    HMLockObject(a1);
  v39 = v98;
  v40 = *(_QWORD *)(v98 + 472);
  v105 = *(_OWORD *)(v40 + 64);
  v106 = *(_QWORD *)(v40 + 80);
  *(_QWORD *)(v40 + 72) = v32;
  v41 = 0LL;
  if ( a1 )
    v41 = *a1;
  *(_QWORD *)(*(_QWORD *)(v39 + 472) + 64LL) = v41;
  if ( a1 )
    v42 = *(_QWORD *)(a1[5] + 224LL);
  else
    v42 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v39 + 472) + 80LL) = v42;
  if ( gdwInAtomicOperation )
  {
    v42 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v43 = KeGetCurrentThread();
  v44 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v42, gdwInAtomicOperation) )
  {
    v45 = (__int64 *)PsGetThreadWin32Thread(v43);
    if ( v45 )
      v44 = *v45;
  }
  v88 = *(_BYTE *)(v44 + 1480);
  *(_BYTE *)(v44 + 1480) = 0;
  if ( (v88 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v44 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v49 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v48);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v21 + 2) = 0LL;
  v50 = KeUserModeCallback(35LL, v21, *v21, &v104, &v96);
  EtwTraceEndCallback(35LL);
  if ( v49 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v53 = KeGetCurrentThread();
  v54 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v52, v51) )
  {
    v58 = (__int64 *)PsGetThreadWin32Thread(v53);
    if ( v58 )
      v54 = *v58;
  }
  if ( (v88 & 1) != 0 )
  {
    v59 = DLT_THREADINFO::getDLT();
    v60 = (tagDomLock *)GetDomainLockRef(v59);
    tagDomLock::LockShared(v60);
    tagObjLock::LockExclusive((tagObjLock *)(v54 + 384));
  }
  *(_BYTE *)(v54 + 1480) = v88;
  ThreadUnlock1(v56, v55, v57);
  v61 = *(_QWORD *)(v98 + 472);
  *(_OWORD *)(v61 + 64) = v105;
  *(_QWORD *)(v61 + 80) = v106;
  if ( v50 < 0 || v96 != 24 )
    goto LABEL_138;
  v62 = (__int64 *)v104;
  if ( v104 + 8 < v104 || v104 + 8 > MmUserProbeAddress )
    v62 = (__int64 *)MmUserProbeAddress;
  v63 = *v62;
  v94 = v63;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_139;
  if ( !v63 )
  {
    if ( a3 )
    {
      v83 = *(_WORD **)(v93 + 8);
      if ( *(int *)(v93 + 4) >= 0 )
        *v83 = 0;
      else
        *(_BYTE *)v83 = 0;
    }
    goto LABEL_139;
  }
  v64 = v104;
  if ( v104 + 24 < v104 || v104 + 24 > MmUserProbeAddress )
    v64 = MmUserProbeAddress;
  *(_OWORD *)Length = *(_OWORD *)v64;
  Address = *(volatile void **)(v64 + 16);
  v115 = *(_OWORD *)Length;
  v116 = Address;
  v65 = *(_QWORD *)(gptiCurrent + 504LL);
  v66 = v93;
  if ( v65 )
  {
    if ( (*(_DWORD *)(v65 + 84) & 1) != 0 && *(_QWORD *)(v65 + 96) == v93 )
      goto LABEL_138;
  }
  v67 = *(_DWORD *)(v93 + 4);
  v68 = LODWORD(Length[1]);
  if ( LODWORD(Length[1]) )
  {
    v69 = (WCHAR *)Address;
    ProbeForRead(Address, LODWORD(Length[1]), (v90 ^ 1) + 1);
  }
  else
  {
    *(_BYTE *)MmUserProbeAddress = 0;
    v69 = (WCHAR *)Address;
  }
  v70 = v67 < 0;
  v71 = v90;
  if ( v70 )
  {
    if ( v90 )
    {
      LODWORD(v73) = v68;
      if ( (unsigned int)v63 < (unsigned int)v68 )
        LODWORD(v73) = v63;
      BytesInUnicodeString = v73;
    }
    else
    {
      v74 = 2LL * (unsigned int)v63;
      if ( v74 >= v68 )
        LODWORD(v74) = v68;
      RtlUnicodeToMultiByteSize(&BytesInUnicodeString, v69, v74);
      LODWORD(v73) = BytesInUnicodeString;
    }
  }
  else if ( v90 )
  {
    v72 = v68;
    if ( (unsigned int)v63 < (unsigned int)v68 )
      v72 = v63;
    RtlMultiByteToUnicodeSize(&BytesInUnicodeString, (const CHAR *)v69, v72);
    LODWORD(v73) = BytesInUnicodeString >> 1;
    BytesInUnicodeString >>= 1;
  }
  else if ( (unsigned int)v63 >= (unsigned int)v68 >> 1 )
  {
    v73 = v68 >> 1;
    BytesInUnicodeString = v68 >> 1;
  }
  else
  {
    LODWORD(v73) = v63;
    BytesInUnicodeString = v63;
  }
  v63 = (unsigned int)v73;
  v94 = (unsigned int)v73;
  if ( (_DWORD)v68 )
  {
    ProbeForRead(v69, v68, (v71 ^ 1) + 1);
  }
  else
  {
    v75 = MmUserProbeAddress;
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( *(int *)(v66 + 4) < 0 )
  {
    if ( v71 )
    {
      if ( (unsigned int)a3 < (unsigned int)v68 )
        LODWORD(v68) = a3;
      v81 = strncpycch(*(_QWORD *)(v66 + 8), v69, (unsigned int)v68);
    }
    else
    {
      if ( LODWORD(Length[0]) >= (unsigned int)v68 >> 1 )
        v82 = v68 >> 1;
      else
        LODWORD(v82) = Length[0];
      v81 = WCSToMBEx(0LL, v69, (unsigned int)v82, v66 + 8, a3);
      if ( v81 >= (unsigned int)a3 )
        goto LABEL_133;
      *(_BYTE *)(v81 + *(_QWORD *)(v66 + 8)) = 0;
    }
    LODWORD(a3) = v81;
LABEL_133:
    *(_DWORD *)v66 = a3;
    goto LABEL_139;
  }
  if ( v71 )
  {
    if ( LODWORD(Length[0]) < (unsigned int)v68 )
      LODWORD(v68) = Length[0];
    v76 = MBToWCSEx(v75, v69, (unsigned int)v68, v66 + 8, a3);
    if ( v76 < (unsigned int)a3 )
    {
      *(_WORD *)(*(_QWORD *)(v66 + 8) + 2LL * v76) = 0;
      *(_DWORD *)v66 = 2 * v76;
      goto LABEL_139;
    }
  }
  else
  {
    if ( (unsigned int)a3 >= (unsigned int)v68 >> 1 )
      v77 = v68 >> 1;
    else
      LODWORD(v77) = a3;
    v97 = v77;
    v109 = v69;
    v78 = *(WCHAR **)(v66 + 8);
    v111 = v78;
    v79 = v78;
    while ( (_DWORD)v77 )
    {
      v80 = *v69;
      *v78++ = *v69;
      v111 = v78;
      v109 = ++v69;
      if ( !v80 )
        break;
      LODWORD(v77) = v77 - 1;
      v97 = v77;
    }
    LODWORD(a3) = v78 - v79;
  }
  *(_DWORD *)v66 = 2 * a3;
LABEL_139:
  if ( v99 != v117 )
  {
    v84 = v118;
    if ( v99 != v118 )
    {
      v85 = (PVOID *)(v99 + 32);
      if ( *((_QWORD *)v99 + 4) )
      {
        v110 = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v85, &v110, 0x8000u);
      }
      v86 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v84, (_DWORD)v85) )
      {
        v87 = (__int64 *)PsGetThreadWin32Thread(v86);
        if ( v87 )
          v11 = *v87;
      }
      *(_QWORD *)(v11 + 16) = v100;
      v101(*((_QWORD *)&v100 + 1));
      v63 = v94;
    }
  }
  if ( v92 )
    *(_DWORD *)(gptiCurrent + 480LL) &= ~0x8000000u;
  return v63;
}
