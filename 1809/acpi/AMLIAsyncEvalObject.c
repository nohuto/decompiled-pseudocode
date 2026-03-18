/*
 * XREFs of AMLIAsyncEvalObject @ 0x1C00140BC
 * Callers:
 *     ACPIFanLoop @ 0x1C000D298 (ACPIFanLoop.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0011A80 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0011BF0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIThermalLoopEx @ 0x1C0012518 (ACPIThermalLoopEx.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C0013188 (ACPIDevicePowerProcessPhase3.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0015120 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0015580 (ACPIBuildProcessDevicePhasePrw.c)
 *     EnableDisableCMOSRegions @ 0x1C0016140 (EnableDisableCMOSRegions.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001B320 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001B830 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001BAA0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C001DFE0 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C001E230 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C001EDD0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001F190 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C001F750 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C00257B0 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C002CBA0 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002E854 (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C002F730 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C002FF10 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C004F260 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C004F850 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C004F9F0 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C0052310 (ACPIEcRunQueryMethod.c)
 *     ACPIInternalEvaluateOST @ 0x1C0054E4C (ACPIInternalEvaluateOST.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C0055468 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIWakeDisableAsync @ 0x1C005F618 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C005FB00 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C0069AA0 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C0069CC0 (LinkNodepRunSrsWorker.c)
 *     ACPIRootInitialize @ 0x1C0095120 (ACPIRootInitialize.c)
 *     RegisterOperationRegionHandler @ 0x1C009EB20 (RegisterOperationRegionHandler.c)
 *     AcpiFunctionLevelDeviceReset @ 0x1C00AA814 (AcpiFunctionLevelDeviceReset.c)
 *     EnableDisableIPMIRegions @ 0x1C00AC2D4 (EnableDisableIPMIRegions.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     AsyncEvalObject @ 0x1C0005370 (AsyncEvalObject.c)
 *     GetBaseObject @ 0x1C00141B8 (GetBaseObject.c)
 *     GetObjectPath @ 0x1C0023478 (GetObjectPath.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     Simulator_Free_Arguments @ 0x1C0061738 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C0061B0C (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_TestNotifyRet @ 0x1C0061EA8 (Simulator_TestNotifyRet.c)
 *     AMLIDebugger @ 0x1C0063760 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 */

__int64 AMLIAsyncEvalObject(__int64 *a1, _SLIST_ENTRY *a2, unsigned int a3, ...)
{
  __int64 v3; // rbx
  __int64 v7; // rsi
  __int64 BaseObject; // rax
  unsigned __int64 v9; // rsi
  unsigned int v10; // edi
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v18; // r8
  void *v19; // rbx
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF
  __int64 v22; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v24; // [rsp+A0h] [rbp+50h] BYREF
  va_list va1; // [rsp+A0h] [rbp+50h]
  __int64 v26; // [rsp+A8h] [rbp+58h] BYREF
  va_list va2; // [rsp+A8h] [rbp+58h]
  va_list va3; // [rsp+B0h] [rbp+60h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v24 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v26 = va_arg(va3, _QWORD);
  v3 = 0LL;
  v20 = 0LL;
  dword_1C0080868 = 0;
  v21 = 0LL;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v13, v12, v14, v15);
    v3 = v21;
  }
  v7 = *a1;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_4;
  if ( a2 )
    memset(a2, 0, 0x28uLL);
  result = Simulator_Pre_AsyncEvalObject(
             v7,
             (_DWORD)a2,
             a3,
             (unsigned int)va,
             (__int64)&v20,
             (__int64)va1,
             (__int64)va2,
             (__int64)&v21);
  if ( !(_DWORD)result )
  {
    v3 = v21;
LABEL_4:
    if ( (*(_BYTE *)(v7 + 64) & 4) != 0 )
    {
      v10 = -1073741738;
    }
    else
    {
      if ( a2 )
        memset(a2, 0, 0x28uLL);
      BaseObject = GetBaseObject(v7);
      v9 = BaseObject;
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(BaseObject);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v18 = &unk_1C006E28A;
        v19 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v18) = ObjectPath;
        PrintDebugMessage(11, CurrentThread, (_DWORD)v18, 0, 0LL);
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
        v3 = v21;
      }
      v10 = AsyncEvalObject(v9, a2, a3, v22, v24, v26, 1);
      DereferenceObjectEx(v9);
      if ( v10 == 32772 )
        v10 = 259;
    }
    if ( g_SimulatorCallbackObject && v10 != 259 )
    {
      if ( v3 )
      {
        v10 = Simulator_TestNotifyRet((PVOID)v3);
        if ( (unsigned int)(*(_DWORD *)(v3 + 4) - 1) <= 2 )
          Simulator_Free_Arguments(*(unsigned int *)(v3 + 32), *(_QWORD *)(v3 + 40));
        ExFreePoolWithTag((PVOID)v3, 0);
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
    return v10;
  }
  return result;
}
