/*
 * XREFs of _CmIsDeviceSafeRemovalRequired @ 0x1406DAC64
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14059D504 (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x14013DE50 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceStatus @ 0x14059F508 (_CmGetDeviceStatus.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     _CmGetDeviceParent @ 0x1406EA8C4 (_CmGetDeviceParent.c)
 */

bool __fastcall CmIsDeviceSafeRemovalRequired(__int64 a1, const WCHAR *a2, __int64 a3)
{
  bool v6; // di
  char v7; // bl
  int DeviceRegProp; // eax
  int v9; // ecx
  char v10; // si
  bool v11; // bl
  wchar_t *i; // r8
  int v14; // eax
  int v15; // esi
  unsigned int v16; // [rsp+30h] [rbp-D0h]
  _BYTE v17[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v18; // [rsp+64h] [rbp-9Ch] BYREF
  int v19; // [rsp+68h] [rbp-98h] BYREF
  int v20; // [rsp+6Ch] [rbp-94h] BYREF
  int v21; // [rsp+70h] [rbp-90h] BYREF
  int v22; // [rsp+74h] [rbp-8Ch] BYREF
  int v23; // [rsp+78h] [rbp-88h] BYREF
  int v24; // [rsp+7Ch] [rbp-84h] BYREF
  _BYTE v25[16]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t pszSrc[200]; // [rsp+90h] [rbp-70h] BYREF
  wchar_t pszDest[200]; // [rsp+220h] [rbp+120h] BYREF

  v20 = 0;
  v22 = 0;
  v21 = 0;
  v6 = 0;
  if ( (int)CmGetDeviceStatus(a1, a2, a3, &v20, &v22, &v21, v16) >= 0 )
  {
    v7 = v20;
    v18 = 4;
    DeviceRegProp = CmGetDeviceRegProp(a1, (__int64)a2, a3, 16, (__int64)v25, (__int64)&v19, (__int64)&v18, 0);
    v9 = v19;
    if ( DeviceRegProp < 0 )
      v9 = 0;
    v19 = v9;
    v10 = v9 & 4;
    if ( (v7 & 8) != 0 || (v9 & 2) != 0 )
    {
      v11 = (v9 & 0x80u) == 0;
      v18 = 1;
      v6 = (v9 & 0x80u) == 0;
      if ( !(unsigned int)PnpGetObjectProperty(
                            a1,
                            (__int64)a2,
                            1u,
                            a3,
                            0LL,
                            (__int64)&DEVPKEY_Device_SafeRemovalRequiredOverride,
                            (__int64)&v23,
                            (__int64)v17,
                            1,
                            (__int64)&v18,
                            0) )
      {
        v6 = v11;
        if ( v23 == 17 && v18 == 1 )
          v6 = v17[0] != 0;
      }
      if ( !v10 && v6 )
      {
        v6 = 0;
        for ( i = (wchar_t *)a2; RtlStringCchCopyExW(pszDest, 0xC8uLL, i, 0LL, 0LL, 0x800u) >= 0; i = pszSrc )
        {
          v24 = 200;
          if ( (int)CmGetDeviceParent(a1, pszDest, pszSrc, &v24) < 0 )
            return v10;
          v18 = 4;
          v14 = CmGetDeviceRegProp(a1, (__int64)pszSrc, 0LL, 16, (__int64)v25, (__int64)&v19, (__int64)&v18, 0);
          v15 = v19;
          if ( v14 < 0 )
            v15 = 0;
          v19 = v15;
          v10 = v15 & 4;
          if ( v10 )
            return v10;
        }
      }
    }
  }
  return v6;
}
