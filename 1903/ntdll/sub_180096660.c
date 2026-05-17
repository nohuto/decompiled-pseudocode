/*
 * XREFs of sub_180096660 @ 0x180096660
 * Callers:
 *     sub_180093FE0 @ 0x180093FE0 (sub_180093FE0.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 */

__int64 __fastcall sub_180096660(unsigned __int16 a1, __int64 a2)
{
  __int64 result; // rax
  bool v3; // sf

  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 8) - 2 < 0;
    *(_DWORD *)(a2 + 8) -= 2;
    if ( v3 )
    {
      return sub_1800967E8(a1);
    }
    else
    {
      **(_WORD **)a2 = a1;
      result = a1;
      *(_QWORD *)a2 += 2LL;
    }
  }
  else
  {
    sub_18008C6D8();
    return 0xFFFFLL;
  }
  return result;
}
