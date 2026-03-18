/*
 * XREFs of ?DisplayDiagHotkeyCallback@@YAX_K_J@Z @ 0x1C01C7DA0
 * Callers:
 *     <none>
 * Callees:
 *     UserBeep @ 0x1C01B9414 (UserBeep.c)
 */

void __fastcall DisplayDiagHotkeyCallback(__int64 a1)
{
  unsigned int v2; // ecx
  unsigned __int8 v3; // dl
  char OutputBuffer; // [rsp+50h] [rbp+18h] BYREF
  int InputBuffer; // [rsp+58h] [rbp+20h] BYREF
  int v6; // [rsp+5Ch] [rbp+24h]

  OutputBuffer = 0;
  if ( !CInputGlobals::WasLastInputInjected(gpInputGlobals) )
  {
    if ( a1 != -16 )
    {
      if ( a1 != -15 )
        return;
      UserBeep(494, 200);
      v2 = 1;
      v3 = 1;
      goto LABEL_8;
    }
    v6 = 0;
    InputBuffer = 49;
    if ( ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, &OutputBuffer, 1u) < 0 || !OutputBuffer )
    {
      v3 = 0;
      v2 = 8;
LABEL_8:
      xxxDisplayDiagBlackScreenDetected(v2, v3, 1u);
    }
  }
}
