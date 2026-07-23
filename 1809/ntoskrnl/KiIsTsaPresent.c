/*
 * XREFs of KiIsTsaPresent @ 0x1401B4918
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x14017D8C4 (KiDetectHardwareSpecControlFeatures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140176CB0 (HviIsAnyHypervisorPresent.c)
 */

_BOOL8 __fastcall KiIsTsaPresent(_BYTE *a1)
{
  char v2; // cl
  unsigned __int8 v3; // cl
  _BOOL8 result; // rax

  result = 0;
  if ( a1[141] == 1 && (KeFeatureBits2 & 0xC0000000000LL) != 0xC0000000000LL )
  {
    if ( HviIsAnyHypervisorPresent() )
      return 1;
    v2 = a1[64];
    if ( v2 >= 25 )
    {
      if ( v2 != 26 )
        return 1;
      v3 = a1[67];
      if ( v3 > 0x4Fu && (unsigned __int8)(v3 - 96) > 0x1Fu )
        return 1;
    }
  }
  return result;
}
