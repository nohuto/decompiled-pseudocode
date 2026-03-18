/*
 * XREFs of RIMSetContactBoundary @ 0x1C0113168
 * Callers:
 *     RIMApplyTransforms @ 0x1C0112708 (RIMApplyTransforms.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C0114C5C (RIMAddSimulatedPointerDeviceData.c)
 * Callees:
 *     RIMTransformPhysicalPointToScreen @ 0x1C0113AB0 (RIMTransformPhysicalPointToScreen.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C0113B24 (RIMTransformPointerDevicePointToPhysical.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMSetContactBoundary(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  int v5; // esi
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // r8d
  __int64 v15; // [rsp+50h] [rbp+30h] BYREF
  __int64 v16; // [rsp+58h] [rbp+38h] BYREF
  __int64 v17; // [rsp+60h] [rbp+40h] BYREF

  v17 = a3;
  v5 = 0;
  if ( !a2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, 0LL, a3);
    a3 = v17;
  }
  if ( !a1 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    LODWORD(a3) = v17;
  }
  LODWORD(v15) = a3 - (a4 >> 1);
  LODWORD(v16) = a3 + (a4 >> 1);
  HIDWORD(v15) = HIDWORD(v17) - (a5 >> 1);
  HIDWORD(v16) = HIDWORD(v17) + (a5 >> 1);
  v9 = *(_DWORD *)(a1 + 308);
  if ( (v9 & 0x20) == 0 || (v9 & 0x8000) != 0 )
  {
    RIMTransformPointerDevicePointToPhysical(a1, v15, &v17);
    v5 = RIMTransformPhysicalPointToScreen(a1, &v17, &v15);
    if ( v5 < 0 )
      return (unsigned int)v5;
    RIMTransformPointerDevicePointToPhysical(a1, v16, &v17);
    v5 = RIMTransformPhysicalPointToScreen(a1, &v17, &v16);
    goto LABEL_11;
  }
  if ( (int)IsApplyMagInputTransformSupported() >= 0 )
  {
    ApplyMagInputTransform(&v15, &v16);
LABEL_11:
    if ( v5 < 0 )
      return (unsigned int)v5;
  }
  v10 = v15;
  v11 = v16;
  v12 = HIDWORD(v15);
  v13 = HIDWORD(v16);
  *a2 = v15;
  a2[2] = v11;
  a2[1] = v12;
  a2[3] = v13;
  if ( v10 == v11 && a4 )
    a2[2] = v10 + 1;
  if ( v12 == v13 && a5 )
    a2[3] = v12 + 1;
  return (unsigned int)v5;
}
