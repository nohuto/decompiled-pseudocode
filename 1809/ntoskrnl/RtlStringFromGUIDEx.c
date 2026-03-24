/*
 * XREFs of RtlStringFromGUIDEx @ 0x14058B238
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1401862BC (BapdpMarshallBootDataToRegistry.c)
 *     KsepEvntLogShimsApplied @ 0x14029FC88 (KsepEvntLogShimsApplied.c)
 *     PopSetNewPolicyValue @ 0x14058B120 (PopSetNewPolicyValue.c)
 *     RtlStringFromGUID @ 0x14058B220 (RtlStringFromGUID.c)
 *     CmpInitCmRM @ 0x14067F2E8 (CmpInitCmRM.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406F3960 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1406F3FE4 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406F6DB0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PipGenerateContainerID @ 0x140700960 (PipGenerateContainerID.c)
 *     CmpStartRMLog @ 0x14070E314 (CmpStartRMLog.c)
 *     BcdOpenObject @ 0x140712E24 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x140713550 (BcdGetElementDataWithFlags.c)
 *     BiConvertElementToRegistryData @ 0x140713E94 (BiConvertElementToRegistryData.c)
 *     CmpRecoverEnlistment @ 0x1407F8904 (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x1407F8C38 (CmpAddRemoveRMLogContainer.c)
 *     CmpCloneHwProfile @ 0x1407FB5DC (CmpCloneHwProfile.c)
 *     VrpPreLoadKey @ 0x14080B764 (VrpPreLoadKey.c)
 *     IoGetDeviceDirectory @ 0x1408249F0 (IoGetDeviceDirectory.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14082E968 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x140830640 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PpDevCfgProcessDeviceClass @ 0x1408316D4 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x140832180 (PpDevCfgProcessDeviceReset.c)
 *     ExpCreateOutputSIGNATURE @ 0x1408D0398 (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x1408D280C (ExpTranslateEfiPath.c)
 *     BiCreateObject @ 0x1408F0BA0 (BiCreateObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1408F4D64 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x14090425C (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x1409C8C60 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x14019A360 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x1406B2100 (ExpAllocateStringRoutine.c)
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
