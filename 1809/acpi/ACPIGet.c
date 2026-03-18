/*
 * XREFs of ACPIGet @ 0x1C0003980
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C000CAD0 (ACPICMButtonStartWorker.c)
 *     ACPIThermalLoopEx @ 0x1C0012518 (ACPIThermalLoopEx.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0014CC0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0014EA0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C0015080 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C0015230 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C0015960 (ACPIBuildProcessDevicePhaseSub.c)
 *     IsPciDeviceWorker @ 0x1C0016320 (IsPciDeviceWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C00173B0 (IsPciBusAsyncWorker.c)
 *     GetPciAddressWorker @ 0x1C00186D0 (GetPciAddressWorker.c)
 *     ACPIDetectFilterDevices @ 0x1C0018C64 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0018F84 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDockDevices @ 0x1C001A3C0 (ACPIDetectDockDevices.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C001B5C0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C001BEC0 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001EB30 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C002B3F0 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C002B600 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002F1B0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0048D70 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004A6C0 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPICMLidSetPower @ 0x1C004D250 (ACPICMLidSetPower.c)
 *     ACPICMLidWorker @ 0x1C004D3E0 (ACPICMLidWorker.c)
 *     CmosGetOpRegionType @ 0x1C004D714 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C004FDF0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C004FF90 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     LinkNodepRunSrsWorker @ 0x1C0069CC0 (LinkNodepRunSrsWorker.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C008DA80 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIInitStopDevice @ 0x1C008E718 (ACPIInitStopDevice.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C008EB78 (ACPIProcessorGetInitialApicId.c)
 *     TranslateEjectInterface @ 0x1C0096FB8 (TranslateEjectInterface.c)
 *     ACPIThermalWorker @ 0x1C0097860 (ACPIThermalWorker.c)
 *     ACPIThermalGetParameter @ 0x1C00985F4 (ACPIThermalGetParameter.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C0098C18 (ACPISystemPowerGetDeviceWake.c)
 *     ACPIBusIrpQueryResources @ 0x1C0098CC0 (ACPIBusIrpQueryResources.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0099330 (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetProximityDomain @ 0x1C009955C (ACPIInternalSetProximityDomain.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C009A7B0 (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPISystemPowerGetSxD @ 0x1C009AC6C (ACPISystemPowerGetSxD.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C009AEFC (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C009B140 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009B4E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C009D250 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C009D5A4 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C009EE44 (ACPIBusIrpQueryInstanceId.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C00A0108 (AcpiEjectBusNumberTranslator.c)
 *     ACPIDockIntfUpdateDeparture @ 0x1C00A79D0 (ACPIDockIntfUpdateDeparture.c)
 *     ACPIDockIrpEject @ 0x1C00A7AA0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryID @ 0x1C00A83B0 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C00A89A0 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00A9A50 (ACPIBusAndFilterIrpEject.c)
 *     LinkNodeGetPossibleResources @ 0x1C00B2854 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     HeapFree @ 0x1C0001FAC (HeapFree.c)
 *     FreeNameSpaceObjects @ 0x1C0003550 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     SyncEvalObject @ 0x1C0003F70 (SyncEvalObject.c)
 *     AsyncEvalObject @ 0x1C0005370 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x1C0023478 (GetObjectPath.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     Simulator_Free_Arguments @ 0x1C0061738 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C0061B0C (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C0061C04 (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_TestNotifyRet @ 0x1C0061EA8 (Simulator_TestNotifyRet.c)
 *     AMLIDebugger @ 0x1C0063760 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
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
  int v12; // r15d
  __int64 *v13; // rbx
  __int64 *v14; // r14
  int v15; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v17; // rsi
  KIRQL v18; // al
  char **v19; // rcx
  char *v20; // r12
  KIRQL v21; // dl
  __int64 *v22; // rax
  __int64 *v23; // rax
  unsigned __int64 v24; // r15
  unsigned int v25; // r13d
  unsigned int v26; // edi
  void (__fastcall *v27)(__int64 *, _QWORD, _QWORD *, _QWORD *); // r13
  unsigned int v28; // ebx
  KIRQL v29; // al
  __int64 v30; // r8
  char **v31; // rdx
  unsigned __int64 v33; // rdi
  int v34; // r15d
  __int16 v35; // ax
  __int64 v36; // rax
  unsigned int v37; // edx
  void *v38; // r8
  void *v39; // r15
  _QWORD *v40; // rdi
  unsigned __int64 v41; // rcx
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v44; // r8
  void *v45; // rdi
  _QWORD *v46; // r14
  unsigned __int64 v47; // rcx
  void *v48; // [rsp+40h] [rbp-81h]
  __int64 *v49; // [rsp+48h] [rbp-79h]
  int v50; // [rsp+50h] [rbp-71h]
  PVOID P; // [rsp+58h] [rbp-69h] BYREF
  _QWORD *v52; // [rsp+60h] [rbp-61h]
  PVOID Argument1; // [rsp+68h] [rbp-59h] BYREF
  __int64 v54; // [rsp+70h] [rbp-51h] BYREF
  __int64 v55; // [rsp+78h] [rbp-49h] BYREF
  _QWORD *v56; // [rsp+80h] [rbp-41h] BYREF
  _QWORD *v57; // [rsp+88h] [rbp-39h] BYREF
  __int64 v58; // [rsp+90h] [rbp-31h] BYREF
  __int64 v59; // [rsp+98h] [rbp-29h] BYREF
  _QWORD v60[6]; // [rsp+A0h] [rbp-21h] BYREF
  int v61; // [rsp+110h] [rbp+4Fh]

  v52 = 0LL;
  v50 = 0;
  v61 = a3 & 0x20000000;
  v12 = a3 & 0x4000000;
  if ( (a3 & 0x4000000) != 0 )
    v13 = a1;
  else
    v13 = (__int64 *)a1[89];
  v14 = 0LL;
  if ( !v12 )
    v14 = a1;
  v15 = a3 & 0x1F0000;
  if ( (a3 & 0x1F0000) == 0x40000 )
  {
    v49 = v14;
    v48 = &ACPIGetWorkerForInteger;
    if ( (a3 & 0x4000800) == 0x800 )
    {
      v49 = v14;
      if ( (v14[1] & 0x200000000000000LL) != 0 )
      {
        v49 = (__int64 *)v14[23];
        v13 = (__int64 *)v49[89];
      }
    }
  }
  else
  {
    switch ( v15 )
    {
      case 0x80000:
        v49 = v14;
        v48 = &ACPIGetWorkerForString;
        break;
      case 0x10000:
        v49 = v14;
        v48 = &ACPIGetWorkerForBuffer;
        break;
      case 0x20000:
        v49 = v14;
        v48 = &ACPIGetWorkerForData;
        break;
      case 0x100000:
        v49 = v14;
        v48 = &ACPIGetWorkerForNothing;
        break;
      default:
        return 3221225713LL;
    }
  }
  if ( (a3 & 0x3800000) != 0 )
  {
    memset(v60, 0, 0x28uLL);
    v50 = 1;
    if ( (a3 & 0x800000) != 0 )
    {
      WORD1(v60[0]) = 1;
      v60[2] = a4;
    }
    else
    {
      if ( (a3 & 0x1000000) != 0 )
      {
        v35 = 2;
      }
      else
      {
        if ( (a3 & 0x2000000) == 0 )
          KeBugCheckEx(0xA3u, 1uLL, 0x600BFuLL, 0LL, 0LL);
        v35 = 3;
      }
      WORD1(v60[0]) = v35;
      LODWORD(v60[3]) = a5;
      v60[4] = a4;
    }
    v52 = v60;
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
  v17[3] = v14;
  v17[4] = v13;
  v18 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
  v19 = (char **)qword_1C00806C8;
  v20 = (char *)(v17 + 1);
  if ( *(__int64 **)qword_1C00806C8 != &AcpiGetListEntry )
    goto LABEL_138;
  *(_QWORD *)v20 = &AcpiGetListEntry;
  v17[2] = v19;
  *v19 = v20;
  qword_1C00806C8 = (__int64)(v17 + 1);
  KeReleaseSpinLock(&AcpiGetLock, v18);
  if ( !v12 && (v14[1] & 0x208000000000000LL) == 0x8000000000000LL )
    goto LABEL_40;
  v21 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v22 = (__int64 *)*v13;
  v13 = *(__int64 **)(*v13 + 24);
  v23 = v22 + 3;
  if ( v23 == v13 )
  {
LABEL_17:
    v13 = 0LL;
  }
  else
  {
    while ( a2 != *((_DWORD *)v13 + 10) )
    {
      v13 = (__int64 *)*v13;
      if ( v23 == v13 )
        goto LABEL_17;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v21);
  if ( !v13 )
    goto LABEL_40;
  v13 += 15;
  dword_1C0080868 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
  if ( !v13 )
  {
LABEL_40:
    v26 = -1073741772;
    goto LABEL_41;
  }
  if ( *(_WORD *)(*v13 + 66) == 8 && v49 && a3 >= 0 && v49[75] && (v49[119] & 0x40) == 0 )
  {
    v26 = -1073741661;
    goto LABEL_41;
  }
  dword_1C0080868 = 0;
  pszDest = 0;
  if ( !v61 )
  {
    v57 = v52;
    Argument1 = 0LL;
    v59 = 0LL;
    if ( (gDebugger & 0x1000) != 0 )
    {
      ConPrintf("\nProcess AML Debugger Request.\n");
      _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
      AMLIDebugger();
    }
    v24 = *v13;
    if ( g_SimulatorCallbackObject )
    {
      if ( v17 != (_QWORD *)-80LL )
        memset(v17 + 10, 0, 0x28uLL);
      v25 = v50;
      v26 = Simulator_Pre_EvalNameSpaceObject(
              v24,
              (int)v17 + 80,
              v50,
              (unsigned int)&v57,
              (__int64)&v59,
              (__int64)&Argument1);
      if ( v26 )
        goto LABEL_41;
    }
    else
    {
      v25 = v50;
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
        v44 = &unk_1C006E28A;
        v45 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v44) = ObjectPath;
        PrintDebugMessage(44, CurrentThread, (_DWORD)v44, 0, 0LL);
        if ( v45 )
          ExFreePoolWithTag(v45, 0);
      }
      v26 = SyncEvalObject(v24, v17 + 10, v25, v57);
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
      v46 = Argument1;
      if ( Argument1 )
      {
        v26 = Simulator_TestNotifyRet(Argument1);
        if ( (unsigned int)(*((_DWORD *)v46 + 1) - 1) <= 2 )
          Simulator_Free_Arguments(*((unsigned int *)v46 + 8), v46[5]);
        ExFreePoolWithTag(Argument1, 0);
      }
      else
      {
        v26 = -1073741823;
      }
    }
LABEL_41:
    v27 = (void (__fastcall *)(__int64 *, _QWORD, _QWORD *, _QWORD *))v48;
    goto LABEL_42;
  }
  v27 = (void (__fastcall *)(__int64 *, _QWORD, _QWORD *, _QWORD *))v48;
  v55 = (__int64)v48;
  v54 = (__int64)v17;
  v56 = v52;
  P = 0LL;
  v58 = 0LL;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v33 = *v13;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_51;
  if ( v17 != (_QWORD *)-80LL )
    memset(v17 + 10, 0, 0x28uLL);
  v34 = Simulator_Pre_AsyncEvalObject(
          v33,
          (int)v17 + 80,
          v50,
          (unsigned int)&v56,
          (__int64)&v58,
          (__int64)&v55,
          (__int64)&v54,
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
        v36 = GetObjectPath(v33);
        v37 = (unsigned int)KeGetCurrentThread();
        v38 = &unk_1C006E28A;
        v39 = (void *)v36;
        if ( v36 )
          LODWORD(v38) = v36;
        PrintDebugMessage(11, v37, (_DWORD)v38, 0, 0LL);
        if ( v39 )
          ExFreePoolWithTag(v39, 0);
      }
      v34 = AsyncEvalObject(v33, (int)v17 + 80, v50, (_DWORD)v56, v55, v54, 1);
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
      v40 = P;
      if ( P )
      {
        v34 = Simulator_TestNotifyRet(P);
        if ( (unsigned int)(*((_DWORD *)v40 + 1) - 1) <= 2 )
          Simulator_Free_Arguments(*((unsigned int *)v40 + 8), v40[5]);
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
    v27(v13, v26, v17 + 10, v17);
    if ( v13 )
    {
      dword_1C0080868 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v13 + 2, 0xFFFFFFFF) == 1 )
      {
        v47 = *v13;
        if ( v13 == (__int64 *)(*v13 + 120) )
        {
          DereferenceObjectEx(v47);
        }
        else
        {
          DereferenceObjectEx(v47);
          HeapFree(v13);
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
LABEL_138:
    __fastfail(3u);
  }
  dword_1C0080868 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v13 + 2, 0xFFFFFFFF) == 1 )
  {
    v41 = *v13;
    if ( v13 == (__int64 *)(*v13 + 120) )
    {
      DereferenceObjectEx(v41);
    }
    else
    {
      DereferenceObjectEx(v41);
      HeapFree(v13);
    }
  }
  return 259LL;
}
