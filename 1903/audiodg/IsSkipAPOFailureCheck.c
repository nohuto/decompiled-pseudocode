/*
 * XREFs of IsSkipAPOFailureCheck @ 0x140009048
 * Callers:
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140008E0C (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 * Callees:
 *     <none>
 */

char IsSkipAPOFailureCheck()
{
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  if ( !byte_140086E20 )
  {
    pvData = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Policy",
            L"SkipAPOFailureCheck",
            0x10u,
            0LL,
            &pvData,
            &pcbData) )
      byte_140087289 = pvData != 0;
    byte_140086E20 = 1;
  }
  return byte_140087289;
}
