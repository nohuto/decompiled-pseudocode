/*
 * XREFs of sub_18007D01C @ 0x18007D01C
 * Callers:
 *     sub_18007CFCC @ 0x18007CFCC (sub_18007CFCC.c)
 *     sub_1800D4F38 @ 0x1800D4F38 (sub_1800D4F38.c)
 * Callees:
 *     ZwCreateEvent @ 0x18009CFE0 (ZwCreateEvent.c)
 */

int sub_18007D01C()
{
  int result; // eax

  result = ZwCreateEvent(&Handle, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  if ( result >= 0 )
    return ZwCreateEvent(&EventHandle, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  return result;
}
