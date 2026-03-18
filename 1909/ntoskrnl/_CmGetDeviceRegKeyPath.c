/*
 * XREFs of _CmGetDeviceRegKeyPath @ 0x1405C3584
 * Callers:
 *     _CmOpenDeviceRegKeyWorker @ 0x1405C3150 (_CmOpenDeviceRegKeyWorker.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140695310 (PiDqGetRelativeObjectRegPath.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140934804 (_CmDeleteDeviceRegKeyWorker.c)
 * Callees:
 *     _CmValidateDeviceName @ 0x1405C3710 (_CmValidateDeviceName.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x1405C40F8 (_CmGetDeviceInstanceKeyPath.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1406D6D70 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x1406DFC80 (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x14071B6D4 (_CmGetDeviceLogConfKeyPath.c)
 *     _CmGetDeviceControlKeyPath @ 0x14077D800 (_CmGetDeviceControlKeyPath.c)
 */

__int64 __fastcall CmGetDeviceRegKeyPath(
        int a1,
        int a2,
        int a3,
        int a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t a7,
        __int64 a8)
{
  __int64 result; // rax
  int v13; // ecx
  int v14; // r9d
  int v15; // [rsp+20h] [rbp-28h]
  size_t cchDest; // [rsp+30h] [rbp-18h]

  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    return 3221225485LL;
  result = CmValidateDeviceName();
  if ( (int)result < 0 )
    return result;
  if ( (unsigned __int8)a3 != 16 )
  {
    switch ( (unsigned __int8)a3 )
    {
      case 0x12u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceSoftwareKeyPath(a1, a2, a3, a4, a5, pszDest, cchDest, a8);
      case 0x11u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceHardwareKeyPath(v13, a2, a3, a4, v15, pszDest, cchDest, a8);
      case 0x13u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceControlKeyPath(v13, a2, a3, v14, v15, pszDest, cchDest, a8);
      case 0x14u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceLogConfKeyPath(v13, a2, a3, v14, v15, pszDest, cchDest, a8);
    }
    return 3221225485LL;
  }
  LODWORD(cchDest) = a7;
  return CmGetDeviceInstanceKeyPath(v13, a2, a3, a4, v15, pszDest, cchDest, a8);
}
