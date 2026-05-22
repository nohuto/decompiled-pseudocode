/*
 * XREFs of ST::transpose_3_float_ @ 0x18016A3E4
 * Callers:
 *     ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x180169E24 (--$SE3_invert@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST::transpose_3_float_(_DWORD *a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v4; // rbx
  _DWORD *v5; // r8
  __int64 v6; // rdx
  int v7; // r10d
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rbp
  _DWORD *v11; // rcx
  _DWORD *v12; // r11
  int v13; // xmm0_4

  v2 = 0LL;
  v4 = 0LL;
  v5 = a1;
  v6 = a2 - (_QWORD)a1;
  v7 = 1;
  v8 = 3LL;
  do
  {
    result = *(unsigned int *)((char *)v5 + v6);
    *v5 = result;
    if ( v7 < 3 )
    {
      v10 = (unsigned int)(3 - v7);
      v11 = &a1[v4 + 1 + v2];
      v12 = &a1[v4 + 3 + v2];
      do
      {
        v13 = *(_DWORD *)((char *)v11 + v6);
        result = *(unsigned int *)((char *)v12 + v6);
        *v11++ = result;
        *v12 = v13;
        v12 += 3;
        --v10;
      }
      while ( v10 );
    }
    ++v7;
    ++v2;
    v5 += 4;
    v4 += 3LL;
    --v8;
  }
  while ( v8 );
  return result;
}
