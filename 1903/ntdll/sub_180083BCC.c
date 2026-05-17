/*
 * XREFs of sub_180083BCC @ 0x180083BCC
 * Callers:
 *     sub_18002D594 @ 0x18002D594 (sub_18002D594.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180083BCC(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a2 + 40) - *(_DWORD *)(a1 + 264));
  if ( !(_DWORD)result )
    return RtlCompareUnicodeString((unsigned __int16 *)(a2 - 152), (unsigned __int16 *)(a1 + 72), 1);
  return result;
}
