/*
 * XREFs of CortanaHelpers::SetWindowsHelloActive @ 0x1801F069C
 * Callers:
 *     ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1801EF620 (-OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801EFA80 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801868EC (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 */

void CortanaHelpers::SetWindowsHelloActive()
{
  int v0; // eax
  bool v1; // sf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v0 = _RegSetKeyValueWithSDDL(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
         L"IsWindowsHelloActive",
         4u,
         (BYTE *)&v3,
         4u);
  v1 = v0 < 0;
  if ( v0 > 0 )
  {
    v0 = (unsigned __int16)v0 | 0x80070000;
    v1 = v0 < 0;
  }
  if ( v1 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"internal\\shell\\private\\inc\\cortanahelpers.h",
      (const char *)(unsigned int)v0);
}
