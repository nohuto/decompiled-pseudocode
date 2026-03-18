/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x140597F3C
 * Callers:
 *     NtReplacePartitionUnit @ 0x14032C4A0 (NtReplacePartitionUnit.c)
 *     PiControlGetPropertyData @ 0x1405874A0 (PiControlGetPropertyData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140595154 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1405979C0 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140597CE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x140597E10 (NtPlugPlayControl.c)
 *     PiControlGetSetDeviceStatus @ 0x14059BD40 (PiControlGetSetDeviceStatus.c)
 *     PiCMCaptureObjectInputData @ 0x14059D6DC (PiCMCaptureObjectInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x14059F850 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406A72C0 (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406BBA78 (PiCMCaptureDeviceListInputData.c)
 *     PiControlGetDeviceDepth @ 0x1406C8930 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1406D5794 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiControlGetRelatedDevice @ 0x1406F8710 (PiControlGetRelatedDevice.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x14083604C (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1408364D8 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiControlQueryAndRemoveDevice @ 0x14083BC20 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x14083BD80 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x14083BFA0 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x14083C0E0 (PiControlStartDevice.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400B7650 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x140598000 (PiControlCopyUserModeCallersBuffer.c)
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
