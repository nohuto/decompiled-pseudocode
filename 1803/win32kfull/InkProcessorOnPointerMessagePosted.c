/*
 * XREFs of InkProcessorOnPointerMessagePosted @ 0x1C01D4510
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1C0204418 (-OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z.c)
 */

void __fastcall InkProcessorOnPointerMessagePosted(unsigned int a1, const GUID *a2)
{
  unsigned int v2; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::OnPointerMessagePosted((InkProcessor *)InkProcessor::s_pInstance, a1, (unsigned __int64)a2);
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v2 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    v4 = &v2;
    v6 &= (unsigned int)InkProcessor::s_pInstance;
    v5 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, a2, (LPCGUID)a1, 3u, &v3);
  }
}
