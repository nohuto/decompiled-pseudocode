/*
 * XREFs of sub_18004B360 @ 0x18004B360
 * Callers:
 *     sub_18004B17C @ 0x18004B17C (sub_18004B17C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004B360(__int64 a1, char a2, _QWORD *a3)
{
  _DWORD *v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // r9d
  __int16 *v6; // r10
  _BYTE *v7; // rcx
  unsigned __int16 v8; // ax
  __int64 result; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdx

  *a3 = 0LL;
  a3[2] = a3 + 1;
  a3[1] = a3 + 1;
  v3 = a3 + 15;
  a3[3] = a1;
  v4 = 12LL;
  do
  {
    *(v3 - 1) = 0;
    *v3 = 6;
    v3 += 12;
    --v4;
  }
  while ( v4 );
  v5 = 0;
  v6 = word_180121270;
  v7 = (char *)a3 + 679;
  do
  {
    v8 = *v6++;
    *(v7 - 1) = v5;
    *(_WORD *)(v7 - 3) = (v8 >> 4) + 1;
    ++v5;
    *v7 ^= (*v7 ^ (2 * dword_180163CCC)) & 6;
    v7 += 4;
  }
  while ( v5 < 0x81 );
  if ( (a2 & 1) != 0 )
  {
    result = 1LL;
  }
  else
  {
    result = LODWORD(qword_1801636A0[0]);
    if ( !LODWORD(qword_1801636A0[0]) )
      return result;
  }
  v10 = a3 + 411;
  v11 = (unsigned int)result;
  do
  {
    *v10 = a3;
    v10 += 6;
    --v11;
  }
  while ( v11 );
  return result;
}
