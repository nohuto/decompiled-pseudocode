/*
 * XREFs of VidSchiCompletePreemption @ 0x1C002E11C
 * Callers:
 *     VidSchiPreemptEngineNodes @ 0x1C00C9AA0 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00C9D2C (VidSchiResetEngines.c)
 * Callees:
 *     VidSchiWaitForCompletePreemption @ 0x1C00CA604 (VidSchiWaitForCompletePreemption.c)
 */

__int64 __fastcall VidSchiCompletePreemption(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 2868);
  if ( (_DWORD)result )
    return VidSchiWaitForCompletePreemption(a1);
  return result;
}
