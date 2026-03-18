/*
 * XREFs of RtlGetAppContainerSidType @ 0x14067FA50
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x14061E3F8 (SepValidateReferencedCachedHandles.c)
 *     RtlIsParentOfChildAppContainer @ 0x14067F9B4 (RtlIsParentOfChildAppContainer.c)
 *     NtCreateLowBoxToken @ 0x14067FAD0 (NtCreateLowBoxToken.c)
 *     RtlGetAppContainerParent @ 0x1408D1F00 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1408D2CBC (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14000A8B0 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x1401CC1F0 (RtlCompareMemory.c)
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
