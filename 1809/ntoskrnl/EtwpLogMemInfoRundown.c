/*
 * XREFs of EtwpLogMemInfoRundown @ 0x1408BE9FC
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140726194 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x14000FE54 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     EtwpLogMemInfo @ 0x140310E20 (EtwpLogMemInfo.c)
 *     EtwpLogMemInfoWs @ 0x1408B800C (EtwpLogMemInfoWs.c)
 */

void __fastcall EtwpLogMemInfoRundown(unsigned __int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _OWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF

  MmQuerySystemMemoryInformation(v4);
  EtwpLogMemInfo(a1, (__int64)v4, v2, v3);
  EtwpLogMemInfoWs(a1, *(unsigned __int64 *)&v4[0]);
}
