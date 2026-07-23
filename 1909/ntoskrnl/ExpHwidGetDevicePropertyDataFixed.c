/*
 * XREFs of ExpHwidGetDevicePropertyDataFixed @ 0x140626CE4
 * Callers:
 *     ExpHwidProcessInterface @ 0x140626354 (ExpHwidProcessInterface.c)
 *     ExpHwidAuthenticateHardwareId @ 0x1406269F4 (ExpHwidAuthenticateHardwareId.c)
 *     ExpHwidGetDeviceProperties @ 0x140626BA0 (ExpHwidGetDeviceProperties.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x140626F10 (IoGetDevicePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140862214 (PnpGetDeviceInterfacePropertyData.c)
 */

NTSTATUS __fastcall ExpHwidGetDevicePropertyDataFixed(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        const DEVPROPKEY *a3,
        int a4,
        ULONG Size,
        PVOID a6)
{
  ULONG v6; // ebx
  NTSTATUS result; // eax
  ULONG v9[6]; // [rsp+40h] [rbp-18h] BYREF
  ULONG v10; // [rsp+60h] [rbp+8h] BYREF

  v6 = Size;
  if ( a1 )
    result = IoGetDevicePropertyData(a1, a3, 0, 0, Size, a6, v9, &v10);
  else
    result = PnpGetDeviceInterfacePropertyData(a2, a3, 0LL);
  if ( result >= 0 )
  {
    if ( v10 == a4 )
    {
      if ( v9[0] != v6 )
        return -1073741820;
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
