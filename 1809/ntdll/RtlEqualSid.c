/*
 * XREFs of RtlEqualSid @ 0x18006E5A0
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x18004B240 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpValidOwnerSubjectContext @ 0x18006E2FC (RtlpValidOwnerSubjectContext.c)
 *     RtlSidDominates @ 0x18006E4C0 (RtlSidDominates.c)
 *     RtlpCompareKnownObjectAces @ 0x18008AC68 (RtlpCompareKnownObjectAces.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008D114 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CDEE0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlpCompareKnownAces @ 0x1800E7EA8 (RtlpCompareKnownAces.c)
 *     RtlFindAceBySid @ 0x1800EA454 (RtlFindAceBySid.c)
 * Callees:
 *     memcmp @ 0x180093CC0 (memcmp.c)
 */

BOOLEAN __cdecl RtlEqualSid(PSID Sid1, PSID Sid2)
{
  return *(_WORD *)Sid1 == *(_WORD *)Sid2
      && memcmp(Sid1, Sid2, 4 * ((unsigned __int64)*(unsigned __int16 *)Sid1 >> 8) + 8) == 0;
}
