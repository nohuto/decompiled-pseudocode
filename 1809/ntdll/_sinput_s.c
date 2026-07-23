/*
 * XREFs of _sinput_s @ 0x18009D4EC
 * Callers:
 *     _snscanf_s @ 0x18009A7B0 (_snscanf_s.c)
 *     sscanf_s @ 0x18009B250 (sscanf_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     _input_s @ 0x18009CB7C (_input_s.c)
 */

__int64 __fastcall sinput_s(char *a1, unsigned __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  FILE Stream; // [rsp+30h] [rbp-38h] BYREF

  if ( a1 && a3 && a2 <= 0x7FFFFFFF )
  {
    Stream._base = a1;
    Stream._ptr = a1;
    Stream._cnt = a2;
    Stream._flag = 73;
    return input_s(&Stream, a3, a4);
  }
  else
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
