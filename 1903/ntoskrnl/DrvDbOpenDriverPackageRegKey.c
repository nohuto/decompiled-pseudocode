/*
 * XREFs of DrvDbOpenDriverPackageRegKey @ 0x1406F1DFC
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1406F1B20 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406F2AC0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x14093FF84 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14094186C (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1406F1E44 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverPackageRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 2, a2, a3, a4, a5, a6, 0LL);
}
