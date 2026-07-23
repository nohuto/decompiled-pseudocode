/*
 * XREFs of PopRecorderInit @ 0x1409DB6BC
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x140173360 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN PopRecorderInit()
{
  unsigned __int64 i; // rbx
  UCHAR *v1; // r9
  BOOLEAN result; // al

  PopBlackBoxLock = 0LL;
  PopBootStatLock = 0LL;
  for ( i = 0LL; i < 0x618; i += 104LL )
  {
    v1 = *(UCHAR **)((char *)&PopBlackBoxEntries + i + 8);
    *((_BYTE *)&PopBlackBoxEntries + i + 68) = 0;
    result = KeRegisterBugCheckReasonCallback(
               (PKBUGCHECK_REASON_CALLBACK_RECORD)((char *)&PopBlackBoxEntries + i + 24),
               (PKBUGCHECK_REASON_CALLBACK_ROUTINE)PopBlackBoxBugcheckCallback,
               KbCallbackSecondaryDumpData,
               v1);
  }
  return result;
}
