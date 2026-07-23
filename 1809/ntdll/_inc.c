/*
 * XREFs of _inc @ 0x1800993CC
 * Callers:
 *     ReadString @ 0x180099074 (ReadString.c)
 *     _input_l @ 0x180099400 (_input_l.c)
 * Callees:
 *     _filbuf_s @ 0x180099E94 (_filbuf_s.c)
 */

__int64 __fastcall inc(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v1 - 1;
  if ( v1 <= 0 )
    return (unsigned int)filbuf_s();
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1)++;
}
