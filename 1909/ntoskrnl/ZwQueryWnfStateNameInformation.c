/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x1401C3810
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x140313D20 (RtlRaiseCustomSystemEventTrigger.c)
 *     DbgkpStartSystemErrorHandler @ 0x14084A38C (DbgkpStartSystemErrorHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateNameInformation(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
