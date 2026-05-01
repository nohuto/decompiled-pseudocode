/*
 * XREFs of ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x1801D2518
 * Callers:
 *     CortanaHelpers::UpdateCortanaAboveLockValueBasedOnEnterprisePolicy @ 0x1801D2AB8 (CortanaHelpers--UpdateCortanaAboveLockValueBasedOnEnterprisePolicy.c)
 *     ?OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x180332F90 (-OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x180332FF0 (-OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x18016755C (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall SHRegSetBOOL(HKEY a1, const unsigned __int16 *a2, const unsigned __int16 *a3, int a4)
{
  __int64 result; // rax
  BOOL v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4 != 0;
  result = _RegSetKeyValueWithSDDL(HKEY_CURRENT_USER, a2, a3, 4u, (BYTE *)&v5, 4u);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
