/*
 * XREFs of KeAbCrossThreadRelease @ 0x14016BFC4
 * Callers:
 *     ExpReleaseDisownedFastResourceShared @ 0x14016BDBC (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14033A648 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KiAbCrossThreadRelease @ 0x14016BFF8 (KiAbCrossThreadRelease.c)
 */

__int64 __fastcall KeAbCrossThreadRelease(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( (a2 & 1) != 0 )
    a2 = a3 + 96LL * (unsigned __int8)(a2 >> 1) + 800;
  return KiAbCrossThreadRelease(a1, a2);
}
