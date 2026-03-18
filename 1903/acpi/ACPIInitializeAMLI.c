/*
 * XREFs of ACPIInitializeAMLI @ 0x1C00BC504
 * Callers:
 *     ACPIInitialize @ 0x1C00BE114 (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0001A78 (WPP_RECORDER_SF_L.c)
 *     ACPIInitGlobalHeapSize @ 0x1C0090B0C (ACPIInitGlobalHeapSize.c)
 *     OSReadRegValue @ 0x1C0090BC8 (OSReadRegValue.c)
 *     OSInitializeCallbacks @ 0x1C00BB424 (OSInitializeCallbacks.c)
 *     AMLIInitialize @ 0x1C00BC5B4 (AMLIInitialize.c)
 *     OSReadAcpiConfigurationData @ 0x1C00BD1D0 (OSReadAcpiConfigurationData.c)
 */

__int64 ACPIInitializeAMLI()
{
  int v0; // edi
  int v1; // ebx
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  int v6; // [rsp+28h] [rbp-10h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(v7) = 4;
  if ( (int)OSReadRegValue("AMLIInitFlags", 0LL, &gAMLIInitFlags, (unsigned int *)&v7) < 0 )
    gAMLIInitFlags = 0;
  LODWORD(v7) = 4;
  if ( (int)OSReadRegValue("AMLIMaxCTObjs", 0LL, &AMLIMaxCTObjs, (unsigned int *)&v7) < 0 )
    AMLIMaxCTObjs = 0;
  v0 = ACPIInitGlobalHeapSize();
  v1 = OSReadAcpiConfigurationData(&v7);
  if ( v1 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = v1;
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x24u,
        (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
        v6);
    }
  }
  else
  {
    E820Info = v7 + 44;
    OSInitializeCallbacks();
    return (unsigned int)AMLIInitialize(v2, v0, v3, v4);
  }
  return (unsigned int)v1;
}
