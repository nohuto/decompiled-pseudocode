/*
 * XREFs of StorPortExtendedFunction @ 0x1C000E6C0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0005FE8 (RaidAdapterFindUnit.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000955C (RaidUnitCheckAndAcquirePoFx.c)
 *     StorpRequestTimer @ 0x1C000EBFC (StorpRequestTimer.c)
 *     StorpAllocatePool @ 0x1C00184C4 (StorpAllocatePool.c)
 *     StorpGetDeviceObjects @ 0x1C00187C4 (StorpGetDeviceObjects.c)
 *     StorpFreePool @ 0x1C0018818 (StorpFreePool.c)
 *     RaidGetD3ColdInterface @ 0x1C001D5C0 (RaidGetD3ColdInterface.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C001E354 (StorpAdapterInitializePoFxPower.c)
 *     StorEtwMiniportEventProxy @ 0x1C001EA40 (StorEtwMiniportEventProxy.c)
 *     RaidGetStartIoPerfParams @ 0x1C001EE00 (RaidGetStartIoPerfParams.c)
 *     StorAcquireSpinLockEx @ 0x1C001EED0 (StorAcquireSpinLockEx.c)
 *     StorpGetOriginalMdl @ 0x1C001EF40 (StorpGetOriginalMdl.c)
 *     StorpGetProcessorIndexFromNumber @ 0x1C001EF80 (StorpGetProcessorIndexFromNumber.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C001F3E4 (StorPortpInvokeAcpiMethod.c)
 *     RaidNtStatusToStorStatus @ 0x1C001F474 (RaidNtStatusToStorStatus.c)
 *     RaidAdapterIsRegisteredForIdleDetection @ 0x1C001FA50 (RaidAdapterIsRegisteredForIdleDetection.c)
 *     StorpTelemetryMiniportEvent @ 0x1C001FFE8 (StorpTelemetryMiniportEvent.c)
 *     StorpInitializeTimer @ 0x1C0021990 (StorpInitializeTimer.c)
 *     RaidInitializePerfOpts @ 0x1C0021C74 (RaidInitializePerfOpts.c)
 *     StorpGetMSIInfo @ 0x1C0022E24 (StorpGetMSIInfo.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C0022EB4 (StorPortpSetPowerSettingNotificationGuids.c)
 *     RaidGetD3ColdCapability @ 0x1C0023320 (RaidGetD3ColdCapability.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C003558C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidGetAssociatedXrb @ 0x1C0037E84 (RaidGetAssociatedXrb.c)
 *     RaidInitializeCryptoEngine @ 0x1C0038428 (RaidInitializeCryptoEngine.c)
 *     RaidInitializeRpmb @ 0x1C0038580 (RaidInitializeRpmb.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C00388B4 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_D @ 0x1C0038C58 (WPP_SF_D.c)
 *     McTemplateK0pqqq @ 0x1C003AEE0 (McTemplateK0pqqq.c)
 *     RaidAdapterCacheOperationalPowerRange @ 0x1C003B7DC (RaidAdapterCacheOperationalPowerRange.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C003B884 (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C003B8DC (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C003BA14 (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorBuildScatterGatherListProxy @ 0x1C003BC1C (StorBuildScatterGatherListProxy.c)
 *     StorDelayExecution @ 0x1C003BC7C (StorDelayExecution.c)
 *     StorEtwMiniportLogError @ 0x1C003BD64 (StorEtwMiniportLogError.c)
 *     StorpAcquireMSISpinLock @ 0x1C003D1B0 (StorpAcquireMSISpinLock.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNode @ 0x1C003D254 (StorpAllocateContiguousMemorySpecifyCacheNode.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNodeEx @ 0x1C003D2C8 (StorpAllocateContiguousMemorySpecifyCacheNodeEx.c)
 *     StorpAllocateHostMemoryBuffer @ 0x1C003D3F0 (StorpAllocateHostMemoryBuffer.c)
 *     StorpAllocateMdl @ 0x1C003D850 (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C003D98C (StorpBuildMdlForNonPagedPool.c)
 *     StorpCompleteServiceIrp @ 0x1C003DB84 (StorpCompleteServiceIrp.c)
 *     StorpFlushDataBufferMdl @ 0x1C003DBDC (StorpFlushDataBufferMdl.c)
 *     StorpFreeContiguousMemorySpecifyCacheEx @ 0x1C003DC44 (StorpFreeContiguousMemorySpecifyCacheEx.c)
 *     StorpFreeHostMemoryBuffer @ 0x1C003DCB8 (StorpFreeHostMemoryBuffer.c)
 *     StorpFreeMdl @ 0x1C003DD7C (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C003DE24 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003E08C (StorpFreeWorkItem.c)
 *     StorpGetActiveGroupCount @ 0x1C003E25C (StorpGetActiveGroupCount.c)
 *     StorpGetActiveNodeCount @ 0x1C003E290 (StorpGetActiveNodeCount.c)
 *     StorpGetCurrentProcessorIndex @ 0x1C003E324 (StorpGetCurrentProcessorIndex.c)
 *     StorpGetCurrentProcessorNumber @ 0x1C003E348 (StorpGetCurrentProcessorNumber.c)
 *     StorpGetDataInSgList @ 0x1C003E374 (StorpGetDataInSgList.c)
 *     StorpGetGroupAffinity @ 0x1C003E5AC (StorpGetGroupAffinity.c)
 *     StorpGetHighestNodeNumber @ 0x1C003E608 (StorpGetHighestNodeNumber.c)
 *     StorpGetLogicalProcessorRelationship @ 0x1C003E63C (StorpGetLogicalProcessorRelationship.c)
 *     StorpGetNodeAffinity @ 0x1C003E690 (StorpGetNodeAffinity.c)
 *     StorpGetPfns @ 0x1C003E6D0 (StorpGetPfns.c)
 *     StorpGetProcessorCount @ 0x1C003E76C (StorpGetProcessorCount.c)
 *     StorpGetRequestInfo @ 0x1C003E7A4 (StorpGetRequestInfo.c)
 *     StorpGetSystemAddress @ 0x1C003EA08 (StorpGetSystemAddress.c)
 *     StorpInitializeWorkItem @ 0x1C003EB84 (StorpInitializeWorkItem.c)
 *     StorpLogSystemEvent @ 0x1C003ECC8 (StorpLogSystemEvent.c)
 *     StorpPutScatterGatherList @ 0x1C003F1AC (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C003F2AC (StorpQueueWorkItem.c)
 *     StorpReleaseMSISpinLock @ 0x1C003F3E4 (StorpReleaseMSISpinLock.c)
 *     StorpSetUnitAttributes @ 0x1C003F478 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003F4F4 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterPerfStates @ 0x1C0040DC4 (RaidRegisterPerfStates.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C004DA4C (StorpLogRegisterAdapterPerfStates.c)
 */

__int64 __fastcall StorPortExtendedFunction(
        unsigned int a1,
        __int64 a2,
        KSPIN_LOCK *a3,
        GUID *a4,
        PKSPIN_LOCK a5,
        PKSPIN_LOCK a6,
        PHYSICAL_ADDRESS a7,
        PHYSICAL_ADDRESS a8,
        _QWORD *a9,
        __int64 a10,
        __int64 a11)
{
  unsigned int v11; // r14d
  __int64 v13; // rsi
  unsigned int v14; // edi
  _DWORD *v15; // r13
  unsigned __int64 v16; // rdx
  LARGE_INTEGER *v17; // rbx
  union _LARGE_INTEGER *v18; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  KSPIN_LOCK v21; // rax
  KSPIN_LOCK Alignment; // rcx
  __int64 v23; // rcx
  KSPIN_LOCK v24; // rax
  KSPIN_LOCK v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // ebx
  PKSPIN_LOCK v28; // r15
  __int64 v29; // rdi
  _QWORD *v30; // rcx
  __int64 v31; // rax
  unsigned int Next; // eax
  __int64 v33; // rcx
  struct _SLIST_ENTRY *v34; // rbx
  union _SLIST_HEADER *v35; // rdx
  __int64 v36; // rcx
  struct _DEVICE_OBJECT *v37; // rcx
  int D3ColdInterface; // eax
  struct _SLIST_ENTRY *v39; // rbx
  struct _SLIST_ENTRY *v40; // rbx
  PKSPIN_LOCK v41; // rbx
  struct _SLIST_ENTRY *v42; // rbx
  union _SLIST_HEADER *v43; // rdx
  int v44; // eax
  struct _SLIST_ENTRY *v45; // r12
  int v46; // edx
  union _SLIST_HEADER *v47; // rbx
  __int64 QuadPart; // rcx
  _DWORD *AssociatedXrb; // rax
  int v50; // esi
  unsigned __int8 CurrentIrql; // r15
  __int64 Unit; // rax
  __int64 v53; // rbx
  unsigned int v54; // eax
  union _SLIST_HEADER *v55; // rbx
  unsigned int v56; // r12d
  int v57; // r15d
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rsi
  _QWORD *v63; // rcx
  __int64 v64; // r9
  unsigned int v65; // eax
  unsigned int v66; // edi
  PKSPIN_LOCK v67; // r15
  __int64 v68; // rbx
  __int64 v69; // rax
  _QWORD *v70; // rcx
  __int64 v71; // r9
  _QWORD *v72; // rcx
  __int64 v73; // rax
  struct _SLIST_ENTRY *v74; // r12
  PKSPIN_LOCK v75; // r13
  _QWORD *v76; // rbx
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 Arg2; // rdi
  _QWORD *v80; // rax
  __int64 v81; // rbx
  _QWORD *v82; // rcx
  int v83; // r12d
  int v84; // r13d
  unsigned int v85; // edi
  __int64 v86; // r15
  _QWORD *v87; // rax
  __int64 v88; // rbx
  __int64 v89; // rax
  unsigned int v90; // r13d
  PHYSICAL_ADDRESS v91; // r15
  _QWORD *v92; // rax
  __int64 v93; // rbx
  unsigned __int8 v94; // r9
  __int64 v95; // rcx
  unsigned __int8 v96; // al
  __int64 v97; // rdx
  union _SLIST_HEADER *v98; // rdx
  struct _SLIST_ENTRY *v99; // rbx
  PKSPIN_LOCK v100; // r15
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  PKSPIN_LOCK v107; // rbx
  PKSPIN_LOCK v108; // rbx
  struct _SLIST_ENTRY *v109; // rbx
  struct _SLIST_ENTRY *v110; // rbx
  __int64 v111; // rax
  unsigned int v112; // eax
  __int64 v113; // rcx
  __int64 v114; // rcx
  int v115; // edx
  __int64 v116; // rcx
  PKSPIN_LOCK v117; // rbx
  __int64 Timer; // rax
  _BYTE *v119; // rbx
  PKSPIN_LOCK v120; // rbx
  char v121; // al
  _BYTE *v122; // rbx
  struct _SLIST_ENTRY *v123; // rbx
  int v124; // [rsp+50h] [rbp-19h]
  int v125; // [rsp+50h] [rbp-19h]
  int v126; // [rsp+50h] [rbp-19h]
  int v127; // [rsp+50h] [rbp-19h]
  int v128; // [rsp+50h] [rbp-19h]
  int v129; // [rsp+50h] [rbp-19h]
  int v130; // [rsp+50h] [rbp-19h]
  int v131; // [rsp+50h] [rbp-19h]
  unsigned int v132; // [rsp+58h] [rbp-11h]
  PKSPIN_LOCK v133; // [rsp+58h] [rbp-11h]
  unsigned int v134; // [rsp+58h] [rbp-11h]
  PHYSICAL_ADDRESS v135; // [rsp+60h] [rbp-9h]
  unsigned int LowPart; // [rsp+60h] [rbp-9h]
  PHYSICAL_ADDRESS v137; // [rsp+68h] [rbp-1h] BYREF
  __int64 v138; // [rsp+70h] [rbp+7h]
  union _SLIST_HEADER *v140; // [rsp+E0h] [rbp+77h] BYREF
  struct _SLIST_ENTRY *v141; // [rsp+E8h] [rbp+7Fh]

  v140 = (union _SLIST_HEADER *)a3;
  v141 = (struct _SLIST_ENTRY *)a4;
  v11 = 0;
  v13 = a2;
  v14 = -1056964606;
  v15 = 0LL;
  if ( a2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 79LL, &WPP_6f3540a332da34b92ff0af100460ee8b_Traceguids, a1);
      v13 = a2;
    }
    v16 = 0x1C0000000uLL;
    switch ( a1 )
    {
      case 0u:
        return (unsigned int)StorpAllocatePool(v13, (unsigned int)v140, (unsigned int)v141, a5);
      case 1u:
        return (unsigned int)StorpFreePool(v13, v140);
      case 2u:
        return (unsigned int)StorpAllocateMdl(v13, v140, (unsigned int)v141, a5);
      case 3u:
        return (unsigned int)StorpFreeMdl(v13, v140);
      case 4u:
        return (unsigned int)StorpBuildMdlForNonPagedPool(v13, v140);
      case 5u:
        return (unsigned int)StorpGetSystemAddress(v13, v140, 0LL, v141);
      case 6u:
        return (unsigned int)StorpGetOriginalMdl(v13, v140, 0LL, v141);
      case 7u:
        return (unsigned int)StorpCompleteServiceIrp(v13, v140);
      case 8u:
        return (unsigned int)StorpGetDeviceObjects(v13, v140, v141, a5);
      case 9u:
        return (unsigned int)StorBuildScatterGatherListProxy(v13, &v140);
      case 0xAu:
        return (unsigned int)StorpPutScatterGatherList(v13, v140, (unsigned __int8)v141);
      case 0xBu:
        return (unsigned int)StorpAcquireMSISpinLock(v13, (unsigned int)v140, v141);
      case 0xCu:
        return (unsigned int)StorpReleaseMSISpinLock(v13, (unsigned int)v140, (unsigned int)v141);
      case 0xDu:
        return (unsigned int)StorpGetMSIInfo(v13, (unsigned int)v140, v141);
      case 0xEu:
        return (unsigned int)RaidInitializePerfOpts(v13, (unsigned __int8)v140, v141);
      case 0xFu:
        return (unsigned int)RaidGetStartIoPerfParams(v13, v140, v141);
      case 0x10u:
        return (unsigned int)StorpLogSystemEvent(v13, v140, v141);
      case 0x11u:
        return (unsigned int)StorpGetCurrentProcessorNumber(v13, v140);
      case 0x12u:
        return (unsigned int)StorpGetActiveGroupCount(v13, v140);
      case 0x13u:
        return (unsigned int)StorpGetGroupAffinity(v13, (unsigned __int16)v140, v141);
      case 0x14u:
        return (unsigned int)StorpGetActiveNodeCount(v13, v140);
      case 0x15u:
        return (unsigned int)StorpGetNodeAffinity(v13, (unsigned int)v140, v141);
      case 0x16u:
        return (unsigned int)StorpGetHighestNodeNumber(v13, v140);
      case 0x17u:
        return (unsigned int)StorpGetLogicalProcessorRelationship(v13, v140, (unsigned int)v141, a5, a6);
      case 0x18u:
        return (unsigned int)StorpAllocateContiguousMemorySpecifyCacheNode(
                               v13,
                               (_DWORD)v140,
                               (_DWORD)v141,
                               (_DWORD)a5,
                               (__int64)a6,
                               a7.LowPart,
                               a8.LowPart,
                               (__int64)a9);
      case 0x19u:
        MmFreeContiguousMemorySpecifyCache(v140, (SIZE_T)v141, (MEMORY_CACHING_TYPE)a5);
        return 0;
      case 0x1Au:
        return (unsigned int)StorPortpSetPowerSettingNotificationGuids(v13, (unsigned int)v140, v141);
      case 0x1Bu:
        return (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD))StorPortpInvokeAcpiMethod)(
                               v13,
                               v140,
                               (unsigned int)v141,
                               a5,
                               (_DWORD)a6,
                               (PHYSICAL_ADDRESS)a7.QuadPart,
                               a8.LowPart,
                               a9);
      case 0x1Cu:
        return (unsigned int)StorpGetRequestInfo(v13, v140, v141);
      case 0x1Du:
        return (unsigned int)StorpInitializeWorkItem(v13, v140);
      case 0x1Eu:
        return (unsigned int)StorpQueueWorkItem(v13, v140, v141, a5);
      case 0x1Fu:
        return (unsigned int)StorpFreeWorkItem(v13, v140);
      case 0x20u:
        return (unsigned int)StorpInitializeTimer(v13, v140);
      case 0x21u:
        return (unsigned int)StorpRequestTimer(v13, (_DWORD)v140, (_DWORD)v141, (_DWORD)a5, (__int64)a6, a7.QuadPart);
      case 0x22u:
        return (unsigned int)StorpFreeTimer(v13, v140);
      case 0x23u:
        InitializeSListHead(v140);
        return 0;
      case 0x24u:
        v39 = v141;
        v39->Next = ExpInterlockedFlushSList(v140);
        return 0;
      case 0x25u:
        v40 = v141;
        v40->Next = ExpInterlockedPopEntrySList(v140);
        return 0;
      case 0x26u:
        v41 = a5;
        *v41 = (KSPIN_LOCK)ExpInterlockedPushEntrySList(v140, v141);
        return 0;
      case 0x27u:
        v42 = v141;
        LOWORD(v42->Next) = ExQueryDepthSList(v140);
        return 0;
      case 0x28u:
        if ( !v140 || !v141 )
          return (unsigned int)-1056964602;
        if ( *((_BYTE *)&v140->HeaderX64 + 2) == 40 )
        {
          Alignment = v140[5].Alignment;
        }
        else
        {
          v21 = v140[3].Alignment;
          if ( !v21 || *(_DWORD *)v21 != 523124044 )
            goto LABEL_39;
          Alignment = *(_QWORD *)(v21 + 176);
        }
        if ( Alignment )
        {
          if ( (int)IoGetActivityIdIrp(Alignment, v141) >= 0 )
            return 0;
          return (unsigned int)-1056964607;
        }
LABEL_39:
        if ( EtwActivityIdControl(3u, (LPGUID)v141) < 0 )
          return (unsigned int)-1056964607;
        return 0;
      case 0x29u:
        v43 = v140;
        v44 = *(_DWORD *)(**(_QWORD **)(v13 - 16) + 56LL);
        if ( v44 == -1 )
          return (unsigned int)-1056964599;
        if ( !v140 || LOWORD(v140->Alignment) != 1 || *((_DWORD *)&v140->HeaderX64 + 1) < 4u )
          return (unsigned int)-1056964602;
        *((_WORD *)&v140->HeaderX64 + 1) = v44;
        v14 = 0;
        *((_WORD *)&v43->HeaderX64 + 4) = -1;
        *((_BYTE *)&v43->HeaderX64 + 10) = -1;
        return v14;
      case 0x2Au:
        LOBYTE(a3) = 1;
        return (unsigned int)StorpGetOriginalMdl(v13, v140, a3, v141);
      case 0x2Bu:
        LOBYTE(a3) = 1;
        return (unsigned int)StorpGetSystemAddress(v13, v140, a3, v141);
      case 0x2Cu:
        return (unsigned int)StorpGetDataInSgList(v13, v140, v141);
      case 0x2Eu:
        return (unsigned int)StorpSetUnitAttributes(v13, v140, (unsigned int)v141);
      case 0x2Fu:
        v17 = (LARGE_INTEGER *)v141;
        v18 = (union _LARGE_INTEGER *)v140;
        if ( !v141 )
          return (unsigned int)-1056964602;
        if ( v140 )
          v140->Alignment = 1LL;
        if ( UseQPCTime )
          PerformanceCounter = KeQueryPerformanceCounter(v18);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        *v17 = PerformanceCounter;
        return 0;
      case 0x30u:
        if ( KeGetCurrentIrql() )
          return (unsigned int)-1056964600;
        if ( v140 )
          return (unsigned int)StorpUnitInitializePoFxPower(v13, v140, v141, a5);
        else
          return (unsigned int)StorpAdapterInitializePoFxPower(v13, v141, a5);
      case 0x31u:
        v14 = 0;
        v45 = v141;
        v46 = (int)a6;
        v47 = v140;
        v132 = (unsigned int)a5;
        v124 = (int)a6;
        QuadPart = **(_QWORD **)(v13 - 16);
        v137.QuadPart = QuadPart;
        if ( v141 )
        {
          AssociatedXrb = (_DWORD *)RaidGetAssociatedXrb(v141);
          v15 = AssociatedXrb;
          if ( !AssociatedXrb || *AssociatedXrb != 523124044 )
            return (unsigned int)-1056964602;
          QuadPart = v137.QuadPart;
          v46 = v124;
          if ( BYTE2(v45->Next) == 40 )
            v50 = *((_DWORD *)&v45[1].Next + 2);
          else
            v50 = *((_DWORD *)&v45->Next + 3);
        }
        else
        {
          v50 = 0;
        }
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > 2u )
          return (unsigned int)-1056964600;
        if ( v46 )
          return (unsigned int)-1056964602;
        if ( !v47 )
        {
          if ( !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(QuadPart) || (v50 & 0x100800) != 0 )
            return (unsigned int)-1056964601;
          if ( CurrentIrql == 2 || (*(_BYTE *)(v137.QuadPart + 108) & 3) != 0 )
            v11 = 2;
          v54 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterPoFxActivateComponentFromMiniport)(
                  (PHYSICAL_ADDRESS)v137.QuadPart,
                  v132,
                  v11);
          goto LABEL_150;
        }
        if ( LOWORD(v47->Alignment) != 1 )
          return (unsigned int)-1056964602;
        if ( *((_DWORD *)&v47->HeaderX64 + 1) < 4u )
          return (unsigned int)-1056964602;
        LOWORD(v125) = *((_WORD *)&v47->HeaderX64 + 4);
        HIWORD(v125) = *((unsigned __int8 *)&v47->HeaderX64 + 10);
        Unit = RaidAdapterFindUnit(QuadPart, v125);
        v53 = Unit;
        if ( !Unit )
          return (unsigned int)-1056964602;
        if ( (v50 & 0x100800) == 0 )
          goto LABEL_145;
        if ( RaidUnitCheckAndAcquirePoFx(Unit) )
          goto LABEL_194;
        if ( (unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(*(_QWORD *)(v53 + 24)) )
        {
LABEL_145:
          if ( CurrentIrql == 2 || (*(_BYTE *)(v53 + 449) & 1) != 0 || *(char *)(v53 + 448) < 0 )
            v11 = 2;
          v54 = RaidUnitPoFxActivateComponentFromMiniport(v53, v132, v11);
LABEL_150:
          v14 = v54;
          if ( v15 )
            *((_BYTE *)v15 + 16) |= 0x80u;
          return v14;
        }
        return v14;
      case 0x32u:
        v14 = 0;
        v55 = v140;
        v56 = (unsigned int)a5;
        v57 = (int)a6;
        v58 = **(_QWORD **)(v13 - 16);
        if ( !v141 )
          goto LABEL_161;
        v59 = ((__int64 (*)(void))RaidGetAssociatedXrb)();
        v15 = (_DWORD *)v59;
        if ( !v59 || *(_DWORD *)v59 != 523124044 )
          return (unsigned int)-1056964602;
        if ( *(char *)(v59 + 16) >= 0 )
          return v14;
LABEL_161:
        if ( KeGetCurrentIrql() > 2u && !v15 )
          return (unsigned int)-1056964600;
        if ( v57 )
          return (unsigned int)-1056964602;
        if ( !v55 )
        {
          if ( !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(v58) )
            return (unsigned int)-1056964601;
          if ( KeGetCurrentIrql() <= 2u )
          {
            return (unsigned int)RaidAdapterPoFxIdleComponentFromMiniport(v58, v56, 0LL);
          }
          else
          {
            *((_BYTE *)v15 + 17) |= 1u;
            v14 = -1056964596;
            v15[187] = v56;
          }
          return v14;
        }
        if ( LOWORD(v55->Alignment) == 1 && *((_DWORD *)&v55->HeaderX64 + 1) >= 4u )
        {
          LOWORD(v126) = *((_WORD *)&v55->HeaderX64 + 4);
          HIWORD(v126) = *((unsigned __int8 *)&v55->HeaderX64 + 10);
          v60 = RaidAdapterFindUnit(v58, v126);
          if ( v60 )
          {
            if ( KeGetCurrentIrql() <= 2u )
            {
              return (unsigned int)RaidUnitPoFxIdleComponentFromMiniport(v60, v56);
            }
            else
            {
              *((_BYTE *)v15 + 17) |= 2u;
              v14 = -1056964596;
              v15[187] = v56;
            }
            return v14;
          }
        }
        return (unsigned int)-1056964602;
      case 0x33u:
        v27 = (unsigned int)v141;
        v28 = a5;
        v29 = **(_QWORD **)(v13 - 16);
        if ( KeGetCurrentIrql() > 2u )
          return (unsigned int)-1056964600;
        if ( !v140 )
        {
          if ( !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(**(_QWORD **)(v13 - 16)) )
            return (unsigned int)-1056964601;
          v30 = *(_QWORD **)(v29 + 5024);
          v31 = v30[1];
          if ( v27 + 1 >= *(_DWORD *)(v31 + 8) && v27 + 1 <= *(_DWORD *)(v31 + 8) )
          {
            PoFxSetComponentLatency(*v30, v27, v28);
            return 0;
          }
          return (unsigned int)-1056964602;
        }
        if ( LOWORD(v140->Alignment) != 1 )
          return (unsigned int)-1056964602;
        if ( *((_DWORD *)&v140->HeaderX64 + 1) < 4u )
          return (unsigned int)-1056964602;
        v127 = *((unsigned __int8 *)&v140->HeaderX64 + 8);
        *(_WORD *)((char *)&v127 + 1) = *((unsigned __int8 *)&v140->HeaderX64 + 9);
        BYTE2(v127) = *((_BYTE *)&v140->HeaderX64 + 10);
        v61 = RaidAdapterFindUnit(v29, v127);
        v62 = v61;
        if ( !v61 )
          return (unsigned int)-1056964602;
        if ( !RaidUnitCheckAndAcquirePoFx(v61) )
          return (unsigned int)-1056964601;
        v63 = *(_QWORD **)(v62 + 1744);
        v64 = v63[1];
        if ( v27 + 1 < *(_DWORD *)(v64 + 8) || v27 + 1 > *(_DWORD *)(v64 + 8) )
        {
          v14 = -1056964602;
        }
        else
        {
          PoFxSetComponentLatency(*v63, v27, v28);
          v14 = 0;
        }
        goto LABEL_183;
      case 0x34u:
        v66 = (unsigned int)v141;
        v67 = a5;
        v68 = **(_QWORD **)(v13 - 16);
        if ( KeGetCurrentIrql() > 2u )
          return (unsigned int)-1056964600;
        if ( !v140 )
        {
          if ( !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(**(_QWORD **)(v13 - 16)) )
            return (unsigned int)-1056964601;
          v72 = *(_QWORD **)(v68 + 5024);
          v73 = v72[1];
          if ( v66 + 1 >= *(_DWORD *)(v73 + 8) && v66 + 1 <= *(_DWORD *)(v73 + 8) )
          {
            PoFxSetComponentResidency(*v72, v66, v67);
            return 0;
          }
          return (unsigned int)-1056964602;
        }
        if ( LOWORD(v140->Alignment) != 1 )
          return (unsigned int)-1056964602;
        if ( *((_DWORD *)&v140->HeaderX64 + 1) < 4u )
          return (unsigned int)-1056964602;
        LOWORD(v128) = *((_WORD *)&v140->HeaderX64 + 4);
        HIWORD(v128) = *((unsigned __int8 *)&v140->HeaderX64 + 10);
        v69 = RaidAdapterFindUnit(v68, v128);
        v53 = v69;
        if ( !v69 )
          return (unsigned int)-1056964602;
        if ( !RaidUnitCheckAndAcquirePoFx(v69) )
          return (unsigned int)-1056964601;
        v70 = *(_QWORD **)(v53 + 1744);
        v71 = v70[1];
        if ( v66 + 1 < *(_DWORD *)(v71 + 8) || v66 + 1 > *(_DWORD *)(v71 + 8) )
        {
          v14 = -1056964602;
        }
        else
        {
          PoFxSetComponentResidency(*v70, v66, v67);
          v14 = 0;
        }
LABEL_194:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v53 + 1736));
        return v14;
      case 0x35u:
        v74 = v141;
        v75 = a5;
        v76 = a9;
        v133 = a6;
        v135 = a7;
        v137 = a8;
        v77 = **(_QWORD **)(v13 - 16);
        if ( KeGetCurrentIrql() > 2u )
        {
          if ( a9 )
            *a9 = 0LL;
          return (unsigned int)-1056964600;
        }
        if ( v140 )
        {
          if ( LOWORD(v140->Alignment) != 1 )
            return (unsigned int)-1056964602;
          if ( *((_DWORD *)&v140->HeaderX64 + 1) < 4u )
            return (unsigned int)-1056964602;
          LOWORD(v129) = *((_WORD *)&v140->HeaderX64 + 4);
          HIWORD(v129) = *((unsigned __int8 *)&v140->HeaderX64 + 10);
          v78 = RaidAdapterFindUnit(v77, v129);
          v62 = v78;
          if ( !v78 )
            return (unsigned int)-1056964602;
          if ( RaidUnitCheckAndAcquirePoFx(v78) )
          {
            v65 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                    **(_QWORD **)(v62 + 1744),
                    v74,
                    v75,
                    v133,
                    (PHYSICAL_ADDRESS)v135.QuadPart,
                    (PHYSICAL_ADDRESS)v137.QuadPart,
                    v76);
            v14 = RaidNtStatusToStorStatus(v65);
LABEL_183:
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v62 + 1736));
            return v14;
          }
        }
        else if ( (unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(**(_QWORD **)(v13 - 16)) )
        {
          D3ColdInterface = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                              **(_QWORD **)(v77 + 5024),
                              v74,
                              v75,
                              v133,
                              (PHYSICAL_ADDRESS)v135.QuadPart,
                              (PHYSICAL_ADDRESS)v137.QuadPart,
                              v76);
          return (unsigned int)RaidNtStatusToStorStatus((unsigned int)D3ColdInterface);
        }
        return (unsigned int)-1056964601;
      case 0x36u:
        return (unsigned int)StorpFlushDataBufferMdl(v13, v140);
      case 0x37u:
        v98 = v140;
        v99 = v141;
        v100 = a5;
        v101 = **(_QWORD **)(v13 - 16);
        if ( !a5 )
          return (unsigned int)-1056964602;
        if ( !v101 )
          return (unsigned int)-1056964602;
        *(_DWORD *)a5 = 0;
        if ( v98 )
        {
          if ( LOWORD(v98->Alignment) != 1 )
            return (unsigned int)-1056964602;
          if ( *((_DWORD *)&v98->HeaderX64 + 1) < 4u )
            return (unsigned int)-1056964602;
          LOWORD(v130) = *((_WORD *)&v98->HeaderX64 + 4);
          HIWORD(v130) = *((unsigned __int8 *)&v98->HeaderX64 + 10);
          if ( !RaidAdapterFindUnit(v101, v130) )
            return (unsigned int)-1056964602;
        }
        v102 = (__int64)&v99->Next[0xFB7E076A0235063FuLL];
        if ( v99->Next == (_SLIST_ENTRY *)0x481F895FDCAF9C10LL )
          v102 = *((_QWORD *)&v99->Next + 1) - 0x3356F5D2CED492A4LL;
        if ( v102 )
        {
          v103 = (__int64)&v99->Next[0xFBBB4D4C82AD317EuLL];
          if ( v99->Next == (_SLIST_ENTRY *)0x444B2B37D52CE820LL )
            v103 = *((_QWORD *)&v99->Next + 1) - 0x7BD091E5920033A6LL;
          if ( v103 )
          {
            v104 = (__int64)&v99->Next[0xFB7170764D46BBC5uLL].Next + 4;
            if ( v99->Next == (_SLIST_ENTRY *)0x48E8F89B2B9443ACLL )
              v104 = *((_QWORD *)&v99->Next + 1) - 0x5AFD6EC9B62C92B2LL;
            if ( !v104 )
            {
              v14 = 0;
              *(_DWORD *)v100 = (unsigned __int8)ExIsSoftBoot();
            }
          }
          else
          {
            *(_DWORD *)v100 = 1;
            return 0;
          }
        }
        else
        {
          v14 = 0;
          *(_DWORD *)v100 = (unsigned __int8)g_InWinPE;
        }
        return v14;
      case 0x38u:
        return (unsigned int)StorpGetProcessorIndexFromNumber(v13, v140, v141);
      case 0x39u:
        Arg2 = (unsigned int)v141;
        if ( v140 )
          return 3238002694LL;
        v80 = *(_QWORD **)(v13 - 16);
        v81 = *v80;
        if ( !*v80 || !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(*v80) )
          return (unsigned int)-1056964602;
        if ( (*(_BYTE *)(v81 + 108) & 0x40) != 0 )
          return (unsigned int)-1056964607;
        v82 = *(_QWORD **)(v81 + 5024);
        *(_DWORD *)(v81 + 5040) = Arg2;
        PoFxSetDeviceIdleTimeout(*v82, 10000 * Arg2);
        if ( !StorEtwLoggingEnabled || (byte_1C0062741 & 1) == 0 )
          return 0;
        McTemplateK0pqqq(
          (PMCGEN_TRACE_CONTEXT)&StorPortEventProvider_Context,
          &EventAdapterIdleTimeoutSet,
          0LL,
          **(const void ***)(v81 + 5024),
          *(_DWORD *)(v81 + 56),
          Arg2,
          *(_DWORD *)(v81 + 5040));
        return 0;
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
        return v14;
      case 0x3Du:
        if ( !v140 )
          return (unsigned int)-1056964602;
        v14 = 0;
        LOBYTE(v140->Alignment) = g_OSisUpgrade;
        return v14;
      case 0x3Eu:
        LOBYTE(v16) = 1;
        return (unsigned int)StorAdapterDeviceRegistryKeyProxy(v13, v16, &v140);
      case 0x3Fu:
        return (unsigned int)StorAdapterDeviceRegistryKeyProxy(v13, 0LL, &v140);
      case 0x40u:
        v106 = **(_QWORD **)(v13 - 16);
        if ( !v106 || (unsigned int)v140 >= 0x14 )
          return (unsigned int)-1056964602;
        if ( (*(_BYTE *)(v106 + 544) & 1) == 0 )
          return (unsigned int)-1056964607;
        *(_DWORD *)(v106 + 4356) = (_DWORD)v140;
        return 0;
      case 0x41u:
        v83 = (int)v141;
        v84 = (int)a5;
        v85 = (unsigned int)a6;
        v86 = a7.QuadPart;
        if ( v140 )
          return 3238002694LL;
        v87 = *(_QWORD **)(v13 - 16);
        v88 = *v87;
        if ( !*v87 )
          return 3238002694LL;
        if ( !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(*v87) )
          return 3238002689LL;
        v89 = *(_QWORD *)(v88 + 5024);
        if ( *(_BYTE *)(v89 + 28) )
          return 3238002689LL;
        D3ColdInterface = RaidRegisterPerfStates(*(_QWORD *)(v88 + 8), v83, v84, v85, v86, *(_QWORD *)v89);
        if ( D3ColdInterface < 0 )
          return (unsigned int)RaidNtStatusToStorStatus((unsigned int)D3ColdInterface);
        if ( (unsigned __int8)RaidAdapterCacheOperationalPowerRange(*(_QWORD *)(v88 + 5024), v85, v86) )
        {
          *(_QWORD *)(*(_QWORD *)(v88 + 5024) + 48LL) = -1LL;
          *(_QWORD *)(*(_QWORD *)(v88 + 5024) + 56LL) = -1LL;
          *(_QWORD *)(*(_QWORD *)(v88 + 5024) + 64LL) = -1LL;
        }
        *(_BYTE *)(*(_QWORD *)(v88 + 5024) + 28LL) = v85;
        StorpLogRegisterAdapterPerfStates(v88, v86);
        return 0;
      case 0x42u:
        v90 = (unsigned int)a6;
        v134 = (unsigned int)v141;
        v91 = a8;
        LowPart = a7.LowPart;
        if ( v140 || (_DWORD)a5 )
          return 3238002694LL;
        v92 = *(_QWORD **)(v13 - 16);
        v93 = *v92;
        if ( !*v92 || !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(*v92) )
          return v14;
        v94 = KeGetCurrentIrql();
        v95 = *(_QWORD *)(v93 + 5024);
        v137.QuadPart = 0LL;
        v138 = 0LL;
        v96 = *(_BYTE *)(v95 + 28);
        if ( !v96 || v90 >= v96 )
          return 3238002694LL;
        v97 = 2LL;
        v137.LowPart = v90;
        LODWORD(v138) = LowPart;
        if ( v94 < 2u )
          v97 = 0LL;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxIssueComponentPerfStateChange)(
          *(_QWORD *)v95,
          v97,
          v134,
          &v137,
          (PHYSICAL_ADDRESS)v91.QuadPart);
        return 0;
      case 0x43u:
        if ( KeGetCurrentIrql() )
          return 3238002696LL;
        v34 = v141;
        v14 = -1056964602;
        v35 = v140;
        if ( !v141 )
          return v14;
        LOBYTE(v141->Next) = 0;
        v36 = **(_QWORD **)(a2 - 16);
        if ( !v36 )
          return v14;
        if ( v35 )
        {
          if ( LOWORD(v35->Alignment) != 1 )
            return v14;
          if ( *((_DWORD *)&v35->HeaderX64 + 1) < 4u )
            return v14;
          LOWORD(v131) = *((_WORD *)&v35->HeaderX64 + 4);
          HIWORD(v131) = *((unsigned __int8 *)&v35->HeaderX64 + 10);
          v105 = RaidAdapterFindUnit(v36, v131);
          if ( !v105 )
            return v14;
          v37 = *(struct _DEVICE_OBJECT **)(v105 + 8);
        }
        else
        {
          v37 = *(struct _DEVICE_OBJECT **)(v36 + 8);
        }
        if ( !v37 )
          return v14;
        v137.QuadPart = 0LL;
        D3ColdInterface = RaidGetD3ColdInterface(v37);
        if ( D3ColdInterface >= 0 )
        {
          LOBYTE(v34->Next) = ((__int64 (__fastcall *)(_QWORD))RaidGetD3ColdCapability)((PHYSICAL_ADDRESS)v137.QuadPart);
          return 0;
        }
        return (unsigned int)RaidNtStatusToStorStatus((unsigned int)D3ColdInterface);
      case 0x44u:
        if ( v140 )
          return (unsigned int)-1056964601;
        return (unsigned int)RaidInitializeRpmb(v13, v141);
      case 0x45u:
        return (unsigned int)StorpAllocateHostMemoryBuffer(
                               v13,
                               (int)v140,
                               (int)v141,
                               (int)a5,
                               (int)a6,
                               a7,
                               a8,
                               (__int64)a9,
                               a10,
                               a11);
      case 0x46u:
        return (unsigned int)StorpFreeHostMemoryBuffer(v13, v140, (unsigned int)v141);
      case 0x47u:
        v23 = **(_QWORD **)(v13 - 16);
        if ( !v23 )
          return (unsigned int)-1056964602;
        if ( !*(_BYTE *)(v23 + 500) )
          return (unsigned int)-1056964601;
        if ( !v140 || !v141 )
          return (unsigned int)-1056964602;
        if ( *((_BYTE *)&v140->HeaderX64 + 2) == 40 )
        {
          v25 = v140[5].Alignment;
        }
        else
        {
          v24 = v140[3].Alignment;
          if ( !v24 || *(_DWORD *)v24 != 523124044 )
            return (unsigned int)-1056964602;
          v25 = *(_QWORD *)(v24 + 176);
        }
        if ( !v25 )
          return (unsigned int)-1056964602;
        if ( KeGetCurrentIrql() > 2u )
          return (unsigned int)-1056964600;
        if ( !(_DWORD)a5 )
          return 0;
        v26 = IoPropagateIrpExtension(v25, v141);
        return (unsigned int)RaidNtStatusToStorStatus(v26);
      case 0x48u:
        v107 = a5;
        *v107 = (KSPIN_LOCK)ExInterlockedInsertHeadList((PLIST_ENTRY)v140, (PLIST_ENTRY)v141, a6);
        return 0;
      case 0x49u:
        v108 = a5;
        *v108 = (KSPIN_LOCK)ExInterlockedInsertTailList((PLIST_ENTRY)v140, (PLIST_ENTRY)v141, a6);
        return 0;
      case 0x4Au:
        v109 = v141;
        v109->Next = (_SLIST_ENTRY *)ExInterlockedRemoveHeadList((PLIST_ENTRY)v140, a5);
        return 0;
      case 0x4Bu:
        KeInitializeSpinLock(&v140->Alignment);
        return 0;
      case 0x4Cu:
        return (unsigned int)StorpGetPfns(v13, (_DWORD)v140, (_DWORD)v141, (_DWORD)a5, (__int64)a6, a7.QuadPart);
      case 0x4Du:
        if ( !v140 || !**(_QWORD **)(v13 - 16) )
          return (unsigned int)-1056964602;
        return (unsigned int)RaidInitializeCryptoEngine();
      case 0x4Eu:
        v110 = v141;
        if ( !v140 || !v141 )
          return (unsigned int)-1056964602;
        v111 = ((__int64 (*)(void))RaidGetAssociatedXrb)();
        v14 = 0;
        LODWORD(v110->Next) = **(_DWORD **)(v111 + 784);
        HIDWORD(v110->Next) = *(_DWORD *)(*(_QWORD *)(v111 + 784) + 4LL);
        *((_DWORD *)&v110->Next + 2) = *(_DWORD *)(*(_QWORD *)(v111 + 784) + 8LL);
        v110[1].Next = *(_SLIST_ENTRY **)(*(_QWORD *)(v111 + 784) + 16LL);
        return v14;
      case 0x4Fu:
        if ( !v141 )
          return (unsigned int)-1056964602;
        Next = (unsigned int)v141[3].Next;
        if ( Next > 0x1000 )
          return (unsigned int)-1056964598;
        if ( Next && !*((_QWORD *)&v141[3].Next + 1) || *((_QWORD *)&v141[3].Next + 1) && !Next )
          return (unsigned int)-1056964602;
        v33 = **(_QWORD **)(v13 - 16);
        if ( !v33 )
          return 0;
        StorpTelemetryMiniportEvent(v33, v140, v141, 0LL);
        return 0;
      case 0x50u:
        v114 = **(_QWORD **)(v13 - 16);
        if ( !v114 )
          return (unsigned int)-1056964602;
        if ( (*(_BYTE *)(v114 + 104) & 0x10) == 0 )
          return (unsigned int)-1056964601;
        v14 = 0;
        *(_DWORD *)(v114 + 508) = (_DWORD)v140;
        return v14;
      case 0x51u:
        StorDelayExecution((ULONG)v140);
        return 0;
      case 0x52u:
        return (unsigned int)StorpAllocateContiguousMemorySpecifyCacheNodeEx(
                               v13,
                               (_DWORD)v140,
                               (_DWORD)v141,
                               (_DWORD)a5,
                               (__int64)a6,
                               a7.LowPart,
                               a8.LowPart,
                               (__int64)a9,
                               a10);
      case 0x53u:
        return (unsigned int)StorpFreeContiguousMemorySpecifyCacheEx(v13, v140, v141, (unsigned int)a5, a6);
      case 0x54u:
        v115 = (int)v141;
        v116 = **(_QWORD **)(v13 - 16);
        if ( !v116 )
          return (unsigned int)-1056964602;
        if ( (*(_BYTE *)(v116 + 104) & 0x10) == 0 )
          return (unsigned int)-1056964601;
        v14 = 0;
        *(_DWORD *)(v116 + 508) = (_DWORD)v140;
        *(_DWORD *)(v116 + 512) = v115;
        return v14;
      case 0x55u:
      case 0x56u:
      case 0x57u:
        return (unsigned int)StorEtwMiniportEventProxy(v13, a1, &v140);
      case 0x58u:
        v14 = 0;
        v117 = a5;
        Timer = ExAllocateTimer(v140, v141, 4LL, a4);
        *v117 = Timer;
        if ( !Timer )
          return (unsigned int)-1056964607;
        return v14;
      case 0x59u:
        v119 = (_BYTE *)a7.QuadPart;
        if ( !a7.QuadPart )
          return (unsigned int)-1056964602;
        v14 = 0;
        *v119 = ExSetTimer(v140, v141, a5, a6);
        return v14;
      case 0x5Au:
        v120 = a5;
        if ( !a5 )
          return (unsigned int)-1056964602;
        v14 = 0;
        v121 = ExCancelTimer(v140, v141);
        *(_BYTE *)v120 = v121;
        if ( !v121 )
          return (unsigned int)-1056964607;
        return v14;
      case 0x5Bu:
        v122 = (_BYTE *)a7.QuadPart;
        if ( !a7.QuadPart )
          return (unsigned int)-1056964602;
        v14 = 0;
        *v122 = ExDeleteTimer(v140, (unsigned __int8)v141, (unsigned __int8)a5, a6);
        return v14;
      case 0x5Cu:
        return (unsigned int)StorpGetCurrentProcessorIndex(v13, v140);
      case 0x5Du:
        return StorAcquireSpinLockEx(v13, (unsigned int)v140, v141, a5);
      case 0x5Eu:
        return (unsigned int)StorpGetProcessorCount(v13, v140);
      case 0x5Fu:
        v123 = v141;
        if ( !v140 || !v141 )
          return (unsigned int)-1056964602;
        v14 = 0;
        LOBYTE(v123->Next) = KeRemoveQueueDpc((PRKDPC)v140);
        return v14;
      case 0x60u:
        if ( !v141 )
          return (unsigned int)-1056964602;
        v112 = (unsigned int)v141[3].Next;
        if ( v112 > 0x1000 )
          return (unsigned int)-1056964598;
        if ( v112 && !*((_QWORD *)&v141[3].Next + 1) || *((_QWORD *)&v141[3].Next + 1) && !v112 )
          return (unsigned int)-1056964602;
        v113 = **(_QWORD **)(v13 - 16);
        if ( !v113 )
          return 0;
        StorpTelemetryMiniportEvent(v113, v140, v141, (unsigned int)a5);
        return 0;
      case 0x61u:
        if ( (_DWORD)v140 || !v141 )
          return (unsigned int)-1056964602;
        v14 = 0;
        LOBYTE(v141->Next) = StorageD3InModernStandbyEnabled;
        return v14;
      case 0x62u:
        if ( !a5 || !a7.QuadPart || !(_DWORD)a6 )
          return (unsigned int)-1056964602;
        return (unsigned int)StorEtwMiniportLogError(
                               v13,
                               (_DWORD)v140,
                               (_DWORD)v141,
                               (_DWORD)a5,
                               (_DWORD)a6,
                               a7.QuadPart);
      default:
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 80LL, &WPP_6f3540a332da34b92ff0af100460ee8b_Traceguids, a1);
        }
        return v14;
    }
  }
  return 3238002694LL;
}
