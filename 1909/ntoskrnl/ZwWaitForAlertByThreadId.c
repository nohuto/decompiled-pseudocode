/*
 * XREFs of ZwWaitForAlertByThreadId @ 0x1401C4590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWaitForAlertByThreadId(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
