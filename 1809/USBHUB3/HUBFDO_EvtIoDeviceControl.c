/*
 * XREFs of HUBFDO_EvtIoDeviceControl @ 0x1C006DEA0
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000BBB8 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C006B788 (HUBFDO_IoctlGetPortStatus.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C006B94C (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C006BB1C (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C006BE74 (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x1C006C094 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x1C006C250 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C006C468 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C006C858 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x1C006CE08 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C006D090 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C006D44C (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlCyclePort @ 0x1C006D870 (HUBFDO_IoctlCyclePort.c)
 *     HUBFDO_IoctlResetHub @ 0x1C006DD10 (HUBFDO_IoctlResetHub.c)
 */

__int64 __fastcall HUBFDO_EvtIoDeviceControl(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // eax
  _QWORD v10[2]; // [rsp+30h] [rbp-28h] BYREF

  if ( a5 > 0x220440 )
  {
    switch ( a5 )
    {
      case 0x220444u:
        return HUBFDO_IoctlCyclePort(a1, a2, a3, a4);
      case 0x220448u:
        return HUBFDO_IoctlGetNodeConnectionInfo(a1, a2, a3, a4, 1);
      case 0x22044Cu:
        return HUBFDO_IoctlResetHub(a1, a2);
      case 0x220450u:
        return HUBFDO_IoctlGetHubCapsEx(a1, a2, a3, a4);
      case 0x220454u:
        return HUBFDO_IoctlGetHubInformationEx(a1, a2, a3, a4);
      case 0x220458u:
        return HUBFDO_IoctlGetPortConnectorProperties(a1, a2, a3, a4);
      case 0x22045Cu:
        return HUBFDO_IoctlGetNodeConnectionInformationExV2(a1, a2, a3, a4);
    }
  }
  else
  {
    switch ( a5 )
    {
      case 0x220440u:
        return HUBFDO_IoctlGetNodeConnectionAttributes(a1, a2, a3, a4);
      case 0x220010u:
        return HUBFDO_IoctlGetPortStatus(a1, a2, a3, a4);
      case 0x220408u:
        return HUBFDO_IoctlGetNodeInformation(a1, a2, a3, a4);
      case 0x22040Cu:
        return HUBFDO_IoctlGetNodeConnectionInfo(a1, a2, a3, a4, 0);
      case 0x220410u:
        return HUBFDO_IoctlGetDescriptorFromNodeConnection(a1, a2, a3, a4);
      case 0x220414u:
        return HUBFDO_IoctlGetNodeConnectionName(a1, a2, a3, a4);
      case 0x220420u:
        return HUBFDO_IoctlGetNodeConnectionDriverKeyName(a1, a2, a3, a4);
      case 0x22043Cu:
        return HUBFDO_IoctlGetHubCaps(a1, a2, a3, a4);
    }
  }
  v10[1] = 0LL;
  v10[0] = 0x800000010LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v7);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD *))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             a2,
             v8,
             v10);
  if ( !(_BYTE)result )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, a2);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             v9);
  }
  return result;
}
