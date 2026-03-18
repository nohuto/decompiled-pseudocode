/*
 * XREFs of SubmissionQueueReInit @ 0x1C000FBD4
 * Callers:
 *     NVMeQueuesReInit @ 0x1C000F68C (NVMeQueuesReInit.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 */

void *__fastcall SubmissionQueueReInit(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // cx

  *(_DWORD *)(a2 + 44) = 0;
  *(_WORD *)(a2 + 48) = 0;
  *(_WORD *)(a2 + 128) = 0;
  if ( *(_WORD *)(a2 + 40) )
    v2 = *(_WORD *)(a1 + 262);
  else
    v2 = *(_WORD *)(a1 + 260);
  return NVMeZeroMemory(*(void **)a2, v2 << 6);
}
