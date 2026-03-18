/*
 * XREFs of MiChargeLargeProtoSubsection @ 0x14088BDF0
 * Callers:
 *     MiCreatePrototypePtes @ 0x1400BFB60 (MiCreatePrototypePtes.c)
 *     MiDecrementLargeSubsections @ 0x1402CB278 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x1402CB72C (MiEnableLargeSubsection.c)
 * Callees:
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
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
