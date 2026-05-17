/*
 * XREFs of sub_18010A990 @ 0x18010A990
 * Callers:
 *     sub_1800EF084 @ 0x1800EF084 (sub_1800EF084.c)
 *     sub_18010A8F4 @ 0x18010A8F4 (sub_18010A8F4.c)
 * Callees:
 *     sub_18010AA54 @ 0x18010AA54 (sub_18010AA54.c)
 */

__int64 __fastcall sub_18010A990(__int64 a1, unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax

  v3 = (__int64 *)(a1 + 128);
  v4 = 129LL;
  do
  {
    result = *v3;
    if ( (*v3 & 1) == 0 )
      result = sub_18010AA54(*v3, a2);
    ++v3;
    --v4;
  }
  while ( v4 );
  return result;
}
