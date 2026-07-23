/*
 * XREFs of RtlEqualSid @ 0x180067010
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x18000B550 (RtlGetAppContainerNamedObjectPath.c)
 *     sub_180066D68 @ 0x180066D68 (sub_180066D68.c)
 *     RtlSidDominates @ 0x180066F30 (RtlSidDominates.c)
 *     sub_180086A04 @ 0x180086A04 (sub_180086A04.c)
 *     sub_180087874 @ 0x180087874 (sub_180087874.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CC690 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     sub_1800E51B0 @ 0x1800E51B0 (sub_1800E51B0.c)
 *     sub_1800E7704 @ 0x1800E7704 (sub_1800E7704.c)
 * Callees:
 *     memcmp @ 0x180090560 (memcmp.c)
 */

BOOLEAN __cdecl RtlEqualSid(PSID Sid1, PSID Sid2)
{
  return *(_WORD *)Sid1 == *(_WORD *)Sid2 && memcmp(Sid1, Sid2, 4LL * *((unsigned __int8 *)Sid1 + 1) + 8) == 0;
}
