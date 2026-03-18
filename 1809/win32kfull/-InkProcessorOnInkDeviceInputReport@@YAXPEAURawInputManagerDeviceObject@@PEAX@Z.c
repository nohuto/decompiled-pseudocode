/*
 * XREFs of ?InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C01F8BAC
 * Callers:
 *     EditionRimDeviceReadNotification @ 0x1C01C0510 (EditionRimDeviceReadNotification.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?ProcessInput@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@PEBX@Z @ 0x1C022D6EC (-ProcessInput@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@PEBX@Z.c)
 */

void __fastcall InkProcessorOnInkDeviceInputReport(struct RawInputManagerDeviceObject *a1, void *a2, const void *a3)
{
  unsigned int v3; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::ProcessInput(
      (InkProcessor *)InkProcessor::s_pInstance,
      (struct RawInputManagerDeviceObject *)InkProcessor::s_pInstance,
      a3);
  }
  else if ( dword_1C030C390 > 2u )
  {
    v3 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    v5 = &v3;
    v7 &= (unsigned int)InkProcessor::s_pInstance;
    v6 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &v4);
  }
}
