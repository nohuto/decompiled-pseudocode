/*
 * XREFs of ?DisplayDiagHotkeyCallback@@YAX_K_J@Z @ 0x1C01DB1C0
 * Callers:
 *     <none>
 * Callees:
 *     UserBeep @ 0x1C01CD3A4 (UserBeep.c)
 */

void __fastcall DisplayDiagHotkeyCallback(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rdx
  char OutputBuffer; // [rsp+50h] [rbp+18h] BYREF
  __int64 InputBuffer; // [rsp+58h] [rbp+20h] BYREF

  InputBuffer = 0LL;
  OutputBuffer = 0;
  if ( !CInputGlobals::WasLastInputInjected(gpInputGlobals) )
  {
    if ( a1 != -16 )
    {
      if ( a1 != -15 )
        return;
      UserBeep(0x1EEu, 200);
      LOBYTE(v2) = 1;
      v3 = 1LL;
      LOBYTE(v4) = 1;
      goto LABEL_8;
    }
    InputBuffer = 49LL;
    if ( ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, &OutputBuffer, 1u) < 0 || !OutputBuffer )
    {
      LOBYTE(v2) = 1;
      v4 = 0LL;
      v3 = 8LL;
LABEL_8:
      xxxDisplayDiagBlackScreenDetected(v3, v4, v2, 0LL, 0LL);
    }
  }
}
