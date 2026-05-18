/*
 * XREFs of sub_1800A802C @ 0x1800A802C
 * Callers:
 *     sub_1800F7314 @ 0x1800F7314 (sub_1800F7314.c)
 * Callees:
 *     sub_1800F4A60 @ 0x1800F4A60 (sub_1800F4A60.c)
 */

__int64 __fastcall sub_1800A802C(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // rsi
  unsigned int i; // edi
  __int64 result; // rax

  v4 = (_QWORD *)(a1 + 256);
  for ( i = 0; i < 0xA; ++i )
  {
    if ( (i & 0xFFFFFFFC) != 0 || i == 1 )
    {
      if ( *v4 )
        result = sub_1800F4A60(*v4, a2, a3);
    }
    v4 += 2;
  }
  return result;
}
