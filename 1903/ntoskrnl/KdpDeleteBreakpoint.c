/*
 * XREFs of KdpDeleteBreakpoint @ 0x1409577E0
 * Callers:
 *     KdpRestoreBreakPointEx @ 0x140955500 (KdpRestoreBreakPointEx.c)
 *     KdpSendWaitContinue @ 0x140955ADC (KdpSendWaitContinue.c)
 *     KdpWriteBreakPointEx @ 0x140956720 (KdpWriteBreakPointEx.c)
 *     KdpDeleteBreakpointRange @ 0x140957848 (KdpDeleteBreakpointRange.c)
 * Callees:
 *     KdpLowWriteContent @ 0x1409579E4 (KdpLowWriteContent.c)
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
  v3 = *((_DWORD *)&unk_14044EF20 + 10 * v1);
  if ( !v3 )
    return 0;
  if ( (v3 & 0xC) == 4 )
  {
    *((_DWORD *)&unk_14044EF20 + 10 * v1) = 0;
    ++KdpBreakpointChangeCount;
  }
  else if ( (unsigned __int8)KdpLowWriteContent((unsigned int)v1) )
  {
    *((_DWORD *)&unk_14044EF20 + 2 * v2) = 0;
  }
  return 1;
}
