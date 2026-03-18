/*
 * XREFs of ACPIIsPowerNodeMissingDependencies @ 0x1C000AF8C
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C000C45C (ACPIDevicePowerProcessPhase3.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C001A858 (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_sL @ 0x1C004C6CC (WPP_RECORDER_SF_sL.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C0056B14 (ACPIInternalGetDeviceFromNSOBJ.c)
 */

char __fastcall ACPIIsPowerNodeMissingDependencies(__int64 a1)
{
  __int64 v2; // rbp
  char v3; // bl
  int v4; // r14d
  unsigned int v5; // r15d
  __int64 i; // rsi
  __int64 v7; // r12
  int v8; // eax
  int v9; // edx
  __int64 v10; // r8
  int v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h]

  if ( (*(_DWORD *)(a1 + 16) & 0x1000LL) == 0 )
    return 0;
  v2 = *(_QWORD *)(a1 + 96);
  v3 = 0;
  if ( !v2 )
    return 0;
  v4 = 0;
  v5 = **(_DWORD **)(v2 + 32);
  if ( v5 )
  {
    for ( i = 0LL; ; i += 40LL )
    {
      v7 = *(_QWORD *)(v2 + 32);
      v8 = AMLIGetNameSpaceObject(*(void **)(i + v7 + 40));
      if ( v8 < 0 )
        break;
      ACPIInternalGetDeviceFromNSOBJ(v12, 0LL, v10, &v11);
      AMLIDereferenceHandleEx(v12);
      if ( v11 != 3 )
        return 1;
      if ( ++v4 >= v5 )
        return v3;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sL(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        21,
        43,
        (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
        *(_QWORD *)(i + v7 + 40),
        v8);
  }
  return v3;
}
