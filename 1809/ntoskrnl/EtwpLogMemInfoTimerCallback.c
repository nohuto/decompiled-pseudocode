/*
 * XREFs of EtwpLogMemInfoTimerCallback @ 0x140311070
 * Callers:
 *     <none>
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x14000FE54 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     EtwpLogMemInfo @ 0x140310F20 (EtwpLogMemInfo.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x140311588 (EtwpQueuePerfMemInfoWorkItem.c)
 */

void EtwpLogMemInfoTimerCallback()
{
  __int64 v0; // r8
  __int64 v1; // r9
  _OWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF

  MmQuerySystemMemoryInformation(v2);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x80000) != 0 )
    EtwpLogMemInfo(0LL, (__int64)v2, v0, v1);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x800000) != 0 )
    EtwpQueuePerfMemInfoWorkItem(*(_QWORD *)&v2[0]);
}
