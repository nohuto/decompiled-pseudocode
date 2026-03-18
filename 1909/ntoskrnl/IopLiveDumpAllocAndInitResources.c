/*
 * XREFs of IopLiveDumpAllocAndInitResources @ 0x140858E28
 * Callers:
 *     IoCaptureLiveDump @ 0x140858644 (IoCaptureLiveDump.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     MmAllocateIndependentPages @ 0x1400DC990 (MmAllocateIndependentPages.c)
 *     RtlClearAllBitsEx @ 0x1400E85B0 (RtlClearAllBitsEx.c)
 *     VslIsSecureKernelRunning @ 0x14013DAD0 (VslIsSecureKernelRunning.c)
 *     HvlGetHypervisorEncryptionDomain @ 0x140182750 (HvlGetHypervisorEncryptionDomain.c)
 *     IopGetPhysicalMemoryBlock @ 0x14019A9B8 (IopGetPhysicalMemoryBlock.c)
 *     RtlSetAllBitsEx @ 0x14019B300 (RtlSetAllBitsEx.c)
 *     HvlGetEncryptedDataDomains @ 0x14019ECF8 (HvlGetEncryptedDataDomains.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlPrepareLivedumpDescriptor @ 0x14028BAF8 (HvlPrepareLivedumpDescriptor.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x14029AC4C (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x14029ACD4 (IopLiveDumpTraceBufferAllocation.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1405A898C (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpResetCorralContext @ 0x1405A9464 (IopLiveDumpResetCorralContext.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140859400 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x1408595F8 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140859714 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpReleaseResources @ 0x140859AFC (IopLiveDumpReleaseResources.c)
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
    TlgWrite(&stru_140425C78, &unk_14038CC9B, (LPCGUID)(a1 + 640), (LPCGUID)(a1 + 624), 3u, &pData);
  }
  IopLiveDumpReleaseResources(a1);
  return 3221226048LL;
}
