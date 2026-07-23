/*
 * XREFs of RtlUpcaseUnicodeString @ 0x14064C260
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1400DCEA0 (RtlDeriveCapabilitySidsFromName.c)
 *     PfSnLogStreamCreate @ 0x14064C084 (PfSnLogStreamCreate.c)
 *     PfCalculateProcessHash @ 0x140668160 (PfCalculateProcessHash.c)
 *     AslStringUpcaseToMultiByteN @ 0x14067D5AC (AslStringUpcaseToMultiByteN.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14067E600 (SdbMakeIndexKeyFromStringEx.c)
 *     PiCMOpenClassKey @ 0x1406A7FC0 (PiCMOpenClassKey.c)
 *     PfSnLogVolumeCreate @ 0x1406BE9B0 (PfSnLogVolumeCreate.c)
 *     PipMakeGloballyUniqueId @ 0x14070D190 (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1408318A0 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiCMGenerateDeviceInstance @ 0x140839064 (PiCMGenerateDeviceInstance.c)
 *     ViCreateProcessCallbackInternal @ 0x140939564 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x1409397D4 (ViFaultsAddAppNoDuplicates.c)
 *     PipInitComputerIds @ 0x1409C9C60 (PipInitComputerIds.c)
 * Callees:
 *     ExFreePool @ 0x14034E780 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
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
