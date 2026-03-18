/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x1401BAD10
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1402F55A0 (RtlRaiseCustomSystemEventTrigger.c)
 *     DbgkpStartSystemErrorHandler @ 0x1408112C4 (DbgkpStartSystemErrorHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateNameInformation(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
