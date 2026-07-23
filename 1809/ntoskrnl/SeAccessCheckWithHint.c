/*
 * XREFs of SeAccessCheckWithHint @ 0x1400157C0
 * Callers:
 *     SeAccessCheckFromStateEx @ 0x140015700 (SeAccessCheckFromStateEx.c)
 *     RtlCheckTokenMembershipEx @ 0x1400DCBB0 (RtlCheckTokenMembershipEx.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140126AB8 (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlpAllowsLowBoxAccess @ 0x140133190 (RtlpAllowsLowBoxAccess.c)
 *     RtlCheckTokenCapability @ 0x1402EDCA0 (RtlCheckTokenCapability.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140655210 (ObpVerifyAccessToBoundaryEntry.c)
 *     ExpCheckWakeTimerAccess @ 0x14071FD4C (ExpCheckWakeTimerAccess.c)
 * Callees:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 */

__int64 __fastcall SeAccessCheckWithHint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  return SeAccessCheckWithHintWithAdminlessChecks(a1, a2, a3, a4, a5, a6, a7, a8);
}
