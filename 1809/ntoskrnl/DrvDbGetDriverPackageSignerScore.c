/*
 * XREFs of DrvDbGetDriverPackageSignerScore @ 0x1409031AC
 * Callers:
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406D3C84 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140902E84 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409045A4 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406D3C84 (DrvDbGetDriverPackageMappedProperty.c)
 */

__int64 __fastcall DrvDbGetDriverPackageSignerScore(_QWORD *a1, __int64 a2, void *a3, wchar_t *a4)
{
  __int64 result; // rax
  int v5; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v6[5]; // [rsp+44h] [rbp-14h] BYREF

  result = DrvDbGetDriverPackageMappedProperty(a1, a2, a3, (__int64)&DEVPKEY_DriverPackage_SignerScore, &v5, a4, 4u, v6);
  if ( (int)result >= 0 && (v5 != 7 || v6[0] != 4) )
    return 3221225473LL;
  return result;
}
