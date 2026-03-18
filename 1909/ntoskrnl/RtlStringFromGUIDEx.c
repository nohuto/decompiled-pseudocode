/*
 * XREFs of RtlStringFromGUIDEx @ 0x14069DD28
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x14018C8E0 (BapdpMarshallBootDataToRegistry.c)
 *     KsepEvntLogShimsApplied @ 0x1402B6DF8 (KsepEvntLogShimsApplied.c)
 *     CmpInitCmRM @ 0x14068AF98 (CmpInitCmRM.c)
 *     PopSetNewPolicyValue @ 0x14069DC08 (PopSetNewPolicyValue.c)
 *     RtlStringFromGUID @ 0x14069DD10 (RtlStringFromGUID.c)
 *     CmpStartRMLog @ 0x1406BC0BC (CmpStartRMLog.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1406FD160 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406FD994 (PiDevCfgLogDeviceConfigured.c)
 *     PipGenerateContainerID @ 0x14071D8E8 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14071E970 (PiDevCfgResolveVariableDeviceProperty.c)
 *     BcdOpenObject @ 0x14073F08C (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x14073F7EC (BcdGetElementDataWithFlags.c)
 *     BiConvertElementToRegistryData @ 0x140740194 (BiConvertElementToRegistryData.c)
 *     CmpRecoverEnlistment @ 0x140831438 (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x14083177C (CmpAddRemoveRMLogContainer.c)
 *     CmpCloneHwProfile @ 0x140834008 (CmpCloneHwProfile.c)
 *     VrpPreLoadKey @ 0x140844778 (VrpPreLoadKey.c)
 *     IoGetDeviceDirectory @ 0x14085E550 (IoGetDeviceDirectory.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140868908 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14086A720 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PpDevCfgProcessDeviceClass @ 0x14086B78C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14086C244 (PpDevCfgProcessDeviceReset.c)
 *     ExpCreateOutputSIGNATURE @ 0x14090D5D4 (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x14090FAE0 (ExpTranslateEfiPath.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1409324CC (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x1409422F8 (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x1409F5A4C (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x1401A52F0 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x1406D4640 (ExpAllocateStringRoutine.c)
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
