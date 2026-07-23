/*
 * XREFs of MiGetUserReservationHighestAddress @ 0x14069740C
 * Callers:
 *     MiAllocateVirtualMemoryPrepare @ 0x1405EE0B0 (MiAllocateVirtualMemoryPrepare.c)
 *     MiMapParametersInitialize @ 0x1405F1080 (MiMapParametersInitialize.c)
 *     MiMapExParametersInitialize @ 0x14067802C (MiMapExParametersInitialize.c)
 *     MiMapLockedPagesInUserSpace @ 0x140696CE4 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140697060 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapImageInSystemProcess @ 0x14084D5D4 (MiMapImageInSystemProcess.c)
 *     MiAllocateEnclaveVad @ 0x14085A3B8 (MiAllocateEnclaveVad.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetUserReservationHighestAddress(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rax

  v2 = 0x7FFFFFFEFFFFLL;
  if ( a2 )
  {
    v4 = 0xFFFFFFFFFFFFFFFFuLL >> a2;
    if ( 0xFFFFFFFFFFFFFFFFuLL >> a2 > 0x7FFFFFFEFFFFLL )
      v4 = 0x7FFFFFFEFFFFLL;
    v2 = v4;
  }
  result = *(_QWORD *)(a1 + 1152) - 1LL;
  if ( v2 <= result )
    return v2;
  return result;
}
