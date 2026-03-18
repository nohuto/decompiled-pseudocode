/*
 * XREFs of IoQueuesCreation @ 0x1C000980C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000B228 (NVMeControllerInitPart2.c)
 * Callees:
 *     IoQueuesFreeResources @ 0x1C0009B48 (IoQueuesFreeResources.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C00155C0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0015A0C (NVMeIoSubmissionQueueCreate.c)
 */

char __fastcall IoQueuesCreation(__int64 a1)
{
  __int16 v2; // di
  __int16 v3; // di

  v2 = 1;
  if ( *(_WORD *)(a1 + 274) )
  {
    while ( (unsigned __int8)NVMeIoCompletionQueueCreate(a1) )
    {
      if ( (unsigned __int16)++v2 > *(_WORD *)(a1 + 274) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v3 = 1;
    if ( !*(_WORD *)(a1 + 272) )
      return 1;
    while ( (unsigned __int8)NVMeIoSubmissionQueueCreate(a1) )
    {
      if ( (unsigned __int16)++v3 > *(_WORD *)(a1 + 272) )
        return 1;
    }
  }
  IoQueuesFreeResources(a1);
  return 0;
}
