/*
 * XREFs of ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C00199C0
 * Callers:
 *     ?eqLength@EFLOAT@@QEAA?AV1@AEBVPOINTFL@@@Z @ 0x1C0019AB0 (-eqLength@EFLOAT@@QEAA-AV1@AEBVPOINTFL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EFLOAT::vSqrt(EFLOAT *this)
{
  int v2; // r8d
  unsigned int v3; // r8d
  unsigned int v4; // r11d
  unsigned int v5; // r9d
  int v6; // r10d
  unsigned int v7; // r9d
  __int64 v8; // rdi
  unsigned int v9; // edx
  int v10; // eax
  unsigned int v11; // ecx

  v2 = *(_DWORD *)this & 0x7FFFFF | 0x800000;
  if ( (((unsigned __int8)(*(_DWORD *)this >> 23) + 127) & 1) != 0 )
    v3 = v2 << 8;
  else
    v3 = v2 << 7;
  v4 = 0;
  v5 = (unsigned __int8)(*(_DWORD *)this >> 23) + 126;
  v6 = 0;
  if ( (((unsigned __int8)(*(_DWORD *)this >> 23) + 127) & 1) == 0 )
    v5 = (unsigned __int8)(*(_DWORD *)this >> 23) + 127;
  v7 = v5 >> 1;
  v8 = 24LL;
  do
  {
    v9 = (4 * v4) | (v3 >> 30);
    v3 *= 4;
    v10 = 2 * v6;
    v11 = 4 * v6 + 1;
    v6 = 2 * v6 + 1;
    if ( v11 > v9 )
      v6 = v10;
    v4 = v9 - v11;
    if ( v11 > v9 )
      v4 = v9;
    --v8;
  }
  while ( v8 );
  *(_DWORD *)this = (v7 << 23) | v6 & 0x7FFFFF;
}
