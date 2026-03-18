/*
 * XREFs of KiSetAddressPolicy @ 0x1400BA120
 * Callers:
 *     KiAttachProcess @ 0x140016BD0 (KiAttachProcess.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiSwapProcess @ 0x1400173C0 (KiSwapProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x14006D580 (MiTrimOrAgeWorkingSet.c)
 *     KiDetachProcess @ 0x1400B9C80 (KiDetachProcess.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x14012DD30 (KiSynchronizeAddressPolicyTarget.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x14015DD30 (KiSwapDirectoryTableBaseTarget.c)
 *     KiEnableKvaShadowing @ 0x140572BD8 (KiEnableKvaShadowing.c)
 * Callees:
 *     KxSetAddressPolicy @ 0x1401BD120 (KxSetAddressPolicy.c)
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
