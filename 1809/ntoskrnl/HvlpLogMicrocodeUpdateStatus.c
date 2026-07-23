/*
 * XREFs of HvlpLogMicrocodeUpdateStatus @ 0x1408189A4
 * Callers:
 *     HvlPhase2Initialize @ 0x140193444 (HvlPhase2Initialize.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140818CF0 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmLogMcUpdateStatus @ 0x14026C798 (CmLogMcUpdateStatus.c)
 *     HvlpGetLogicalProcessorProperty @ 0x140272068 (HvlpGetLogicalProcessorProperty.c)
 */

void HvlpLogMicrocodeUpdateStatus()
{
  unsigned int v0; // ebx
  int *v1; // rdi
  _BYTE v2[3264]; // [rsp+20h] [rbp-CD8h] BYREF

  v0 = 0;
  if ( (_DWORD)HvlpLogicalProcessorCount )
  {
    v1 = &dword_140549744;
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
