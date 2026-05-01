/*
 * XREFs of _CempListEntryIsNull@4 @ 0x10006B10
 * Callers:
 *     _RmpClientWnfSubscriptionWorker@28 @ 0x10006A50 (_RmpClientWnfSubscriptionWorker@28.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall CempListEntryIsNull(_DWORD *this)
{
  return !*this || !this[1];
}
