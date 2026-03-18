/*
 * XREFs of AMLIEvalNameSpaceObject @ 0x1C00116EC
 * Callers:
 *     ACPIThermalGetSensorDevice @ 0x1C0007E58 (ACPIThermalGetSensorDevice.c)
 *     ACPIInitDosDeviceName @ 0x1C000B17C (ACPIInitDosDeviceName.c)
 *     ACPIInitStartDevice @ 0x1C000BF1C (ACPIInitStartDevice.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C00112B4 (ACPIIoctlEvalControlMethod.c)
 *     LinkNodeCrackPrt @ 0x1C001B04C (LinkNodeCrackPrt.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002CC78 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004B6D4 (ACPIBuildMissingEjectionRelations.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C005C420 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C005CD94 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     Simulator_EvaluateNode @ 0x1C0063644 (Simulator_EvaluateNode.c)
 *     ACPIAmliEvaluatePcch @ 0x1C00910B0 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0091A98 (ACPIAmliEvaluateOsc.c)
 *     ACPIProcessorDeviceControl @ 0x1C0091C40 (ACPIProcessorDeviceControl.c)
 *     ACPIThermalBuildConstraints @ 0x1C0093090 (ACPIThermalBuildConstraints.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C00936D4 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0093754 (ACPIAmliEvaluateDsm.c)
 *     LinkNodeWriteStateToHardware @ 0x1C009BF04 (LinkNodeWriteStateToHardware.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C009C250 (LinkNodepAddLinkNodeWorker.c)
 *     EnableDisableRegions @ 0x1C009D1BC (EnableDisableRegions.c)
 *     AcpiGetIdleWakeInfo @ 0x1C009EC90 (AcpiGetIdleWakeInfo.c)
 *     ACPIInitStopDevice @ 0x1C00A2CB4 (ACPIInitStopDevice.c)
 *     ACPIEcGetGpeVector @ 0x1C00AE3B0 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00AE450 (ACPIEcGetUid.c)
 *     ACPIEvaluateSpareDsm @ 0x1C00AFC80 (ACPIEvaluateSpareDsm.c)
 *     ACPIGetUniqueId @ 0x1C00AFDA0 (ACPIGetUniqueId.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00B1524 (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BE954 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     SyncEvalObject @ 0x1C0002800 (SyncEvalObject.c)
 *     GetObjectPath @ 0x1C0006C18 (GetObjectPath.c)
 *     FreeNameSpaceObjects @ 0x1C00137D0 (FreeNameSpaceObjects.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     Simulator_Free_Arguments @ 0x1C00636B8 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C0063B84 (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_TestNotifyRet @ 0x1C0063E34 (Simulator_TestNotifyRet.c)
 *     AMLIDebugger @ 0x1C00657A8 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 */

__int64 AMLIEvalNameSpaceObject(__int64 *a1, void *a2, int a3, ...)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v15; // r8
  void *v16; // rsi
  _QWORD *v17; // rbx
  PVOID P[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  P[0] = 0LL;
  v19 = 0LL;
  dword_1C0082858 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v10, v9, v11, v12);
  }
  v6 = *a1;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_4;
  if ( a2 )
    memset(a2, 0, 0x28uLL);
  result = Simulator_Pre_EvalNameSpaceObject(v6, (_DWORD)a2, a3, (unsigned int)va, (__int64)&v19, (__int64)P);
  if ( !(_DWORD)result )
  {
LABEL_4:
    if ( (*(_BYTE *)(v6 + 64) & 4) != 0 )
    {
      v7 = -1073741738;
    }
    else
    {
      if ( a2 )
        memset(a2, 0, 0x28uLL);
      while ( *(_WORD *)(v6 + 66) == 128 )
        v6 = *(_QWORD *)(v6 + 80);
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 112));
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(v6);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v15 = &unk_1C006FE7D;
        v16 = ObjectPath;
        if ( ObjectPath )
          LODWORD(v15) = (_DWORD)ObjectPath;
        PrintDebugMessage(44, CurrentThread, (_DWORD)v15, 0, 0LL);
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
      }
      v7 = SyncEvalObject(v6, (int)a2, a3, v20);
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v6 + 64) |= 4u;
        if ( (*(_WORD *)(v6 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v6);
      }
      if ( v7 == 32772 )
        v7 = 259;
    }
    if ( g_SimulatorCallbackObject )
    {
      v17 = P[0];
      if ( P[0] )
      {
        v7 = Simulator_TestNotifyRet(P[0]);
        if ( (unsigned int)(*((_DWORD *)v17 + 1) - 1) <= 2 )
          Simulator_Free_Arguments(*((unsigned int *)v17 + 8), v17[5]);
        ExFreePoolWithTag(P[0], 0);
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
    return v7;
  }
  return result;
}
