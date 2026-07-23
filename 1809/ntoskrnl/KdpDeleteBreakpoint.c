/*
 * XREFs of KdpDeleteBreakpoint @ 0x140919D78
 * Callers:
 *     KdpRestoreBreakPointEx @ 0x140917B3C (KdpRestoreBreakPointEx.c)
 *     KdpSendWaitContinue @ 0x140918100 (KdpSendWaitContinue.c)
 *     KdpWriteBreakPointEx @ 0x140918CD0 (KdpWriteBreakPointEx.c)
 *     KdpDeleteBreakpointRange @ 0x140919DE0 (KdpDeleteBreakpointRange.c)
 * Callees:
 *     KdpLowWriteContent @ 0x140919F7C (KdpLowWriteContent.c)
 */

char __fastcall KdpDeleteBreakpoint(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  int v3; // eax

  v1 = (unsigned int)(a1 - 1);
  if ( (unsigned int)(a1 - 1) > 0x1F )
    return 0;
  v2 = 5 * v1;
  v3 = *((_DWORD *)&unk_140424340 + 10 * v1);
  if ( !v3 )
    return 0;
  if ( (v3 & 0xC) == 4 )
  {
    *((_DWORD *)&unk_140424340 + 10 * v1) = 0;
    ++KdpBreakpointChangeCount;
  }
  else if ( (unsigned __int8)KdpLowWriteContent((unsigned int)v1) )
  {
    *((_DWORD *)&unk_140424340 + 2 * v2) = 0;
  }
  return 1;
}
