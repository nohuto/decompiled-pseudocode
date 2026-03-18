/*
 * XREFs of ?DisplayDiagHotkeyCallback@@YAX_K_J@Z @ 0x1C01A5E90
 * Callers:
 *     <none>
 * Callees:
 *     UserBeep @ 0x1C01983C4 (UserBeep.c)
 */

void __fastcall DisplayDiagHotkeyCallback(__int64 a1)
{
  unsigned int v2; // ecx
  unsigned __int8 v3; // dl

  if ( !CInputGlobals::WasLastInputInjected(gpInputGlobals) )
  {
    if ( a1 == -16 )
    {
      v3 = 0;
      v2 = 8;
    }
    else
    {
      if ( a1 != -15 )
        return;
      UserBeep(494, 200);
      v2 = 1;
      v3 = 1;
    }
    xxxDisplayDiagBlackScreenDetected(v2, v3, 1u);
  }
}
