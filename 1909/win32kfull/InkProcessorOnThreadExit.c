/*
 * XREFs of InkProcessorOnThreadExit @ 0x1C00E3300
 * Callers:
 *     <none>
 * Callees:
 *     ?OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1C00E3350 (-OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall InkProcessorOnThreadExit(struct tagTHREADINFO *a1)
{
  int v1; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::OnThreadExit(InkProcessor::s_pInstance, a1);
  }
  else if ( dword_1C031F298 > 2u )
  {
    v5 = 0;
    v3 = &v1;
    v1 = -1073741823;
    v4 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E7931, 0LL, 0LL, 3u, &pData);
  }
}
