/*
 * XREFs of NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0007714
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006BD0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C00029D8 (BuildGetLogPageCommand.c)
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005234 (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00053AC (NVMeAllocateDmaBuffer.c)
 *     memmove @ 0x1C0007C40 (memmove.c)
 *     memset @ 0x1C0007F80 (memset.c)
 */

__int64 __fastcall NVMeReenumerateReissueGetLogNamespaceChangeList(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    StorPortExtendedFunction(0LL, a1, 4096LL, 1701672526LL);
    ++*(_DWORD *)(a1 + 3796);
  }
  else
  {
    NVMeAllocateDmaBuffer(a1, 0x1000u);
    ++*(_DWORD *)(a1 + 3792);
  }
  result = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3724), 1u);
  return result;
}
