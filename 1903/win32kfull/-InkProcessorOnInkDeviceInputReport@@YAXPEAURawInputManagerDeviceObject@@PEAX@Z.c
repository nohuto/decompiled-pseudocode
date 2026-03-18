/*
 * XREFs of ?InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C020EFA4
 * Callers:
 *     EditionRimDeviceReadNotification @ 0x1C01D42B0 (EditionRimDeviceReadNotification.c)
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?ProcessInput@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@PEBX@Z @ 0x1C0245EB4 (-ProcessInput@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@PEBX@Z.c)
 */

void __fastcall InkProcessorOnInkDeviceInputReport(
        struct RawInputManagerDeviceObject *a1,
        struct RawInputManagerDeviceObject *a2,
        const void *a3)
{
  int v3; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::ProcessInput(InkProcessor::s_pInstance, a2, a3);
  }
  else if ( dword_1C0321298 > 2u )
  {
    v3 = -1073741823;
    v5 = &v3;
    v7 &= (unsigned int)InkProcessor::s_pInstance;
    v6 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8371, 0LL, 0LL, 3u, &v4);
  }
}
