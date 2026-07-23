/*
 * XREFs of sub_140736CB4 @ 0x140736CB4
 * Callers:
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1405A1888 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExInitLicenseData @ 0x1409C53A0 (ExInitLicenseData.c)
 * Callees:
 *     <none>
 */

__int64 sub_140736CB4()
{
  unsigned int v0; // ecx
  unsigned int v1; // edx
  unsigned int v2; // r10d
  unsigned int v3; // r9d

  v0 = 0;
  if ( off_14096E030 )
  {
    if ( dword_140A0B16C != 3 )
      return (unsigned int)-1073741762;
    if ( (unsigned int)dword_140A0B158 < 0x18 )
      return (unsigned int)-1073741762;
    v1 = *(_DWORD *)off_14096E030;
    if ( (unsigned int)dword_140A0B158 < *(_DWORD *)off_14096E030 )
      return (unsigned int)-1073741762;
    if ( v1 < 0x18 )
      return (unsigned int)-1073741762;
    v2 = *((_DWORD *)off_14096E030 + 1);
    if ( dword_140A0B158 < v2 )
      return (unsigned int)-1073741762;
    if ( v1 < v2 )
      return (unsigned int)-1073741762;
    v3 = *((_DWORD *)off_14096E030 + 2);
    if ( dword_140A0B158 < v3 || v1 < v3 || v3 + v2 > v1 )
      return (unsigned int)-1073741762;
  }
  return v0;
}
