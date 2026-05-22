/*
 * XREFs of ?GetWindowId@MPCFocusTarget@@UEAA_KXZ @ 0x18000B6B0
 * Callers:
 *     ?GetWindowId@MPCFocusTarget@@WEI@EAA_KXZ @ 0x18000B2F0 (-GetWindowId@MPCFocusTarget@@WEI@EAA_KXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MPCFocusTarget::GetWindowId(MPCFocusTarget *this)
{
  return *((_QWORD *)this + 7);
}
