/*
 * XREFs of HvpViewMapGetLastView @ 0x14068C480
 * Callers:
 *     HvpViewMapExtendStorage @ 0x14068C3D4 (HvpViewMapExtendStorage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HvpViewMapGetLastView(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rcx
  unsigned __int64 result; // rax
  int v4; // edx
  unsigned __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( !v1 )
    return 0LL;
  v2 = a1 + 40;
  result = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && result )
    result ^= v2;
  v4 = *(_BYTE *)(v2 + 8) & 1;
  while ( result )
  {
    if ( v1 - 1 >= *(_QWORD *)(result + 40) )
    {
      if ( v1 <= *(_QWORD *)(result + 48) )
        return result;
      v5 = *(_QWORD *)(result + 8);
    }
    else
    {
      v5 = *(_QWORD *)result;
    }
    if ( v4 && v5 )
      result ^= v5;
    else
      result = v5;
  }
  return result;
}
