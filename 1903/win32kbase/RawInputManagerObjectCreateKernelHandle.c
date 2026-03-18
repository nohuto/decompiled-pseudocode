/*
 * XREFs of RawInputManagerObjectCreateKernelHandle @ 0x1C00A0EA0
 * Callers:
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C0068D70 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 *     ?GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z @ 0x1C00A0E60 (-GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C014964C (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0149910 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v8; // r8

  *Handle = (void *)-1LL;
  if ( a1[1] == 1 )
  {
    v7 = ObOpenObjectByPointer(a1, 2 * a3 + 512, 0LL, a2, ExRawInputManagerObjectType, AccessMode, Handle);
    if ( v7 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v8);
  }
  else
  {
    return (unsigned int)-1073741788;
  }
  return (unsigned int)v7;
}
