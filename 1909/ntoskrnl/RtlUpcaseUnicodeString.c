/*
 * XREFs of RtlUpcaseUnicodeString @ 0x14066AA90
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1400F0D30 (RtlDeriveCapabilitySidsFromName.c)
 *     PfSnLogStreamCreate @ 0x14066A928 (PfSnLogStreamCreate.c)
 *     PfCalculateProcessHash @ 0x14066B910 (PfCalculateProcessHash.c)
 *     PiCMOpenClassKey @ 0x1406CCE80 (PiCMOpenClassKey.c)
 *     PfSnLogVolumeCreate @ 0x1406DF72C (PfSnLogVolumeCreate.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14070E3F8 (SdbMakeIndexKeyFromStringEx.c)
 *     AslStringUpcaseToMultiByteN @ 0x14070E814 (AslStringUpcaseToMultiByteN.c)
 *     PipMakeGloballyUniqueId @ 0x1407398BC (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14086A720 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiCMGenerateDeviceInstance @ 0x140872074 (PiCMGenerateDeviceInstance.c)
 *     ViCreateProcessCallbackInternal @ 0x140979E7C (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x14097A0F8 (ViFaultsAddAppNoDuplicates.c)
 *     PipInitComputerIds @ 0x1409F5A4C (PipInitComputerIds.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpAllocateStringRoutine @ 0x1406D4640 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned __int16 v5; // ax
  __int64 i; // r9
  wchar_t v7; // r10
  unsigned int Length; // eax
  wchar_t *StringRoutine; // rax

  if ( AllocateDestinationString )
  {
    Length = SourceString->Length;
    DestinationString->MaximumLength = Length;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(Length);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    v5 = SourceString->Length;
  }
  else
  {
    v5 = SourceString->Length;
    if ( SourceString->Length > DestinationString->MaximumLength )
      return -2147483643;
  }
  for ( i = 0LL; (unsigned int)i < v5 >> 1; i = (unsigned int)(i + 1) )
  {
    v7 = SourceString->Buffer[i];
    if ( v7 >= 0x61u )
    {
      if ( v7 > 0x7Au )
      {
        if ( Nls844UnicodeUpcaseTable )
        {
          if ( v7 >= 0xC0u )
            v7 += *(_WORD *)(Nls844UnicodeUpcaseTable
                           + 2LL
                           * ((v7 & 0xF)
                            + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                + 2LL
                                                                * (((v7 >> 4) & 0xF)
                                                                 + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v7 >> 8))))));
        }
      }
      else
      {
        v7 -= 32;
      }
    }
    DestinationString->Buffer[i] = v7;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
