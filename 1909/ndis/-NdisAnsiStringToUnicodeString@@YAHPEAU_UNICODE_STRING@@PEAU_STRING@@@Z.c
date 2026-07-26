/*
 * XREFs of ?NdisAnsiStringToUnicodeString@@YAHPEAU_UNICODE_STRING@@PEAU_STRING@@@Z @ 0x1C0091050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall NdisAnsiStringToUnicodeString(struct _UNICODE_STRING *a1, struct _STRING *a2)
{
  return RtlAnsiStringToUnicodeString(a1, a2, 0);
}
