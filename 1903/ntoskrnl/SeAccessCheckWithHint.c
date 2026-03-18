/*
 * XREFs of SeAccessCheckWithHint @ 0x1400C8720
 * Callers:
 *     SeAccessCheckFromStateEx @ 0x140003C40 (SeAccessCheckFromStateEx.c)
 *     RtlCheckTokenMembershipEx @ 0x1400B39D0 (RtlCheckTokenMembershipEx.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140128F54 (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlpAllowsLowBoxAccess @ 0x14013322C (RtlpAllowsLowBoxAccess.c)
 *     RtlCheckTokenCapability @ 0x14030C230 (RtlCheckTokenCapability.c)
 *     RtlIsSandboxedToken @ 0x1405D7B10 (RtlIsSandboxedToken.c)
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140680270 (ObpVerifyAccessToBoundaryEntry.c)
 *     ExpCheckWakeTimerAccess @ 0x140745EA8 (ExpCheckWakeTimerAccess.c)
 * Callees:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400C8790 (SeAccessCheckWithHintWithAdminlessChecks.c)
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
