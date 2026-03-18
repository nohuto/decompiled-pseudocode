/*
 * XREFs of DpiIsValidEdid @ 0x1C0044E5C
 * Callers:
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C0267978 (DpiFdoValidateIntegratedDisplayDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C0275A2C (DpiPdoGetDeviceDescriptor.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C0275EF0 (DpiPdoGetDeviceIdFromDescriptor.c)
 * Callees:
 *     ?DpiEdidCheckSum@@YAEPEADK@Z @ 0x1C0044E38 (-DpiEdidCheckSum@@YAEPEADK@Z.c)
 */

bool __fastcall DpiIsValidEdid(char *a1)
{
  int v1; // eax
  __int64 v2; // rdx

  v1 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == -256 && (LOBYTE(v1) = 0, *((_DWORD *)a1 + 1) == 0xFFFFFF) )
  {
    v2 = 128LL;
  }
  else
  {
    if ( (v1 & 0xF0) != 0x20 )
      return 0;
    v2 = 256LL;
  }
  return DpiEdidCheckSum(a1, v2);
}
