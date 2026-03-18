/*
 * XREFs of MiGetUserReservationHighestAddress @ 0x14067868C
 * Callers:
 *     MiMapParametersInitialize @ 0x140608C30 (MiMapParametersInitialize.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140670298 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x140677B30 (MiAllocateVirtualMemoryPrepare.c)
 *     MiMapExParametersInitialize @ 0x140678B84 (MiMapExParametersInitialize.c)
 *     MiMapLockedPagesInUserSpace @ 0x140711D38 (MiMapLockedPagesInUserSpace.c)
 *     MiMapImageInSystemProcess @ 0x1408878A0 (MiMapImageInSystemProcess.c)
 *     MiAllocateEnclaveVad @ 0x14089304C (MiAllocateEnclaveVad.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetUserReservationHighestAddress(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax

  v2 = 0x7FFFFFFEFFFFLL;
  if ( a2 )
  {
    v3 = 0xFFFFFFFFFFFFFFFFuLL >> a2;
    if ( 0xFFFFFFFFFFFFFFFFuLL >> a2 > 0x7FFFFFFEFFFFLL )
      v3 = 0x7FFFFFFEFFFFLL;
    v2 = v3;
  }
  result = *(_QWORD *)(a1 + 1152) - 1LL;
  if ( v2 <= result )
    return v2;
  return result;
}
