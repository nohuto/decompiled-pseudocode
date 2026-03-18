/*
 * XREFs of or_all_4_wide_rotated_need_last @ 0x1C00F7A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall or_all_4_wide_rotated_need_last(int a1, char a2, int a3, unsigned int *a4, _BYTE *a5)
{
  __int64 v5; // r11
  _BYTE *result; // rax
  unsigned int *v7; // r10
  unsigned __int32 v8; // r8d

  v5 = a3;
  result = a5;
  v7 = &a4[a1];
  do
  {
    v8 = _byteswap_ulong(*a4++) >> a2;
    result[3] |= v8;
    *result |= HIBYTE(v8);
    result[1] |= BYTE2(v8);
    result[2] |= BYTE1(v8);
    result += v5;
  }
  while ( a4 != v7 );
  return result;
}
