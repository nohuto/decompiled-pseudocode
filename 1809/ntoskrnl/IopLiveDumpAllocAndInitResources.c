/*
 * XREFs of IopLiveDumpAllocAndInitResources @ 0x14081F720
 * Callers:
 *     IoCaptureLiveDump @ 0x14081EFA4 (IoCaptureLiveDump.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     MmAllocateIndependentPages @ 0x140108F80 (MmAllocateIndependentPages.c)
 *     RtlClearAllBitsEx @ 0x1401102F0 (RtlClearAllBitsEx.c)
 *     VslIsSecureKernelRunning @ 0x14013BB2C (VslIsSecureKernelRunning.c)
 *     HvlGetHypervisorEncryptionDomain @ 0x1401786C0 (HvlGetHypervisorEncryptionDomain.c)
 *     IopGetPhysicalMemoryBlock @ 0x140190088 (IopGetPhysicalMemoryBlock.c)
 *     RtlSetAllBitsEx @ 0x140190AD0 (RtlSetAllBitsEx.c)
 *     HvlGetEncryptedDataDomains @ 0x140193E5C (HvlGetEncryptedDataDomains.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     HvlPrepareLivedumpDescriptor @ 0x1402779C8 (HvlPrepareLivedumpDescriptor.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x140285A98 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140285B14 (IopLiveDumpTraceBufferAllocation.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x140578B0C (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpResetCorralContext @ 0x1405795F4 (IopLiveDumpResetCorralContext.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14081FCC8 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14081FEA8 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14081FFC4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpReleaseResources @ 0x1408203B0 (IopLiveDumpReleaseResources.c)
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
  if ( !IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 592), *(_QWORD *)(a1 + 600)) )
  {
    *(_QWORD *)(a1 + 240) = a1;
    IopLiveDumpResetCorralContext(a1 + 240);
    IopGetPhysicalMemoryBlock();
  }
  if ( stru_140400A78.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400A78, 0x200000000000uLL) )
  {
    v7 = 8;
    v8 = 0;
    v4 = (MEMORY[0xFFFFF78000000008] - v2) / 0x2710uLL;
    v6 = &v4;
    TlgWrite(&stru_140400A78, &unk_14036CEC9, (LPCGUID)(a1 + 624), (LPCGUID)(a1 + 608), 3u, &pData);
  }
  IopLiveDumpReleaseResources(a1);
  return 3221226048LL;
}
