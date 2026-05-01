/*
 * XREFs of ?HampSystemEdpIsManaged@@YAKXZ @ 0x1800402EC
 * Callers:
 *     ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x18004024C (-HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z.c)
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180077BDC (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 HampSystemEdpIsManaged(void)
{
  unsigned int v0; // ebx
  unsigned int v1; // edi
  NTSTATUS v2; // eax
  signed int v3; // eax
  bool v4; // sf
  unsigned int v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+34h] [rbp-24h] BYREF
  int v8; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF

  v9 = WNF_ENTR_EDPENFORCEMENTLEVEL_CACHED_POLICY_VALUE_CHANGED;
  v7 = 4;
  v0 = 0;
  v8 = 0;
  v6 = 0;
  v1 = 0;
  v2 = ZwQueryWnfStateData(&v9, 0LL, 0LL, &v8, &v6, &v7);
  if ( v2 >= 0 && v7 == 4 && v6 < 4 && v8 )
    v1 = v6;
  v3 = RtlNtStatusToDosError(v2);
  v4 = v3 < 0;
  if ( v3 > 0 )
    v4 = 1;
  if ( !v4 )
    LOBYTE(v0) = v1 != 0;
  return v0;
}
