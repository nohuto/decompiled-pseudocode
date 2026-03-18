/*
 * XREFs of RIMIDE_InitializeDeviceInjection @ 0x1C014A284
 * Callers:
 *     NtUserInitializeInputDeviceInjection @ 0x1C0116DB0 (NtUserInitializeInputDeviceInjection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0146FDC (RIMIDECreatePseudoHIDDevice.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C0149A60 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDE_InitializeDeviceInjection(
        __int16 a1,
        __int16 a2,
        struct tagUSAGE_PROPERTIES *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 *a7)
{
  unsigned int v7; // ebx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  _HIDP_DEVICE_DESC v18; // [rsp+60h] [rbp-91h] BYREF
  _HIDP_DEVICE_DESC v19; // [rsp+A0h] [rbp-51h] BYREF

  v7 = 0;
  v12 = 1;
  memset(&v19, 0, sizeof(v19));
  if ( !a7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  *a7 = 0LL;
  if ( a1 == 13 )
  {
    v12 = 10;
    if ( a2 != 4 )
      v12 = 1;
    if ( a2 == 5 )
      v12 = 5;
  }
  if ( (unsigned int)BuildReportDescriptor(a1, a2, a3, a4, v12, &v19) )
  {
    v18 = v19;
    v16 = RIMIDECreatePseudoHIDDevice(a1, a2, v12, a6, a5, (__int128 *)&v18, 1, 0, 0, 0LL);
    if ( v16 )
    {
      *a7 = v16;
      return 1;
    }
  }
  return v7;
}
