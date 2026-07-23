/*
 * XREFs of ExpGetProcessInformation @ 0x1405E7B60
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400514C0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFE4 (ObFastReferenceObjectLocked.c)
 *     MmGetSessionId @ 0x1400897A0 (MmGetSessionId.c)
 *     KeQueryValuesThread @ 0x14008EE70 (KeQueryValuesThread.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     RtlQueryPackageIdentity @ 0x1400A4F70 (RtlQueryPackageIdentity.c)
 *     SeSecurityAttributePresent @ 0x1400A6F90 (SeSecurityAttributePresent.c)
 *     PsIsProcessInSilo @ 0x1400CB1E8 (PsIsProcessInSilo.c)
 *     KeFlushProcessWriteBuffers @ 0x1400ED078 (KeFlushProcessWriteBuffers.c)
 *     SmIsCompressionProcess @ 0x14011B058 (SmIsCompressionProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     ExpCopyProcessInfo @ 0x1405FF390 (ExpCopyProcessInfo.c)
 *     SeQueryUserSidToken @ 0x1406112AC (SeQueryUserSidToken.c)
 *     PsQueryProcessEnergyValues @ 0x1406382C0 (PsQueryProcessEnergyValues.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406554B4 (ExCheckFullProcessInformationAccess.c)
 *     ExIsRestrictedCaller @ 0x1406AEC8C (ExIsRestrictedCaller.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406B6060 (KeSynchronizeWithDynamicProcessors.c)
 */

__int64 __fastcall ExpGetProcessInformation(_DWORD *a1, unsigned int a2, unsigned int *a3, _DWORD *a4, int a5)
{
  int v5; // r12d
  int v6; // r13d
  bool v7; // cf
  unsigned int v8; // ebx
  unsigned __int8 v9; // di
  struct _KPROCESS *v10; // r15
  char *v11; // rbx
  _QWORD *v12; // r15
  char *v13; // r13
  _QWORD *v14; // r14
  signed __int64 *v15; // rsi
  ULONG_PTR v16; // rdi
  char *v17; // rdi
  PVOID v18; // rbx
  __int64 v19; // rax
  bool v20; // cl
  int v21; // eax
  unsigned int v22; // eax
  _OWORD *v23; // rax
  _OWORD *v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  char v27; // cl
  char *p_Blink; // rdi
  int v29; // r10d
  __int64 v30; // rcx
  int v31; // eax
  unsigned __int64 v32; // rsi
  char *PoolWithTag; // rax
  void *v34; // rbx
  const wchar_t *v35; // rcx
  unsigned int v36; // r8d
  char *v37; // r14
  _WORD *v38; // r9
  _WORD *v39; // rdx
  unsigned __int64 v40; // rsi
  unsigned int v41; // ebx
  unsigned int v42; // eax
  int *v43; // rcx
  struct _KPROCESS *v44; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  int v46; // r14d
  __int64 *i; // rsi
  __int64 v48; // rcx
  bool v49; // zf
  int SessionId; // ebx
  _DWORD *v51; // r14
  unsigned int v52; // esi
  __int64 v53; // rdx
  __int64 v54; // r8
  int v55; // eax
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  _QWORD *v58; // r13
  struct _KTHREAD *v59; // r15
  signed __int64 *v60; // rsi
  _QWORD **v61; // r14
  int v62; // r12d
  _QWORD *j; // rbx
  unsigned int v64; // eax
  unsigned int v65; // ebx
  unsigned int v66; // esi
  unsigned __int64 v67; // rax
  struct _KTHREAD *v68; // r14
  signed __int64 *v69; // rsi
  char *v70; // r15
  int v71; // r12d
  char *k; // rbx
  _LIST_ENTRY *v73; // rdi
  PACCESS_TOKEN v74; // rsi
  ULONG_PTR v75; // r14
  ULONG_PTR v76; // r15
  size_t v77; // rcx
  unsigned int v78; // esi
  unsigned int v79; // eax
  unsigned int v80; // edx
  unsigned int v81; // esi
  unsigned int v82; // eax
  _LIST_ENTRY *Flink; // rdi
  unsigned int v84; // eax
  unsigned int v85; // esi
  struct _KTHREAD *v86; // r14
  signed __int64 *v87; // rbx
  __int64 result; // rax
  signed __int32 v89[8]; // [rsp+0h] [rbp-618h] BYREF
  int v90; // [rsp+40h] [rbp-5D8h]
  unsigned int v91; // [rsp+44h] [rbp-5D4h]
  NTSTATUS v92; // [rsp+48h] [rbp-5D0h]
  unsigned int v93; // [rsp+4Ch] [rbp-5CCh]
  char v94; // [rsp+50h] [rbp-5C8h]
  __int64 *v95; // [rsp+58h] [rbp-5C0h]
  int v96; // [rsp+60h] [rbp-5B8h]
  PVOID Object; // [rsp+68h] [rbp-5B0h]
  bool v98; // [rsp+70h] [rbp-5A8h]
  int v99; // [rsp+74h] [rbp-5A4h]
  PVOID v100; // [rsp+78h] [rbp-5A0h]
  int v101; // [rsp+80h] [rbp-598h]
  int *v102; // [rsp+88h] [rbp-590h]
  bool v103; // [rsp+90h] [rbp-588h]
  bool v104; // [rsp+93h] [rbp-585h]
  void *v105; // [rsp+A0h] [rbp-578h]
  _DWORD *v106; // [rsp+A8h] [rbp-570h]
  int v107; // [rsp+B0h] [rbp-568h]
  unsigned int *v108; // [rsp+B8h] [rbp-560h]
  size_t Size; // [rsp+C0h] [rbp-558h] BYREF
  PVOID P; // [rsp+C8h] [rbp-550h] BYREF
  ULONG_PTR AppIdSize; // [rsp+D0h] [rbp-548h] BYREF
  ULONG_PTR PackageSize; // [rsp+D8h] [rbp-540h] BYREF
  void *v113; // [rsp+E0h] [rbp-538h]
  const wchar_t *v114; // [rsp+E8h] [rbp-530h]
  int v115; // [rsp+F0h] [rbp-528h]
  _WORD *v116; // [rsp+F8h] [rbp-520h]
  char *v117; // [rsp+100h] [rbp-518h]
  int v118; // [rsp+108h] [rbp-510h] BYREF
  unsigned __int8 v119; // [rsp+110h] [rbp-508h]
  unsigned __int8 v120; // [rsp+111h] [rbp-507h]
  char v121; // [rsp+112h] [rbp-506h]
  char v122; // [rsp+113h] [rbp-505h]
  _QWORD *v123; // [rsp+118h] [rbp-500h]
  unsigned __int64 v124; // [rsp+120h] [rbp-4F8h]
  char *v125; // [rsp+128h] [rbp-4F0h]
  __int64 *v126; // [rsp+130h] [rbp-4E8h]
  _DWORD *v127; // [rsp+138h] [rbp-4E0h]
  int v128; // [rsp+160h] [rbp-4B8h]
  __int64 CurrentServerSilo; // [rsp+168h] [rbp-4B0h]
  struct _KPROCESS *v130; // [rsp+1B8h] [rbp-460h]
  HANDLE Handle; // [rsp+1C0h] [rbp-458h] BYREF
  int v132; // [rsp+1D0h] [rbp-448h]
  PACCESS_TOKEN v133; // [rsp+1D8h] [rbp-440h]
  _QWORD v134[12]; // [rsp+1E0h] [rbp-438h] BYREF
  _BYTE Src[80]; // [rsp+240h] [rbp-3D8h] BYREF
  _BYTE v136[432]; // [rsp+290h] [rbp-388h] BYREF
  WCHAR AppId[72]; // [rsp+440h] [rbp-1D8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+4D0h] [rbp-148h] BYREF

  v115 = a5;
  v127 = a1;
  v108 = a3;
  AppIdSize = 130LL;
  PackageSize = 254LL;
  v5 = 0;
  Object = 0LL;
  v100 = 0LL;
  v91 = 0;
  if ( a3 )
    *a3 = 0;
  v103 = a5 != 5;
  v6 = 136;
  if ( a5 == 5 )
    v6 = 80;
  v99 = v6;
  v101 = v6;
  v106 = v127;
  v7 = a2 < 0x270;
  if ( a2 < 0x270 )
  {
    if ( !a3 )
      return 3221225476LL;
    v7 = a2 < 0x270;
  }
  v8 = v7 ? 0xC0000004 : 0;
  v94 = 0;
  v9 = KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  if ( a5 != 148 || (result = ExCheckFullProcessInformationAccess(v9), (int)result >= 0) )
  {
    if ( (unsigned int)ExIsRestrictedCaller(v9) )
      v94 = 1;
    v92 = 0;
    P = 0LL;
    KeFlushProcessWriteBuffers(1);
    CurrentServerSilo = PsGetCurrentServerSilo();
    v10 = (struct _KPROCESS *)PsIdleProcess;
    v95 = (__int64 *)PsIdleProcess;
    Object = PsIdleProcess;
    v90 = v8;
    while ( 1 )
    {
LABEL_103:
      if ( !v10 )
      {
        if ( v90 >= 0 && v106 && (*v106 = 0, v92 < 0) )
        {
          v90 = v92;
        }
        else if ( v108 )
        {
          *v108 = v91;
        }
        goto LABEL_203;
      }
      if ( (v10[1].DirectoryTableBase & 0x400000000LL) == 0
        || !v10->Header.SignalState
        || (v82 = v10[1].ThreadSeed[0], v10 = (struct _KPROCESS *)Object, v95 = (__int64 *)Object, v82)
        || *((PVOID *)Object + 6) != (char *)Object + 48 )
      {
        if ( !a4 || v10 != PsIdleProcess )
        {
          SessionId = MmGetSessionId((__int64)v10);
          v132 = SessionId;
          if ( (!a4 || SessionId == *a4) && PsIsProcessInSilo(v10, CurrentServerSilo) )
            break;
        }
      }
LABEL_82:
      if ( v10 == PsIdleProcess )
        v10 = 0LL;
      v44 = v10;
      v130 = v10;
      while ( 1 )
      {
        v10 = 0LL;
        v95 = 0LL;
        v126 = 0LL;
        CurrentThread = KeGetCurrentThread();
        v46 = 0;
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
        for ( i = v44 ? (__int64 *)v44[1].Header.WaitListHead.Blink : (__int64 *)PsActiveProcessHead;
              i != &PsActiveProcessHead;
              i = (__int64 *)*i )
        {
          v10 = (struct _KPROCESS *)(i - 93);
          v95 = i - 93;
          v126 = i - 93;
          if ( ObReferenceObjectSafeWithTag((__int64)(i - 93)) )
          {
            v46 = 1;
            break;
          }
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
        KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
        v49 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v49
          && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v48);
        }
        if ( v44 )
          ObfDereferenceObjectWithTag(v44, 0x6E457350u);
        if ( !v46 )
        {
          v10 = 0LL;
          v95 = 0LL;
          v126 = 0LL;
        }
        v44 = v10;
        v130 = v10;
        if ( !v10 )
          break;
        if ( (v10[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
        {
          if ( !v94 )
            goto LABEL_102;
          if ( ObOpenObjectByPointer(v10, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Handle) >= 0 )
          {
            ObCloseHandle(Handle, 0);
LABEL_102:
            Object = v10;
            goto LABEL_103;
          }
        }
      }
      v10 = 0LL;
      v95 = 0LL;
      Object = 0LL;
    }
    v51 = (_DWORD *)((char *)v127 + v91);
    v102 = v51;
    v106 = v51;
    v96 = 624;
    v52 = v91 + 624;
    v93 = v91 + 624;
    if ( v91 + 624 < v91 )
    {
      v52 = -1;
      v93 = -1;
      v91 = -1;
      v5 = -1073741675;
    }
    else
    {
      v91 += 624;
    }
    v92 = v5;
    if ( v5 < 0 )
    {
      v90 = v5;
      goto LABEL_203;
    }
    memset(v134, 0, 0x58uLL);
    if ( v52 > a2 )
    {
      v90 = -1073741820;
      if ( !v108 )
        goto LABEL_203;
      v56 = 0LL;
    }
    else
    {
      v55 = ExpCopyProcessInfo(v51, v10, v103, v134);
      v5 = v55;
      v92 = v55;
      if ( v55 < 0 )
      {
        v90 = v55;
        goto LABEL_203;
      }
      v56 = 0LL;
      *(_QWORD *)v51 = 0LL;
      v51[25] = SessionId;
      *((_QWORD *)v51 + 8) = 0LL;
      v51[14] = 0;
      if ( v10 == PsIdleProcess )
        *((_QWORD *)v51 + 12) = 0LL;
      if ( v10 == (struct _KPROCESS *)PsSecureSystemProcess )
      {
        v57 = qword_14043B240 << 12;
        *((_QWORD *)v51 + 18) = qword_14043B240 << 12;
        *((_QWORD *)v51 + 1) = v57;
      }
      if ( v5 < 0 )
      {
        v90 = v5;
        goto LABEL_203;
      }
    }
    v58 = v51 + 64;
    v105 = v51 + 64;
    if ( v10 == PsIdleProcess )
    {
      Flink = v10->ThreadListHead.Flink;
      if ( Flink == &v10->ThreadListHead )
      {
        p_Blink = 0LL;
      }
      else
      {
        p_Blink = (char *)&Flink[-48].Blink;
        ((void (*)(void))KeSynchronizeWithDynamicProcessors)();
        v56 = 0LL;
      }
    }
    else
    {
      p_Blink = 0LL;
      v123 = 0LL;
      v59 = KeGetCurrentThread();
      v60 = (signed __int64 *)Object;
      v61 = (_QWORD **)((char *)Object + 1160);
      v62 = 0;
      --v59->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v60 + 91), 0LL);
      for ( j = *v61; ; j = (_QWORD *)*j )
      {
        if ( j == v61 )
          goto LABEL_123;
        p_Blink = (char *)(j - 213);
        v123 = j - 213;
        if ( ObReferenceObjectSafeWithTag((__int64)(j - 213)) )
          break;
      }
      v62 = 1;
LABEL_123:
      if ( _InterlockedCompareExchange64(v60 + 91, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v60 + 91);
      KeAbPostRelease((ULONG_PTR)(v60 + 91));
      KeLeaveCriticalRegionThread((__int64)v59);
      v56 = 0LL;
      if ( !v62 )
      {
        p_Blink = 0LL;
        v123 = 0LL;
      }
      v10 = (struct _KPROCESS *)Object;
      v95 = (__int64 *)Object;
      v5 = v92;
      v52 = v91;
      v93 = v91;
      v51 = v106;
      v102 = v106;
      v58 = v105;
    }
    v100 = p_Blink;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !p_Blink )
        {
          v11 = (char *)v58;
          v113 = v58;
          v12 = v58;
          v13 = (char *)(v58 + 46);
          v105 = v13;
          if ( v90 >= 0 )
          {
            v14 = v95;
            v15 = v95 + 107;
            v16 = ObFastReferenceObject(v95 + 107);
            if ( !v16 )
            {
              v86 = KeGetCurrentThread();
              --v86->KernelApcDisable;
              v87 = (signed __int64 *)((char *)Object + 728);
              ExAcquirePushLockSharedEx((ULONG_PTR)Object + 728, 0LL);
              v16 = ObFastReferenceObjectLocked(v15);
              if ( _InterlockedCompareExchange64(v87, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(v87);
              KeAbPostRelease((ULONG_PTR)v87);
              KeLeaveCriticalRegionThread((__int64)v86);
              v14 = Object;
              v11 = (char *)v113;
            }
            v104 = SeSecurityAttributePresent(v16, (const UNICODE_STRING *)&PspSysAppIdClaim);
            ObFastDereferenceObject(v15, v16);
            *(_QWORD *)(v11 + 52) = 0LL;
            *((_DWORD *)v11 + 84) = 0;
            v17 = (char *)v113;
            *((_QWORD *)v113 + 43) = v14[239] << 12;
            *((_QWORD *)v17 + 5) = v134[4];
            *((_DWORD *)v17 + 12) = 0;
            if ( v104 )
              *((_DWORD *)v17 + 12) = 1;
            v18 = Object;
            v19 = *((_QWORD *)Object + 225);
            if ( v19 )
            {
              *(_OWORD *)v17 = *(_OWORD *)v19;
              *((_OWORD *)v17 + 1) = *(_OWORD *)(v19 + 16);
              *((_QWORD *)v17 + 4) = *(_QWORD *)(v19 + 32);
            }
            else
            {
              memset(v17, 0, 0x28uLL);
            }
            if ( (*((_DWORD *)v18 + 435) & 0x1000) != 0 )
            {
              v22 = *((_DWORD *)v17 + 12) & 0xFFFFFFE1 | 2;
            }
            else if ( v18 == (PVOID)PsSecureSystemProcess )
            {
              v22 = *((_DWORD *)v17 + 12) & 0xFFFFFFE1 | 4;
            }
            else if ( SmIsCompressionProcess(v18) )
            {
              v22 = *((_DWORD *)v17 + 12) & 0xFFFFFFE1 | 6;
            }
            else
            {
              v20 = qword_140438CE8 && v18 == (PVOID)qword_140438CE8;
              v98 = v20;
              v21 = *((_DWORD *)v17 + 12);
              if ( v20 )
                v22 = v21 & 0xFFFFFFE1 | 8;
              else
                v22 = v21 & 0xFFFFFFE1;
            }
            *((_DWORD *)v17 + 12) = v22;
            *((_QWORD *)v17 + 45) = *((_QWORD *)v18 + 233);
            PsQueryProcessEnergyValues(v18, v136);
            v23 = v17 + 64;
            v24 = v136;
            v25 = 2LL;
            do
            {
              *v23 = *v24;
              v23[1] = v24[1];
              v23[2] = v24[2];
              v23[3] = v24[3];
              v23[4] = v24[4];
              v23[5] = v24[5];
              v23[6] = v24[6];
              v23 += 8;
              *(v23 - 1) = v24[7];
              v24 += 8;
              --v25;
            }
            while ( v25 );
            *v23 = *v24;
            if ( *((_QWORD *)v18 + 118) )
              *((_DWORD *)v12 + 88) = *(_DWORD *)(*((_QWORD *)v18 + 118) + 1220LL);
            else
              *((_DWORD *)v12 + 88) = 0;
            v10 = (struct _KPROCESS *)Object;
            v95 = (__int64 *)Object;
            if ( *((_DWORD *)Object + 17)
              || KeHeteroSystem
              && ((v26 = KiProcessPolicyToQosMappingTable[(*((_DWORD *)Object + 110) >> 7) & 7], v26 != 4)
               || *((_BYTE *)Object + 1119) != 1
                ? (v27 = 0)
                : (v27 = 1),
                  PpmPerfQosEnabled && ((unsigned int)(v26 - 1) <= 1 || v27)) )
            {
              *((_DWORD *)v17 + 12) |= 0x20u;
            }
            v5 = v92;
            if ( v92 >= 0 )
            {
              p_Blink = (char *)v100;
              v93 = v91;
              v102 = v106;
              v13 = (char *)v105;
              v11 = (char *)v113;
              goto LABEL_47;
            }
            v90 = v92;
LABEL_203:
            p_Blink = (char *)v100;
LABEL_271:
            if ( v10 && v10 != PsIdleProcess )
              ObfDereferenceObjectWithTag(v10, 0x6E457350u);
            if ( p_Blink && *((PVOID *)p_Blink + 68) != PsIdleProcess )
              ObfDereferenceObjectWithTag(p_Blink, 0x6E457350u);
            if ( P )
              ExFreePoolWithTag(P, 0);
            return (unsigned int)v90;
          }
          v10 = (struct _KPROCESS *)v95;
LABEL_47:
          if ( a5 != 148 )
          {
LABEL_48:
            v29 = 0;
            goto LABEL_49;
          }
          v74 = PsReferencePrimaryToken(v10);
          v133 = v74;
          SeQueryUserSidToken(v74, Src, 68LL, &Size);
          PackageSize = 254LL;
          AppIdSize = 130LL;
          v5 = 0;
          v92 = RtlQueryPackageIdentity(v74, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL);
          if ( v92 >= 0 )
          {
            v76 = AppIdSize;
            v75 = PackageSize;
          }
          else
          {
            v75 = 0LL;
            PackageSize = 0LL;
            v76 = 0LL;
            AppIdSize = 0LL;
          }
          ObFastDereferenceObject(v95 + 107, (unsigned __int64)v74);
          v77 = (unsigned int)Size;
          v78 = (Size + 7) & 0xFFFFFFF8;
          v107 = v78;
          v79 = v78 + v93;
          if ( v78 + v93 < v93 )
          {
            v79 = -1;
            v5 = -1073741675;
          }
          v91 = v79;
          v93 = v79;
          v80 = v79;
          v92 = v5;
          if ( v5 < 0 )
          {
            v90 = v5;
            v10 = (struct _KPROCESS *)v95;
            goto LABEL_271;
          }
          v96 += v78;
          if ( v79 <= a2 )
          {
            *((_DWORD *)v11 + 13) = 368;
            memmove(v13, Src, v77);
            v80 = v93;
            v13 += v78;
            v105 = v13;
            goto LABEL_188;
          }
          v90 = -1073741820;
          if ( v108 )
          {
LABEL_188:
            if ( v75 )
            {
              if ( v75 > 0xFFFFFFFF )
              {
                v90 = -1073741820;
                v10 = (struct _KPROCESS *)v95;
                goto LABEL_271;
              }
              v107 = v75;
              if ( (unsigned int)v75 + v80 < v80 )
              {
                v81 = -1;
                v93 = -1;
                v91 = -1;
                v5 = -1073741675;
              }
              else
              {
                v81 = v75 + v80;
                v93 = v75 + v80;
                v91 = v75 + v80;
                v5 = 0;
              }
              v92 = v5;
              if ( v5 < 0 )
              {
                v90 = v5;
                v10 = (struct _KPROCESS *)v95;
                goto LABEL_271;
              }
              v96 += v75;
              if ( v81 > a2 )
              {
                v90 = -1073741820;
                if ( !v108 )
                {
                  v10 = (struct _KPROCESS *)v95;
                  goto LABEL_271;
                }
              }
              else
              {
                *((_DWORD *)v11 + 14) = (_DWORD)v13 - (_DWORD)v11;
                memmove(v13, PackageFullName, (unsigned int)v75);
                v13 += (unsigned int)v75;
                v105 = v13;
              }
            }
            else
            {
              v81 = v93;
            }
            if ( !v76 )
            {
              v10 = (struct _KPROCESS *)v95;
              goto LABEL_48;
            }
            if ( v76 > 0xFFFFFFFF )
            {
              v90 = -1073741820;
              v10 = (struct _KPROCESS *)v95;
              goto LABEL_271;
            }
            v107 = v76;
            v84 = v76 + v81;
            v29 = 0;
            if ( (unsigned int)v76 + v81 < v81 )
            {
              v85 = -1;
              v93 = -1;
              v91 = -1;
              v5 = -1073741675;
            }
            else
            {
              v85 = v76 + v81;
              v93 = v84;
              v91 = v84;
              v5 = 0;
            }
            v92 = v5;
            if ( v5 < 0 )
            {
              v90 = v5;
              v10 = (struct _KPROCESS *)v95;
              goto LABEL_271;
            }
            v96 += v76;
            if ( v85 <= a2 )
            {
              *((_DWORD *)v11 + 84) = (_DWORD)v13 - (_DWORD)v11;
              memmove(v13, AppId, (unsigned int)v76);
              v29 = 0;
              v13 += (unsigned int)v76;
              v105 = v13;
LABEL_225:
              v10 = (struct _KPROCESS *)v95;
LABEL_49:
              if ( v10 == PsIdleProcess )
                goto LABEL_173;
              if ( v10 == PsInitialSystemProcess )
              {
                v35 = (const wchar_t *)&ExpSystemProcessName;
              }
              else if ( v10 == (struct _KPROCESS *)PsSecureSystemProcess )
              {
                v35 = (const wchar_t *)&ExpSecureSystemProcessName;
              }
              else if ( SmIsCompressionProcess(v10) )
              {
                v35 = L"$&";
              }
              else
              {
                v31 = -1073741275;
                if ( v10[2].ActiveProcessors.Bitmap[9] && (_QWORD)xmmword_14040F360 )
                {
                  v31 = ((__int64 (__fastcall *)(__int64, PVOID *))xmmword_14040F360)(v30, &P);
                  goto LABEL_264;
                }
                v32 = v10[1].ActiveProcessors.Bitmap[15];
                if ( v32 )
                {
                  PoolWithTag = (char *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          *(unsigned __int16 *)(v32 + 2) + 16LL,
                                          0x6E497350u);
                  v34 = PoolWithTag;
                  if ( PoolWithTag )
                  {
                    *(_OWORD *)PoolWithTag = *(_OWORD *)v32;
                    if ( *((_QWORD *)PoolWithTag + 1) )
                    {
                      *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 16;
                      memmove(PoolWithTag + 16, *(const void **)(v32 + 8), *(unsigned __int16 *)(v32 + 2));
                    }
                    P = v34;
                    v29 = 0;
                    v31 = 0;
                  }
                  else
                  {
                    v31 = -1073741801;
LABEL_264:
                    v29 = 0;
                  }
                }
                v92 = v31;
                v35 = v31 < 0 ? (const wchar_t *)v10[1].ActiveProcessors.Bitmap[15] : (const wchar_t *)P;
              }
              v114 = v35;
              v36 = *v35;
              v107 = v36;
              v37 = v13;
              v117 = v13;
              LODWORD(Size) = v36;
              v38 = (_WORD *)*((_QWORD *)v35 + 1);
              v39 = v38;
              v116 = v38;
              if ( a5 != 148 && v36 )
              {
                v39 = &v38[(unsigned __int64)v36 >> 1];
                v116 = v39;
                while ( v39 != v38 )
                {
                  v116 = --v39;
                  if ( *v39 == 92 )
                  {
                    v116 = ++v39;
                    break;
                  }
                }
                v36 -= 2 * (v39 - v38);
                LODWORD(Size) = v36;
              }
              v40 = v36;
              v41 = (v36 + 9) & 0xFFFFFFF8;
              v107 = v41;
              v42 = v41 + v93;
              if ( v41 + v93 < v93 )
              {
                v42 = -1;
                v5 = -1073741675;
              }
              else
              {
                v5 = v29;
              }
              v91 = v42;
              v92 = v5;
              if ( v5 < 0 )
              {
                v90 = v5;
                goto LABEL_271;
              }
              v96 += v41;
              if ( v42 > a2 )
              {
                v90 = -1073741820;
                if ( !v108 )
                  goto LABEL_271;
              }
              else
              {
                if ( v36 )
                {
                  memmove(v13, v39, v36);
                  v37 = &v13[2 * (v40 >> 1)];
                  v117 = v37;
                  LOWORD(v29) = 0;
                }
                *(_WORD *)v37 = v29;
                v37 += 2;
                v117 = v37;
              }
              if ( P )
              {
                ExFreePoolWithTag(P, 0);
                P = 0LL;
              }
              if ( v90 < 0 )
              {
LABEL_173:
                v43 = v102;
              }
              else
              {
                v43 = v102;
                *((_WORD *)v102 + 28) = (_WORD)v37 - (_WORD)v13 - 2;
                *((_WORD *)v43 + 29) = v41;
                *((_QWORD *)v43 + 8) = v13;
              }
              if ( v90 < 0 || (*v43 = v96, v5 >= 0) )
              {
                v5 = 0;
                goto LABEL_82;
              }
              v90 = v5;
              goto LABEL_271;
            }
            v90 = -1073741820;
            if ( v108 )
              goto LABEL_225;
          }
LABEL_227:
          v10 = (struct _KPROCESS *)v95;
          goto LABEL_271;
        }
        v128 = *((_DWORD *)p_Blink + 1);
        if ( (_BYTE)v128 )
        {
          v54 = 0LL;
        }
        else
        {
          v64 = v52 + v99;
          if ( v52 + v99 < v52 )
          {
            v64 = -1;
            v5 = -1073741675;
          }
          else
          {
            v5 = 0;
          }
          v91 = v64;
          v93 = v64;
          v65 = v64;
          v92 = v5;
          if ( v5 < 0 )
          {
            v90 = v5;
            goto LABEL_271;
          }
          v66 = v99;
          v96 += v99;
          if ( v64 > a2 )
          {
            v90 = -1073741820;
            if ( !v108 )
              goto LABEL_227;
            v54 = 0LL;
          }
          else
          {
            KeQueryValuesThread((__int64)p_Blink, (__int64)&v118, v54);
            v56 = v119;
            if ( v119 == 4 )
            {
              v96 -= v66;
              v93 = v65 - v66;
              v91 = v65 - v66;
              v54 = 0LL;
            }
            else
            {
              *((_DWORD *)v58 + 6) = v118;
              *((_DWORD *)v58 + 17) = (unsigned __int8)v56;
              *((_DWORD *)v58 + 18) = v120;
              *((_DWORD *)v58 + 14) = v121;
              *((_DWORD *)v58 + 15) = v122;
              *v58 = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 163);
              v58[1] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 183);
              v58[2] = *((_QWORD *)p_Blink + 190);
              *((_DWORD *)v58 + 16) = *((_DWORD *)p_Blink + 85);
              *(_OWORD *)(v58 + 5) = *(_OWORD *)(p_Blink + 1592);
              v54 = 0LL;
              if ( (*((_DWORD *)p_Blink + 29) & 0x400) != 0 )
              {
                v56 = *((_QWORD *)p_Blink + 210);
              }
              else
              {
                if ( (*((_DWORD *)p_Blink + 438) & 8) != 0
                  || (v56 = *((_QWORD *)v100 + 194), _InterlockedOr(v89, 0), (*((_DWORD *)p_Blink + 438) & 8) != 0) )
                {
                  v56 = 0LL;
                }
                v10 = (struct _KPROCESS *)Object;
                v95 = (__int64 *)Object;
                v5 = v92;
                p_Blink = (char *)v100;
                v93 = v91;
                v51 = v106;
                v102 = v106;
                v58 = v105;
              }
              v124 = v56;
              if ( v94 && v56 > 0x7FFFFFFEFFFFLL )
                v58[4] = 0LL;
              else
                v58[4] = v56;
              if ( v115 != 5 )
              {
                v56 = 0LL;
                if ( v94 )
                {
                  v58[10] = 0LL;
                  v58[11] = 0LL;
                }
                else
                {
                  v58[10] = *((_QWORD *)p_Blink + 7);
                  v58[11] = *((_QWORD *)p_Blink + 6);
                  v10 = (struct _KPROCESS *)Object;
                  v95 = (__int64 *)Object;
                  v5 = v92;
                  p_Blink = (char *)v100;
                  v93 = v91;
                  v51 = v106;
                  v102 = v106;
                  v58 = v105;
                }
                v67 = *((_QWORD *)p_Blink + 210);
                v124 = v67;
                if ( v94 && (v53 = 0x7FFFFFFEFFFFLL, v67 > 0x7FFFFFFEFFFFLL) )
                  v58[12] = 0LL;
                else
                  v58[12] = v67;
                v58[13] = *((_QWORD *)p_Blink + 30);
                v58[14] = 0LL;
                v58[15] = 0LL;
                v58[16] = 0LL;
                v54 = 0LL;
              }
              ++v51[1];
              if ( v5 < 0 )
              {
                v90 = v5;
                goto LABEL_271;
              }
              v58 = (_QWORD *)((char *)v58 + v66);
              v105 = v58;
            }
          }
        }
        if ( v10 == PsIdleProcess )
          break;
        p_Blink = 0LL;
        v125 = 0LL;
        v68 = KeGetCurrentThread();
        v69 = (signed __int64 *)Object;
        v70 = (char *)Object + 1160;
        v71 = 0;
        --v68->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)(v69 + 91), 0LL);
        for ( k = (char *)*((_QWORD *)v100 + 213); k != v70; k = *(char **)k )
        {
          p_Blink = k - 1704;
          v125 = k - 1704;
          if ( ObReferenceObjectSafeWithTag((__int64)(k - 1704)) )
          {
            v71 = 1;
            break;
          }
        }
        if ( _InterlockedCompareExchange64(v69 + 91, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v69 + 91);
        KeAbPostRelease((ULONG_PTR)(v69 + 91));
        KeLeaveCriticalRegionThread((__int64)v68);
        if ( v100 )
          ObfDereferenceObjectWithTag(v100, 0x6E457350u);
        if ( !v71 )
          p_Blink = 0LL;
        v125 = p_Blink;
        v10 = (struct _KPROCESS *)Object;
        v95 = (__int64 *)Object;
        v5 = v92;
        v93 = v91;
        v51 = v106;
        v102 = v106;
        v58 = v105;
LABEL_169:
        v100 = p_Blink;
        v52 = v93;
        v56 = 0LL;
      }
      v73 = (_LIST_ENTRY *)*((_QWORD *)p_Blink + 95);
      if ( v73 != &v10->ThreadListHead )
      {
        p_Blink = (char *)&v73[-48].Blink;
        KeSynchronizeWithDynamicProcessors(v56, v53, 0LL);
        goto LABEL_169;
      }
      p_Blink = 0LL;
      v100 = 0LL;
      v52 = v93;
      v56 = 0LL;
    }
  }
  return result;
}
