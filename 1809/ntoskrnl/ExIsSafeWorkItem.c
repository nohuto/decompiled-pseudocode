/*
 * XREFs of ExIsSafeWorkItem @ 0x14019F6A0
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x140310660 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_1401A04D0;
}
