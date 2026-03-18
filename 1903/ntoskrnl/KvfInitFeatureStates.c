/*
 * XREFs of KvfInitFeatureStates @ 0x14019D4A8
 * Callers:
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KvfInitFeatureStates(__int64 a1)
{
  _DWORD *v1; // rdx
  __int64 v2; // r8
  _DWORD *v3; // rax
  __int64 v4; // r9
  __int64 result; // rax

  v1 = &KvfFeatureStates;
  v2 = 3LL;
  v3 = &KvfFeatureStates;
  v4 = 3LL;
  do
  {
    if ( *v3 >= 8u )
      *v3 = 0;
    v3 += 6;
    --v4;
  }
  while ( v4 );
  result = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(result + 116) & 1) == 0 )
  {
    do
    {
      if ( (*v1 & 2) != 0 )
      {
        result = *v1 & 0xFFFFFFFE | ((*v1 & 1) == 0) | 4;
        *v1 = result;
      }
      v1 += 6;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
