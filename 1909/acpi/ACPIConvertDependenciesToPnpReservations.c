/*
 * XREFs of ACPIConvertDependenciesToPnpReservations @ 0x1C000AD90
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C000BBB8 (ACPIAddInitializationDependencies.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C001A858 (AMLIGetNameSpaceObject.c)
 *     ACPIReserveDependencies @ 0x1C004C474 (ACPIReserveDependencies.c)
 *     WPP_RECORDER_SF_sL @ 0x1C004C6CC (WPP_RECORDER_SF_sL.c)
 */

__int64 __fastcall ACPIConvertDependenciesToPnpReservations(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v4; // esi
  unsigned int v7; // r14d
  __int64 i; // rdi
  __int64 v10; // rbp
  int v11; // edx
  int v12; // r9d

  v3 = 0;
  v4 = 0;
  v7 = **(_DWORD **)(a3 + 32);
  if ( v7 )
  {
    for ( i = 0LL; ; i += 40LL )
    {
      v10 = *(_QWORD *)(a3 + 32);
      v3 = AMLIGetNameSpaceObject(*(void **)(i + v10 + 40));
      if ( v3 < 0 )
        break;
      v3 = ACPIReserveDependencies(a1, 0LL);
      if ( v3 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)v3;
        v12 = 22;
        goto LABEL_12;
      }
      if ( ++v4 >= v7 )
        return (unsigned int)v3;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v3;
    v12 = 21;
LABEL_12:
    WPP_RECORDER_SF_sL(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      21,
      v12,
      (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
      *(_QWORD *)(i + v10 + 40),
      v3);
  }
  return (unsigned int)v3;
}
