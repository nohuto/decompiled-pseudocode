/*
 * XREFs of MiChargeLargeProtoSubsection @ 0x14088C5D0
 * Callers:
 *     MiCreatePrototypePtes @ 0x1400DFCE0 (MiCreatePrototypePtes.c)
 *     MiDecrementLargeSubsections @ 0x1402CB518 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x1402CB9CC (MiEnableLargeSubsection.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 */

__int64 __fastcall MiChargeLargeProtoSubsection(__int64 a1, int a2)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax

  v2 = (unsigned __int64)*(unsigned int *)(a1 + 44) >> 9;
  if ( !a2 )
  {
    MiReturnResidentAvailable(v2);
    return 1LL;
  }
  result = MiChargeResident(&MiSystemPartition, v2, 1024LL);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
