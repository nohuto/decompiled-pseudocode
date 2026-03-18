/*
 * XREFs of InkProcessorOnPointerMessagePosted @ 0x1C01F8EF0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1C022D460 (-OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z.c)
 */

void __fastcall InkProcessorOnPointerMessagePosted(unsigned int a1, unsigned __int64 a2)
{
  unsigned int v2; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::OnPointerMessagePosted((InkProcessor *)InkProcessor::s_pInstance, a1, a2);
  }
  else if ( dword_1C030C390 > 2u )
  {
    v2 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    v4 = &v2;
    v6 &= (unsigned int)InkProcessor::s_pInstance;
    v5 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &v3);
  }
}
