/*
 * XREFs of RtlStringFromGUIDEx @ 0x1406A11E8
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x14018C068 (BapdpMarshallBootDataToRegistry.c)
 *     KsepEvntLogShimsApplied @ 0x1402B7098 (KsepEvntLogShimsApplied.c)
 *     CmpInitCmRM @ 0x140697A28 (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x1406993A0 (CmpStartRMLog.c)
 *     PopSetNewPolicyValue @ 0x1406A10C8 (PopSetNewPolicyValue.c)
 *     RtlStringFromGUID @ 0x1406A11D0 (RtlStringFromGUID.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1406FB380 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406FBBB4 (PiDevCfgLogDeviceConfigured.c)
 *     PipGenerateContainerID @ 0x14071BAF8 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14071CAE0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     BcdOpenObject @ 0x14073D18C (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x14073D8EC (BcdGetElementDataWithFlags.c)
 *     BiConvertElementToRegistryData @ 0x14073E294 (BiConvertElementToRegistryData.c)
 *     CmpRecoverEnlistment @ 0x140831DE8 (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x14083212C (CmpAddRemoveRMLogContainer.c)
 *     CmpCloneHwProfile @ 0x1408349A8 (CmpCloneHwProfile.c)
 *     VrpPreLoadKey @ 0x140845104 (VrpPreLoadKey.c)
 *     IoGetDeviceDirectory @ 0x14085EE50 (IoGetDeviceDirectory.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140869208 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14086B020 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PpDevCfgProcessDeviceClass @ 0x14086C08C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14086CB44 (PpDevCfgProcessDeviceReset.c)
 *     ExpCreateOutputSIGNATURE @ 0x14090DB74 (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x140910080 (ExpTranslateEfiPath.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140932A58 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x140942888 (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x1409F5B3C (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x1401A4BD0 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x1406D4F60 (ExpAllocateStringRoutine.c)
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
