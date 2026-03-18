/*
 * XREFs of ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F8A0C
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C0102C50 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01C0810 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C022CBDC (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

__int64 __fastcall InkProcessorOnInkDeviceAttached(struct RawInputManagerDeviceObject *a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-38h] BYREF
  unsigned int *v6; // [rsp+58h] [rbp-18h]
  int v7; // [rsp+60h] [rbp-10h]
  int v8; // [rsp+64h] [rbp-Ch]

  v1 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
  if ( InkProcessor::s_pInstance )
  {
    v2 = InkProcessor::OnDeviceAttached((InkProcessor *)InkProcessor::s_pInstance, a1);
    v1 = v2;
    if ( v2 < 0 && dword_1C030C390 > 2u )
    {
      v8 = 0;
      v4 = v2;
      v6 = &v4;
      v7 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
    }
  }
  else if ( dword_1C030C390 > 2u )
  {
    v8 &= (unsigned int)InkProcessor::s_pInstance;
    v6 = &v4;
    v4 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    v7 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
  }
  return v1;
}
