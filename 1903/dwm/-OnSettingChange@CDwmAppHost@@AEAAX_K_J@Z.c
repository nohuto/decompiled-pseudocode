/*
 * XREFs of ?OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z @ 0x140002C50
 * Callers:
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x140001410 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDwmAppHost::OnSettingChange(CDwmAppHost *this, __int64 a2, void *a3)
{
  if ( a2 == 6 || a2 == 42 )
  {
    if ( !a3 )
      return;
    goto LABEL_12;
  }
  if ( a2 != 47 )
  {
    if ( a2 == 67 )
    {
      CDwmAppHost::LpcNotifySettingsChange(this, 0x800u, a3);
    }
    else if ( a2 == 8217 )
    {
      CDwmAppHost::LpcNotifySettingsChange(this, 0x100u, a3);
    }
    return;
  }
  if ( a3 && !(unsigned int)_o__wcsicmp(a3, L"devices") )
LABEL_12:
    CDwmAppHost::LpcNotifySettingsChange(this, 3u, a3);
}
