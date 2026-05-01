/*
 * XREFs of ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x18016755C
 * Callers:
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x18016357C (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180164D0C (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18016665C (-SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801A9CB8 (-SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1801CFF40 (-OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801D03A0 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x1801D0EF4 (CortanaHelpers--SetIsAssignedAccess.c)
 *     CortanaHelpers::SetWindowsHelloActive @ 0x1801D0FD4 (CortanaHelpers--SetWindowsHelloActive.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x1801D2518 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 *     CortanaHelpers::SetAnyAboveLockAppsActive @ 0x1801D2584 (CortanaHelpers--SetAnyAboveLockAppsActive.c)
 *     CortanaHelpers::SetWindowsHelloActive_0 @ 0x1801D25F4 (CortanaHelpers--SetWindowsHelloActive_0.c)
 *     ?SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z @ 0x180409074 (-SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _RegSetKeyValueWithSDDL(
        HKEY a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        DWORD a4,
        BYTE *lpData,
        DWORD cbData)
{
  HKEY v8; // rdi
  unsigned int v9; // ebx
  LSTATUS v10; // eax
  HKEY hKey; // [rsp+78h] [rbp+10h] BYREF

  v8 = a1;
  v9 = 0;
  if ( a2 && *a2 )
  {
    v10 = RegCreateKeyExW(a1, a2, 0, 0LL, 0, 2u, 0LL, &hKey, 0LL);
    a1 = hKey;
    v9 = v10;
  }
  else
  {
    hKey = a1;
  }
  if ( !v9 )
  {
    v9 = RegSetValueExW(a1, a3, 0, a4, lpData, cbData);
    if ( hKey != v8 )
      RegCloseKey(hKey);
  }
  return v9;
}
