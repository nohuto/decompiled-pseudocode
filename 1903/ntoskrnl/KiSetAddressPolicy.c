/*
 * XREFs of KiSetAddressPolicy @ 0x14003AAD0
 * Callers:
 *     KiAttachProcess @ 0x14003A440 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x14003A6F0 (KiDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400480E0 (MiTrimOrAgeWorkingSet.c)
 *     KiSwapProcess @ 0x1400908B0 (KiSwapProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x14012EEF0 (KiSynchronizeAddressPolicyTarget.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x14018E9F0 (KiSwapDirectoryTableBaseTarget.c)
 *     KiEnableKvaShadowing @ 0x14059F83C (KiEnableKvaShadowing.c)
 * Callees:
 *     KxSetAddressPolicy @ 0x1401C4CE0 (KxSetAddressPolicy.c)
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
