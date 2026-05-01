/*
 * XREFs of ?ReadExePath@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEAGK@Z @ 0x1800C5BFC
 * Callers:
 *     ?GetInstalledBrowserChannelInfo@@YA_NW4ChannelId@BrowserChannels@@W4InstallationLevel@2@PEAUInfo@2@@Z @ 0x1800C5A94 (-GetInstalledBrowserChannelInfo@@YA_NW4ChannelId@BrowserChannels@@W4InstallationLevel@2@PEAUInfo.c)
 * Callees:
 *     ?ReadRegStringValue@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEBGPEAGK@Z @ 0x1800C5C5C (-ReadRegStringValue@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEBGPEAGK@Z.c)
 */

bool __fastcall BrowserChannels::Private::ReadExePath(BrowserChannels::Private *this, WCHAR *a2, unsigned __int16 *a3)
{
  DWORD FileAttributesW; // eax
  bool result; // al
  unsigned int v6; // [rsp+20h] [rbp-8h]

  result = 0;
  if ( BrowserChannels::Private::ReadRegStringValue(this, (HKEY)&stru_1804A6CF0, a2, (unsigned __int16 *)0x104, v6)
    && !PathCchAppend(a2, 0x104uLL, L"msedge.exe") )
  {
    FileAttributesW = GetFileAttributesW(a2);
    if ( FileAttributesW != -1 && (FileAttributesW & 0x10) == 0 )
      return 1;
  }
  return result;
}
