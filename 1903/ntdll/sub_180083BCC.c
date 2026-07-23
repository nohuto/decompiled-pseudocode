/*
 * XREFs of sub_180083BCC @ 0x180083BCC
 * Callers:
 *     sub_18002D594 @ 0x18002D594 (sub_18002D594.c)
 * Callees:
 *     <none>
 */

LONG __fastcall sub_180083BCC(__int64 a1, __int64 a2)
{
  LONG result; // eax

  result = *(_DWORD *)(a2 + 40) - *(_DWORD *)(a1 + 264);
  if ( !result )
    return RtlCompareUnicodeString((PUNICODE_STRING)(a2 - 152), (PUNICODE_STRING)(a1 + 72), 1u);
  return result;
}
