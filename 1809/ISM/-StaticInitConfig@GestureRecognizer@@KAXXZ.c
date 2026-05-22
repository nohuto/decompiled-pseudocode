/*
 * XREFs of ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x1800D878C
 * Callers:
 *     ??0GestureSession@@AEAA@XZ @ 0x1800D53D4 (--0GestureSession@@AEAA@XZ.c)
 * Callees:
 *     ?OpenConfigRegKey@GestureSession@@SAJPEAPEAUHKEY__@@@Z @ 0x1800D5D94 (-OpenConfigRegKey@GestureSession@@SAJPEAPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@FlickRecognizer@@SAXPEAUHKEY__@@@Z @ 0x1800D6870 (-__StaticInitConfig@FlickRecognizer@@SAXPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@ClickRecognizer@@SAXPEAUHKEY__@@@Z @ 0x1800D7534 (-__StaticInitConfig@ClickRecognizer@@SAXPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@DragRecognizer@@SAXPEAUHKEY__@@@Z @ 0x1800D7D4C (-__StaticInitConfig@DragRecognizer@@SAXPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@TwoFingerGestureRecognizer@@SAXPEAUHKEY__@@@Z @ 0x1800D84D8 (-__StaticInitConfig@TwoFingerGestureRecognizer@@SAXPEAUHKEY__@@@Z.c)
 */

void GestureRecognizer::StaticInitConfig(void)
{
  HKEY v0; // rcx
  int v1; // ebx
  LSTATUS v2; // eax
  DWORD cbData; // [rsp+50h] [rbp+18h] BYREF
  DWORD Type; // [rsp+58h] [rbp+20h] BYREF
  __int16 Data; // [rsp+60h] [rbp+28h] BYREF
  HKEY hKey; // [rsp+68h] [rbp+30h] BYREF

  if ( !GestureRecognizer::s_fConfigRead )
  {
    hKey = 0LL;
    GestureSession::OpenConfigRegKey(&hKey);
    ClickRecognizer::__StaticInitConfig(hKey);
    DragRecognizer::__StaticInitConfig(hKey);
    FlickRecognizer::__StaticInitConfig(hKey);
    v0 = hKey;
    v1 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 3.0);
    if ( hKey )
    {
      cbData = 4;
      v2 = RegQueryValueExW(hKey, L"PinchStretchMinimumUpdateThreshold", 0LL, &Type, (LPBYTE)&Data, &cbData);
      v0 = hKey;
      if ( !v2 && Type == 4 )
        LOWORD(v1) = Data;
    }
    PinchStretchRecognizer::s_minimumUpdateThreshold = v1;
    TwoFingerGestureRecognizer::__StaticInitConfig(v0);
    if ( hKey )
      RegCloseKey(hKey);
    GestureRecognizer::s_fConfigRead = 1;
  }
}
