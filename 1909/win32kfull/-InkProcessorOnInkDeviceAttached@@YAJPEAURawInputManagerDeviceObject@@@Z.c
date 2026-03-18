/*
 * XREFs of ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C020EB6C
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C00E6D30 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01D4420 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0244CCC (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

__int64 __fastcall InkProcessorOnInkDeviceAttached(struct RawInputManagerDeviceObject *a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  int v4; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-38h] BYREF
  int *v6; // [rsp+58h] [rbp-18h]
  int v7; // [rsp+60h] [rbp-10h]
  int v8; // [rsp+64h] [rbp-Ch]

  if ( InkProcessor::s_pInstance )
  {
    v2 = InkProcessor::OnDeviceAttached(InkProcessor::s_pInstance, a1);
    v1 = v2;
    if ( v2 < 0 && dword_1C031F298 > 2u )
    {
      v8 = 0;
      v4 = v2;
      v6 = &v4;
      v7 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E7931, 0LL, 0LL, 3u, &pData);
    }
  }
  else
  {
    v1 = -1073741823;
    if ( dword_1C031F298 > 2u )
    {
      v8 &= (unsigned int)InkProcessor::s_pInstance;
      v6 = &v4;
      v4 = -1073741823;
      v7 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E7931, 0LL, 0LL, 3u, &pData);
    }
  }
  return v1;
}
