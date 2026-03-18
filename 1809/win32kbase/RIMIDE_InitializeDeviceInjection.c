/*
 * XREFs of RIMIDE_InitializeDeviceInjection @ 0x1C0120AE4
 * Callers:
 *     NtUserInitializeInputDeviceInjection @ 0x1C00F0000 (NtUserInitializeInputDeviceInjection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C011E1AC (RIMIDECreatePseudoHIDDevice.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C0120390 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDE_InitializeDeviceInjection(
        __int64 a1,
        __int64 a2,
        struct tagUSAGE_PROPERTIES *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 *a7)
{
  unsigned int v7; // ebx
  __int16 v10; // r14
  int v11; // edi
  __int16 v12; // r15
  __int64 v13; // rax
  _HIDP_DEVICE_DESC v15; // [rsp+60h] [rbp-91h] BYREF
  _HIDP_DEVICE_DESC v16; // [rsp+A0h] [rbp-51h] BYREF

  v7 = 0;
  v10 = a2;
  v11 = 1;
  v12 = a1;
  if ( !a7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  *a7 = 0LL;
  if ( v12 == 13 )
  {
    v11 = 10;
    if ( v10 != 4 )
      v11 = 1;
    if ( v10 == 5 )
      v11 = 5;
  }
  if ( (unsigned int)BuildReportDescriptor(v12, v10, a3, a4, v11, &v16) )
  {
    v15 = v16;
    v13 = RIMIDECreatePseudoHIDDevice(v12, v10, v11, a6, a5, (__int128 *)&v15, 1, 0, 0, 0LL);
    if ( v13 )
    {
      *a7 = v13;
      return 1;
    }
  }
  return v7;
}
