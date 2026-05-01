/*
 * XREFs of ?HampSystemEdpIsManaged@@YAKXZ @ 0x18003F4DC
 * Callers:
 *     ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x18003F43C (-HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z.c)
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006A014 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 HampSystemEdpIsManaged(void)
{
  return (unsigned int)EdpGetIsManaged() != 0;
}
