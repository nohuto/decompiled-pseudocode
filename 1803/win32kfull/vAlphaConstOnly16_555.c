/*
 * XREFs of vAlphaConstOnly16_555 @ 0x1C02927F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int16 __fastcall vAlphaConstOnly16_555(_WORD *a1, unsigned __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r9d
  _WORD *v6; // rdi
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // ecx

  v4 = 0LL;
  v5 = HIWORD(a4);
  v6 = a1;
  v7 = 2LL * a3;
  v8 = v7 + a2;
  v9 = v7 >> 1;
  if ( a2 > v8 )
    v9 = 0LL;
  if ( v9 )
  {
    v10 = a2 - (_QWORD)a1;
    do
    {
      ++v4;
      LODWORD(v8) = (unsigned __int16)*v6;
      v11 = *(unsigned __int16 *)((char *)v6 + v10);
      v12 = (unsigned __int8)v5 * ((v11 & 0x7C1F) - (v8 & 0x7C1F)) + 16400 + 31 * (v8 & 0x7C1F);
      v13 = (unsigned __int8)v5 * (((v11 >> 5) & 0x1F) - (((unsigned int)v8 >> 5) & 0x1F))
          + 16
          + 31 * (((unsigned int)v8 >> 5) & 0x1F);
      LOWORD(v8) = (v13 + ((v13 >> 5) & 0x1F)) & 0x3E0;
      *v6++ = v8 | ((v12 + ((v12 >> 5) & 0x7C1F)) >> 5) & 0x7C1F;
    }
    while ( v4 != v9 );
  }
  return v8;
}
