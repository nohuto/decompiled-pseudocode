/*
 * XREFs of HvlpLogMicrocodeUpdateStatus @ 0x1408508B4
 * Callers:
 *     HvlPhase2Initialize @ 0x14019DD6C (HvlPhase2Initialize.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140850C28 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmLogMcUpdateStatus @ 0x14027FD68 (CmLogMcUpdateStatus.c)
 *     HvlpGetLogicalProcessorProperty @ 0x140285BE4 (HvlpGetLogicalProcessorProperty.c)
 */

__int64 HvlpLogMicrocodeUpdateStatus()
{
  __int64 result; // rax
  unsigned int v1; // edi
  int *v2; // rbx
  _BYTE v3[3264]; // [rsp+20h] [rbp-CD8h] BYREF

  result = (__int64)memset(v3, 0, 0xCB8uLL);
  v1 = 0;
  if ( (_DWORD)HvlpLogicalProcessorCount )
  {
    v2 = dword_1405798E4;
    do
    {
      HvlpGetLogicalProcessorProperty(*v2, 5, v3);
      result = CmLogMcUpdateStatus(*v2, (__int64)v3);
      if ( (int)result < 0 )
        break;
      ++v1;
      v2 += 30;
    }
    while ( v1 < (unsigned int)HvlpLogicalProcessorCount );
  }
  return result;
}
