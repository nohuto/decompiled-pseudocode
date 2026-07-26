/*
 * XREFs of ?NdisUpcaseUnicodeString@@YAHPEAU_UNICODE_STRING@@0@Z @ 0x1C0091070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall NdisUpcaseUnicodeString(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2)
{
  return RtlUpcaseUnicodeString(a1, a2, 0);
}
