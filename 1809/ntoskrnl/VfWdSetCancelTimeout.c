/*
 * XREFs of VfWdSetCancelTimeout @ 0x14093F748
 * Callers:
 *     VfWdInit @ 0x14093F680 (VfWdInit.c)
 *     VfSetVerifierInformationEx @ 0x14094BB28 (VfSetVerifierInformationEx.c)
 * Callees:
 *     VfWdCheckForSettingsChange @ 0x14093F5FC (VfWdCheckForSettingsChange.c)
 */

__int64 __fastcall VfWdSetCancelTimeout(unsigned int a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // edx

  v1 = 0;
  if ( a1 )
  {
    if ( a1 > 0xEA60 )
      return (unsigned int)-1073741811;
    v2 = (a1 + 999) / 0x3E8;
  }
  else
  {
    v2 = 0;
  }
  VfWdCancelTimeoutTicks = v2;
  if ( ViVerifierDriverAddedThunkListHead )
    VfWdCheckForSettingsChange(MmVerifierData);
  return v1;
}
