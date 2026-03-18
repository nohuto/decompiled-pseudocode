/*
 * XREFs of ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00143BC
 * Callers:
 *     DxgNotifyVSyncCB @ 0x1C003E3F0 (DxgNotifyVSyncCB.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x1C003E470 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C003E530 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     DxgSetPowerComponentIdleCB @ 0x1C003E5B0 (DxgSetPowerComponentIdleCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1C003E630 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x1C003E990 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x1C003EA10 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x1C003EB90 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkMitigatedRangeUpdateCB @ 0x1C003ED80 (DxgkMitigatedRangeUpdateCB.c)
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1C003EDF0 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x1C003EE90 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1C003EFB0 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x1C003F030 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C003F0B0 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1C01374C0 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     DxgGetHandleDataCB @ 0x1C01375C0 (DxgGetHandleDataCB.c)
 *     DxgkAcquireHandleDataCB @ 0x1C0137CA0 (DxgkAcquireHandleDataCB.c)
 *     DxgkReleaseHandleDataCB @ 0x1C0138220 (DxgkReleaseHandleDataCB.c)
 *     DxgCreateContextAllocationCB @ 0x1C0153570 (DxgCreateContextAllocationCB.c)
 *     DxgDestroyContextAllocationCB @ 0x1C0154890 (DxgDestroyContextAllocationCB.c)
 *     DxgSetPowerComponentActiveCB @ 0x1C022BA30 (DxgSetPowerComponentActiveCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C022BAB0 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgkMapContextAllocationCB @ 0x1C022BBD0 (DxgkMapContextAllocationCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1C022BC70 (DxgkUpdateContextAllocationCB.c)
 *     DxgEnumHandleChildrenCB @ 0x1C0231090 (DxgEnumHandleChildrenCB.c)
 *     DxgGetCaptureAddressCB @ 0x1C0231280 (DxgGetCaptureAddressCB.c)
 *     DxgGetHandleParentCB @ 0x1C02314E0 (DxgGetHandleParentCB.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00FC9E0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

DXGVALIDATIONPROCESSREATTACH *__fastcall DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH(
        DXGVALIDATIONPROCESSREATTACH *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v5; // rax
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v8; // rbx
  struct _KPROCESS *ThreadProcess; // rax

  *(_BYTE *)this = 0;
  if ( (unsigned __int8)KeIsAttachedProcess() && KeGetCurrentIrql() < 2u )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v5 = WdLogNewEntry5_WdAssertion(v3, v2);
      *(_QWORD *)(v5 + 24) = 2201LL;
      WdLogEvent5_WdAssertion(v5);
    }
    if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 321) )
    {
      Global = DXGGLOBAL::GetGlobal(v3, v2);
      SessionData = DXGGLOBAL::GetSessionData(Global);
      if ( SessionData )
      {
        v8 = *((_QWORD *)SessionData + 2336);
        if ( v8 == PsGetCurrentProcess() )
        {
          ThreadProcess = PsGetThreadProcess(KeGetCurrentThread());
          if ( ThreadProcess )
          {
            KeStackAttachProcess(ThreadProcess, (PRKAPC_STATE)((char *)this + 8));
            *(_BYTE *)this = 1;
          }
        }
      }
    }
  }
  return this;
}
