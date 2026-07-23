/*
 * XREFs of RtlGetAppContainerSidType @ 0x18000C330
 * Callers:
 *     RtlDefaultNpAcl @ 0x180001E70 (RtlDefaultNpAcl.c)
 *     RtlGetAppContainerParent @ 0x18000B6A0 (RtlGetAppContainerParent.c)
 *     sub_18000BCF8 @ 0x18000BCF8 (sub_18000BCF8.c)
 *     RtlIsParentOfChildAppContainer @ 0x18007FE10 (RtlIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlCompareMemory @ 0x1800A0E80 (RtlCompareMemory.c)
 */

NTSTATUS __cdecl RtlGetAppContainerSidType(PSID AppContainerSid, PAPPCONTAINER_SID_TYPE AppContainerSidType)
{
  char v4; // al

  if ( *((_BYTE *)AppContainerSid + 1) >= 2u
    && *(_BYTE *)AppContainerSid == 1
    && RtlCompareMemory((char *)AppContainerSid + 2, &Source2, 6uLL) == 6
    && *((_DWORD *)AppContainerSid + 2) == 2 )
  {
    v4 = *((_BYTE *)AppContainerSid + 1);
    if ( v4 == 8 )
    {
      *AppContainerSidType = ParentAppContainerSidType;
      return 0;
    }
    if ( v4 == 12 )
    {
      *AppContainerSidType = ChildAppContainerSidType;
      return 0;
    }
    *AppContainerSidType = InvalidAppContainerSidType;
  }
  else
  {
    *AppContainerSidType = NotAppContainerSidType;
  }
  return -1073700352;
}
