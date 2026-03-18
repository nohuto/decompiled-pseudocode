/*
 * XREFs of ?DxgkGetBootAnimationRelayState@@YA?AW4_CDD_BOOT_ANIMATION_RELAY_STATE@@XZ @ 0x1C013B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetBootAnimationRelayState(__int64 a1)
{
  return *((unsigned int *)DXGGLOBAL::GetGlobal(a1) + 315);
}
