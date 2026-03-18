/*
 * XREFs of ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01D4320
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C0056BB0 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C019F620 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0204258 (-OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall InkProcessorOnInkDeviceRemoved(
        struct RawInputManagerDeviceObject *a1,
        __int64 a2,
        __int64 a3,
        const GUID *a4)
{
  unsigned int v4; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::OnDeviceRemoved((InkProcessor *)InkProcessor::s_pInstance, a1);
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v4 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    v6 = &v4;
    v8 &= (unsigned int)InkProcessor::s_pInstance;
    v7 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, 0LL, a4, 3u, &v5);
  }
}
