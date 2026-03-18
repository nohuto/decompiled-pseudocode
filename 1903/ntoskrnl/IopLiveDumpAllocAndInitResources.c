/*
 * XREFs of IopLiveDumpAllocAndInitResources @ 0x140859728
 * Callers:
 *     IoCaptureLiveDump @ 0x140858F44 (IoCaptureLiveDump.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     RtlClearAllBitsEx @ 0x1400A9490 (RtlClearAllBitsEx.c)
 *     MmAllocateIndependentPages @ 0x1400EF280 (MmAllocateIndependentPages.c)
 *     VslIsSecureKernelRunning @ 0x14013D5C0 (VslIsSecureKernelRunning.c)
 *     HvlGetHypervisorEncryptionDomain @ 0x140182060 (HvlGetHypervisorEncryptionDomain.c)
 *     IopGetPhysicalMemoryBlock @ 0x14019A358 (IopGetPhysicalMemoryBlock.c)
 *     RtlSetAllBitsEx @ 0x14019ACA0 (RtlSetAllBitsEx.c)
 *     HvlGetEncryptedDataDomains @ 0x14019E5D8 (HvlGetEncryptedDataDomains.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlPrepareLivedumpDescriptor @ 0x14028BD98 (HvlPrepareLivedumpDescriptor.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x14029AEEC (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x14029AF74 (IopLiveDumpTraceBufferAllocation.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1405A89AC (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpResetCorralContext @ 0x1405A9484 (IopLiveDumpResetCorralContext.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140859D00 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140859EF8 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14085A014 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpReleaseResources @ 0x14085A3FC (IopLiveDumpReleaseResources.c)
 */

__int64 __fastcall IopLiveDumpAllocAndInitResources(__int64 a1)
{
  __int64 v2; // r12
  unsigned __int64 v4; // [rsp+40h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 *v6; // [rsp+68h] [rbp-40h]
  int v7; // [rsp+70h] [rbp-38h]
  int v8; // [rsp+74h] [rbp-34h]

  v2 = MEMORY[0xFFFFF78000000008];
  if ( !IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 600), *(_QWORD *)(a1 + 608), *(_QWORD *)(a1 + 616)) )
  {
    *(_QWORD *)(a1 + 240) = a1;
    IopLiveDumpResetCorralContext(a1 + 240);
    IopGetPhysicalMemoryBlock();
  }
  if ( stru_140425C78.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425C78, 0x200000000000uLL) )
  {
    v7 = 8;
    v8 = 0;
    v4 = (MEMORY[0xFFFFF78000000008] - v2) / 0x2710uLL;
    v6 = &v4;
    TlgWrite(&stru_140425C78, &unk_14038C9D2, (LPCGUID)(a1 + 640), (LPCGUID)(a1 + 624), 3u, &pData);
  }
  IopLiveDumpReleaseResources(a1);
  return 3221226048LL;
}
