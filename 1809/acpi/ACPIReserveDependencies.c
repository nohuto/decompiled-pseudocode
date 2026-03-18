/*
 * XREFs of ACPIReserveDependencies @ 0x1C004AD14
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C0011158 (ACPIAddInitializationDependencies.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C00114BC (ACPIConvertDependenciesToPnpReservations.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0010510 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     WPP_RECORDER_SF_sL @ 0x1C004AF5C (WPP_RECORDER_SF_sL.c)
 */

__int64 __fastcall ACPIReserveDependencies(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v5; // edx
  __int64 v7; // [rsp+40h] [rbp-18h] BYREF
  PVOID P; // [rsp+48h] [rbp-10h]

  v7 = 0LL;
  P = 0LL;
  v4 = ACPIAmliBuildObjectPathnameUnicode(a2, (__int64)&v7);
  AMLIDereferenceHandleEx(a2);
  if ( v4 >= 0 )
    v4 = IoReserveDependency(a1, &v7, 1LL);
  else
    WPP_RECORDER_SF_sL(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      21,
      20,
      (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
      (__int64)P,
      v4);
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
  return (unsigned int)v4;
}
