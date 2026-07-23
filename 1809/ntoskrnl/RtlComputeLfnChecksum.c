/*
 * XREFs of RtlComputeLfnChecksum @ 0x14069E7D0
 * Callers:
 *     RtlGenerate8dot3Name @ 0x14069E320 (RtlGenerate8dot3Name.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlComputeLfnChecksum(unsigned __int16 *a1)
{
  _WORD *v1; // r8
  unsigned __int16 v2; // r9
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // rdx

  v1 = (_WORD *)*((_QWORD *)a1 + 1);
  v2 = 0;
  v3 = 0LL;
  v4 = (unsigned __int64)*a1 >> 1;
  if ( v1 > &v1[v4] )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      ++v3;
      v2 = *v1++ + 37 * v2;
    }
    while ( v3 < v4 );
  }
  return (unsigned __int16)((int)abs32(314159269 * v2) % 1000000007);
}
