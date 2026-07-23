/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x140598F3C
 * Callers:
 *     NtReplacePartitionUnit @ 0x14032C790 (NtReplacePartitionUnit.c)
 *     PiControlGetPropertyData @ 0x1405884A0 (PiControlGetPropertyData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140596154 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1405989C0 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140598CE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x140598E10 (NtPlugPlayControl.c)
 *     PiControlGetSetDeviceStatus @ 0x14059CD40 (PiControlGetSetDeviceStatus.c)
 *     PiCMCaptureObjectInputData @ 0x14059E6DC (PiCMCaptureObjectInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1405A0850 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406A8540 (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406BCCF8 (PiCMCaptureDeviceListInputData.c)
 *     PiControlGetDeviceDepth @ 0x1406C9BB0 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1406D6A14 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiControlGetRelatedDevice @ 0x1406F9990 (PiControlGetRelatedDevice.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x14083728C (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140837718 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiControlQueryAndRemoveDevice @ 0x14083CE60 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x14083CFC0 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x14083D1E0 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x14083D320 (PiControlStartDevice.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x140599000 (PiControlCopyUserModeCallersBuffer.c)
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
