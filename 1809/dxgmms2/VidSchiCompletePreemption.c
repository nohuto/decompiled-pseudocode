/*
 * XREFs of VidSchiCompletePreemption @ 0x1C002DA0C
 * Callers:
 *     VidSchiPreemptEngineNodes @ 0x1C00C6D88 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00C7014 (VidSchiResetEngines.c)
 * Callees:
 *     VidSchiWaitForCompletePreemption @ 0x1C00C78D0 (VidSchiWaitForCompletePreemption.c)
 */

__int64 __fastcall VidSchiCompletePreemption(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 2868);
  if ( (_DWORD)result )
    return VidSchiWaitForCompletePreemption(a1);
  return result;
}
