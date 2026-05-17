/*
 * XREFs of _swinput_s @ 0x18009B3B0
 * Callers:
 *     _snwscanf_s @ 0x180097810 (_snwscanf_s.c)
 *     swscanf_s @ 0x180098720 (swscanf_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18008CD78 (_invalid_parameter.c)
 *     _winput_s @ 0x18009B4AC (_winput_s.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall swinput_s(char *a1, unsigned __int64 a2, __int64 a3)
{
  FILE Stream; // [rsp+30h] [rbp-38h] BYREF

  memset(&Stream, 0, sizeof(Stream));
  if ( a1 && a3 && a2 <= 0x3FFFFFFF )
  {
    Stream._flag = 73;
    Stream._cnt = 2 * a2;
    Stream._base = a1;
    Stream._ptr = a1;
    return winput_s(&Stream);
  }
  else
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
