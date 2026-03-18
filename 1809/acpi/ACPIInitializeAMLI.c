/*
 * XREFs of ACPIInitializeAMLI @ 0x1C00B8A7C
 * Callers:
 *     ACPIInitialize @ 0x1C00BAE7C (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     OSReadRegValue @ 0x1C00945C8 (OSReadRegValue.c)
 *     ACPIInitGlobalHeapSize @ 0x1C0094958 (ACPIInitGlobalHeapSize.c)
 *     OSReadAcpiConfigurationData @ 0x1C00B8204 (OSReadAcpiConfigurationData.c)
 *     AMLIInitialize @ 0x1C00B8B2C (AMLIInitialize.c)
 *     OSInitializeCallbacks @ 0x1C00BB270 (OSInitializeCallbacks.c)
 */

__int64 ACPIInitializeAMLI()
{
  int v0; // edi
  int v1; // eax
  unsigned int v2; // ebx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(v8) = 4;
  if ( (int)OSReadRegValue("AMLIInitFlags", 0LL, &gAMLIInitFlags, (unsigned int *)&v8) < 0 )
    gAMLIInitFlags = 0;
  LODWORD(v8) = 4;
  if ( (int)OSReadRegValue("AMLIMaxCTObjs", 0LL, &AMLIMaxCTObjs, (unsigned int *)&v8) < 0 )
    AMLIMaxCTObjs = 0;
  v0 = ACPIInitGlobalHeapSize();
  v1 = OSReadAcpiConfigurationData(&v8);
  v2 = v1;
  if ( v1 < 0 )
  {
    v7 = v1;
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      0x24u,
      (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
      v7);
  }
  else
  {
    E820Info = v8 + 44;
    OSInitializeCallbacks();
    return (unsigned int)AMLIInitialize(v3, v0, v4, v5);
  }
  return v2;
}
