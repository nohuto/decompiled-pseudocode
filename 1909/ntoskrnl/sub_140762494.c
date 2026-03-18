/*
 * XREFs of sub_140762494 @ 0x140762494
 * Callers:
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1406A2320 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExInitLicenseData @ 0x140A0E14C (ExInitLicenseData.c)
 * Callees:
 *     <none>
 */

__int64 sub_140762494()
{
  unsigned int v0; // ecx
  unsigned int v1; // edx
  unsigned int v2; // r10d
  unsigned int v3; // r9d

  v0 = 0;
  if ( off_1409AD038 )
  {
    if ( dword_140A4F16C != 3 )
      return (unsigned int)-1073741762;
    if ( (unsigned int)dword_140A4F154 < 0x18 )
      return (unsigned int)-1073741762;
    v1 = *(_DWORD *)off_1409AD038;
    if ( (unsigned int)dword_140A4F154 < *(_DWORD *)off_1409AD038 )
      return (unsigned int)-1073741762;
    if ( v1 < 0x18 )
      return (unsigned int)-1073741762;
    v2 = *((_DWORD *)off_1409AD038 + 1);
    if ( dword_140A4F154 < v2 )
      return (unsigned int)-1073741762;
    if ( v1 < v2 )
      return (unsigned int)-1073741762;
    v3 = *((_DWORD *)off_1409AD038 + 2);
    if ( dword_140A4F154 < v3 || v1 < v3 || v3 + v2 > v1 )
      return (unsigned int)-1073741762;
  }
  return v0;
}
