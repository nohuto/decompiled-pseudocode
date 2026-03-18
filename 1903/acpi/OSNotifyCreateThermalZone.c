/*
 * XREFs of OSNotifyCreateThermalZone @ 0x1C002F62C
 * Callers:
 *     OSNotifyCreate @ 0x1C000E770 (OSNotifyCreate.c)
 *     ACPIBuildMissingChildren @ 0x1C00239F8 (ACPIBuildMissingChildren.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C000CD58 (ACPIInitReferenceDeviceExtension.c)
 *     WPP_RECORDER_SF_qD @ 0x1C000D900 (WPP_RECORDER_SF_qD.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C002F698 (ACPIBuildThermalZoneRequest.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002F77C (ACPIBuildThermalZoneExtension.c)
 */

__int64 __fastcall OSNotifyCreateThermalZone(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  int v4; // ebx
  __int64 v5; // rcx
  unsigned __int16 v7; // r9
  int v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0LL;
  v3 = a1;
  v4 = ACPIBuildThermalZoneExtension(a1, a2, &v9);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 20;
      goto LABEL_8;
    }
  }
  else
  {
    ACPIInitReferenceDeviceExtension(v9);
    _InterlockedOr64((volatile signed __int64 *)(v5 + 8), a2);
    v3 = v9;
    v4 = ACPIBuildThermalZoneRequest(v9);
    if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 21;
LABEL_8:
      v8 = v4;
      WPP_RECORDER_SF_qD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        v7,
        (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
        v3,
        v8);
    }
  }
  return (unsigned int)v4;
}
