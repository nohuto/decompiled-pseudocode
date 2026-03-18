/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x140623DC8
 * Callers:
 *     IopGetDeviceInterfaces @ 0x1406239A8 (IopGetDeviceInterfaces.c)
 *     PiUEventCopyEventData @ 0x140668CB0 (PiUEventCopyEventData.c)
 *     PiDmObjectCreate @ 0x1406F9CC8 (PiDmObjectCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14072083C (PiSwDeviceInterfacesUpdateState.c)
 *     IopRegisterDeviceInterface @ 0x1407352C4 (IopRegisterDeviceInterface.c)
 *     PiSwDeviceInterfaceSetState @ 0x14077715C (PiSwDeviceInterfaceSetState.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x1405C29A0 (_CmValidateDeviceInterfaceName.c)
 */

NTSTATUS __fastcall CmSetDeviceInterfacePathFormat(__int64 a1, _QWORD *a2, char a3)
{
  NTSTATUS result; // eax
  __int64 v6; // xmm0_8

  result = CmValidateDeviceInterfaceName(a1, (__int64)a2);
  if ( result >= 0 )
  {
    if ( a3 )
      v6 = *(_QWORD *)L"\\??\\";
    else
      v6 = *(_QWORD *)L"\\\\?\\";
    *a2 = v6;
  }
  return result;
}
