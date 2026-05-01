/*
 * XREFs of ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x180137AA0
 * Callers:
 *     ?RuntimeClassInitialize@CustomShellManager@@QEAAJXZ @ 0x18008C778 (-RuntimeClassInitialize@CustomShellManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x180099B98 (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800F16C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall CImmersiveShellComponent::RegisterServiceInformation(
        CImmersiveShellComponent *this,
        const struct _GUID *a2)
{
  __int128 v2; // xmm0
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+30h] [rbp-28h]
  __int64 v6; // [rsp+38h] [rbp-20h]

  v2 = (__int128)*a2;
  v5 = 0LL;
  v4 = v2;
  v6 = 0LL;
  return CImmersiveShellComponent::RegisterServiceInformation(
           this,
           (const struct CImmersiveShellComponent::ISC_SERVICE *)&v4,
           1LL);
}
