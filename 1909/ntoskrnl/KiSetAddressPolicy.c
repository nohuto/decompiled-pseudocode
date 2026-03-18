/*
 * XREFs of KiSetAddressPolicy @ 0x140043BF0
 * Callers:
 *     KiAttachProcess @ 0x140043560 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x140043810 (KiDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x140048180 (MiTrimOrAgeWorkingSet.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiSwapProcess @ 0x1400CDFE0 (KiSwapProcess.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x14012F800 (KiSynchronizeAddressPolicyTarget.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x14018F300 (KiSwapDirectoryTableBaseTarget.c)
 *     KiEnableKvaShadowing @ 0x14059F81C (KiEnableKvaShadowing.c)
 * Callees:
 *     KxSetAddressPolicy @ 0x1401C5860 (KxSetAddressPolicy.c)
 */

__int64 KiSetAddressPolicy()
{
  __int64 result; // rax
  unsigned int v1; // [rsp+20h] [rbp-8h]

  _disable();
  KxSetAddressPolicy();
  result = v1 >> 9;
  if ( (v1 & 0x200) != 0 )
    _enable();
  return result;
}
