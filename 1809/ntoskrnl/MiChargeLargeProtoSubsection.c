/*
 * XREFs of MiChargeLargeProtoSubsection @ 0x140853B34
 * Callers:
 *     MiCreatePrototypePtes @ 0x140095A70 (MiCreatePrototypePtes.c)
 *     MiDecrementLargeSubsections @ 0x1402B5A04 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x1402B5EB4 (MiEnableLargeSubsection.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
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
