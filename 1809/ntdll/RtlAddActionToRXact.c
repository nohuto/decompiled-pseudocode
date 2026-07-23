/*
 * XREFs of RtlAddActionToRXact @ 0x18008B6F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlAddAttributeActionToRXact @ 0x180083250 (RtlAddAttributeActionToRXact.c)
 */

__int64 __fastcall RtlAddActionToRXact(__int64 a1, int a2, const void **a3, int a4, void *Src, size_t a6)
{
  size_t Size; // [rsp+38h] [rbp-20h]
  _UNICODE_STRING v12; // [rsp+40h] [rbp-18h] BYREF

  RtlInitUnicodeString(&v12, 0LL);
  LODWORD(Size) = a6;
  return RtlAddAttributeActionToRXact(a1, a2, a3, -1LL, (const void **)&v12, a4, Src, Size);
}
