/*
 * XREFs of ExIsSafeWorkItem @ 0x1401AA6E0
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x14032E0C0 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_1401AB560;
}
