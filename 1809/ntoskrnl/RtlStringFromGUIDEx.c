/*
 * XREFs of RtlStringFromGUIDEx @ 0x14058B238
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x14018629C (BapdpMarshallBootDataToRegistry.c)
 *     KsepEvntLogShimsApplied @ 0x14029FB88 (KsepEvntLogShimsApplied.c)
 *     PopSetNewPolicyValue @ 0x14058B120 (PopSetNewPolicyValue.c)
 *     RtlStringFromGUID @ 0x14058B220 (RtlStringFromGUID.c)
 *     CmpInitCmRM @ 0x14067F308 (CmpInitCmRM.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406F3980 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1406F4004 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406F6DD0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PipGenerateContainerID @ 0x140700980 (PipGenerateContainerID.c)
 *     CmpStartRMLog @ 0x14070E334 (CmpStartRMLog.c)
 *     BcdOpenObject @ 0x140712E44 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x140713570 (BcdGetElementDataWithFlags.c)
 *     BiConvertElementToRegistryData @ 0x140713EB4 (BiConvertElementToRegistryData.c)
 *     CmpRecoverEnlistment @ 0x1407F8924 (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x1407F8C58 (CmpAddRemoveRMLogContainer.c)
 *     CmpCloneHwProfile @ 0x1407FB5FC (CmpCloneHwProfile.c)
 *     VrpPreLoadKey @ 0x14080B784 (VrpPreLoadKey.c)
 *     IoGetDeviceDirectory @ 0x140824A10 (IoGetDeviceDirectory.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14082E988 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x140830660 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PpDevCfgProcessDeviceClass @ 0x1408316F4 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x1408321A0 (PpDevCfgProcessDeviceReset.c)
 *     ExpCreateOutputSIGNATURE @ 0x1408D03B8 (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x1408D282C (ExpTranslateEfiPath.c)
 *     BiCreateObject @ 0x1408F0BC0 (BiCreateObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1408F4D84 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x14090427C (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x1409C8C60 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x14019A340 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x1406B2120 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlStringFromGUIDEx(unsigned int *a1, __int64 a2, char a3)
{
  __int64 StringRoutine; // rax
  unsigned __int16 v6; // dx

  if ( a3 )
  {
    *(_WORD *)(a2 + 2) = 78;
    StringRoutine = ExpAllocateStringRoutine(0x4EuLL);
    *(_QWORD *)(a2 + 8) = StringRoutine;
    if ( StringRoutine )
    {
      v6 = *(_WORD *)(a2 + 2);
LABEL_4:
      *(_WORD *)a2 = 76;
      swprintf_s(
        *(wchar_t **)(a2 + 8),
        (unsigned __int64)v6 >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        *a1,
        *((unsigned __int16 *)a1 + 2),
        *((unsigned __int16 *)a1 + 3),
        *((unsigned __int8 *)a1 + 8),
        *((unsigned __int8 *)a1 + 9),
        *((unsigned __int8 *)a1 + 10),
        *((unsigned __int8 *)a1 + 11),
        *((unsigned __int8 *)a1 + 12),
        *((unsigned __int8 *)a1 + 13),
        *((unsigned __int8 *)a1 + 14),
        *((unsigned __int8 *)a1 + 15));
      return 0LL;
    }
    return 3221225495LL;
  }
  else
  {
    v6 = *(_WORD *)(a2 + 2);
    if ( v6 >= 0x4Eu )
      goto LABEL_4;
    return 3221225507LL;
  }
}
