/*
 * XREFs of HvlSvmFlushPasid @ 0x140275BC0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpFastFlushPasidAddressList @ 0x14027629C (HvlpFastFlushPasidAddressList.c)
 *     HvlpFlushPasidAddressSpace @ 0x1402763E0 (HvlpFlushPasidAddressSpace.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1402764E0 (HvlpSlowFlushPasidAddressList.c)
 */

__int64 __fastcall HvlSvmFlushPasid(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a3 - 1 > 0x1FD )
    return HvlpFlushPasidAddressSpace();
  if ( a3 > 0xC )
    return HvlpSlowFlushPasidAddressList();
  return HvlpFastFlushPasidAddressList();
}
