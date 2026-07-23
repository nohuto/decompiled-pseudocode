/*
 * XREFs of RtlStringFromGUIDEx @ 0x14058C238
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1401863FC (BapdpMarshallBootDataToRegistry.c)
 *     KsepEvntLogShimsApplied @ 0x14029FE78 (KsepEvntLogShimsApplied.c)
 *     PopSetNewPolicyValue @ 0x14058C120 (PopSetNewPolicyValue.c)
 *     RtlStringFromGUID @ 0x14058C220 (RtlStringFromGUID.c)
 *     CmpInitCmRM @ 0x1406804A8 (CmpInitCmRM.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406F4C00 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1406F5284 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406F8050 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PipGenerateContainerID @ 0x140701C00 (PipGenerateContainerID.c)
 *     CmpStartRMLog @ 0x14070F5B4 (CmpStartRMLog.c)
 *     BcdOpenObject @ 0x1407140C4 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x1407147F0 (BcdGetElementDataWithFlags.c)
 *     BiConvertElementToRegistryData @ 0x140715134 (BiConvertElementToRegistryData.c)
 *     CmpRecoverEnlistment @ 0x1407F9B04 (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x1407F9E38 (CmpAddRemoveRMLogContainer.c)
 *     CmpCloneHwProfile @ 0x1407FC7DC (CmpCloneHwProfile.c)
 *     VrpPreLoadKey @ 0x14080C964 (VrpPreLoadKey.c)
 *     IoGetDeviceDirectory @ 0x140825BF0 (IoGetDeviceDirectory.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14082FB98 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1408318A0 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PpDevCfgProcessDeviceClass @ 0x140832934 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x1408333E0 (PpDevCfgProcessDeviceReset.c)
 *     ExpCreateOutputSIGNATURE @ 0x1408D1658 (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x1408D3ACC (ExpTranslateEfiPath.c)
 *     BiCreateObject @ 0x1408F1E60 (BiCreateObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1408F6024 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x14090551C (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x1409C9C60 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x14019A4A0 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __cdecl RtlStringFromGUIDEx(PGUID Guid, PUNICODE_STRING GuidString, BOOLEAN AllocateGuidString)
{
  wchar_t *StringRoutine; // rax
  unsigned __int16 MaximumLength; // dx

  if ( AllocateGuidString )
  {
    GuidString->MaximumLength = 78;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(0x4EuLL);
    GuidString->Buffer = StringRoutine;
    if ( StringRoutine )
    {
      MaximumLength = GuidString->MaximumLength;
LABEL_4:
      GuidString->Length = 76;
      swprintf_s(
        GuidString->Buffer,
        (unsigned __int64)MaximumLength >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        Guid->Data1,
        Guid->Data2,
        Guid->Data3,
        Guid->Data4[0],
        Guid->Data4[1],
        Guid->Data4[2],
        Guid->Data4[3],
        Guid->Data4[4],
        Guid->Data4[5],
        Guid->Data4[6],
        Guid->Data4[7]);
      return 0;
    }
    return -1073741801;
  }
  else
  {
    MaximumLength = GuidString->MaximumLength;
    if ( MaximumLength >= 0x4Eu )
      goto LABEL_4;
    return -1073741789;
  }
}
