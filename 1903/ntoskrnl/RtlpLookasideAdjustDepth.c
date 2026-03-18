/*
 * XREFs of RtlpLookasideAdjustDepth @ 0x1400FF7E0
 * Callers:
 *     RtlpDynamicLookasideRebalance @ 0x1400FF680 (RtlpDynamicLookasideRebalance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLookasideAdjustDepth(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  __int64 result; // rax
  unsigned int v5; // eax
  int v6; // r9d
  int v7; // r10d
  int v8; // r9d
  unsigned int v9; // edx

  v2 = *(_DWORD *)(a1 + 20) - *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 24) - *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a1 + 28);
  if ( a2 )
  {
    result = 0LL;
LABEL_3:
    *(_WORD *)(a1 + 16) = result;
    return result;
  }
  v5 = v2;
  if ( v3 <= v2 )
    v5 = v3;
  if ( !v2 )
    v2 = 1;
  v6 = *(unsigned __int16 *)(a1 + 16);
  v7 = *(unsigned __int16 *)(a1 + 18);
  result = 1000 * v5 / v2;
  if ( v2 < 0x19 )
  {
    v8 = v6 - 10;
    if ( v8 > 4 )
    {
LABEL_11:
      *(_WORD *)(a1 + 16) = v8;
      return result;
    }
  }
  else
  {
    if ( (unsigned int)result >= 5 )
    {
      v9 = (int)result * (v7 - v6) / 0x7D0u + 5;
      if ( v9 >= 0x1E )
        v9 = 30;
      result = v9 + v6;
      if ( (int)result >= v7 )
        result = *(unsigned __int16 *)(a1 + 18);
      goto LABEL_3;
    }
    v8 = v6 - 1;
    if ( v8 > 4 )
      goto LABEL_11;
  }
  result = 4LL;
  *(_WORD *)(a1 + 16) = 4;
  return result;
}
