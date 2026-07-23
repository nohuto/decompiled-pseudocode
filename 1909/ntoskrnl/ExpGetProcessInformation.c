/*
 * XREFs of ExpGetProcessInformation @ 0x1405F9BB0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsIsProcessInSilo @ 0x140006528 (PsIsProcessInSilo.c)
 *     PsGetCurrentServerSilo @ 0x140006560 (PsGetCurrentServerSilo.c)
 *     MmGetSessionId @ 0x14001D880 (MmGetSessionId.c)
 *     ObFastReferenceObject @ 0x14003ACD0 (ObFastReferenceObject.c)
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x14003F810 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007FC50 (ObFastReferenceObjectLocked.c)
 *     KeQueryValuesThread @ 0x1400837B0 (KeQueryValuesThread.c)
 *     RtlQueryPackageIdentity @ 0x140084710 (RtlQueryPackageIdentity.c)
 *     KeFlushProcessWriteBuffers @ 0x140098C58 (KeFlushProcessWriteBuffers.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     SeSecurityAttributePresent @ 0x1400CF830 (SeSecurityAttributePresent.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     SmIsCompressionProcess @ 0x14011D134 (SmIsCompressionProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x1405D0890 (ObOpenObjectByPointer.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 *     PsQueryProcessEnergyValues @ 0x1405E46D0 (PsQueryProcessEnergyValues.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     ExpCopyProcessInfo @ 0x1406136F0 (ExpCopyProcessInfo.c)
 *     SeQueryUserSidToken @ 0x140656D1C (SeQueryUserSidToken.c)
 *     ExCheckFullProcessInformationAccess @ 0x14069E6AC (ExCheckFullProcessInformationAccess.c)
 *     ExIsRestrictedCaller @ 0x1406D17C8 (ExIsRestrictedCaller.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406D8BFC (KeSynchronizeWithDynamicProcessors.c)
 */

__int64 __fastcall ExpGetProcessInformation(_DWORD *a1, unsigned int a2, unsigned int *a3, _DWORD *a4, int a5)
{
  unsigned __int64 *v6; // r13
  int v7; // r12d
  bool v8; // cf
  unsigned int v9; // ebx
  unsigned __int8 v10; // di
  char *v11; // rdi
  char *v12; // rbx
  char *v13; // r12
  signed __int64 *v14; // rsi
  ULONG_PTR v15; // rdi
  struct _KTHREAD *v16; // r8
  _QWORD *v17; // r15
  char *v18; // rdi
  PEPROCESS v19; // rbx
  unsigned __int64 v20; // rax
  _OWORD *v21; // rax
  _OWORD *v22; // rcx
  __int64 v23; // rdx
  int v24; // ecx
  struct _KPROCESS *v25; // r8
  unsigned int v26; // eax
  char v27; // cl
  int v28; // r15d
  unsigned int v29; // r14d
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdi
  char *PoolWithTag; // rax
  void *v34; // rbx
  const wchar_t *v35; // rcx
  unsigned int v36; // r8d
  char *v37; // rsi
  _WORD *v38; // r9
  _WORD *v39; // rdx
  unsigned __int64 v40; // rdi
  unsigned int v41; // ebx
  unsigned int v42; // eax
  int *v43; // rcx
  char *v44; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  int v46; // r14d
  __int64 *i; // rsi
  __int64 v48; // rcx
  bool v49; // zf
  int SessionId; // ebx
  unsigned int v51; // r8d
  _DWORD *v52; // rsi
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rax
  _QWORD *v57; // r12
  struct _KTHREAD *v58; // rdi
  PEPROCESS v59; // rsi
  unsigned __int64 *v60; // r14
  int v61; // r15d
  unsigned __int64 *j; // rbx
  unsigned int v63; // eax
  unsigned int v64; // ebx
  unsigned int v65; // r14d
  unsigned __int64 v66; // rax
  struct _KTHREAD *v67; // rdi
  PEPROCESS v68; // rsi
  unsigned __int64 *v69; // r14
  int v70; // r15d
  unsigned __int64 *k; // rbx
  char *v72; // r13
  PACCESS_TOKEN v73; // rdi
  ULONG_PTR v74; // r14
  ULONG_PTR v75; // rsi
  size_t v76; // rcx
  unsigned int v77; // edi
  unsigned int v78; // eax
  unsigned int v79; // edx
  unsigned int v80; // ecx
  int v81; // eax
  char *v82; // r13
  unsigned int v83; // edx
  volatile signed __int64 *p_Lock; // rbx
  __int64 result; // rax
  signed __int32 v86[8]; // [rsp+0h] [rbp-668h] BYREF
  int v87; // [rsp+40h] [rbp-628h]
  unsigned int v88; // [rsp+44h] [rbp-624h]
  PVOID Object; // [rsp+48h] [rbp-620h]
  NTSTATUS v90; // [rsp+50h] [rbp-618h]
  unsigned int v91; // [rsp+54h] [rbp-614h]
  char v92; // [rsp+58h] [rbp-610h]
  int v93; // [rsp+5Ch] [rbp-60Ch]
  PEPROCESS Process; // [rsp+60h] [rbp-608h]
  PVOID v95; // [rsp+68h] [rbp-600h]
  int v96; // [rsp+70h] [rbp-5F8h]
  int v97; // [rsp+74h] [rbp-5F4h]
  bool v98; // [rsp+78h] [rbp-5F0h]
  bool v99; // [rsp+7Bh] [rbp-5EDh]
  void *v100; // [rsp+88h] [rbp-5E0h]
  int *v101; // [rsp+90h] [rbp-5D8h]
  _DWORD *v102; // [rsp+98h] [rbp-5D0h]
  int v103; // [rsp+A0h] [rbp-5C8h]
  unsigned int *v104; // [rsp+A8h] [rbp-5C0h]
  size_t Size; // [rsp+B0h] [rbp-5B8h] BYREF
  void *v106; // [rsp+B8h] [rbp-5B0h]
  ULONG_PTR AppIdSize; // [rsp+C0h] [rbp-5A8h] BYREF
  PVOID P; // [rsp+C8h] [rbp-5A0h] BYREF
  ULONG_PTR PackageSize; // [rsp+D0h] [rbp-598h] BYREF
  int v110; // [rsp+D8h] [rbp-590h]
  __int64 v111; // [rsp+E0h] [rbp-588h] BYREF
  int v112; // [rsp+E8h] [rbp-580h]
  const wchar_t *v113; // [rsp+F0h] [rbp-578h]
  char *v114; // [rsp+F8h] [rbp-570h]
  _WORD *v115; // [rsp+100h] [rbp-568h]
  _DWORD *v116; // [rsp+108h] [rbp-560h]
  unsigned __int64 *v117; // [rsp+110h] [rbp-558h]
  unsigned __int64 v118; // [rsp+118h] [rbp-550h]
  unsigned __int64 *v119; // [rsp+120h] [rbp-548h]
  __int64 *v120; // [rsp+128h] [rbp-540h]
  int v121; // [rsp+130h] [rbp-538h]
  int v122; // [rsp+138h] [rbp-530h]
  unsigned __int64 CurrentServerSilo; // [rsp+158h] [rbp-510h]
  signed __int64 v124; // [rsp+168h] [rbp-500h]
  signed __int64 v125; // [rsp+178h] [rbp-4F0h]
  signed __int64 v126; // [rsp+180h] [rbp-4E8h]
  struct _KTHREAD *v127; // [rsp+188h] [rbp-4E0h]
  signed __int64 v128; // [rsp+1C8h] [rbp-4A0h]
  char *v129; // [rsp+1D0h] [rbp-498h]
  HANDLE Handle[11]; // [rsp+1D8h] [rbp-490h] BYREF
  _QWORD v131[12]; // [rsp+230h] [rbp-438h] BYREF
  _BYTE Src[80]; // [rsp+290h] [rbp-3D8h] BYREF
  _OWORD v133[27]; // [rsp+2E0h] [rbp-388h] BYREF
  WCHAR AppId[72]; // [rsp+490h] [rbp-1D8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+520h] [rbp-148h] BYREF

  v110 = a5;
  v116 = a1;
  v104 = a3;
  AppIdSize = 130LL;
  memset(v133, 0, sizeof(v133));
  PackageSize = 254LL;
  v6 = 0LL;
  Process = 0LL;
  memset(v131, 0, 0x58uLL);
  v95 = 0LL;
  v111 = 0LL;
  v112 = 0;
  v91 = 0;
  memset(Src, 0, 0x44uLL);
  if ( a3 )
    *a3 = 0;
  v98 = v110 != 5;
  v7 = 136;
  if ( v110 == 5 )
    v7 = 80;
  v96 = v7;
  v97 = v7;
  v102 = v116;
  v8 = a2 < 0x270;
  if ( a2 < 0x270 )
  {
    if ( !a3 )
      return 3221225476LL;
    v8 = a2 < 0x270;
  }
  v9 = v8 ? 0xC0000004 : 0;
  v92 = 0;
  v10 = KeGetCurrentThread()->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10];
  if ( a5 != 148 || (result = ExCheckFullProcessInformationAccess(v10), (int)result >= 0) )
  {
    if ( (unsigned int)ExIsRestrictedCaller(v10) )
      v92 = 1;
    v90 = 0;
    P = 0LL;
    KeFlushProcessWriteBuffers(1);
    CurrentServerSilo = PsGetCurrentServerSilo();
    v11 = (char *)PsIdleProcess;
    Object = PsIdleProcess;
    Process = (PEPROCESS)PsIdleProcess;
    v87 = v9;
    while ( 1 )
    {
LABEL_101:
      if ( !v11 )
      {
        if ( v87 >= 0 )
        {
          if ( v102 )
          {
            *v102 = 0;
            v25 = (struct _KPROCESS *)Object;
            if ( v90 < 0 )
            {
              v87 = v90;
              v6 = (unsigned __int64 *)v95;
              goto LABEL_271;
            }
          }
        }
        if ( v104 )
          *v104 = v91;
        goto LABEL_206;
      }
      if ( (*((_DWORD *)v11 + 195) & 4) == 0
        || !*((_DWORD *)v11 + 1)
        || (v81 = *((_DWORD *)v11 + 294), v11 = (char *)Process, Object = Process, v81)
        || Process->ThreadListHead.Flink != &Process->ThreadListHead )
      {
        if ( !a4 || v11 != PsIdleProcess )
        {
          SessionId = MmGetSessionId((__int64)v11);
          v121 = SessionId;
          if ( (!a4 || SessionId == *a4) && PsIsProcessInSilo((struct _KPROCESS *)v11, CurrentServerSilo) )
            break;
        }
      }
LABEL_80:
      if ( v11 == PsIdleProcess )
        v11 = 0LL;
      v44 = v11;
      v129 = v11;
      while ( 1 )
      {
        Object = 0LL;
        v120 = 0LL;
        CurrentThread = KeGetCurrentThread();
        Handle[8] = CurrentThread;
        v46 = 0;
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
        for ( i = (__int64 *)(v44 ? *((_QWORD *)v44 + 94) : PsActiveProcessHead);
              i != &PsActiveProcessHead;
              i = (__int64 *)*i )
        {
          Object = i - 94;
          v120 = i - 94;
          if ( ObReferenceObjectSafeWithTag((__int64)(i - 94)) )
          {
            v46 = 1;
            break;
          }
        }
        Handle[9] = (HANDLE)17;
        v128 = _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL);
        if ( v128 != 17 )
          ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
        KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
        v49 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v49
          && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v48);
        }
        if ( v44 )
          ObfDereferenceObjectWithTag(v44, 0x6E457350u);
        if ( v46 )
        {
          v11 = (char *)Object;
        }
        else
        {
          v11 = 0LL;
          Object = 0LL;
          v120 = 0LL;
        }
        v44 = v11;
        v129 = v11;
        if ( !v11 )
          break;
        if ( (*((_DWORD *)v11 + 195) & 0x4000000) != 0 )
        {
          if ( !v92 )
            goto LABEL_100;
          if ( ObOpenObjectByPointer(v11, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, Handle) >= 0 )
          {
            ObCloseHandle(Handle[0], 0);
LABEL_100:
            Process = (PEPROCESS)v11;
            goto LABEL_101;
          }
        }
      }
      v11 = 0LL;
      Object = 0LL;
      Process = 0LL;
    }
    v52 = (_DWORD *)((char *)v116 + v91);
    v101 = v52;
    v102 = v52;
    v93 = 624;
    v29 = v91 + 624;
    v88 = v91 + 624;
    if ( v91 + 624 < v91 )
    {
      v29 = v51;
      v88 = v51;
      v91 = v51;
      v28 = -1073741675;
    }
    else
    {
      v91 += 624;
      v28 = 0;
    }
    v90 = v28;
    if ( v28 < 0 )
    {
      v87 = v28;
      goto LABEL_206;
    }
    memset(v131, 0, 0x58uLL);
    if ( v29 <= a2 )
    {
      v55 = ExpCopyProcessInfo(v52, v11, v98, v131);
      v28 = v55;
      v90 = v55;
      if ( v55 < 0 )
      {
        v87 = v55;
      }
      else
      {
        *(_QWORD *)v52 = 0LL;
        v52[25] = SessionId;
        *((_QWORD *)v52 + 8) = 0LL;
        v52[14] = 0;
        if ( v11 == PsIdleProcess )
          *((_QWORD *)v52 + 12) = 0LL;
        if ( v11 == (char *)PsSecureSystemProcess )
        {
          v56 = qword_1404658C0 << 12;
          *((_QWORD *)v52 + 18) = qword_1404658C0 << 12;
          *((_QWORD *)v52 + 1) = v56;
        }
        if ( v28 >= 0 )
          goto LABEL_116;
        v87 = v28;
      }
LABEL_206:
      v6 = (unsigned __int64 *)v95;
      goto LABEL_207;
    }
    v87 = -1073741820;
    if ( !v104 )
    {
      v6 = (unsigned __int64 *)v95;
      v25 = (struct _KPROCESS *)Object;
      goto LABEL_271;
    }
LABEL_116:
    v57 = v52 + 64;
    v100 = v52 + 64;
    if ( v11 == PsIdleProcess )
    {
      v82 = (char *)*((_QWORD *)v11 + 6);
      if ( v82 == v11 + 48 )
      {
        v6 = 0LL;
      }
      else
      {
        v6 = (unsigned __int64 *)(v82 - 760);
        ((void (*)(void))KeSynchronizeWithDynamicProcessors)();
      }
    }
    else
    {
      v117 = 0LL;
      v58 = KeGetCurrentThread();
      Handle[5] = v58;
      v59 = Process;
      v60 = &Process[1].ActiveProcessors.Bitmap[18];
      v61 = 0;
      --v58->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&v59[1], 0LL);
      for ( j = (unsigned __int64 *)*v60; ; j = (unsigned __int64 *)*j )
      {
        if ( j == v60 )
          goto LABEL_121;
        v6 = j - 215;
        v117 = j - 215;
        if ( ObReferenceObjectSafeWithTag((__int64)(j - 215)) )
          break;
      }
      v61 = 1;
LABEL_121:
      Handle[3] = (HANDLE)17;
      v124 = 0LL;
      v124 = _InterlockedCompareExchange64((volatile signed __int64 *)&v59[1].Header.Lock, 0LL, 17LL);
      if ( v124 != 17 )
        ExfReleasePushLockShared((signed __int64 *)&v59[1].Header.Lock);
      KeAbPostRelease((ULONG_PTR)&v59[1]);
      KeLeaveCriticalRegionThread((__int64)v58);
      if ( !v61 )
      {
        v6 = 0LL;
        v117 = 0LL;
      }
      v11 = (char *)Process;
      Object = Process;
      v28 = v90;
      v29 = v91;
      v88 = v91;
      v52 = v102;
      v101 = v102;
      v57 = v100;
    }
    v95 = v6;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v6 )
        {
          v12 = (char *)v57;
          v106 = v57;
          v13 = (char *)(v57 + 46);
          v100 = v13;
          if ( v87 >= 0 )
          {
            v14 = (signed __int64 *)(v11 + 864);
            v15 = ObFastReferenceObject((signed __int64 *)v11 + 108);
            if ( v15 )
            {
              v17 = Object;
            }
            else
            {
              v127 = KeGetCurrentThread();
              --v127->KernelApcDisable;
              p_Lock = (volatile signed __int64 *)&Process[1].Header.Lock;
              ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
              v15 = ObFastReferenceObjectLocked(v14);
              Handle[6] = (HANDLE)17;
              v126 = 0LL;
              v126 = _InterlockedCompareExchange64(p_Lock, 0LL, 17LL);
              if ( v126 != 17 )
                ExfReleasePushLockShared((signed __int64 *)p_Lock);
              KeAbPostRelease((ULONG_PTR)p_Lock);
              KeLeaveCriticalRegionThread((__int64)v127);
              v17 = &Process->Header.Lock;
              v12 = (char *)v106;
            }
            v99 = SeSecurityAttributePresent(v15, (const UNICODE_STRING *)&PspSysAppIdClaim, v16);
            ObFastDereferenceObject(v14, v15);
            *(_QWORD *)(v12 + 52) = 0LL;
            *((_DWORD *)v12 + 84) = 0;
            v18 = (char *)v106;
            *((_QWORD *)v106 + 43) = v17[245] << 12;
            *((_QWORD *)v18 + 5) = v131[4];
            *((_DWORD *)v18 + 12) = 0;
            if ( v99 )
              *((_DWORD *)v18 + 12) = 1;
            v19 = Process;
            v20 = Process[2].ActiveProcessors.Bitmap[12];
            if ( v20 )
            {
              *(_OWORD *)v18 = *(_OWORD *)v20;
              *((_OWORD *)v18 + 1) = *(_OWORD *)(v20 + 16);
              *((_QWORD *)v18 + 4) = *(_QWORD *)(v20 + 32);
            }
            else
            {
              memset(v18, 0, 0x28uLL);
            }
            if ( (v19[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
            {
              *((_DWORD *)v18 + 12) = *((_DWORD *)v18 + 12) & 0xFFFFFFE1 | 2;
            }
            else if ( v19 == (PEPROCESS)PsSecureSystemProcess )
            {
              *((_DWORD *)v18 + 12) = *((_DWORD *)v18 + 12) & 0xFFFFFFE1 | 4;
            }
            else if ( SmIsCompressionProcess(v19) )
            {
              *((_DWORD *)v18 + 12) = *((_DWORD *)v18 + 12) & 0xFFFFFFE1 | 6;
            }
            else if ( qword_140463548 && v19 == (PEPROCESS)qword_140463548 )
            {
              *((_DWORD *)v18 + 12) = *((_DWORD *)v18 + 12) & 0xFFFFFFE1 | 8;
            }
            else
            {
              *((_DWORD *)v18 + 12) &= 0xFFFFFFE1;
            }
            *((_QWORD *)v18 + 45) = *(_QWORD *)&v19[2].0;
            PsQueryProcessEnergyValues(v19, v133);
            v21 = v18 + 64;
            v22 = v133;
            v23 = 2LL;
            do
            {
              *v21 = *v22;
              v21[1] = v22[1];
              v21[2] = v22[2];
              v21[3] = v22[3];
              v21[4] = v22[4];
              v21[5] = v22[5];
              v21[6] = v22[6];
              v21 += 8;
              *(v21 - 1) = v22[7];
              v22 += 8;
              --v23;
            }
            while ( v23 );
            *v21 = *v22;
            if ( v19[1].Affinity.Bitmap[16] )
            {
              v24 = *(_DWORD *)(v19[1].Affinity.Bitmap[16] + 1220);
              v12 = (char *)v106;
              *((_DWORD *)v106 + 88) = v24;
            }
            else
            {
              v12 = (char *)v106;
              *((_DWORD *)v106 + 88) = 0;
            }
            v25 = Process;
            Object = Process;
            if ( Process->ProcessTimerDelay
              || KeHeteroSystem
              && ((v26 = KiProcessPolicyToQosMappingTable[(*(_DWORD *)&Process->0 >> 7) & 7], v26 != 4)
               || HIBYTE(Process[1].ActiveProcessors.Bitmap[12]) != 1
                ? (v27 = 0)
                : (v27 = 1),
                  PpmPerfQosEnabled && (v26 - 1 <= 1 || v27)) )
            {
              *((_DWORD *)v18 + 12) |= 0x20u;
            }
            v28 = v90;
            if ( v90 >= 0 )
            {
              v6 = (unsigned __int64 *)v95;
              v29 = v91;
              v88 = v91;
              v101 = v102;
              v13 = (char *)v100;
              goto LABEL_45;
            }
            v87 = v90;
            v6 = (unsigned __int64 *)v95;
LABEL_271:
            if ( v25 && v25 != PsIdleProcess )
              ObfDereferenceObjectWithTag(v25, 0x6E457350u);
            if ( v6 && (PVOID)v6[68] != PsIdleProcess )
              ObfDereferenceObjectWithTag(v6, 0x6E457350u);
            if ( P )
              ExFreePoolWithTag(P, 0);
            return (unsigned int)v87;
          }
          v25 = (struct _KPROCESS *)Object;
LABEL_45:
          if ( a5 != 148 )
          {
LABEL_46:
            v11 = (char *)Object;
            if ( Object != PsIdleProcess )
            {
              if ( Object == PsInitialSystemProcess )
              {
                v35 = (const wchar_t *)&ExpSystemProcessName;
              }
              else if ( Object == (PVOID)PsSecureSystemProcess )
              {
                v35 = (const wchar_t *)&ExpSecureSystemProcessName;
              }
              else if ( SmIsCompressionProcess(Object) )
              {
                v35 = L"$&";
              }
              else
              {
                v31 = -1073741275;
                if ( *((_QWORD *)v11 + 232) && (_QWORD)xmmword_1404369C0 )
                {
                  v31 = ((__int64 (__fastcall *)(__int64, PVOID *))xmmword_1404369C0)(v30, &P);
                }
                else
                {
                  v32 = *((_QWORD *)v11 + 141);
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
                      v31 = 0;
                    }
                    else
                    {
                      v31 = -1073741801;
                    }
                  }
                  v11 = (char *)Object;
                }
                v90 = v31;
                if ( v31 < 0 )
                  v35 = (const wchar_t *)*((_QWORD *)v11 + 141);
                else
                  v35 = (const wchar_t *)P;
              }
              v113 = v35;
              v36 = *v35;
              v103 = v36;
              v37 = v13;
              v114 = v13;
              LODWORD(Size) = v36;
              v38 = (_WORD *)*((_QWORD *)v35 + 1);
              v39 = v38;
              v115 = v38;
              if ( a5 != 148 && v36 )
              {
                v39 = &v38[(unsigned __int64)v36 >> 1];
                v115 = v39;
                while ( v39 != v38 )
                {
                  v115 = --v39;
                  if ( *v39 == 92 )
                  {
                    v115 = ++v39;
                    break;
                  }
                }
                v36 -= 2 * (v39 - v38);
                LODWORD(Size) = v36;
              }
              v40 = v36;
              v41 = (v36 + 9) & 0xFFFFFFF8;
              v103 = v41;
              v42 = v41 + v29;
              if ( v41 + v29 < v29 )
              {
                v42 = -1;
                v28 = -1073741675;
              }
              else
              {
                v28 = 0;
              }
              v91 = v42;
              v90 = v28;
              if ( v28 < 0 )
              {
                v87 = v28;
                goto LABEL_207;
              }
              v93 += v41;
              if ( v42 > a2 )
              {
                v87 = -1073741820;
                if ( !v104 )
                {
                  v25 = (struct _KPROCESS *)Object;
                  goto LABEL_271;
                }
              }
              else
              {
                if ( v36 )
                {
                  memmove(v13, v39, v36);
                  v37 = &v13[2 * (v40 >> 1)];
                  v114 = v37;
                }
                *(_WORD *)v37 = 0;
                v37 += 2;
                v114 = v37;
              }
              if ( P )
              {
                ExFreePoolWithTag(P, 0);
                P = 0LL;
              }
              if ( v87 >= 0 )
              {
                v43 = v101;
                *((_WORD *)v101 + 28) = (_WORD)v37 - (_WORD)v13 - 2;
                *((_WORD *)v43 + 29) = v41;
                *((_QWORD *)v43 + 8) = v13;
                v11 = (char *)Object;
LABEL_77:
                if ( v87 < 0 || (*v43 = v93, v28 >= 0) )
                {
                  v6 = 0LL;
                  goto LABEL_80;
                }
                v87 = v28;
                goto LABEL_207;
              }
              v11 = (char *)Object;
            }
            v43 = v101;
            goto LABEL_77;
          }
          v73 = PsReferencePrimaryToken(v25);
          Handle[7] = v73;
          SeQueryUserSidToken(v73, Src, 68LL, &Size);
          PackageSize = 254LL;
          AppIdSize = 130LL;
          v74 = 0LL;
          v90 = RtlQueryPackageIdentity(v73, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL);
          if ( v90 >= 0 )
          {
            v74 = AppIdSize;
            v75 = PackageSize;
          }
          else
          {
            v75 = 0LL;
            PackageSize = 0LL;
            AppIdSize = 0LL;
          }
          ObFastDereferenceObject((signed __int64 *)Object + 108, (unsigned __int64)v73);
          v76 = (unsigned int)Size;
          v77 = (Size + 7) & 0xFFFFFFF8;
          v103 = v77;
          v78 = v77 + v88;
          if ( v77 + v88 < v88 )
          {
            v78 = -1;
            v28 = -1073741675;
          }
          else
          {
            v28 = 0;
          }
          v91 = v78;
          v88 = v78;
          v79 = v78;
          v90 = v28;
          if ( v28 < 0 )
          {
            v87 = v28;
          }
          else
          {
            v93 += v77;
            if ( v78 > a2 )
            {
              v87 = -1073741820;
              if ( !v104 )
              {
                v25 = (struct _KPROCESS *)Object;
                goto LABEL_271;
              }
            }
            else
            {
              *((_DWORD *)v12 + 13) = 368;
              memmove(v13, Src, v76);
              v79 = v88;
              v13 += v77;
              v100 = v13;
            }
            if ( v75 )
            {
              if ( v75 > 0xFFFFFFFF )
              {
                v87 = -1073741820;
                goto LABEL_207;
              }
              v103 = v75;
              if ( (unsigned int)v75 + v79 < v79 )
              {
                v80 = -1;
                v88 = -1;
                v91 = -1;
                v28 = -1073741675;
              }
              else
              {
                v80 = v75 + v79;
                v88 = v75 + v79;
                v91 = v75 + v79;
                v28 = 0;
              }
              v90 = v28;
              if ( v28 < 0 )
              {
                v87 = v28;
                goto LABEL_207;
              }
              v93 += v75;
              if ( v80 > a2 )
              {
                v87 = -1073741820;
                if ( !v104 )
                {
                  v25 = (struct _KPROCESS *)Object;
                  goto LABEL_271;
                }
              }
              else
              {
                *((_DWORD *)v12 + 14) = (_DWORD)v13 - (_DWORD)v12;
                memmove(v13, PackageFullName, (unsigned int)v75);
                v80 = v88;
                v13 += (unsigned int)v75;
                v100 = v13;
              }
            }
            else
            {
              v80 = v88;
            }
            if ( !v74 )
            {
              v29 = v88;
              goto LABEL_46;
            }
            if ( v74 > 0xFFFFFFFF )
            {
              v87 = -1073741820;
            }
            else
            {
              v103 = v74;
              if ( (unsigned int)v74 + v80 < v80 )
              {
                v83 = -1;
                v88 = -1;
                v91 = -1;
                v28 = -1073741675;
              }
              else
              {
                v83 = v74 + v80;
                v88 = v74 + v80;
                v91 = v74 + v80;
                v28 = 0;
              }
              v90 = v28;
              if ( v28 >= 0 )
              {
                v93 += v74;
                if ( v83 > a2 )
                {
                  v87 = -1073741820;
                  if ( !v104 )
                    goto LABEL_207;
                }
                else
                {
                  *((_DWORD *)v12 + 84) = (_DWORD)v13 - (_DWORD)v12;
                  memmove(v13, AppId, (unsigned int)v74);
                  v13 += (unsigned int)v74;
                  v100 = v13;
                }
                v29 = v88;
                goto LABEL_46;
              }
              v87 = v28;
            }
          }
LABEL_207:
          v25 = (struct _KPROCESS *)Object;
          goto LABEL_271;
        }
        v122 = *((_DWORD *)v6 + 1);
        if ( !(_BYTE)v122 )
        {
          v63 = v29 + v96;
          if ( v29 + v96 < v29 )
          {
            v63 = -1;
            v28 = -1073741675;
          }
          else
          {
            v28 = 0;
          }
          v91 = v63;
          v88 = v63;
          v64 = v63;
          v90 = v28;
          if ( v28 < 0 )
          {
            v87 = v28;
            goto LABEL_207;
          }
          v65 = v96;
          v93 += v96;
          if ( v63 > a2 )
          {
            v87 = -1073741820;
            if ( !v104 )
              goto LABEL_207;
          }
          else
          {
            KeQueryValuesThread((__int64)v6, (__int64)&v111);
            v54 = (unsigned __int8)v112;
            if ( (_BYTE)v112 == 4 )
            {
              v93 -= v65;
              v88 = v64 - v65;
              v91 = v64 - v65;
            }
            else
            {
              *((_DWORD *)v57 + 6) = v111;
              *((_DWORD *)v57 + 17) = (unsigned __int8)v54;
              *((_DWORD *)v57 + 18) = BYTE1(v112);
              *((_DWORD *)v57 + 14) = SBYTE2(v112);
              *((_DWORD *)v57 + 15) = SHIBYTE(v112);
              *v57 = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)v6 + 163);
              v57[1] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)v6 + 183);
              v57[2] = v6[192];
              *((_DWORD *)v57 + 16) = *((_DWORD *)v6 + 85);
              *(_OWORD *)(v57 + 5) = *(_OWORD *)(v6 + 201);
              if ( (*((_DWORD *)v6 + 29) & 0x400) != 0 )
              {
                v54 = v6[212];
              }
              else
              {
                if ( (v6[221] & 8) != 0 || (v54 = *((_QWORD *)v95 + 196), _InterlockedOr(v86, 0), (v6[221] & 8) != 0) )
                  v54 = 0LL;
                v11 = (char *)Process;
                Object = Process;
                v28 = v90;
                v6 = (unsigned __int64 *)v95;
                v88 = v91;
                v52 = v102;
                v101 = v102;
                v57 = v100;
              }
              v118 = v54;
              if ( v92 && v54 > 0x7FFFFFFEFFFFLL )
                v57[4] = 0LL;
              else
                v57[4] = v54;
              if ( v110 != 5 )
              {
                v54 = 0LL;
                if ( v92 )
                {
                  v57[10] = 0LL;
                  v57[11] = 0LL;
                }
                else
                {
                  v57[10] = v6[7];
                  v57 = v100;
                  *((_QWORD *)v100 + 11) = v6[6];
                  v11 = (char *)Process;
                  Object = Process;
                  v28 = v90;
                  v6 = (unsigned __int64 *)v95;
                  v88 = v91;
                  v52 = v102;
                  v101 = v102;
                }
                v66 = v6[212];
                v118 = v66;
                if ( v92 && (v53 = 0x7FFFFFFEFFFFLL, v66 > 0x7FFFFFFEFFFFLL) )
                  v57[12] = 0LL;
                else
                  v57[12] = v66;
                v57[13] = v6[30];
                v57[14] = 0LL;
                v57[15] = 0LL;
                v57[16] = 0LL;
              }
              ++v52[1];
              if ( v28 < 0 )
              {
                v87 = v28;
                goto LABEL_207;
              }
              v57 = (_QWORD *)((char *)v57 + v65);
              v100 = v57;
            }
          }
        }
        if ( v11 == PsIdleProcess )
          break;
        v6 = 0LL;
        v119 = 0LL;
        v67 = KeGetCurrentThread();
        Handle[4] = v67;
        v68 = Process;
        v69 = &Process[1].ActiveProcessors.Bitmap[18];
        v70 = 0;
        --v67->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&v68[1], 0LL);
        for ( k = (unsigned __int64 *)*((_QWORD *)v95 + 215); k != v69; k = (unsigned __int64 *)*k )
        {
          v6 = k - 215;
          v119 = k - 215;
          if ( ObReferenceObjectSafeWithTag((__int64)(k - 215)) )
          {
            v70 = 1;
            break;
          }
        }
        Handle[10] = (HANDLE)17;
        v125 = 0LL;
        v125 = _InterlockedCompareExchange64((volatile signed __int64 *)&v68[1].Header.Lock, 0LL, 17LL);
        if ( v125 != 17 )
          ExfReleasePushLockShared((signed __int64 *)&v68[1].Header.Lock);
        KeAbPostRelease((ULONG_PTR)&v68[1]);
        KeLeaveCriticalRegionThread((__int64)v67);
        v54 = (unsigned __int64)v95;
        if ( v95 )
          ObfDereferenceObjectWithTag(v95, 0x6E457350u);
        if ( !v70 )
          v6 = 0LL;
        v119 = v6;
        v11 = (char *)Process;
        Object = Process;
        v28 = v90;
        v88 = v91;
        v52 = v102;
        v101 = v102;
        v57 = v100;
LABEL_167:
        v95 = v6;
        v29 = v88;
      }
      v72 = (char *)v6[95];
      if ( v72 != v11 + 48 )
      {
        v6 = (unsigned __int64 *)(v72 - 760);
        KeSynchronizeWithDynamicProcessors(v54, v53, 0LL);
        goto LABEL_167;
      }
      v6 = 0LL;
      v95 = 0LL;
      v29 = v88;
    }
  }
  return result;
}
