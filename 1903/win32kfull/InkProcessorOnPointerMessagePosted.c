/*
 * XREFs of InkProcessorOnPointerMessagePosted @ 0x1C020F2B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1C0245C3C (-OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z.c)
 */

void __fastcall InkProcessorOnPointerMessagePosted(unsigned int a1, unsigned __int64 a2)
{
  int v2; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::OnPointerMessagePosted(InkProcessor::s_pInstance, a1, a2);
  }
  else if ( dword_1C0321298 > 2u )
  {
    v2 = -1073741823;
    v4 = &v2;
    v6 &= (unsigned int)InkProcessor::s_pInstance;
    v5 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8371, 0LL, 0LL, 3u, &v3);
  }
}
