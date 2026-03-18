/*
 * XREFs of HvlpLogMicrocodeUpdateStatus @ 0x1408177C4
 * Callers:
 *     HvlPhase2Initialize @ 0x1401932E4 (HvlPhase2Initialize.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140817B10 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     CmLogMcUpdateStatus @ 0x14026C4A8 (CmLogMcUpdateStatus.c)
 *     HvlpGetLogicalProcessorProperty @ 0x140271D78 (HvlpGetLogicalProcessorProperty.c)
 */

void HvlpLogMicrocodeUpdateStatus()
{
  unsigned int v0; // ebx
  int *v1; // rdi
  _BYTE v2[3264]; // [rsp+20h] [rbp-CD8h] BYREF

  v0 = 0;
  if ( (_DWORD)HvlpLogicalProcessorCount )
  {
    v1 = &dword_140548744;
    do
    {
      HvlpGetLogicalProcessorProperty(*v1, 5, v2);
      if ( (int)CmLogMcUpdateStatus(*v1, (__int64)v2) < 0 )
        break;
      ++v0;
      v1 += 30;
    }
    while ( v0 < (unsigned int)HvlpLogicalProcessorCount );
  }
}
