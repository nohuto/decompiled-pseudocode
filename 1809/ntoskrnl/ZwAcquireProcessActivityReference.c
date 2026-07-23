/*
 * XREFs of ZwAcquireProcessActivityReference @ 0x1401B8FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAcquireProcessActivityReference(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
