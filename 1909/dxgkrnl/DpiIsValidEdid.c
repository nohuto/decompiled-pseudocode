/*
 * XREFs of DpiIsValidEdid @ 0x1C001E91C
 * Callers:
 *     DpiPdoGetDeviceDescriptor @ 0x1C015BE0C (DpiPdoGetDeviceDescriptor.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C017739C (DpiPdoGetDeviceIdFromDescriptor.c)
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C02A37E0 (DpiFdoValidateIntegratedDisplayDescriptor.c)
 * Callees:
 *     ?DpiEdidCheckSum@@YAEPEADK@Z @ 0x1C001E950 (-DpiEdidCheckSum@@YAEPEADK@Z.c)
 */

unsigned __int8 __fastcall DpiIsValidEdid(__int64 a1)
{
  unsigned int v1; // edx

  if ( *(_DWORD *)a1 == -256 && *(_DWORD *)(a1 + 4) == 0xFFFFFF )
  {
    v1 = 128;
    return DpiEdidCheckSum((char *)a1, v1);
  }
  if ( (*(_BYTE *)a1 & 0xF0) == 0x20 )
  {
    v1 = 256;
    return DpiEdidCheckSum((char *)a1, v1);
  }
  return 0;
}
