/*
 * XREFs of RtlUpcaseUnicodeString @ 0x14064B0A0
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1400DCE20 (RtlDeriveCapabilitySidsFromName.c)
 *     PfSnLogStreamCreate @ 0x14064AEC4 (PfSnLogStreamCreate.c)
 *     PfCalculateProcessHash @ 0x140666FA0 (PfCalculateProcessHash.c)
 *     AslStringUpcaseToMultiByteN @ 0x14067C3EC (AslStringUpcaseToMultiByteN.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14067D440 (SdbMakeIndexKeyFromStringEx.c)
 *     PiCMOpenClassKey @ 0x1406A6D20 (PiCMOpenClassKey.c)
 *     PfSnLogVolumeCreate @ 0x1406BD710 (PfSnLogVolumeCreate.c)
 *     PipMakeGloballyUniqueId @ 0x14070BEF0 (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x14072D220 (IoReportDetectedDevice.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x140830640 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiCMGenerateDeviceInstance @ 0x140837E04 (PiCMGenerateDeviceInstance.c)
 *     ViCreateProcessCallbackInternal @ 0x140938564 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x1409387D4 (ViFaultsAddAppNoDuplicates.c)
 *     PipInitComputerIds @ 0x1409C8C60 (PipInitComputerIds.c)
 * Callees:
 *     ExFreePool @ 0x14034D780 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1406B2100 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned __int16 Length; // ax
  unsigned int v6; // ebx
  __int64 i; // r10
  wchar_t v8; // ax
  wchar_t *StringRoutine; // rax

  Length = SourceString->Length;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = Length;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(Length);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    Length = SourceString->Length;
  }
  else if ( Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v6 = Length >> 1;
  for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
  {
    v8 = SourceString->Buffer[i];
    if ( v8 >= 0x61u )
    {
      if ( v8 > 0x7Au )
        v8 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v8 & 0xF)
                                                                      + 2
                                                                      * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((v8 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int64)v8 >> 8)]]];
      else
        v8 -= 32;
    }
    DestinationString->Buffer[i] = v8;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
