/*
 * XREFs of RtlEqualSid @ 0x180067260
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x18000B550 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpValidOwnerSubjectContext @ 0x180066FB8 (RtlpValidOwnerSubjectContext.c)
 *     RtlSidDominates @ 0x180067180 (RtlSidDominates.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800870A4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpCompareKnownObjectAces @ 0x180087F14 (RtlpCompareKnownObjectAces.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CC750 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlpCompareKnownAces @ 0x1800E52A0 (RtlpCompareKnownAces.c)
 *     RtlFindAceBySid @ 0x1800E77F4 (RtlFindAceBySid.c)
 * Callees:
 *     memcmp @ 0x180090C00 (memcmp.c)
 */

bool __fastcall RtlEqualSid(unsigned __int8 *a1, _WORD *a2)
{
  return *(_WORD *)a1 == *a2 && memcmp(a1, a2, 4LL * a1[1] + 8) == 0;
}
