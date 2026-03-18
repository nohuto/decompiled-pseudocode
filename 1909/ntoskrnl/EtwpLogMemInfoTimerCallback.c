/*
 * XREFs of EtwpLogMemInfoTimerCallback @ 0x14032EA50
 * Callers:
 *     <none>
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x140139EC4 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpLogMemInfo @ 0x14032E8F0 (EtwpLogMemInfo.c)
 *     EtwpLogMemNodeInfo @ 0x14032EAC8 (EtwpLogMemNodeInfo.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x14032F120 (EtwpQueuePerfMemInfoWorkItem.c)
 */

__int64 EtwpLogMemInfoTimerCallback()
{
  __int64 result; // rax
  _OWORD v1[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v1, 0, sizeof(v1));
  result = MmQuerySystemMemoryInformation(v1);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x80000) != 0 )
  {
    EtwpLogMemInfo(0LL, (__int64)v1);
    result = EtwpLogMemNodeInfo();
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x800000) != 0 )
    return EtwpQueuePerfMemInfoWorkItem(*(_QWORD *)&v1[0]);
  return result;
}
