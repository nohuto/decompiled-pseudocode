/*
 * XREFs of RtlpSanitizeContext @ 0x1800085F4
 * Callers:
 *     RtlDispatchException @ 0x1800048E0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180005BF0 (RtlUnwindEx.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpSanitizeContext(_DWORD *a1)
{
  unsigned int v1; // r8d
  __int64 v3; // rax
  signed int v4; // r9d
  int v5; // r8d
  unsigned int v6; // r10d
  unsigned int v7; // r9d
  signed int v8; // ecx

  v1 = a1[12];
  if ( (v1 & 0x27FFFF80) != 0x10000 && (v1 & 0x27FFFFA0) != 0x100000 && (v1 & 0x7FFFFF0) != 0x200000 )
  {
    LOBYTE(v3) = v1 & 0xE0;
    if ( (v1 & 0x7FFFFE0) != 0x400000 )
      goto LABEL_18;
  }
  LOBYTE(v3) = (v1 & 0x10040) != 65600;
  if ( (((v1 & 0x100040) != 1048640) & (unsigned __int8)v3) == 0 && !MEMORY[0x7FFE03D8] )
    goto LABEL_19;
  LODWORD(v3) = -(v1 & 0x100000);
  v4 = (v1 & 0x100000) == 0 ? 0xC000000D : 0;
  if ( (v1 & 0x100000) == 0 )
  {
LABEL_18:
    v1 = v1 & 0xD800001F | 0x100000;
    a1[12] = v1;
    v4 = 0;
  }
  if ( v4 < 0 )
  {
LABEL_19:
    a1[12] = 1048587;
    return v3;
  }
  if ( (v1 & 0x100040) == 0x100040 )
  {
    LODWORD(v3) = a1[308];
    v5 = a1[312];
    if ( (int)v3 > v5
      || (v6 = a1[309], v7 = a1[313], v8 = v6 + v3, LOBYTE(v3) = v7 + v5, v8 < (int)(v7 + v5))
      || v6 < 0x528
      || a1[311] != 1232
      || v7 < 0x40
      || (v3 = (int)a1[310], (_DWORD *)((char *)a1 + v3 + 1232) != a1) )
    {
      a1[12] &= ~0x40u;
    }
  }
  return v3;
}
