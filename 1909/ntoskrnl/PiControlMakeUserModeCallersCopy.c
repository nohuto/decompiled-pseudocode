/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1405BDCCC
 * Callers:
 *     NtReplacePartitionUnit @ 0x14034D8A0 (NtReplacePartitionUnit.c)
 *     PiCMCapturePropertyInputData @ 0x1405BD190 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1405BD9C0 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1405BDBA0 (NtPlugPlayControl.c)
 *     PiCMCaptureInterfaceListInputData @ 0x140629EEC (PiCMCaptureInterfaceListInputData.c)
 *     PiControlGetRelatedDevice @ 0x14066FB40 (PiControlGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x14066FE60 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetPropertyData @ 0x140671A60 (PiControlGetPropertyData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406CD2B8 (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406CF74C (PiCMCaptureObjectInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406D31CC (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406E0B9C (PiCMCaptureDeviceListInputData.c)
 *     PiControlGetDeviceDepth @ 0x1406EAD00 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1406F8044 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140870108 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140870594 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiControlQueryAndRemoveDevice @ 0x140876460 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1408765C0 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408767E0 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x140876930 (PiControlStartDevice.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1405BFA3C (PiControlCopyUserModeCallersBuffer.c)
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
