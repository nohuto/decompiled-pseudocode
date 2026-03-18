/*
 * XREFs of ACPIIsPowerNodeMissingDependencies @ 0x1C00141E4
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C0013188 (ACPIDevicePowerProcessPhase3.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C000ABD0 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_sL @ 0x1C004AF5C (WPP_RECORDER_SF_sL.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C005503C (ACPIInternalGetDeviceFromNSOBJ.c)
 */

char __fastcall ACPIIsPowerNodeMissingDependencies(__int64 a1)
{
  __int64 v3; // rbp
  char v4; // bl
  int v5; // r14d
  unsigned int v6; // r15d
  __int64 i; // rsi
  __int64 v8; // r12
  int v9; // eax
  int v10; // edx
  __int64 v11; // r8
  int v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a1 + 16) & 0x1000LL) == 0 )
    return 0;
  v3 = *(_QWORD *)(a1 + 96);
  v4 = 0;
  if ( !v3 )
    return 0;
  v5 = 0;
  v6 = **(_DWORD **)(v3 + 32);
  if ( v6 )
  {
    for ( i = 0LL; ; i += 40LL )
    {
      v8 = *(_QWORD *)(v3 + 32);
      v9 = AMLIGetNameSpaceObject(*(_BYTE **)(v8 + i + 40), *(__int64 **)(a1 + 32), (unsigned __int64 *)&v13, 0);
      if ( v9 < 0 )
        break;
      ACPIInternalGetDeviceFromNSOBJ(v13, 0LL, v11, &v12);
      AMLIDereferenceHandleEx(v13);
      if ( v12 != 3 )
        return 1;
      if ( ++v5 >= v6 )
        return v4;
    }
    WPP_RECORDER_SF_sL(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      21,
      43,
      (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
      *(_QWORD *)(v8 + i + 40),
      v9);
  }
  return v4;
}
