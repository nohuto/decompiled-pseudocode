/*
 * XREFs of KeFlushCurrentTbOnly @ 0x140173DE0
 * Callers:
 *     MiFlushTbList @ 0x1400740C0 (MiFlushTbList.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A40 (MiMoveDirtyBitsToPfns.c)
 *     MiDeleteVaTail @ 0x140075880 (MiDeleteVaTail.c)
 *     MiAgeWorkingSetTail @ 0x140075A50 (MiAgeWorkingSetTail.c)
 *     MiConvertHiberPhasePages @ 0x14056DF80 (MiConvertHiberPhasePages.c)
 *     MiInitSystem @ 0x1409BC5A8 (MiInitSystem.c)
 *     MiInitializePfnsForValidMappings @ 0x1409BFBA0 (MiInitializePfnsForValidMappings.c)
 *     MiZeroBootMappings @ 0x1409D30A4 (MiZeroBootMappings.c)
 * Callees:
 *     KiFlushCurrentTbOnly @ 0x140173E34 (KiFlushCurrentTbOnly.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     HvlFlushAddressSpaceTb @ 0x1402794DC (HvlFlushAddressSpaceTb.c)
 *     KiIsFlushEntire @ 0x140293D00 (KiIsFlushEntire.c)
 *     KiPrepareFlushCurrentAffinity @ 0x140293D38 (KiPrepareFlushCurrentAffinity.c)
 *     KiPrepareFlushParameters @ 0x140293DA8 (KiPrepareFlushParameters.c)
 */

__int64 __fastcall KeFlushCurrentTbOnly(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 v3; // r8
  _BYTE v4[8]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v5; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v6[176]; // [rsp+30h] [rbp-C8h] BYREF

  v1 = a1;
  if ( (HvlEnlightenments & 0x800000) == 0 || (HvlEnlightenments & 2) == 0 && !(unsigned __int8)KiIsFlushEntire(a1) )
    return KiFlushCurrentTbOnly(v1);
  KiPrepareFlushParameters(v1, &v5, v4);
  KiPrepareFlushCurrentAffinity(v6);
  LOBYTE(v3) = v4[0];
  return HvlFlushAddressSpaceTb(v5, v6, v3);
}
