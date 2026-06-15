/*
 * XREFs of IsSpatialComboEndpointDeterminationDisabled @ 0x180062528
 * Callers:
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x180062434 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800665D8 (IsGetDefaultSpatialRenderingModePresent.c)
 */

bool __fastcall IsSpatialComboEndpointDeterminationDisabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  if ( dword_1801B768C == -1 )
  {
    v4 = 1;
    dword_1801B768C = 1;
    if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(a1, a2, a3, a4) )
      v4 = IsSpatialSpeakerProtectionCheckRequired();
    if ( v4 )
    {
      pcbData = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
        L"DisableSpatialOnComboEndpoints",
        0x18u,
        0LL,
        &dword_1801B768C,
        &pcbData);
    }
  }
  return dword_1801B768C != 0;
}
