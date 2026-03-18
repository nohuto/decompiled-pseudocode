/*
 * XREFs of RtlGetAppContainerSidType @ 0x14069CAF0
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x14061FF14 (SepValidateReferencedCachedHandles.c)
 *     RtlIsParentOfChildAppContainer @ 0x14069CA5C (RtlIsParentOfChildAppContainer.c)
 *     NtCreateLowBoxToken @ 0x14069CB70 (NtCreateLowBoxToken.c)
 *     RtlGetAppContainerParent @ 0x1408D1800 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1408D25BC (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14000A940 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlGetAppContainerSidType(char *Sid, _DWORD *a2)
{
  UCHAR v4; // cl

  if ( (unsigned __int8)Sid[1] >= 2u
    && *Sid == 1
    && RtlCompareMemory(Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
    && *((_DWORD *)Sid + 2) == 2 )
  {
    v4 = *RtlSubAuthorityCountSid(Sid);
    if ( v4 == 8 )
    {
      *a2 = 2;
      return 0LL;
    }
    if ( v4 == 12 )
    {
      *a2 = 1;
      return 0LL;
    }
    *a2 = 3;
  }
  else
  {
    *a2 = 0;
  }
  return 3221266944LL;
}
