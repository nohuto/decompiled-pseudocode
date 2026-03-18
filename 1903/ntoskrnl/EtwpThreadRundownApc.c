/*
 * XREFs of EtwpThreadRundownApc @ 0x140332200
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     EtwpTraceThreadRundown @ 0x140146BA0 (EtwpTraceThreadRundown.c)
 */

LONG __fastcall EtwpThreadRundownApc(__int64 a1, __int64 a2, __int64 a3, struct _KEVENT **a4, __int64 *a5)
{
  struct _KEVENT *v5; // rbx

  v5 = *a4;
  EtwpTraceThreadRundown((__int64)KeGetCurrentThread(), *a5);
  return KeSetEvent(v5, 0, 0);
}
