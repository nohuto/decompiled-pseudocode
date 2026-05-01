/*
 * XREFs of ?Show@AccessibilityExperienceManager@@UEAAX_N@Z @ 0x1802D2DF0
 * Callers:
 *     ?OnDeviceUpdate@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x1802D2410 (-OnDeviceUpdate@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AccessibilityExperienceManager::Show(AccessibilityExperienceManager *this, unsigned __int8 a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 29);
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 40LL))(v2, a2 ^ 1u);
}
