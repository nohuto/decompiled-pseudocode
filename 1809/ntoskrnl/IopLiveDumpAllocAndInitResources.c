/*
 * XREFs of IopLiveDumpAllocAndInitResources @ 0x140820900
 * Callers:
 *     IoCaptureLiveDump @ 0x140820184 (IoCaptureLiveDump.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     MmAllocateIndependentPages @ 0x140109020 (MmAllocateIndependentPages.c)
 *     RtlClearAllBitsEx @ 0x140110390 (RtlClearAllBitsEx.c)
 *     VslIsSecureKernelRunning @ 0x14013BC4C (VslIsSecureKernelRunning.c)
 *     HvlGetHypervisorEncryptionDomain @ 0x1401787E0 (HvlGetHypervisorEncryptionDomain.c)
 *     IopGetPhysicalMemoryBlock @ 0x1401901E8 (IopGetPhysicalMemoryBlock.c)
 *     RtlSetAllBitsEx @ 0x140190C30 (RtlSetAllBitsEx.c)
 *     HvlGetEncryptedDataDomains @ 0x140193FBC (HvlGetEncryptedDataDomains.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlPrepareLivedumpDescriptor @ 0x140277CB8 (HvlPrepareLivedumpDescriptor.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x140285D88 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140285E04 (IopLiveDumpTraceBufferAllocation.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x140579B0C (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpResetCorralContext @ 0x14057A5F4 (IopLiveDumpResetCorralContext.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140820EA8 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140821088 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1408211A4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpReleaseResources @ 0x140821590 (IopLiveDumpReleaseResources.c)
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
  if ( stru_140401A78.LevelPlus1 > 5 && TlgKeywordOn(&stru_140401A78, 0x200000000000uLL) )
  {
    v7 = 8;
    v8 = 0;
    v4 = (MEMORY[0xFFFFF78000000008] - v2) / 0x2710uLL;
    v6 = &v4;
    TlgWrite(&stru_140401A78, &unk_14036DF69, (LPCGUID)(a1 + 624), (LPCGUID)(a1 + 608), 3u, &pData);
  }
  IopLiveDumpReleaseResources(a1);
  return 3221226048LL;
}
