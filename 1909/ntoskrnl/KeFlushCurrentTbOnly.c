/*
 * XREFs of KeFlushCurrentTbOnly @ 0x14017A8A0
 * Callers:
 *     MiDeleteVaTail @ 0x14004DEC0 (MiDeleteVaTail.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     MiAgeWorkingSetTail @ 0x140099350 (MiAgeWorkingSetTail.c)
 *     MiConvertHiberPhasePages @ 0x14059C7E4 (MiConvertHiberPhasePages.c)
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 *     MiInitializePfnsForValidMappings @ 0x1409FC01C (MiInitializePfnsForValidMappings.c)
 *     MiZeroBootMappings @ 0x140A17160 (MiZeroBootMappings.c)
 * Callees:
 *     KiFlushCurrentTbOnly @ 0x14017A908 (KiFlushCurrentTbOnly.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlFlushAddressSpaceTb @ 0x14028D684 (HvlFlushAddressSpaceTb.c)
 *     KiIsFlushEntire @ 0x1402AA540 (KiIsFlushEntire.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1402AA578 (KiPrepareFlushCurrentAffinity.c)
 *     KiPrepareFlushParameters @ 0x1402AA5E8 (KiPrepareFlushParameters.c)
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
