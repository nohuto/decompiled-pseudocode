/*
 * XREFs of SeAccessCheckWithHint @ 0x1400A85A0
 * Callers:
 *     SeAccessCheckFromStateEx @ 0x140003CD0 (SeAccessCheckFromStateEx.c)
 *     RtlCheckTokenMembershipEx @ 0x1400F0080 (RtlCheckTokenMembershipEx.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140129974 (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlpAllowsLowBoxAccess @ 0x140133D1C (RtlpAllowsLowBoxAccess.c)
 *     RtlCheckTokenCapability @ 0x14030BCE0 (RtlCheckTokenCapability.c)
 *     RtlIsSandboxedToken @ 0x1405D82D0 (RtlIsSandboxedToken.c)
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x14069E710 (ObpVerifyAccessToBoundaryEntry.c)
 *     ExpCheckWakeTimerAccess @ 0x140747DA8 (ExpCheckWakeTimerAccess.c)
 * Callees:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400A8610 (SeAccessCheckWithHintWithAdminlessChecks.c)
 */

__int64 __fastcall SeAccessCheckWithHint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10,
        __int64 a11)
{
  char v13; // [rsp+58h] [rbp-10h]

  v13 = 0;
  return SeAccessCheckWithHintWithAdminlessChecks(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, v13);
}
