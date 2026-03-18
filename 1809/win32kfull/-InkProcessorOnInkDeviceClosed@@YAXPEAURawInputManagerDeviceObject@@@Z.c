/*
 * XREFs of ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F8B0C
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C0102C50 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01C0810 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C022CEF4 (-OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall InkProcessorOnInkDeviceClosed(struct RawInputManagerDeviceObject *a1)
{
  unsigned int v1; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::OnDeviceClosed((InkProcessor *)InkProcessor::s_pInstance, a1);
  }
  else if ( dword_1C030C390 > 2u )
  {
    v1 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    v3 = &v1;
    v5 &= (unsigned int)InkProcessor::s_pInstance;
    v4 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &v2);
  }
}
