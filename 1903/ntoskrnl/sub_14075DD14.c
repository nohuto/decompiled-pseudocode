/*
 * XREFs of sub_14075DD14 @ 0x14075DD14
 * Callers:
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1406AB970 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExInitLicenseData @ 0x140A0D9CC (ExInitLicenseData.c)
 * Callees:
 *     <none>
 */

__int64 sub_14075DD14()
{
  unsigned int v0; // ecx
  unsigned int v1; // edx
  unsigned int v2; // r10d
  unsigned int v3; // r9d

  v0 = 0;
  if ( off_1409AD038 )
  {
    if ( dword_140A5016C != 3 )
      return (unsigned int)-1073741762;
    if ( (unsigned int)dword_140A50154 < 0x18 )
      return (unsigned int)-1073741762;
    v1 = *(_DWORD *)off_1409AD038;
    if ( (unsigned int)dword_140A50154 < *(_DWORD *)off_1409AD038 )
      return (unsigned int)-1073741762;
    if ( v1 < 0x18 )
      return (unsigned int)-1073741762;
    v2 = *((_DWORD *)off_1409AD038 + 1);
    if ( dword_140A50154 < v2 )
      return (unsigned int)-1073741762;
    if ( v1 < v2 )
      return (unsigned int)-1073741762;
    v3 = *((_DWORD *)off_1409AD038 + 2);
    if ( dword_140A50154 < v3 || v1 < v3 || v3 + v2 > v1 )
      return (unsigned int)-1073741762;
  }
  return v0;
}
