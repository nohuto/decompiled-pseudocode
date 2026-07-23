/*
 * XREFs of IopLiveDumpEstimateMemoryPages @ 0x1405A898C
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140858E28 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     RtlClearAllBitsEx @ 0x1400E85B0 (RtlClearAllBitsEx.c)
 *     HvlCalculateLivedumpSize @ 0x14028B7E0 (HvlCalculateLivedumpSize.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x14029ADA8 (IopLiveDumpTraceBufferEstimation.c)
 *     RtlNumberOfSetBitsEx @ 0x14030D500 (RtlNumberOfSetBitsEx.c)
 *     MmDuplicateMemory @ 0x14059D3EC (MmDuplicateMemory.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1405A7FB8 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpUncorralProcessors @ 0x1405A9498 (IopLiveDumpUncorralProcessors.c)
 */

__int64 __fastcall IopLiveDumpEstimateMemoryPages(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdi
  NTSTATUS v4; // eax
  unsigned int v5; // esi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  _QWORD v10[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+70h] [rbp+8h]
  unsigned __int64 v12; // [rsp+78h] [rbp+10h] BYREF

  *(_DWORD *)(a1 + 80) |= 1u;
  v1 = a1 + 240;
  v2 = 0LL;
  v10[4] = 529LL;
  v10[3] = 0LL;
  IopLiveDumpCallRemovePagesCallbacks((_DWORD *)a1);
  v10[0] = IopLiveDumpStartMirroringCallback;
  v10[1] = IopLiveDumpEndMirroringCallback;
  v10[2] = IopLiveDumpMirrorPhysicalMemoryCallback;
  v4 = MmDuplicateMemory((__int64)v10);
  v5 = v4;
  if ( v4 < 0 || v4 == 258 )
  {
    if ( (*(_DWORD *)(v1 + 8) & 1) != 0 )
      IopLiveDumpUncorralProcessors(v1);
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
    if ( v5 == 258 )
      v5 = -1073740682;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  else
  {
    v6 = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 368));
    v7 = v6 + (v6 >> 4);
    LODWORD(v6) = *(_DWORD *)(a1 + 44);
    *(_QWORD *)(a1 + 96) = v7;
    if ( (v6 & 1) != 0 && (int)HvlCalculateLivedumpSize((__int64)&v12) >= 0 )
    {
      v8 = (v11 >> 12) + ((v11 & 0xFFF) != 0);
      LOBYTE(v2) = (v12 & 0xFFF) != 0;
      v2 += v12 >> 12;
    }
    else
    {
      v8 = 0LL;
    }
    *(_QWORD *)(a1 + 112) = v2;
    *(_QWORD *)(a1 + 120) = v8;
    IopLiveDumpTraceBufferEstimation();
  }
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 368));
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 424));
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 464));
  *(_DWORD *)(a1 + 80) &= ~1u;
  return v5;
}
