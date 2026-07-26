/*
 * XREFs of ?NdisUnicodeStringToAnsiString@@YAHPEAU_STRING@@PEAU_UNICODE_STRING@@@Z @ 0x1C0091220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall NdisUnicodeStringToAnsiString(struct _STRING *a1, struct _UNICODE_STRING *a2)
{
  return RtlUnicodeStringToAnsiString(a1, a2, 0);
}
