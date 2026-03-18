/*
 * XREFs of vAlphaConstOnly @ 0x1C00FF8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall vAlphaConstOnly(_DWORD *a1, unsigned __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rdi
  unsigned int v5; // r9d
  unsigned __int64 v6; // r10
  _DWORD *v7; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  unsigned int v11; // r8d
  unsigned int v12; // edx

  v4 = 0LL;
  v5 = HIWORD(a4);
  v6 = 4LL * a3;
  v7 = a1;
  result = v6 + a2;
  v9 = v6 >> 2;
  if ( a2 > result )
    v9 = 0LL;
  if ( v9 )
  {
    v10 = a2 - (_QWORD)a1;
    do
    {
      ++v4;
      v11 = (unsigned __int8)v5 * ((*(_DWORD *)((char *)v7 + v10) & 0xFF00FF) - (*v7 & 0xFF00FF))
          + 8388736
          + 255 * (*v7 & 0xFF00FF);
      v12 = 255 * ((*v7 >> 8) & 0xFF00FF)
          + (unsigned __int8)v5 * (((*(_DWORD *)((char *)v7 + v10) >> 8) & 0xFF00FF) - ((*v7 >> 8) & 0xFF00FF))
          + 8388736;
      result = v12 + ((v12 >> 8) & 0xFFFF00FF);
      *v7++ = (v12 + ((v12 >> 8) & 0xFF00FF)) ^ (result ^ ((v11 + ((v11 >> 8) & 0xFF00FF)) >> 8)) & 0xFF00FF;
    }
    while ( v4 != v9 );
  }
  return result;
}
