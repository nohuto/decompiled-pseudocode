/*
 * XREFs of IopLiveDumpEstimateMemoryPages @ 0x140578B0C
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x14081F720 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     RtlClearAllBitsEx @ 0x1401102F0 (RtlClearAllBitsEx.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     HvlCalculateLivedumpSize @ 0x1402776D0 (HvlCalculateLivedumpSize.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140285BE8 (IopLiveDumpTraceBufferEstimation.c)
 *     RtlNumberOfSetBitsEx @ 0x1402EF070 (RtlNumberOfSetBitsEx.c)
 *     MmDuplicateMemory @ 0x14056C274 (MmDuplicateMemory.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140578168 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpUncorralProcessors @ 0x140579628 (IopLiveDumpUncorralProcessors.c)
 */

__int64 __fastcall IopLiveDumpEstimateMemoryPages(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // ebp
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  _QWORD v9[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+70h] [rbp+8h]
  unsigned __int64 v11; // [rsp+78h] [rbp+10h] BYREF

  memset(v9, 0, 0x28uLL);
  *(_DWORD *)(a1 + 80) |= 1u;
  IopLiveDumpCallRemovePagesCallbacks((_DWORD *)a1);
  LODWORD(v9[4]) = 17;
  v9[0] = IopLiveDumpStartMirroringCallback;
  v9[1] = IopLiveDumpEndMirroringCallback;
  v9[2] = IopLiveDumpMirrorPhysicalMemoryCallback;
  v2 = 0LL;
  v3 = MmDuplicateMemory((__int64)v9);
  if ( v3 < 0 )
  {
    if ( (*(_DWORD *)(a1 + 248) & 1) != 0 )
      IopLiveDumpUncorralProcessors(a1 + 240);
    *(_QWORD *)(a1 + 96) = 0LL;
    v4 = a1 + 368;
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  else
  {
    v4 = a1 + 368;
    v5 = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 368));
    v6 = v5 + (v5 >> 4);
    LODWORD(v5) = *(_DWORD *)(a1 + 44);
    *(_QWORD *)(a1 + 96) = v6;
    if ( (v5 & 1) != 0 && (int)HvlCalculateLivedumpSize((__int64)&v11) >= 0 )
    {
      v7 = (v10 >> 12) + ((v10 & 0xFFF) != 0);
      LOBYTE(v2) = (v11 & 0xFFF) != 0;
      v2 += v11 >> 12;
    }
    else
    {
      v7 = 0LL;
    }
    *(_QWORD *)(a1 + 112) = v2;
    *(_QWORD *)(a1 + 120) = v7;
    IopLiveDumpTraceBufferEstimation();
  }
  RtlClearAllBitsEx(v4);
  RtlClearAllBitsEx(a1 + 424);
  RtlClearAllBitsEx(a1 + 464);
  *(_DWORD *)(a1 + 80) &= ~1u;
  return (unsigned int)v3;
}
