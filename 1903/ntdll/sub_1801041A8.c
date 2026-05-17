/*
 * XREFs of sub_1801041A8 @ 0x1801041A8
 * Callers:
 *     sub_180101400 @ 0x180101400 (sub_180101400.c)
 * Callees:
 *     sub_1800F8F3C @ 0x1800F8F3C (sub_1800F8F3C.c)
 *     sub_180101388 @ 0x180101388 (sub_180101388.c)
 *     sub_180103C58 @ 0x180103C58 (sub_180103C58.c)
 */

char __fastcall sub_1801041A8(int a1)
{
  int v2; // eax
  unsigned int v3; // r8d

  v2 = sub_180101388();
  if ( dword_180166044 == v2 )
  {
    if ( a1 <= dword_180166578 )
    {
      sub_180103C58();
      LOBYTE(v2) = sub_1800F8F3C();
      if ( (_BYTE)v2 )
      {
        if ( (byte_180166058 & 4) == 0 )
          __debugbreak();
      }
    }
  }
  else
  {
    LOBYTE(v3) = ~byte_180166058;
    LOBYTE(v2) = sub_1800F8F8C(-1073740940, (__int64)&unk_1801627F0, (v3 >> 2) & 1);
  }
  return v2;
}
