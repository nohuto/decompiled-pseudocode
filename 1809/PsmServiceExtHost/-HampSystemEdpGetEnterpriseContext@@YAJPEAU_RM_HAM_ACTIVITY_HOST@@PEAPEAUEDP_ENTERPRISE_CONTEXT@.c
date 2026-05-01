/*
 * XREFs of ?HampSystemEdpGetEnterpriseContext@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAUEDP_ENTERPRISE_CONTEXT@@@Z @ 0x180065C90
 * Callers:
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006A014 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HampSystemEdpGetEnterpriseContext(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct EDP_ENTERPRISE_CONTEXT **a2)
{
  int v4[4]; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v5[256]; // [rsp+30h] [rbp-118h] BYREF

  v4[0] = 256;
  PsmGetPackageFullNameFromKey((char *)a1 + 24, v5, v4);
  return EdpUtilGetEnterpriseContextByName(v5, 1LL, a2);
}
