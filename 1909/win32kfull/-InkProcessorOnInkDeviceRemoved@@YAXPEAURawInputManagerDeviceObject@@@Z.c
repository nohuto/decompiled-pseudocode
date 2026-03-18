/*
 * XREFs of ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C020EE18
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C00E6D30 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01D4420 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0245320 (-OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall InkProcessorOnInkDeviceRemoved(struct RawInputManagerDeviceObject *a1)
{
  int v1; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::OnDeviceRemoved(InkProcessor::s_pInstance, a1);
  }
  else if ( dword_1C031F298 > 2u )
  {
    v1 = -1073741823;
    v3 = &v1;
    v5 &= (unsigned int)InkProcessor::s_pInstance;
    v4 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E7931, 0LL, 0LL, 3u, &v2);
  }
}
