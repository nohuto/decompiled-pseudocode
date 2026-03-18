/*
 * XREFs of ACPIGet @ 0x1C0002200
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C0007290 (ACPICMButtonStartWorker.c)
 *     ACPIThermalLoopEx @ 0x1C0008C54 (ACPIThermalLoopEx.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000CEC0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIDetectFilterDevices @ 0x1C000CF60 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C000D28C (ACPIDetectPdoDevices.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C000FBD0 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C0010150 (ACPIBuildProcessDevicePhaseSub.c)
 *     IsPciBusAsyncWorker @ 0x1C0010D70 (IsPciBusAsyncWorker.c)
 *     ACPIDetectDockDevices @ 0x1C0011CE0 (ACPIDetectDockDevices.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0015700 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     IsPciDeviceWorker @ 0x1C0022520 (IsPciDeviceWorker.c)
 *     GetPciAddressWorker @ 0x1C0023040 (GetPciAddressWorker.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0027A10 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C0028F10 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00294D0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C00296B0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C002B030 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C002B140 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002FDA0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C004A340 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004BDD0 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPICMLidSetPower @ 0x1C004EB10 (ACPICMLidSetPower.c)
 *     ACPICMLidWorker @ 0x1C004ECA0 (ACPICMLidWorker.c)
 *     CmosGetOpRegionType @ 0x1C004EFD4 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C0051740 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C00518F0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     LinkNodepRunSrsWorker @ 0x1C006BD20 (LinkNodepRunSrsWorker.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C008FB24 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C0091424 (ACPIProcessorGetInitialApicId.c)
 *     ACPIThermalWorker @ 0x1C0091ED0 (ACPIThermalWorker.c)
 *     ACPIThermalGetParameter @ 0x1C0092FF8 (ACPIThermalGetParameter.c)
 *     ACPIBusIrpQueryResources @ 0x1C00940E0 (ACPIBusIrpQueryResources.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0095674 (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetProximityDomain @ 0x1C00958A0 (ACPIInternalSetProximityDomain.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C0096920 (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPISystemPowerGetSxD @ 0x1C009703C (ACPISystemPowerGetSxD.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0097100 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0097350 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0097710 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0097DE4 (ACPIBusIrpQueryDeviceId.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C009ED44 (ACPISystemPowerGetDeviceWake.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C009F364 (ACPIBusIrpQueryCompatibleId.c)
 *     TranslateEjectInterface @ 0x1C00A04E8 (TranslateEjectInterface.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00A071C (ACPIBusIrpQueryInstanceId.c)
 *     ACPIInitStopDevice @ 0x1C00A2CB4 (ACPIInitStopDevice.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C00A3048 (AcpiEjectBusNumberTranslator.c)
 *     ACPIDockIntfUpdateDeparture @ 0x1C00AAE70 (ACPIDockIntfUpdateDeparture.c)
 *     ACPIDockIrpEject @ 0x1C00AAF40 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryID @ 0x1C00AB910 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C00ABF60 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00AD080 (ACPIBusAndFilterIrpEject.c)
 *     LinkNodeGetPossibleResources @ 0x1C00B6244 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     SyncEvalObject @ 0x1C0002800 (SyncEvalObject.c)
 *     AsyncEvalObject @ 0x1C0002B10 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x1C0006C18 (GetObjectPath.c)
 *     FreeNameSpaceObjects @ 0x1C00137D0 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C00141E4 (HeapFree.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     Simulator_Free_Arguments @ 0x1C00636B8 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C0063A8C (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C0063B84 (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_TestNotifyRet @ 0x1C0063E34 (Simulator_TestNotifyRet.c)
 *     AMLIDebugger @ 0x1C00657A8 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 */

__int64 __fastcall ACPIGet(
        __int64 *a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  int v11; // r15d
  __int64 *v12; // rbx
  __int64 *v13; // r14
  int v14; // eax
  __int16 v15; // ax
  _QWORD *PoolWithTag; // rax
  _QWORD *v17; // rsi
  KIRQL v18; // al
  char **v19; // rcx
  char *v20; // r12
  KIRQL v21; // dl
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int64 v24; // r15
  unsigned int v25; // r13d
  unsigned int v26; // edi
  void (__fastcall *v27)(__int64 *, _QWORD, _QWORD *, _QWORD *); // r13
  unsigned int v28; // ebx
  KIRQL v29; // al
  __int64 v30; // r8
  char **v31; // rdx
  __int64 v33; // rdi
  int v34; // r15d
  __int64 v35; // rax
  unsigned int v36; // edx
  void *v37; // r8
  void *v38; // r15
  _QWORD *v39; // rdi
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v42; // r8
  void *v43; // rdi
  _QWORD *v44; // r14
  void *v45; // [rsp+40h] [rbp-81h]
  __int64 *v46; // [rsp+48h] [rbp-79h]
  int v47; // [rsp+50h] [rbp-71h]
  PVOID P; // [rsp+58h] [rbp-69h] BYREF
  _QWORD *v49; // [rsp+60h] [rbp-61h]
  PVOID Argument1; // [rsp+68h] [rbp-59h] BYREF
  __int64 v51; // [rsp+70h] [rbp-51h] BYREF
  __int64 v52; // [rsp+78h] [rbp-49h] BYREF
  _QWORD *v53; // [rsp+80h] [rbp-41h] BYREF
  _QWORD *v54; // [rsp+88h] [rbp-39h] BYREF
  _QWORD v55[2]; // [rsp+90h] [rbp-31h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-21h]
  __int64 v57; // [rsp+A8h] [rbp-19h]
  __int64 v58; // [rsp+B0h] [rbp-11h]
  __int64 v59; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-1h] BYREF
  int v61; // [rsp+110h] [rbp+4Fh]

  v55[0] = 0LL;
  v55[1] = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v49 = 0LL;
  v47 = 0;
  v61 = a3 & 0x20000000;
  v11 = a3 & 0x4000000;
  if ( (a3 & 0x4000000) != 0 )
    v12 = a1;
  else
    v12 = (__int64 *)a1[89];
  v13 = 0LL;
  if ( !v11 )
    v13 = a1;
  v14 = a3 & 0x1F0000;
  if ( (a3 & 0x1F0000) == 0x40000 )
  {
    v46 = v13;
    v45 = &ACPIGetWorkerForInteger;
    if ( (a3 & 0x4000800) == 0x800 )
    {
      v46 = v13;
      if ( (v13[1] & 0x200000000000000LL) != 0 )
      {
        v46 = (__int64 *)v13[23];
        v12 = (__int64 *)v46[89];
      }
    }
  }
  else
  {
    switch ( v14 )
    {
      case 0x80000:
        v46 = v13;
        v45 = &ACPIGetWorkerForString;
        break;
      case 0x10000:
        v46 = v13;
        v45 = &ACPIGetWorkerForBuffer;
        break;
      case 0x20000:
        v46 = v13;
        v45 = &ACPIGetWorkerForData;
        break;
      case 0x100000:
        v46 = v13;
        v45 = &ACPIGetWorkerForNothing;
        break;
      default:
        return 3221225713LL;
    }
  }
  v15 = 3;
  if ( (a3 & 0x3800000) != 0 )
  {
    v47 = 1;
    if ( (a3 & 0x800000) != 0 )
    {
      WORD1(v55[0]) = 1;
      v56 = a4;
    }
    else
    {
      if ( (a3 & 0x1000000) != 0 )
      {
        v15 = 2;
      }
      else if ( (a3 & 0x2000000) == 0 )
      {
        KeBugCheckEx(0xA3u, 1uLL, 0x600BFuLL, 0LL, 0LL);
      }
      WORD1(v55[0]) = v15;
      LODWORD(v57) = a5;
      v58 = a4;
    }
    v49 = v55;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x4D706341u);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x78uLL);
  v17[5] = a6;
  v17[6] = a7;
  v17[7] = a8;
  v17[8] = a9;
  *(_DWORD *)v17 = a3;
  *((_DWORD *)v17 + 1) = a2;
  v17[3] = v13;
  v17[4] = v12;
  v18 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
  v19 = (char **)qword_1C00826C8;
  v20 = (char *)(v17 + 1);
  if ( *(__int64 **)qword_1C00826C8 != &AcpiGetListEntry )
    goto LABEL_137;
  *(_QWORD *)v20 = &AcpiGetListEntry;
  v17[2] = v19;
  *v19 = v20;
  qword_1C00826C8 = (__int64)(v17 + 1);
  KeReleaseSpinLock(&AcpiGetLock, v18);
  if ( !v11 && (v13[1] & 0x208000000000000LL) == 0x8000000000000LL )
    goto LABEL_40;
  v21 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v22 = (__int64 *)*v12;
  v12 = *(__int64 **)(*v12 + 24);
  v23 = v22 + 3;
  if ( v23 == v12 )
  {
LABEL_17:
    v12 = 0LL;
  }
  else
  {
    while ( a2 != *((_DWORD *)v12 + 10) )
    {
      v12 = (__int64 *)*v12;
      if ( v23 == v12 )
        goto LABEL_17;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v21);
  if ( !v12 )
    goto LABEL_40;
  v12 += 15;
  dword_1C0082858 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
  if ( !v12 )
  {
LABEL_40:
    v26 = -1073741772;
    goto LABEL_41;
  }
  if ( *(_WORD *)(*v12 + 66) == 8 && v46 && a3 >= 0 && v46[75] && (v46[119] & 0x40) == 0 )
  {
    v26 = -1073741661;
    goto LABEL_41;
  }
  dword_1C0082858 = 0;
  pszDest = 0;
  if ( !v61 )
  {
    v54 = v49;
    Argument1 = 0LL;
    v60 = 0LL;
    if ( (gDebugger & 0x1000) != 0 )
    {
      ConPrintf("\nProcess AML Debugger Request.\n");
      _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
      AMLIDebugger();
    }
    v24 = *v12;
    if ( g_SimulatorCallbackObject )
    {
      if ( v17 != (_QWORD *)-80LL )
        memset(v17 + 10, 0, 0x28uLL);
      v25 = v47;
      v26 = Simulator_Pre_EvalNameSpaceObject(
              v24,
              (int)v17 + 80,
              v47,
              (unsigned int)&v54,
              (__int64)&v60,
              (__int64)&Argument1);
      if ( v26 )
        goto LABEL_41;
    }
    else
    {
      v25 = v47;
    }
    if ( (*(_BYTE *)(v24 + 64) & 4) != 0 )
    {
      v26 = -1073741738;
    }
    else
    {
      if ( v17 != (_QWORD *)-80LL )
        memset(v17 + 10, 0, 0x28uLL);
      for ( ; *(_WORD *)(v24 + 66) == 128; v24 = *(_QWORD *)(v24 + 80) )
        ;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v24 + 112));
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(v24);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v42 = &unk_1C006FE7D;
        v43 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v42) = ObjectPath;
        PrintDebugMessage(44, CurrentThread, (_DWORD)v42, 0, 0LL);
        if ( v43 )
          ExFreePoolWithTag(v43, 0);
      }
      v26 = SyncEvalObject(v24, v17 + 10, v25, v54);
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v24 + 64) |= 4u;
        if ( (*(_WORD *)(v24 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v24);
      }
      if ( v26 == 32772 )
        v26 = 259;
    }
    if ( g_SimulatorCallbackObject )
    {
      v44 = Argument1;
      if ( Argument1 )
      {
        v26 = Simulator_TestNotifyRet(Argument1);
        if ( (unsigned int)(*((_DWORD *)v44 + 1) - 1) <= 2 )
          Simulator_Free_Arguments(*((unsigned int *)v44 + 8), v44[5]);
        ExFreePoolWithTag(Argument1, 0);
      }
      else
      {
        v26 = -1073741823;
      }
    }
LABEL_41:
    v27 = (void (__fastcall *)(__int64 *, _QWORD, _QWORD *, _QWORD *))v45;
    goto LABEL_42;
  }
  v27 = (void (__fastcall *)(__int64 *, _QWORD, _QWORD *, _QWORD *))v45;
  v52 = (__int64)v45;
  v51 = (__int64)v17;
  v53 = v49;
  P = 0LL;
  v59 = 0LL;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v33 = *v12;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_51;
  if ( v17 != (_QWORD *)-80LL )
    memset(v17 + 10, 0, 0x28uLL);
  v34 = Simulator_Pre_AsyncEvalObject(
          v33,
          (int)v17 + 80,
          v47,
          (unsigned int)&v53,
          (__int64)&v59,
          (__int64)&v52,
          (__int64)&v51,
          (__int64)&P);
  if ( !v34 )
  {
LABEL_51:
    if ( (*(_BYTE *)(v33 + 64) & 4) != 0 )
    {
      v34 = -1073741738;
    }
    else
    {
      if ( v17 != (_QWORD *)-80LL )
        memset(v17 + 10, 0, 0x28uLL);
      for ( ; *(_WORD *)(v33 + 66) == 128; v33 = *(_QWORD *)(v33 + 80) )
        ;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v33 + 112));
      if ( (gDebugger & 8) != 0 )
      {
        v35 = GetObjectPath(v33);
        v36 = (unsigned int)KeGetCurrentThread();
        v37 = &unk_1C006FE7D;
        v38 = (void *)v35;
        if ( v35 )
          LODWORD(v37) = v35;
        PrintDebugMessage(11, v36, (_DWORD)v37, 0, 0LL);
        if ( v38 )
          ExFreePoolWithTag(v38, 0);
      }
      v34 = AsyncEvalObject(v33, (int)v17 + 80, v47, (_DWORD)v53, v52, v51, 1);
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v33 + 64) |= 4u;
        if ( (*(_WORD *)(v33 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v33);
      }
      if ( v34 == 32772 )
        v34 = 259;
    }
    if ( g_SimulatorCallbackObject && v34 != 259 )
    {
      v39 = P;
      if ( P )
      {
        v34 = Simulator_TestNotifyRet(P);
        if ( (unsigned int)(*((_DWORD *)v39 + 1) - 1) <= 2 )
          Simulator_Free_Arguments(*((unsigned int *)v39 + 8), v39[5]);
        ExFreePoolWithTag(P, 0);
      }
      else
      {
        v34 = -1073741823;
      }
    }
  }
  v26 = v34;
  if ( v34 != 259 )
  {
LABEL_42:
    *(_DWORD *)v17 |= 0x10000000u;
    v27(v12, v26, v17 + 10, v17);
    if ( v12 )
    {
      dword_1C0082858 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 2, 0xFFFFFFFF) == 1 )
      {
        if ( v12 == (__int64 *)(*v12 + 120) )
        {
          DereferenceObjectEx();
        }
        else
        {
          DereferenceObjectEx();
          HeapFree(v12);
        }
      }
    }
    v28 = *((_DWORD *)v17 + 18);
    v29 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v30 = *(_QWORD *)v20;
    if ( *(char **)(*(_QWORD *)v20 + 8LL) == v20 )
    {
      v31 = (char **)v17[2];
      if ( *v31 == v20 )
      {
        *v31 = (char *)v30;
        *(_QWORD *)(v30 + 8) = v31;
        KeReleaseSpinLock(&AcpiGetLock, v29);
        ExFreePoolWithTag(v17, 0);
        return v28;
      }
    }
LABEL_137:
    __fastfail(3u);
  }
  dword_1C0082858 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 2, 0xFFFFFFFF) == 1 )
  {
    if ( v12 == (__int64 *)(*v12 + 120) )
    {
      DereferenceObjectEx();
    }
    else
    {
      DereferenceObjectEx();
      HeapFree(v12);
    }
  }
  return 259LL;
}
