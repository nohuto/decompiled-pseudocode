/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x140627C78
 * Callers:
 *     IopGetDeviceInterfaces @ 0x140627858 (IopGetDeviceInterfaces.c)
 *     PiUEventCopyEventData @ 0x1406960D0 (PiUEventCopyEventData.c)
 *     PiDmObjectCreate @ 0x1406FBAA8 (PiDmObjectCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1407226DC (PiSwDeviceInterfacesUpdateState.c)
 *     IopRegisterDeviceInterface @ 0x140737524 (IopRegisterDeviceInterface.c)
 *     PiSwDeviceInterfaceSetState @ 0x14077A73C (PiSwDeviceInterfaceSetState.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x1405C2E70 (_CmValidateDeviceInterfaceName.c)
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
