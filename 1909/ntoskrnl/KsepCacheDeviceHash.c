/*
 * XREFs of KsepCacheDeviceHash @ 0x140782550
 * Callers:
 *     <none>
 * Callees:
 *     RtlHashUnicodeString @ 0x140666720 (RtlHashUnicodeString.c)
 */

__int64 __fastcall KsepCacheDeviceHash(__int64 a1)
{
  ULONG HashValue; // [rsp+30h] [rbp+8h] BYREF

  RtlHashUnicodeString((PCUNICODE_STRING)(a1 + 40), 1u, 0, &HashValue);
  return HashValue;
}
