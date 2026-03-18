/*
 * XREFs of RawInputManagerObjectCreateKernelHandle @ 0x1C00F21B0
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C00F37B0 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00F39F8 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C0122CD0 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 *     ?GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z @ 0x1C0126D80 (-GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RawInputManagerObjectCreateKernelHandle(
        _DWORD *a1,
        ACCESS_MASK a2,
        unsigned __int8 a3,
        KPROCESSOR_MODE AccessMode,
        PHANDLE Handle)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  NTSTATUS v7; // ebx

  *Handle = (void *)-1LL;
  if ( a1[1] == 1 )
  {
    v7 = ObOpenObjectByPointer(a1, 2 * a3 + 512, 0LL, a2, ExRawInputManagerObjectType, AccessMode, Handle);
    if ( v7 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
  }
  else
  {
    return (unsigned int)-1073741788;
  }
  return (unsigned int)v7;
}
