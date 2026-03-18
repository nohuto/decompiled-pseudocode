/*
 * XREFs of KeFlushCurrentTbOnly @ 0x14017A1B0
 * Callers:
 *     MiDeleteVaTail @ 0x14004DE20 (MiDeleteVaTail.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052B60 (MiMoveDirtyBitsToPfns.c)
 *     MiAgeWorkingSetTail @ 0x1400B94E0 (MiAgeWorkingSetTail.c)
 *     MiConvertHiberPhasePages @ 0x14059CF64 (MiConvertHiberPhasePages.c)
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 *     MiInitializePfnsForValidMappings @ 0x1409FBB00 (MiInitializePfnsForValidMappings.c)
 *     MiZeroBootMappings @ 0x140A16CA0 (MiZeroBootMappings.c)
 * Callees:
 *     KiFlushCurrentTbOnly @ 0x14017A218 (KiFlushCurrentTbOnly.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlFlushAddressSpaceTb @ 0x14028D924 (HvlFlushAddressSpaceTb.c)
 *     KiIsFlushEntire @ 0x1402AA7E0 (KiIsFlushEntire.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1402AA818 (KiPrepareFlushCurrentAffinity.c)
 *     KiPrepareFlushParameters @ 0x1402AA888 (KiPrepareFlushParameters.c)
 */

__int64 __fastcall KeFlushCurrentTbOnly(unsigned int a1)
{
  __int64 v3; // r8
  _BYTE v4[8]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v5; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v6[176]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v6, 0, 0xA8uLL);
  if ( (HvlEnlightenments & 0x800000) == 0 || (HvlEnlightenments & 2) == 0 && !(unsigned __int8)KiIsFlushEntire(a1) )
    return KiFlushCurrentTbOnly(a1);
  KiPrepareFlushParameters(a1, &v5, v4);
  KiPrepareFlushCurrentAffinity(v6);
  LOBYTE(v3) = v4[0];
  return HvlFlushAddressSpaceTb(v5, v6, v3);
}
