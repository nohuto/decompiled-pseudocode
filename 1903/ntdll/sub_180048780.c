/*
 * XREFs of sub_180048780 @ 0x180048780
 * Callers:
 *     sub_180044D74 @ 0x180044D74 (sub_180044D74.c)
 *     sub_180046108 @ 0x180046108 (sub_180046108.c)
 * Callees:
 *     sub_180048810 @ 0x180048810 (sub_180048810.c)
 *     sub_18004AFB0 @ 0x18004AFB0 (sub_18004AFB0.c)
 */

_BOOL8 __fastcall sub_180048780(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  int v4; // esi
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax

  v3 = (unsigned __int64)(unsigned int)(a2 + 15) >> 4;
  v4 = a3;
  v6 = byte_180120E60[v3];
  if ( (*(_QWORD *)(a1 + 8 * v6 + 128) & 1) != 0 )
  {
    v7 = sub_180048810(a1, byte_180120E60[v3], a3);
    if ( v4 )
    {
      v8 = v7 >> 16;
      if ( (v8 & 0x1F) > 0x10 || (unsigned __int16)v8 > 0xFF00u )
        sub_18004AFB0(a1, (unsigned int)v6);
    }
  }
  return (*(_QWORD *)(a1 + 8 * v6 + 128) & 1) == 0;
}
