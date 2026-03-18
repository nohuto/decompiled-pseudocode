/*
 * XREFs of RtlInitStringEx @ 0x14030B070
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x14018D0A0 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __fastcall RtlInitStringEx(STRING *a1, const char *a2)
{
  return RtlInitAnsiStringEx(a1, a2);
}
