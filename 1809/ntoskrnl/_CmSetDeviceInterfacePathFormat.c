/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x14059EAFC
 * Callers:
 *     IopGetDeviceInterfaces @ 0x14059E6C4 (IopGetDeviceInterfaces.c)
 *     PiUEventCopyEventData @ 0x14059FB98 (PiUEventCopyEventData.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1406D8960 (PiSwDeviceInterfacesUpdateState.c)
 *     PiDmObjectCreate @ 0x1406F1C50 (PiDmObjectCreate.c)
 *     IopRegisterDeviceInterface @ 0x140709AF4 (IopRegisterDeviceInterface.c)
 *     PiSwDeviceInterfaceSetState @ 0x140754344 (PiSwDeviceInterfaceSetState.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x1405C6810 (_CmValidateDeviceInterfaceName.c)
 */

__int64 __fastcall CmSetDeviceInterfacePathFormat(__int64 a1, _QWORD *a2, __int64 a3)
{
  char v3; // di
  __int64 result; // rax
  __int64 v6; // xmm0_8

  v3 = a3;
  result = CmValidateDeviceInterfaceName(a1, a2, a3);
  if ( (int)result >= 0 )
  {
    if ( v3 )
      v6 = *(_QWORD *)L"\\??\\";
    else
      v6 = *(_QWORD *)L"\\\\?\\";
    *a2 = v6;
  }
  return result;
}
