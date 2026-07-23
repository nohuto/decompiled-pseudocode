/*
 * XREFs of ExIsSafeWorkItem @ 0x14019F800
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x140310950 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_1401A0630;
}
