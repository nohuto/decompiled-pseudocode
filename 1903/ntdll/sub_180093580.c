/*
 * XREFs of sub_180093580 @ 0x180093580
 * Callers:
 *     sub_180092D30 @ 0x180092D30 (sub_180092D30.c)
 *     sub_1800935D8 @ 0x1800935D8 (sub_1800935D8.c)
 *     sub_180093630 @ 0x180093630 (sub_180093630.c)
 * Callees:
 *     sub_180092D20 @ 0x180092D20 (sub_180092D20.c)
 */

void __fastcall sub_180093580(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  int v6; // eax

  if ( ((*(_BYTE *)(a2 + 24) & 0x40) == 0 || *(_QWORD *)(a2 + 16))
    && ((v5 = *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 8) = v5 - 1, v5 <= 0)
      ? (v6 = sub_180092D20((unsigned int)(char)a1, a2))
      : (**(_BYTE **)a2 = a1, ++*(_QWORD *)a2, v6 = a1),
        v6 == -1) )
  {
    *a3 = -1;
  }
  else
  {
    ++*a3;
  }
}
