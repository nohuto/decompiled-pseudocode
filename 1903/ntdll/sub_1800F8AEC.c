/*
 * XREFs of sub_1800F8AEC @ 0x1800F8AEC
 * Callers:
 *     sub_1800808C0 @ 0x1800808C0 (sub_1800808C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F8AEC(unsigned __int16 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( (unsigned __int16)(result + 10240) <= 0x7FFu )
    return (unsigned int)a1[1] + (((_DWORD)result - 55287) << 10);
  return result;
}
