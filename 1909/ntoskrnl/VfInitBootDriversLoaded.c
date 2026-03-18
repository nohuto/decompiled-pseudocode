/*
 * XREFs of VfInitBootDriversLoaded @ 0x1409EEF88
 * Callers:
 *     MiInitializeDriverImages @ 0x1409EE5A4 (MiInitializeDriverImages.c)
 * Callees:
 *     NtSetDebugFilterState @ 0x14076BA20 (NtSetDebugFilterState.c)
 *     VfDriverLoadImage @ 0x14095FF80 (VfDriverLoadImage.c)
 *     VfAvlInitializeTreeEx @ 0x140960554 (VfAvlInitializeTreeEx.c)
 *     VfLookasideInitializeInternalNPagedList @ 0x140960668 (VfLookasideInitializeInternalNPagedList.c)
 *     IoVerifierInit @ 0x14096293C (IoVerifierInit.c)
 *     VfInitVerifierComponents @ 0x140964C00 (VfInitVerifierComponents.c)
 *     VfObjectContextInit @ 0x140966190 (VfObjectContextInit.c)
 *     VfDriverLoadBootDrivers @ 0x1409EF070 (VfDriverLoadBootDrivers.c)
 *     VfThunkFindExportAddressAllTables @ 0x1409EF0CC (VfThunkFindExportAddressAllTables.c)
 *     VfThunkInit @ 0x1409EF398 (VfThunkInit.c)
 *     VfTriageAddDrivers @ 0x140A3DDF8 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A3E254 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140A3E41C (VfXdvExcludeParseRegistryString.c)
 */

char __fastcall VfInitBootDriversLoaded(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rsi
  int v5; // edi
  __int64 v6; // rbx
  unsigned __int8 v7; // r8

  VfBugcheckTmpDataLock = 0LL;
  VfThunkInit();
  VfLookasideInitializeInternalNPagedList(
    (__int64)&ViAvlNodeLookaside,
    0LL,
    (__int64)VfUtilFreePoolCheckIRQL,
    v2,
    48LL,
    1413572182,
    16);
  _InterlockedExchange(&ViAvlInitialized, 1);
  if ( !VfSafeMode )
  {
    if ( (int)VfAvlInitializeTreeEx(ViTargetDriversAvl, 0LL, 64, 1, (PRTL_AVL_FREE_ROUTINE)ViTargetDelayFreeAvlNode) < 0 )
    {
      _InterlockedExchange(&ViTargetAllocationFailures, 1);
    }
    else
    {
      dword_140435DE8 = 0;
      _InterlockedExchange(&ViTargetInitialized, 1);
    }
  }
  if ( ViVerifierDriverAddedThunkListHead )
    VfObjectContextInit();
  VfThunkFindExportAddressAllTables(a1);
  if ( ViVerifierDriverAddedThunkListHead )
  {
    NtSetDebugFilterState(0x5Du, 0, 1u);
    if ( MmVerifyDriverBufferLength )
      VfSuspectDriversParseRegistryString();
    if ( VfXdvSuppressDriversBufferLength )
      VfXdvExcludeParseRegistryString();
    VfInitVerifierComponents(MmVerifierData, ViVerifyAllDrivers, KernelVerifier);
    IoVerifierInit(MmVerifierData);
    ViFullyInitialized = 1;
    LOBYTE(v3) = VfTriageAddDrivers(a1);
    v4 = a1 + 16;
    v5 = 0;
    v6 = *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      if ( v6 == v4 )
        return v3;
      if ( v5 )
      {
        v7 = 0;
      }
      else
      {
        v3 = *(_QWORD *)(v6 + 48) + *(unsigned int *)(v6 + 64);
        ViDriverKernelBase = *(_QWORD *)(v6 + 48);
        ViDriverKernelEnd = v3;
        if ( !KernelVerifier )
          goto LABEL_19;
        v7 = 1;
      }
      LOBYTE(v3) = VfDriverLoadImage(v6, 0, v7, 0);
LABEL_19:
      v6 = *(_QWORD *)v6;
      ++v5;
    }
  }
  LOBYTE(v3) = VfDriverLoadBootDrivers(a1 + 16);
  return v3;
}
