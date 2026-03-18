/*
 * XREFs of OSNotifyCreateThermalZone @ 0x1C002EAB0
 * Callers:
 *     ACPIBuildMissingChildren @ 0x1C0017160 (ACPIBuildMissingChildren.c)
 *     OSNotifyCreate @ 0x1C001CF10 (OSNotifyCreate.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C0017BC4 (ACPIInitReferenceDeviceExtension.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00195FC (WPP_RECORDER_SF_qD.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C002EB1C (ACPIBuildThermalZoneRequest.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002EC0C (ACPIBuildThermalZoneExtension.c)
 */

__int64 __fastcall OSNotifyCreateThermalZone(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned __int16 v8; // r9
  int v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v3 = a1;
  v4 = ACPIBuildThermalZoneExtension(a1, a2, &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 20;
    goto LABEL_6;
  }
  ACPIInitReferenceDeviceExtension(v10);
  _InterlockedOr64((volatile signed __int64 *)(v6 + 8), a2);
  v3 = v10;
  v4 = ACPIBuildThermalZoneRequest(v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 21;
LABEL_6:
    v9 = v4;
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      v8,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
      v3,
      v9);
  }
  return v5;
}
