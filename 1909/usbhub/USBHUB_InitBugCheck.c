/*
 * XREFs of USBHUB_InitBugCheck @ 0x1C002A134
 * Callers:
 *     DriverEntry @ 0x1C0029F14 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C002CA00 (memset.c)
 */

struct _KBUGCHECK_REASON_CALLBACK_RECORD *__fastcall USBHUB_InitBugCheck(
        PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine)
{
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *PoolWithTag; // rax
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *v3; // rbx

  PoolWithTag = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)ExAllocatePoolWithTag(
                                                              ExDefaultNonPagedPoolType,
                                                              0x30uLL,
                                                              0x42554855u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(struct _KBUGCHECK_REASON_CALLBACK_RECORD));
    if ( !KeRegisterBugCheckReasonCallback(v3, CallbackRoutine, KbCallbackSecondaryDumpData, (PUCHAR)"USBHUB") )
    {
      ExFreePoolWithTag(v3, 0);
      return 0LL;
    }
  }
  return v3;
}
