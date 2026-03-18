/*
 * XREFs of HvlSvmFlushPasid @ 0x140289E20
 * Callers:
 *     <none>
 * Callees:
 *     HvlpFastFlushPasidAddressList @ 0x14028A548 (HvlpFastFlushPasidAddressList.c)
 *     HvlpFlushPasidAddressSpace @ 0x14028A688 (HvlpFlushPasidAddressSpace.c)
 *     HvlpSlowFlushPasidAddressList @ 0x14028A790 (HvlpSlowFlushPasidAddressList.c)
 */

__int64 __fastcall HvlSvmFlushPasid(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a3 - 1 > 0x1FD )
    return HvlpFlushPasidAddressSpace();
  if ( a3 > 0xC )
    return HvlpSlowFlushPasidAddressList();
  return HvlpFastFlushPasidAddressList();
}
