/*
 * XREFs of ?KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z @ 0x1800B69B0
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800B3CE8 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     <none>
 */

UINT __fastcall HidUsageConverter::KeyboardHidUsageToVKey(USHORT a1)
{
  int v1; // ecx
  HKL KeyboardLayout; // rax
  unsigned __int8 *i; // rdx
  USHORT ChangedUsageList; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 InsertCodesContext; // [rsp+48h] [rbp+10h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF
  _HIDP_KEYBOARD_MODIFIER_STATE ModifierState; // [rsp+58h] [rbp+20h] BYREF

  ChangedUsageList = a1;
  RtlGetDeviceFamilyInfoEnum(0LL, &v7, 0LL);
  v1 = 0;
  if ( v7 == 3 )
  {
    ModifierState.0 = 0;
    HidP_TranslateUsagesToI8042ScanCodes(
      &ChangedUsageList,
      1u,
      HidP_Keyboard_Make,
      &ModifierState,
      (PHIDP_INSERT_SCANCODES)HidUsageConverter::HidUsageToScanCode,
      &InsertCodesContext);
    KeyboardLayout = GetKeyboardLayout(0);
    return MapVirtualKeyExW(InsertCodesContext, 1u, KeyboardLayout);
  }
  else
  {
    for ( i = (unsigned __int8 *)&unk_1801A7C80; *i != ChangedUsageList; ++i )
    {
      if ( (unsigned int)++v1 >= 0x100 )
        return 0;
    }
    return v1;
  }
}
