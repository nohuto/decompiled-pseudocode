/*
 * XREFs of StorPortExtendedFunction @ 0x1C000E3C0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000754C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterFindUnit @ 0x1C0007964 (RaidAdapterFindUnit.c)
 *     StorpRequestTimer @ 0x1C000FA98 (StorpRequestTimer.c)
 *     StorpAllocatePool @ 0x1C00160F0 (StorpAllocatePool.c)
 *     StorpGetDeviceObjects @ 0x1C0016468 (StorpGetDeviceObjects.c)
 *     StorpFreePool @ 0x1C00164BC (StorpFreePool.c)
 *     StorEtwMiniportEventProxy @ 0x1C001A850 (StorEtwMiniportEventProxy.c)
 *     RaidGetStartIoPerfParams @ 0x1C001B0D0 (RaidGetStartIoPerfParams.c)
 *     StorpGetPfns @ 0x1C001B2F0 (StorpGetPfns.c)
 *     StorpGetOriginalMdl @ 0x1C001B5E0 (StorpGetOriginalMdl.c)
 *     StorAcquireSpinLockEx @ 0x1C001B620 (StorAcquireSpinLockEx.c)
 *     RaidGetD3ColdInterface @ 0x1C001D4D0 (RaidGetD3ColdInterface.c)
 *     StorpGetProcessorIndexFromNumber @ 0x1C0020E90 (StorpGetProcessorIndexFromNumber.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C002148C (StorPortpInvokeAcpiMethod.c)
 *     RaidNtStatusToStorStatus @ 0x1C0021518 (RaidNtStatusToStorStatus.c)
 *     RaidAdapterIsRegisteredForIdleDetection @ 0x1C0021E7C (RaidAdapterIsRegisteredForIdleDetection.c)
 *     StorpTelemetryMiniportEvent @ 0x1C0022D08 (StorpTelemetryMiniportEvent.c)
 *     StorpInitializeTimer @ 0x1C0023870 (StorpInitializeTimer.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C0024880 (StorpAdapterInitializePoFxPower.c)
 *     RaidInitializePerfOpts @ 0x1C0024F68 (RaidInitializePerfOpts.c)
 *     StorpGetMSIInfo @ 0x1C0025AB4 (StorpGetMSIInfo.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C0025B44 (StorPortpSetPowerSettingNotificationGuids.c)
 *     RaidGetD3ColdCapability @ 0x1C0025F58 (RaidGetD3ColdCapability.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     RaMiniportSaveFeatureList @ 0x1C0027318 (RaMiniportSaveFeatureList.c)
 *     StorCancelDpc @ 0x1C0027370 (StorCancelDpc.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00385B4 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidGetAssociatedXrb @ 0x1C003ADC0 (RaidGetAssociatedXrb.c)
 *     RaidInitializeCryptoEngine @ 0x1C003B204 (RaidInitializeCryptoEngine.c)
 *     RaidInitializeRpmb @ 0x1C003B35C (RaidInitializeRpmb.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C003B4B0 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_D @ 0x1C003B9A0 (WPP_SF_D.c)
 *     McTemplateK0pqqq @ 0x1C003D954 (McTemplateK0pqqq.c)
 *     RaidAdapterCacheOperationalPowerRange @ 0x1C003DEA4 (RaidAdapterCacheOperationalPowerRange.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C003DF4C (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C003DFA4 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C003E0DC (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorBuildScatterGatherListProxy @ 0x1C003E2C8 (StorBuildScatterGatherListProxy.c)
 *     StorDelayExecution @ 0x1C003E328 (StorDelayExecution.c)
 *     StorpAcquireMSISpinLock @ 0x1C003F6A0 (StorpAcquireMSISpinLock.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNode @ 0x1C003F744 (StorpAllocateContiguousMemorySpecifyCacheNode.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNodeEx @ 0x1C003F7B8 (StorpAllocateContiguousMemorySpecifyCacheNodeEx.c)
 *     StorpAllocateHostMemoryBuffer @ 0x1C003F8E0 (StorpAllocateHostMemoryBuffer.c)
 *     StorpAllocateMdl @ 0x1C003FC10 (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C003FD4C (StorpBuildMdlForNonPagedPool.c)
 *     StorpCompleteServiceIrp @ 0x1C003FF44 (StorpCompleteServiceIrp.c)
 *     StorpFlushDataBufferMdl @ 0x1C003FF9C (StorpFlushDataBufferMdl.c)
 *     StorpFreeContiguousMemorySpecifyCacheEx @ 0x1C0040004 (StorpFreeContiguousMemorySpecifyCacheEx.c)
 *     StorpFreeHostMemoryBuffer @ 0x1C0040078 (StorpFreeHostMemoryBuffer.c)
 *     StorpFreeMdl @ 0x1C00400EC (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C0040194 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C00403FC (StorpFreeWorkItem.c)
 *     StorpGetActiveGroupCount @ 0x1C00405CC (StorpGetActiveGroupCount.c)
 *     StorpGetActiveNodeCount @ 0x1C0040600 (StorpGetActiveNodeCount.c)
 *     StorpGetCurrentProcessorIndex @ 0x1C0040694 (StorpGetCurrentProcessorIndex.c)
 *     StorpGetCurrentProcessorNumber @ 0x1C00406B8 (StorpGetCurrentProcessorNumber.c)
 *     StorpGetDataInSgList @ 0x1C00406E4 (StorpGetDataInSgList.c)
 *     StorpGetGroupAffinity @ 0x1C004091C (StorpGetGroupAffinity.c)
 *     StorpGetHighestNodeNumber @ 0x1C0040978 (StorpGetHighestNodeNumber.c)
 *     StorpGetLogicalProcessorRelationship @ 0x1C00409AC (StorpGetLogicalProcessorRelationship.c)
 *     StorpGetNodeAffinity @ 0x1C0040A00 (StorpGetNodeAffinity.c)
 *     StorpGetProcessorCount @ 0x1C0040A40 (StorpGetProcessorCount.c)
 *     StorpGetRequestInfo @ 0x1C0040A78 (StorpGetRequestInfo.c)
 *     StorpGetSystemAddress @ 0x1C0040CDC (StorpGetSystemAddress.c)
 *     StorpInitializeWorkItem @ 0x1C0040E58 (StorpInitializeWorkItem.c)
 *     StorpLogSystemEvent @ 0x1C0040F9C (StorpLogSystemEvent.c)
 *     StorpPutScatterGatherList @ 0x1C00410D8 (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C00411D8 (StorpQueueWorkItem.c)
 *     StorpReleaseMSISpinLock @ 0x1C0041374 (StorpReleaseMSISpinLock.c)
 *     StorpSetUnitAttributes @ 0x1C0041408 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0041480 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterPerfStates @ 0x1C0042D30 (RaidRegisterPerfStates.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C004EE00 (StorpLogRegisterAdapterPerfStates.c)
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
  unsigned int v11; // r15d
  __int64 v13; // r14
  unsigned int v14; // edi
  _DWORD *v15; // rbx
  unsigned __int64 v16; // rdx
  __int64 result; // rax
  KSPIN_LOCK Alignment; // rcx
  KSPIN_LOCK v19; // rcx
  unsigned int v20; // edi
  unsigned int v21; // edi
  struct _SLIST_ENTRY *v22; // rbx
  struct _SLIST_ENTRY *v23; // rbx
  PKSPIN_LOCK v24; // rbx
  struct _SLIST_ENTRY *v25; // rbx
  union _SLIST_HEADER *v26; // rdx
  int v27; // eax
  LARGE_INTEGER *v28; // rbx
  union _LARGE_INTEGER *v29; // rcx
  struct _SLIST_ENTRY *v30; // r12
  int v31; // ecx
  union _SLIST_HEADER *v32; // r13
  __int64 v33; // rsi
  _DWORD *AssociatedXrb; // rax
  int v35; // r14d
  unsigned __int8 CurrentIrql; // r12
  __int64 Unit; // rax
  __int64 v38; // rsi
  int v39; // edx
  union _SLIST_HEADER *v40; // r13
  unsigned int v41; // r12d
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // edi
  PKSPIN_LOCK v46; // rsi
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rbx
  _QWORD *v50; // rcx
  unsigned int v51; // edx
  unsigned int v52; // edi
  _QWORD *v53; // rcx
  unsigned int v54; // r8d
  unsigned int v55; // edi
  PKSPIN_LOCK v56; // rsi
  __int64 v57; // rbx
  __int64 v58; // rax
  _QWORD *v59; // rcx
  unsigned int v60; // edx
  _QWORD *v61; // rcx
  unsigned int v62; // r8d
  struct _SLIST_ENTRY *v63; // r12
  PKSPIN_LOCK v64; // r13
  _QWORD *v65; // rbx
  __int64 v66; // rdi
  __int64 v67; // rax
  unsigned int v68; // eax
  int D3ColdInterface; // eax
  __int64 Arg2; // rdi
  _QWORD *v71; // rax
  __int64 v72; // rbx
  _QWORD *v73; // rcx
  int v74; // r12d
  int v75; // r13d
  unsigned int v76; // edi
  __int64 QuadPart; // rsi
  _QWORD *v78; // rax
  __int64 v79; // rbx
  __int64 v80; // rax
  unsigned int v81; // r13d
  PHYSICAL_ADDRESS v82; // rsi
  _QWORD *v83; // rax
  __int64 v84; // rbx
  unsigned __int8 v85; // r9
  __int64 v86; // rcx
  unsigned __int8 v87; // al
  __int64 v88; // rdx
  union _SLIST_HEADER *v89; // rdx
  struct _SLIST_ENTRY *v90; // rbx
  PKSPIN_LOCK v91; // rsi
  __int64 v92; // rcx
  struct _SLIST_ENTRY *v93; // rbx
  union _SLIST_HEADER *v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rax
  struct _DEVICE_OBJECT *v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rcx
  KSPIN_LOCK v100; // rcx
  KSPIN_LOCK v101; // rcx
  unsigned int v102; // eax
  PKSPIN_LOCK v103; // rbx
  PKSPIN_LOCK v104; // rbx
  struct _SLIST_ENTRY *v105; // rbx
  struct _SLIST_ENTRY *v106; // rbx
  __int64 v107; // rax
  _SLIST_ENTRY *v108; // rcx
  unsigned int Next; // eax
  __int64 v110; // rcx
  int v111; // edx
  __int64 v112; // rcx
  PKSPIN_LOCK v113; // rbx
  __int64 Timer; // rax
  _BYTE *v115; // rbx
  PKSPIN_LOCK v116; // rbx
  char v117; // al
  _BYTE *v118; // rbx
  struct _SLIST_ENTRY *v119; // rbx
  int v120; // edx
  __int64 v121; // rcx
  unsigned int v122; // edi
  int v123; // [rsp+50h] [rbp-19h]
  int v124; // [rsp+50h] [rbp-19h]
  int v125; // [rsp+58h] [rbp-11h]
  PHYSICAL_ADDRESS v126; // [rsp+58h] [rbp-11h]
  unsigned int LowPart; // [rsp+58h] [rbp-11h]
  unsigned int v128; // [rsp+60h] [rbp-9h]
  PHYSICAL_ADDRESS v129; // [rsp+60h] [rbp-9h]
  unsigned int v130; // [rsp+60h] [rbp-9h]
  PKSPIN_LOCK v131; // [rsp+68h] [rbp-1h] BYREF
  __int64 v132; // [rsp+70h] [rbp+7h]
  union _SLIST_HEADER *v134; // [rsp+E0h] [rbp+77h] BYREF
  struct _SLIST_ENTRY *v135; // [rsp+E8h] [rbp+7Fh]

  v134 = (union _SLIST_HEADER *)a3;
  v135 = (struct _SLIST_ENTRY *)a4;
  v11 = 0;
  v13 = a2;
  v14 = -1056964606;
  v15 = 0LL;
  if ( !a2 )
    return 3238002694LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 79LL, &WPP_890ff0257e5a37fc61b1814295f1a13c_Traceguids, a1);
    v13 = a2;
  }
  v16 = 0x1C0000000uLL;
  switch ( a1 )
  {
    case 0u:
      return StorpAllocatePool(v13, (unsigned int)v134, (unsigned int)v135, a5);
    case 1u:
      return StorpFreePool(v13, v134);
    case 2u:
      return StorpAllocateMdl(v13, v134, (unsigned int)v135, a5);
    case 3u:
      return StorpFreeMdl(v13, v134);
    case 4u:
      return StorpBuildMdlForNonPagedPool(v13, v134);
    case 5u:
      return StorpGetSystemAddress(v13, v134, 0LL, v135);
    case 6u:
      return StorpGetOriginalMdl(v13, v134, 0LL, v135);
    case 7u:
      return StorpCompleteServiceIrp(v13, v134);
    case 8u:
      return StorpGetDeviceObjects(v13, v134, v135, a5);
    case 9u:
      return StorBuildScatterGatherListProxy(v13, &v134);
    case 0xAu:
      return StorpPutScatterGatherList(v13, v134, (unsigned __int8)v135);
    case 0xBu:
      return StorpAcquireMSISpinLock(v13, (unsigned int)v134, v135);
    case 0xCu:
      return StorpReleaseMSISpinLock(v13, (unsigned int)v134, (unsigned int)v135);
    case 0xDu:
      return StorpGetMSIInfo(v13, (unsigned int)v134, v135);
    case 0xEu:
      return RaidInitializePerfOpts(v13, (unsigned __int8)v134, v135);
    case 0xFu:
      return RaidGetStartIoPerfParams(v13, v134, v135);
    case 0x10u:
      return StorpLogSystemEvent(v13, v134, v135);
    case 0x11u:
      return StorpGetCurrentProcessorNumber(v13, v134);
    case 0x12u:
      return StorpGetActiveGroupCount(v13, v134);
    case 0x13u:
      return StorpGetGroupAffinity(v13, (unsigned __int16)v134, v135);
    case 0x14u:
      return StorpGetActiveNodeCount(v13, v134);
    case 0x15u:
      return StorpGetNodeAffinity(v13, (unsigned int)v134, v135);
    case 0x16u:
      return StorpGetHighestNodeNumber(v13, v134);
    case 0x17u:
      return StorpGetLogicalProcessorRelationship(v13, v134, (unsigned int)v135, a5, a6);
    case 0x18u:
      return StorpAllocateContiguousMemorySpecifyCacheNode(
               v13,
               (_DWORD)v134,
               (_DWORD)v135,
               (_DWORD)a5,
               (__int64)a6,
               a7.LowPart,
               a8.LowPart,
               (__int64)a9);
    case 0x19u:
      MmFreeContiguousMemorySpecifyCache(v134, (SIZE_T)v135, (MEMORY_CACHING_TYPE)a5);
      return 0LL;
    case 0x1Au:
      return StorPortpSetPowerSettingNotificationGuids(v13, (unsigned int)v134, v135);
    case 0x1Bu:
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD))StorPortpInvokeAcpiMethod)(
               v13,
               v134,
               (unsigned int)v135,
               a5,
               (_DWORD)a6,
               (PHYSICAL_ADDRESS)a7.QuadPart,
               a8.LowPart,
               a9);
    case 0x1Cu:
      return StorpGetRequestInfo(v13, v134, v135);
    case 0x1Du:
      return StorpInitializeWorkItem(v13, v134);
    case 0x1Eu:
      return StorpQueueWorkItem(v13, v134, v135, a5);
    case 0x1Fu:
      return StorpFreeWorkItem(v13, v134);
    case 0x20u:
      return StorpInitializeTimer(v13, v134);
    case 0x21u:
      return StorpRequestTimer(v13, (_DWORD)v134, (_DWORD)v135, (_DWORD)a5, (__int64)a6, a7.QuadPart);
    case 0x22u:
      return StorpFreeTimer(v13, v134);
    case 0x23u:
      InitializeSListHead(v134);
      return 0LL;
    case 0x24u:
      v22 = v135;
      v22->Next = ExpInterlockedFlushSList(v134);
      return 0LL;
    case 0x25u:
      v23 = v135;
      v23->Next = ExpInterlockedPopEntrySList(v134);
      return 0LL;
    case 0x26u:
      v24 = a5;
      *v24 = (KSPIN_LOCK)ExpInterlockedPushEntrySList(v134, v135);
      return 0LL;
    case 0x27u:
      v25 = v135;
      LOWORD(v25->Next) = ExQueryDepthSList(v134);
      return 0LL;
    case 0x28u:
      if ( !v134 || !v135 )
        return 3238002694LL;
      if ( *((_BYTE *)&v134->HeaderX64 + 2) == 40 )
      {
        Alignment = v134[5].Alignment;
      }
      else
      {
        v19 = v134[3].Alignment;
        if ( !v19 || *(_DWORD *)v19 != 523124044 )
          goto LABEL_53;
        Alignment = *(_QWORD *)(v19 + 176);
      }
      if ( Alignment )
      {
        v20 = -1056964607;
        if ( (int)IoGetActivityIdIrp(Alignment, v135) >= 0 )
          return 0;
        return v20;
      }
LABEL_53:
      v21 = -1056964607;
      if ( EtwActivityIdControl(3u, (LPGUID)v135) >= 0 )
        return 0;
      return v21;
    case 0x29u:
      v26 = v134;
      v27 = *(_DWORD *)(**(_QWORD **)(v13 - 16) + 56LL);
      if ( v27 == -1 )
        return 3238002697LL;
      if ( !v134 || LOWORD(v134->Alignment) != 1 || *((_DWORD *)&v134->HeaderX64 + 1) < 4u )
        return 3238002694LL;
      *((_WORD *)&v134->HeaderX64 + 1) = v27;
      result = 0LL;
      *((_WORD *)&v26->HeaderX64 + 4) = -1;
      *((_BYTE *)&v26->HeaderX64 + 10) = -1;
      return result;
    case 0x2Au:
      LOBYTE(a3) = 1;
      return StorpGetOriginalMdl(v13, v134, a3, v135);
    case 0x2Bu:
      LOBYTE(a3) = 1;
      return StorpGetSystemAddress(v13, v134, a3, v135);
    case 0x2Cu:
      return StorpGetDataInSgList(v13, v134, v135);
    case 0x2Eu:
      return StorpSetUnitAttributes(v13, v134, (unsigned int)v135);
    case 0x2Fu:
      v28 = (LARGE_INTEGER *)v135;
      v29 = (union _LARGE_INTEGER *)v134;
      if ( !v135 )
        return 3238002694LL;
      if ( v134 )
        v134->Alignment = 1LL;
      if ( UseQPCTime )
        *v28 = KeQueryPerformanceCounter(v29);
      else
        v28->QuadPart = KeQueryUnbiasedInterruptTime();
      return 0LL;
    case 0x30u:
      if ( KeGetCurrentIrql() )
        return 3238002696LL;
      if ( v134 )
        return StorpUnitInitializePoFxPower(v13, v134, v135, a5);
      else
        return StorpAdapterInitializePoFxPower(v13, v135, a5);
    case 0x31u:
      v14 = 0;
      v30 = v135;
      v31 = (int)a6;
      v32 = v134;
      v128 = (unsigned int)a5;
      v124 = (int)a6;
      v33 = **(_QWORD **)(v13 - 16);
      if ( v135 )
      {
        AssociatedXrb = (_DWORD *)RaidGetAssociatedXrb(v135);
        v15 = AssociatedXrb;
        if ( !AssociatedXrb || *AssociatedXrb != 523124044 )
          return 3238002694LL;
        v31 = v124;
        if ( BYTE2(v30->Next) == 40 )
          v35 = *((_DWORD *)&v30[1].Next + 2);
        else
          v35 = *((_DWORD *)&v30->Next + 3);
      }
      else
      {
        v35 = 0;
      }
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 2u )
        return 3238002696LL;
      if ( v31 )
        return 3238002694LL;
      if ( v32 )
      {
        if ( LOWORD(v32->Alignment) != 1 )
          return 3238002694LL;
        if ( *((_DWORD *)&v32->HeaderX64 + 1) < 4u )
          return 3238002694LL;
        LOWORD(v124) = *((_WORD *)&v32->HeaderX64 + 4);
        BYTE2(v124) = *((_BYTE *)&v32->HeaderX64 + 10);
        Unit = RaidAdapterFindUnit(v33, v124);
        v38 = Unit;
        if ( !Unit )
          return 3238002694LL;
        if ( (v35 & 0x100800) == 0 )
          goto LABEL_315;
        if ( RaidUnitCheckAndAcquirePoFx(Unit) )
          goto LABEL_175;
        if ( (unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(*(_QWORD *)(v38 + 24)) )
        {
LABEL_315:
          if ( CurrentIrql == 2 || (*(_BYTE *)(v38 + 449) & 1) != 0 || *(char *)(v38 + 448) < 0 )
            v11 = 2;
          result = RaidUnitPoFxActivateComponentFromMiniport(v38, v128, v11);
          v14 = result;
          if ( v15 )
          {
            *((_BYTE *)v15 + 16) |= 0x80u;
            return result;
          }
        }
      }
      else
      {
        if ( !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(v33) || (v35 & 0x100800) != 0 )
          return 3238002695LL;
        if ( CurrentIrql == 2 || (*(_BYTE *)(v33 + 108) & 3) != 0 )
          v11 = 2;
        result = RaidAdapterPoFxActivateComponentFromMiniport(v33, v128, v11);
        v14 = result;
        if ( v15 )
        {
          *((_BYTE *)v15 + 16) |= 0x80u;
          return result;
        }
      }
      return v14;
    case 0x32u:
      v14 = 0;
      v39 = (int)a6;
      v40 = v134;
      v41 = (unsigned int)a5;
      v125 = (int)a6;
      v42 = **(_QWORD **)(v13 - 16);
      if ( !v135 )
        goto LABEL_123;
      v43 = ((__int64 (*)(void))RaidGetAssociatedXrb)();
      v15 = (_DWORD *)v43;
      if ( !v43 || *(_DWORD *)v43 != 523124044 )
        return 3238002694LL;
      if ( *(char *)(v43 + 16) >= 0 )
        return v14;
      v39 = v125;
LABEL_123:
      if ( KeGetCurrentIrql() > 2u && !v15 )
        return 3238002696LL;
      if ( v39 )
        return 3238002694LL;
      if ( !v40 )
      {
        if ( !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(v42) )
          return 3238002695LL;
        if ( KeGetCurrentIrql() <= 2u )
          return RaidAdapterPoFxIdleComponentFromMiniport(v42, v41, 0LL);
        *((_BYTE *)v15 + 17) |= 1u;
        result = 3238002700LL;
        v15[187] = v41;
        return result;
      }
      if ( LOWORD(v40->Alignment) == 1 && *((_DWORD *)&v40->HeaderX64 + 1) >= 4u )
      {
        LOWORD(v123) = *((_WORD *)&v40->HeaderX64 + 4);
        BYTE2(v123) = *((_BYTE *)&v40->HeaderX64 + 10);
        v44 = RaidAdapterFindUnit(v42, v123);
        if ( v44 )
        {
          if ( KeGetCurrentIrql() <= 2u )
            return RaidUnitPoFxIdleComponentFromMiniport(v44, v41);
          *((_BYTE *)v15 + 17) |= 2u;
          result = 3238002700LL;
          v15[187] = v41;
          return result;
        }
      }
      return 3238002694LL;
    case 0x33u:
      v45 = (unsigned int)v135;
      v46 = a5;
      v47 = **(_QWORD **)(v13 - 16);
      if ( KeGetCurrentIrql() > 2u )
        return 3238002696LL;
      if ( !v134 )
      {
        if ( !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(**(_QWORD **)(v13 - 16)) )
          return 3238002695LL;
        v53 = *(_QWORD **)(v47 + 5152);
        v54 = *(_DWORD *)(v53[1] + 8LL);
        if ( v45 + 1 >= v54 && v45 + 1 <= v54 )
        {
          PoFxSetComponentLatency(*v53, v45, v46);
          return 0LL;
        }
        return 3238002694LL;
      }
      if ( LOWORD(v134->Alignment) != 1 )
        return 3238002694LL;
      if ( *((_DWORD *)&v134->HeaderX64 + 1) < 4u )
        return 3238002694LL;
      LOWORD(v123) = *((_WORD *)&v134->HeaderX64 + 4);
      BYTE2(v123) = *((_BYTE *)&v134->HeaderX64 + 10);
      v48 = RaidAdapterFindUnit(v47, v123);
      v49 = v48;
      if ( !v48 )
        return 3238002694LL;
      if ( !RaidUnitCheckAndAcquirePoFx(v48) )
        return 3238002695LL;
      v50 = *(_QWORD **)(v49 + 1744);
      v51 = *(_DWORD *)(v50[1] + 8LL);
      if ( v45 + 1 >= v51 && v45 + 1 <= v51 )
      {
        PoFxSetComponentLatency(*v50, v45, v46);
        v52 = 0;
        goto LABEL_147;
      }
      goto LABEL_146;
    case 0x34u:
      v55 = (unsigned int)v135;
      v56 = a5;
      v57 = **(_QWORD **)(v13 - 16);
      if ( KeGetCurrentIrql() > 2u )
        return 3238002696LL;
      if ( !v134 )
      {
        if ( !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(**(_QWORD **)(v13 - 16)) )
          return 3238002695LL;
        v61 = *(_QWORD **)(v57 + 5152);
        v62 = *(_DWORD *)(v61[1] + 8LL);
        if ( v55 + 1 >= v62 && v55 + 1 <= v62 )
        {
          PoFxSetComponentResidency(*v61, v55, v56);
          return 0LL;
        }
        return 3238002694LL;
      }
      if ( LOWORD(v134->Alignment) != 1 )
        return 3238002694LL;
      if ( *((_DWORD *)&v134->HeaderX64 + 1) < 4u )
        return 3238002694LL;
      LOWORD(v123) = *((_WORD *)&v134->HeaderX64 + 4);
      BYTE2(v123) = *((_BYTE *)&v134->HeaderX64 + 10);
      v58 = RaidAdapterFindUnit(v57, v123);
      v49 = v58;
      if ( !v58 )
        return 3238002694LL;
      if ( !RaidUnitCheckAndAcquirePoFx(v58) )
        return 3238002695LL;
      v59 = *(_QWORD **)(v49 + 1744);
      v60 = *(_DWORD *)(v59[1] + 8LL);
      if ( v55 + 1 < v60 || v55 + 1 > v60 )
      {
LABEL_146:
        v52 = -1056964602;
      }
      else
      {
        PoFxSetComponentResidency(*v59, v55, v56);
        v52 = 0;
      }
LABEL_147:
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v49 + 1736));
      return v52;
    case 0x35u:
      v63 = v135;
      v64 = a5;
      v65 = a9;
      v131 = a6;
      v129 = a7;
      v126 = a8;
      v66 = **(_QWORD **)(v13 - 16);
      if ( KeGetCurrentIrql() <= 2u )
      {
        if ( v134 )
        {
          if ( LOWORD(v134->Alignment) != 1 )
            return 3238002694LL;
          if ( *((_DWORD *)&v134->HeaderX64 + 1) < 4u )
            return 3238002694LL;
          LOWORD(v123) = *((_WORD *)&v134->HeaderX64 + 4);
          BYTE2(v123) = *((_BYTE *)&v134->HeaderX64 + 10);
          v67 = RaidAdapterFindUnit(v66, v123);
          v38 = v67;
          if ( !v67 )
            return 3238002694LL;
          if ( RaidUnitCheckAndAcquirePoFx(v67) )
          {
            v68 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                    **(_QWORD **)(v38 + 1744),
                    v63,
                    v64,
                    v131,
                    (PHYSICAL_ADDRESS)v129.QuadPart,
                    (PHYSICAL_ADDRESS)v126.QuadPart,
                    v65);
            v14 = RaidNtStatusToStorStatus(v68);
LABEL_175:
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v38 + 1736));
            return v14;
          }
        }
        else if ( (unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(**(_QWORD **)(v13 - 16)) )
        {
          D3ColdInterface = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                              **(_QWORD **)(v66 + 5152),
                              v63,
                              v64,
                              v131,
                              (PHYSICAL_ADDRESS)v129.QuadPart,
                              (PHYSICAL_ADDRESS)v126.QuadPart,
                              v65);
          return RaidNtStatusToStorStatus((unsigned int)D3ColdInterface);
        }
        return 3238002695LL;
      }
      if ( a9 )
        *a9 = 0LL;
      return 3238002696LL;
    case 0x36u:
      return StorpFlushDataBufferMdl(v13, v134);
    case 0x37u:
      v89 = v134;
      v90 = v135;
      v91 = a5;
      v92 = **(_QWORD **)(v13 - 16);
      if ( !a5 )
        return 3238002694LL;
      if ( !v92 )
        return 3238002694LL;
      *(_DWORD *)a5 = 0;
      if ( v89 )
      {
        if ( LOWORD(v89->Alignment) != 1 )
          return 3238002694LL;
        if ( *((_DWORD *)&v89->HeaderX64 + 1) < 4u )
          return 3238002694LL;
        LOWORD(v123) = *((_WORD *)&v89->HeaderX64 + 4);
        BYTE2(v123) = *((_BYTE *)&v89->HeaderX64 + 10);
        if ( !RaidAdapterFindUnit(v92, v123) )
          return 3238002694LL;
      }
      if ( v90->Next == (_SLIST_ENTRY *)0x481F895FDCAF9C10LL && *((_QWORD *)&v90->Next + 1) == 0x3356F5D2CED492A4LL )
      {
        *(_DWORD *)v91 = (unsigned __int8)g_InWinPE;
        return 0LL;
      }
      if ( v90->Next == (_SLIST_ENTRY *)0x444B2B37D52CE820LL && *((_QWORD *)&v90->Next + 1) == 0x7BD091E5920033A6LL )
      {
        *(_DWORD *)v91 = 1;
        return 0LL;
      }
      if ( v90->Next != (_SLIST_ENTRY *)0x48E8F89B2B9443ACLL || *((_QWORD *)&v90->Next + 1) != 0x5AFD6EC9B62C92B2LL )
        return v14;
      *(_DWORD *)v91 = (unsigned __int8)ExIsSoftBoot();
      return 0LL;
    case 0x38u:
      return StorpGetProcessorIndexFromNumber(v13, v134, v135);
    case 0x39u:
      Arg2 = (unsigned int)v135;
      if ( v134 )
        return 3238002694LL;
      v71 = *(_QWORD **)(v13 - 16);
      v72 = *v71;
      if ( !*v71 || !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(*v71) )
        return 3238002694LL;
      if ( (*(_BYTE *)(v72 + 108) & 0x40) != 0 )
        return 3238002689LL;
      v73 = *(_QWORD **)(v72 + 5152);
      *(_DWORD *)(v72 + 5168) = Arg2;
      PoFxSetDeviceIdleTimeout(*v73, 10000 * Arg2);
      if ( !StorEtwLoggingEnabled || (byte_1C00617E2 & 0x10) == 0 )
        return 0LL;
      McTemplateK0pqqq(
        (PMCGEN_TRACE_CONTEXT)&StorPortEventProvider_Context,
        &EventAdapterIdleTimeoutSet,
        0LL,
        **(const void ***)(v72 + 5152),
        *(_DWORD *)(v72 + 56),
        Arg2,
        *(_DWORD *)(v72 + 5168));
      return 0LL;
    case 0x3Au:
    case 0x3Bu:
    case 0x3Cu:
      return v14;
    case 0x3Du:
      if ( !v134 )
        return 3238002694LL;
      LOBYTE(v134->Alignment) = g_OSisUpgrade;
      return 0LL;
    case 0x3Eu:
      LOBYTE(v16) = 1;
      return StorAdapterDeviceRegistryKeyProxy(v13, v16, &v134);
    case 0x3Fu:
      return StorAdapterDeviceRegistryKeyProxy(v13, 0LL, &v134);
    case 0x40u:
      v98 = **(_QWORD **)(v13 - 16);
      if ( !v98 || (unsigned int)v134 >= 0x14 )
        return 3238002694LL;
      if ( (*(_BYTE *)(v98 + 560) & 1) == 0 )
        return 3238002689LL;
      *(_DWORD *)(v98 + 4420) = (_DWORD)v134;
      return 0LL;
    case 0x41u:
      v74 = (int)v135;
      v75 = (int)a5;
      v76 = (unsigned int)a6;
      QuadPart = a7.QuadPart;
      if ( v134 )
        return 3238002694LL;
      v78 = *(_QWORD **)(v13 - 16);
      v79 = *v78;
      if ( !*v78 )
        return 3238002694LL;
      if ( !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(*v78) )
        return 3238002689LL;
      v80 = *(_QWORD *)(v79 + 5152);
      if ( *(_BYTE *)(v80 + 28) )
        return 3238002689LL;
      D3ColdInterface = RaidRegisterPerfStates(*(_QWORD *)(v79 + 8), v74, v75, v76, QuadPart, *(_QWORD *)v80);
      if ( D3ColdInterface < 0 )
        return RaidNtStatusToStorStatus((unsigned int)D3ColdInterface);
      if ( (unsigned __int8)RaidAdapterCacheOperationalPowerRange(*(_QWORD *)(v79 + 5152), v76, QuadPart) )
      {
        *(_QWORD *)(*(_QWORD *)(v79 + 5152) + 48LL) = -1LL;
        *(_QWORD *)(*(_QWORD *)(v79 + 5152) + 56LL) = -1LL;
        *(_QWORD *)(*(_QWORD *)(v79 + 5152) + 64LL) = -1LL;
      }
      *(_BYTE *)(*(_QWORD *)(v79 + 5152) + 28LL) = v76;
      StorpLogRegisterAdapterPerfStates(v79, QuadPart);
      return 0LL;
    case 0x42u:
      v81 = (unsigned int)a6;
      v130 = (unsigned int)v135;
      v82 = a8;
      LowPart = a7.LowPart;
      if ( v134 || (_DWORD)a5 )
        return 3238002694LL;
      v83 = *(_QWORD **)(v13 - 16);
      v84 = *v83;
      if ( !*v83 || !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(*v83) )
        return v14;
      v85 = KeGetCurrentIrql();
      v86 = *(_QWORD *)(v84 + 5152);
      v131 = 0LL;
      v132 = 0LL;
      v87 = *(_BYTE *)(v86 + 28);
      if ( !v87 || v81 >= v87 )
        return 3238002694LL;
      v88 = 2LL;
      LODWORD(v131) = v81;
      LODWORD(v132) = LowPart;
      if ( v85 < 2u )
        v88 = 0LL;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxIssueComponentPerfStateChange)(
        *(_QWORD *)v86,
        v88,
        v130,
        &v131,
        (PHYSICAL_ADDRESS)v82.QuadPart);
      return 0LL;
    case 0x43u:
      if ( KeGetCurrentIrql() )
        return 3238002696LL;
      v93 = v135;
      v14 = -1056964602;
      v94 = v134;
      if ( !v135 )
        return v14;
      LOBYTE(v135->Next) = 0;
      v95 = **(_QWORD **)(a2 - 16);
      if ( !v95 )
        return v14;
      if ( v94 )
      {
        if ( LOWORD(v94->Alignment) != 1 )
          return v14;
        if ( *((_DWORD *)&v94->HeaderX64 + 1) < 4u )
          return v14;
        LOWORD(v123) = *((_WORD *)&v94->HeaderX64 + 4);
        BYTE2(v123) = *((_BYTE *)&v94->HeaderX64 + 10);
        v96 = RaidAdapterFindUnit(v95, v123);
        if ( !v96 )
          return v14;
        v97 = *(struct _DEVICE_OBJECT **)(v96 + 8);
      }
      else
      {
        v97 = *(struct _DEVICE_OBJECT **)(v95 + 8);
      }
      if ( !v97 )
        return v14;
      v131 = 0LL;
      D3ColdInterface = RaidGetD3ColdInterface(v97);
      if ( D3ColdInterface < 0 )
        return RaidNtStatusToStorStatus((unsigned int)D3ColdInterface);
      LOBYTE(v93->Next) = RaidGetD3ColdCapability(v131);
      return 0LL;
    case 0x44u:
      if ( v134 )
        return 3238002695LL;
      return RaidInitializeRpmb(v13, v135);
    case 0x45u:
      return StorpAllocateHostMemoryBuffer(v13, (int)v134, (int)v135, (int)a5, (int)a6, a7, a8, (__int64)a9, a10, a11);
    case 0x46u:
      return StorpFreeHostMemoryBuffer(v13, v134, (unsigned int)v135);
    case 0x47u:
      v99 = **(_QWORD **)(v13 - 16);
      if ( !v99 )
        return 3238002694LL;
      if ( !*(_BYTE *)(v99 + 516) )
        return 3238002695LL;
      if ( !v134 || !v135 )
        return 3238002694LL;
      if ( *((_BYTE *)&v134->HeaderX64 + 2) == 40 )
      {
        v100 = v134[5].Alignment;
      }
      else
      {
        v101 = v134[3].Alignment;
        if ( !v101 || *(_DWORD *)v101 != 523124044 )
          return 3238002694LL;
        v100 = *(_QWORD *)(v101 + 176);
      }
      if ( !v100 )
        return 3238002694LL;
      if ( KeGetCurrentIrql() > 2u )
        return 3238002696LL;
      if ( !(_DWORD)a5 )
        return 0LL;
      v102 = IoPropagateIrpExtension();
      return RaidNtStatusToStorStatus(v102);
    case 0x48u:
      v103 = a5;
      *v103 = (KSPIN_LOCK)ExInterlockedInsertHeadList((PLIST_ENTRY)v134, (PLIST_ENTRY)v135, a6);
      return 0LL;
    case 0x49u:
      v104 = a5;
      *v104 = (KSPIN_LOCK)ExInterlockedInsertTailList((PLIST_ENTRY)v134, (PLIST_ENTRY)v135, a6);
      return 0LL;
    case 0x4Au:
      v105 = v135;
      v105->Next = (_SLIST_ENTRY *)ExInterlockedRemoveHeadList((PLIST_ENTRY)v134, a5);
      return 0LL;
    case 0x4Bu:
      KeInitializeSpinLock(&v134->Alignment);
      return 0LL;
    case 0x4Cu:
      return StorpGetPfns(v13, (_DWORD)v134, (_DWORD)v135, (_DWORD)a5, (__int64)a6, a7.QuadPart);
    case 0x4Du:
      if ( !v134 || !**(_QWORD **)(v13 - 16) )
        return 3238002694LL;
      return RaidInitializeCryptoEngine();
    case 0x4Eu:
      v106 = v135;
      if ( !v134 || !v135 )
        return 3238002694LL;
      v107 = ((__int64 (*)(void))RaidGetAssociatedXrb)();
      LODWORD(v106->Next) = **(_DWORD **)(v107 + 784);
      HIDWORD(v106->Next) = *(_DWORD *)(*(_QWORD *)(v107 + 784) + 4LL);
      *((_DWORD *)&v106->Next + 2) = *(_DWORD *)(*(_QWORD *)(v107 + 784) + 8LL);
      v108 = *(_SLIST_ENTRY **)(*(_QWORD *)(v107 + 784) + 16LL);
      result = 0LL;
      v106[1].Next = v108;
      return result;
    case 0x4Fu:
      if ( !v135 )
        return 3238002694LL;
      Next = (unsigned int)v135[3].Next;
      if ( Next > 0x1000 )
        return 3238002698LL;
      if ( Next && !*((_QWORD *)&v135[3].Next + 1) || *((_QWORD *)&v135[3].Next + 1) && !Next )
        return 3238002694LL;
      StorpTelemetryMiniportEvent(**(_QWORD **)(v13 - 16), v134);
      return 0LL;
    case 0x50u:
      v110 = **(_QWORD **)(v13 - 16);
      if ( !v110 )
        return 3238002694LL;
      if ( (*(_BYTE *)(v110 + 104) & 0x10) == 0 )
        return 3238002695LL;
      *(_DWORD *)(v110 + 524) = (_DWORD)v134;
      return 0LL;
    case 0x51u:
      StorDelayExecution((ULONG)v134);
      return 0LL;
    case 0x52u:
      return StorpAllocateContiguousMemorySpecifyCacheNodeEx(
               v13,
               (_DWORD)v134,
               (_DWORD)v135,
               (_DWORD)a5,
               (__int64)a6,
               a7.LowPart,
               a8.LowPart,
               (__int64)a9,
               a10);
    case 0x53u:
      return StorpFreeContiguousMemorySpecifyCacheEx(v13, v134, v135, (unsigned int)a5, a6);
    case 0x54u:
      v111 = (int)v135;
      v112 = **(_QWORD **)(v13 - 16);
      if ( !v112 )
        return 3238002694LL;
      if ( (*(_BYTE *)(v112 + 104) & 0x10) == 0 )
        return 3238002695LL;
      *(_DWORD *)(v112 + 524) = (_DWORD)v134;
      result = 0LL;
      *(_DWORD *)(v112 + 528) = v111;
      return result;
    case 0x55u:
    case 0x56u:
    case 0x57u:
      return StorEtwMiniportEventProxy(v13, a1, &v134);
    case 0x58u:
      v14 = 0;
      v113 = a5;
      Timer = ExAllocateTimer(v134, v135, 4LL, a4);
      *v113 = Timer;
      if ( !Timer )
        return 3238002689LL;
      return v14;
    case 0x59u:
      v115 = (_BYTE *)a7.QuadPart;
      if ( !a7.QuadPart )
        return 3238002694LL;
      *v115 = ExSetTimer(v134, v135, a5, a6);
      return 0LL;
    case 0x5Au:
      v116 = a5;
      if ( !a5 )
        return 3238002694LL;
      v14 = 0;
      v117 = ExCancelTimer(v134, v135);
      *(_BYTE *)v116 = v117;
      if ( v117 )
        return v14;
      return 3238002689LL;
    case 0x5Bu:
      v118 = (_BYTE *)a7.QuadPart;
      if ( !a7.QuadPart )
        return 3238002694LL;
      *v118 = ExDeleteTimer(v134, (unsigned __int8)v135, (unsigned __int8)a5, a6);
      return 0LL;
    case 0x5Cu:
      return StorpGetCurrentProcessorIndex(v13, v134);
    case 0x5Du:
      return StorAcquireSpinLockEx(v13, (unsigned int)v134, v135, a5);
    case 0x5Eu:
      return StorpGetProcessorCount(v13, v134);
    case 0x5Fu:
      v119 = v135;
      if ( !v134 || !v135 )
        return 3238002694LL;
      LOBYTE(v119->Next) = StorCancelDpc(v13);
      return 0LL;
    case 0x67u:
      v120 = (int)v134;
      if ( (unsigned int)v134 > 1 )
        v120 = 1;
      if ( !v135 )
        return 3238002694LL;
      if ( v120 != 1 )
        return 3238002694LL;
      v121 = **(_QWORD **)(v13 - 16);
      if ( !v121 )
        return 3238002694LL;
      v122 = -1056964607;
      if ( (int)RaMiniportSaveFeatureList(v121 + 312) >= 0 )
        return 0;
      return v122;
    default:
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 80LL, &WPP_890ff0257e5a37fc61b1814295f1a13c_Traceguids, a1);
      }
      return v14;
  }
}
