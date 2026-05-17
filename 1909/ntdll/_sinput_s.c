/*
 * XREFs of _sinput_s @ 0x18009A42C
 * Callers:
 *     _snscanf_s @ 0x1800976F0 (_snscanf_s.c)
 *     sscanf_s @ 0x180098190 (sscanf_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18008CD78 (_invalid_parameter.c)
 *     _input_s @ 0x180099ABC (_input_s.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall sinput_s(char *a1, unsigned __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  FILE Stream; // [rsp+30h] [rbp-38h] BYREF

  memset(&Stream, 0, sizeof(Stream));
  if ( a1 && a3 && a2 <= 0x7FFFFFFF )
  {
    Stream._flag = 73;
    Stream._base = a1;
    Stream._ptr = a1;
    Stream._cnt = a2;
    return input_s(&Stream, a3, a4);
  }
  else
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
