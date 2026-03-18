/*
 * XREFs of EtwpLogMemInfoRundown @ 0x1408FB0F8
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14070999C (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x140139EC4 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpLogMemInfo @ 0x14032E8F0 (EtwpLogMemInfo.c)
 *     EtwpLogMemInfoWs @ 0x1408F4460 (EtwpLogMemInfoWs.c)
 */

void __fastcall EtwpLogMemInfoRundown(unsigned __int64 a1)
{
  _OWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v2, 0, sizeof(v2));
  MmQuerySystemMemoryInformation(v2);
  EtwpLogMemInfo(a1, (__int64)v2);
  EtwpLogMemInfoWs(a1, *(unsigned __int64 *)&v2[0]);
}
