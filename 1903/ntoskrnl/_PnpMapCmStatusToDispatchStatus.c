/*
 * XREFs of _PnpMapCmStatusToDispatchStatus @ 0x140088114
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x140623E60 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchDeviceInterface @ 0x140623F80 (_PnpDispatchDeviceInterface.c)
 *     _PnpDispatchDevice @ 0x140624110 (_PnpDispatchDevice.c)
 *     _PnpDispatchInstallerClass @ 0x140700900 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpMapCmStatusToDispatchStatus(unsigned int a1)
{
  if ( a1 != -1073741810 )
  {
    if ( a1 == -1073741767 )
      return 3221225523LL;
    if ( a1 != -1073741766 )
    {
      if ( a1 == -1073741637 )
        return 3221226021LL;
      if ( a1 != -1073741632 && a1 != -1073741127 )
        return a1;
    }
  }
  return 3221225524LL;
}
