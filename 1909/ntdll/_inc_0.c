/*
 * XREFs of _inc_0 @ 0x180099A88
 * Callers:
 *     ReadString_0 @ 0x180099754 (ReadString_0.c)
 *     _input_s @ 0x180099ABC (_input_s.c)
 * Callees:
 *     _filbuf_s @ 0x180096DD4 (_filbuf_s.c)
 */

__int64 __fastcall inc_0(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v1 - 1;
  if ( v1 <= 0 )
    return (unsigned int)filbuf_s();
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1)++;
}
