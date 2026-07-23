/*
 * XREFs of CmpInitGlobalQuotaAllowed @ 0x1409DEC98
 * Callers:
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x1406269DC (MmGetNumberOfPhysicalPages.c)
 */

__int64 CmpInitGlobalQuotaAllowed()
{
  char v0; // al
  unsigned __int64 v1; // rcx
  unsigned __int16 v2; // cx
  unsigned __int64 v3; // rax
  __int64 result; // rax

  CmpSizeOfPagedPoolInBytes = MmSizeOfPagedPoolInBytes;
  if ( CmRegistrySizeLimitLength == 4 && CmRegistrySizeLimitType == 4 && CmRegistrySizeLimit
    || (v0 = 0, CmRegistrySizeLimitLength == 8) && CmRegistrySizeLimitType == 11 && CmRegistrySizeLimit )
  {
    v0 = 1;
  }
  if ( v0 )
  {
    v1 = CmRegistrySizeLimit;
    CmpQuotaExplicitlySet = 1;
    if ( CmRegistrySizeLimit >= ((((unsigned __int64)MmSizeOfPagedPoolInBytes * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL) )
      v1 = (((unsigned __int64)MmSizeOfPagedPoolInBytes * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  else
  {
    v1 = MmSizeOfPagedPoolInBytes / 3uLL;
  }
  CmpGlobalQuota = v1;
  if ( v1 > 0xFFFFFFFF )
  {
    v1 = 0xFFFFFFFFLL;
    CmpGlobalQuota = 0xFFFFFFFFLL;
  }
  if ( v1 < 0x1000000 )
  {
    v1 = 0x1000000LL;
    CmpGlobalQuota = 0x1000000LL;
  }
  CmpGlobalQuotaWarning = 95 * (v1 / 0x64);
  if ( CmSystemHiveLimitSize )
  {
    result = (unsigned int)(CmSystemHiveLimitSize << 20);
  }
  else
  {
    if ( (MmGetNumberOfPhysicalPages(0) & 0xFFFFFFFFFFFFFFFEuLL) < 0xC0000 )
      v3 = (unsigned __int64)MmGetNumberOfPhysicalPages(v2) >> 1;
    else
      LODWORD(v3) = 393216;
    result = (unsigned int)((_DWORD)v3 << 12);
  }
  CmSystemHiveLimitSize = result;
  return result;
}
