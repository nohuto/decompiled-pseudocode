/*
 * XREFs of write_char @ 0x180096CE0
 * Callers:
 *     _output_l @ 0x180096490 (_output_l.c)
 *     write_multi_char @ 0x180096D38 (write_multi_char.c)
 *     write_string @ 0x180096D90 (write_string.c)
 * Callees:
 *     _flsbuf @ 0x180096480 (_flsbuf.c)
 */

void __fastcall write_char(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  int v6; // eax

  if ( ((*(_BYTE *)(a2 + 24) & 0x40) == 0 || *(_QWORD *)(a2 + 16))
    && ((v5 = *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 8) = v5 - 1, v5 <= 0)
      ? (v6 = flsbuf((char)a1, (FILE *)a2))
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
