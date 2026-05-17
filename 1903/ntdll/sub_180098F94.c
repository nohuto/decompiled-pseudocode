/*
 * XREFs of sub_180098F94 @ 0x180098F94
 * Callers:
 *     sub_180098540 @ 0x180098540 (sub_180098540.c)
 *     sub_180098FEC @ 0x180098FEC (sub_180098FEC.c)
 *     sub_180099044 @ 0x180099044 (sub_180099044.c)
 * Callees:
 *     sub_180092D20 @ 0x180092D20 (sub_180092D20.c)
 */

__int64 __fastcall sub_180098F94(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  int v6; // ecx

  result = *(unsigned int *)(a2 + 24);
  if ( ((result & 0x40) == 0 || *(_QWORD *)(a2 + 16))
    && ((v6 = *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 8) = v6 - 1, v6 <= 0)
      ? (result = sub_180092D20((unsigned int)(char)a1, a2))
      : (**(_BYTE **)a2 = a1, ++*(_QWORD *)a2, result = a1),
        (_DWORD)result == -1) )
  {
    *a3 = -1;
  }
  else
  {
    ++*a3;
  }
  return result;
}
