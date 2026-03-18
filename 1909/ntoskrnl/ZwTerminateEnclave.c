/*
 * XREFs of ZwTerminateEnclave @ 0x1401C4350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTerminateEnclave(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
