/*
 * XREFs of ACPIReserveDependencies @ 0x1C004C474
 * Callers:
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C000AD90 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIAddInitializationDependencies @ 0x1C000BBB8 (ACPIAddInitializationDependencies.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C000ABA0 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_sL @ 0x1C004C6CC (WPP_RECORDER_SF_sL.c)
 */

__int64 __fastcall ACPIReserveDependencies(__int64 a1, volatile signed __int32 *a2)
{
  int v4; // edi
  int v5; // edx
  __int64 v7; // [rsp+40h] [rbp-18h] BYREF
  PVOID P; // [rsp+48h] [rbp-10h]

  v7 = 0LL;
  P = 0LL;
  v4 = ACPIAmliBuildObjectPathnameUnicode((__int64)a2, (__int64)&v7);
  AMLIDereferenceHandleEx(a2);
  if ( v4 >= 0 )
  {
    v4 = IoReserveDependency(a1, &v7, 1LL);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_sL(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      21,
      20,
      (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
      (__int64)P,
      v4);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
  return (unsigned int)v4;
}
