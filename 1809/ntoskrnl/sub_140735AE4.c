/*
 * XREFs of sub_140735AE4 @ 0x140735AE4
 * Callers:
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1405A0888 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExInitLicenseData @ 0x1409C43A0 (ExInitLicenseData.c)
 * Callees:
 *     <none>
 */

__int64 sub_140735AE4()
{
  unsigned int v0; // ecx
  unsigned int v1; // edx
  unsigned int v2; // r10d
  unsigned int v3; // r9d

  v0 = 0;
  if ( off_14096D030 )
  {
    if ( dword_140A0A16C != 3 )
      return (unsigned int)-1073741762;
    if ( (unsigned int)dword_140A0A158 < 0x18 )
      return (unsigned int)-1073741762;
    v1 = *(_DWORD *)off_14096D030;
    if ( (unsigned int)dword_140A0A158 < *(_DWORD *)off_14096D030 )
      return (unsigned int)-1073741762;
    if ( v1 < 0x18 )
      return (unsigned int)-1073741762;
    v2 = *((_DWORD *)off_14096D030 + 1);
    if ( dword_140A0A158 < v2 )
      return (unsigned int)-1073741762;
    if ( v1 < v2 )
      return (unsigned int)-1073741762;
    v3 = *((_DWORD *)off_14096D030 + 2);
    if ( dword_140A0A158 < v3 || v1 < v3 || v3 + v2 > v1 )
      return (unsigned int)-1073741762;
  }
  return v0;
}
