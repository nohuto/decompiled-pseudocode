/*
 * XREFs of _HampConnectionCleanup@4 @ 0x10006FC0
 * Callers:
 *     _HamDisconnectFromServer@4 @ 0x10006F70 (_HamDisconnectFromServer@4.c)
 *     _HamConnectToServerEx@12 @ 0x10008300 (_HamConnectToServerEx@12.c)
 *     _HampConnectionCreate@20 @ 0x1000A120 (_HampConnectionCreate@20.c)
 *     _HamConnectForExtendedExecution@8 @ 0x1000B2B0 (_HamConnectForExtendedExecution@8.c)
 *     _HamConnectForSessionState@4 @ 0x1000BF00 (_HamConnectForSessionState@4.c)
 *     _HamConnectForDebugging@8 @ 0x1000BF50 (_HamConnectForDebugging@8.c)
 *     _HamConnectForServicing@4 @ 0x1000BFC0 (_HamConnectForServicing@4.c)
 *     _HamConnectForStateChangeNotifications@16 @ 0x1000C010 (_HamConnectForStateChangeNotifications@16.c)
 *     _HamConnectForFullTrust@8 @ 0x10012220 (_HamConnectForFullTrust@8.c)
 *     _HamDisconnectForFullTrust@4 @ 0x100125C0 (_HamDisconnectForFullTrust@4.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __thiscall HampConnectionCleanup(_DWORD *this)
{
  CLIENT_CALL_RETURN result; // eax

  if ( *this )
  {
    result.Pointer = (void *)this[16];
    switch ( result.Simple )
    {
      case 0:
        result.Pointer = _NdrClientCall4(&stru_10001688, &byte_100030D6, this).Pointer;
        break;
      case 1:
        result.Pointer = _NdrClientCall4(&stru_10001838, &byte_10003AF8, this).Pointer;
        break;
      case 2:
        result.Pointer = _NdrClientCall4(&stru_10001178, &byte_10002880, this).Pointer;
        break;
      case 3:
        result.Pointer = _NdrClientCall4(&stru_100017E8, &byte_100039E8, this).Pointer;
        break;
      case 4:
        result.Pointer = _NdrClientCall4(&stru_10001050, &byte_10002482, this).Pointer;
        break;
      case 5:
        result.Pointer = _NdrClientCall4(&stru_10001120, &byte_10002782, this).Pointer;
        break;
      case 6:
        result.Pointer = _NdrClientCall4(&stru_100010A0, &byte_100026AE, this).Pointer;
        break;
      default:
        return result;
    }
  }
  return result;
}
