/*
 * XREFs of IsSpatialComboEndpointDeterminationDisabled @ 0x1800203C0
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18001E45C (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x180056328 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062F18 (IsGetDefaultSpatialRenderingModePresent.c)
 */

bool __fastcall IsSpatialComboEndpointDeterminationDisabled(__int64 a1)
{
  int v2; // ebx
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  if ( dword_1801B2060 == -1 )
  {
    v2 = 1;
    dword_1801B2060 = 1;
    if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(a1) )
      v2 = IsSpatialSpeakerProtectionCheckRequired();
    if ( v2 )
    {
      pcbData = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
        L"DisableSpatialOnComboEndpoints",
        0x18u,
        0LL,
        &dword_1801B2060,
        &pcbData);
    }
  }
  return dword_1801B2060 != 0;
}
