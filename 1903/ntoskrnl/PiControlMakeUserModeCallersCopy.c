/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1405BD8EC
 * Callers:
 *     NtReplacePartitionUnit @ 0x14034DE40 (NtReplacePartitionUnit.c)
 *     PiCMCapturePropertyInputData @ 0x1405BCDB0 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1405BD5E0 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1405BD7C0 (NtPlugPlayControl.c)
 *     PiCMCaptureInterfaceListInputData @ 0x14062603C (PiCMCaptureInterfaceListInputData.c)
 *     PiControlGetPropertyData @ 0x1406A02E0 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x1406A2660 (PiControlGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1406A2980 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetDeviceDepth @ 0x1406A3390 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureRegistryInputData @ 0x1406CE518 (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406D04DC (PiCMCaptureObjectInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406D3EDC (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406DF88C (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1406F6284 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140870A08 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140870E94 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiControlQueryAndRemoveDevice @ 0x140876D60 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x140876EC0 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408770E0 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x140877230 (PiControlStartDevice.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1405BF56C (PiControlCopyUserModeCallersBuffer.c)
 */

__int64 __fastcall PiControlMakeUserModeCallersCopy(void **a1, void *a2, unsigned int a3, ULONG a4, char a5, int a6)
{
  PVOID PoolWithQuotaTag; // rax
  int v12; // esi

  if ( !a5 )
  {
    *a1 = a2;
    return 0LL;
  }
  if ( !a3 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  if ( a6 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a3, 0x20207050u);
    *a1 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      return 3221225626LL;
  }
  v12 = 0;
  if ( *a1 )
  {
    v12 = PiControlCopyUserModeCallersBuffer(*a1, a2, a3, a4, a5, a6);
    if ( v12 < 0 )
    {
      if ( a6 )
      {
        ExFreePoolWithTag(*a1, 0);
        *a1 = 0LL;
      }
    }
  }
  return (unsigned int)v12;
}
