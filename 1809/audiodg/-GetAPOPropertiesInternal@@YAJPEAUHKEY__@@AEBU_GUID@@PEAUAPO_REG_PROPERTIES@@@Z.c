/*
 * XREFs of ?GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x140043250
 * Callers:
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000E6B0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     ?GetApoRegKeyPath@@YAJPEAGIPEBG@Z @ 0x140043328 (-GetApoRegKeyPath@@YAJPEAGIPEBG@Z.c)
 *     ?InnerGetAPOProperties@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x14004338C (-InnerGetAPOProperties@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 */

__int64 __fastcall GetAPOPropertiesInternal(HKEY hKey, const struct _GUID *a2, struct APO_REG_PROPERTIES *a3)
{
  unsigned int v6; // edx
  int ApoRegKeyPath; // ebx
  HKEY hKeya; // [rsp+30h] [rbp-128h] BYREF
  OLECHAR sz[40]; // [rsp+40h] [rbp-118h] BYREF
  WCHAR SubKey[80]; // [rsp+90h] [rbp-C8h] BYREF

  if ( StringFromGUID2(a2, sz, 39) > 0 )
  {
    ApoRegKeyPath = GetApoRegKeyPath(SubKey, v6, sz);
    if ( ApoRegKeyPath >= 0 )
    {
      if ( RegOpenKeyExW(hKey, SubKey, 0, 0x20019u, &hKeya) )
      {
        return (unsigned int)-2005139398;
      }
      else
      {
        ApoRegKeyPath = InnerGetAPOProperties(hKeya, a2, a3);
        RegCloseKey(hKeya);
      }
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)ApoRegKeyPath;
}
