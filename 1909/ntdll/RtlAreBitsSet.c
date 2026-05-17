/*
 * XREFs of RtlAreBitsSet @ 0x18007AA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlAreBitsSet(__int64 a1, unsigned int a2, unsigned int a3)
{
  char v3; // r9
  unsigned int v4; // r10d
  __int64 v6; // rcx
  int *v7; // rdx
  int v8; // r11d
  int *v9; // rbx

  v3 = a2;
  v4 = a2 + a3 - 1;
  if ( v4 >= *(_DWORD *)a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return _bittest(*(const signed __int32 **)(a1 + 8), a2);
    return 0;
  }
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (int *)(v6 + 4 * ((unsigned __int64)a2 >> 5));
  v8 = *v7;
  v9 = (int *)(v6 + 4 * ((unsigned __int64)v4 >> 5));
  if ( v7 != v9 )
  {
    if ( ((-1 << v3) & v8) == -1 << v3 )
    {
      while ( ++v7 != v9 )
      {
        if ( *v7 != -1 )
          return 0;
      }
      return ((0xFFFFFFFF >> ~(_BYTE)v4) & *v7) == 0xFFFFFFFF >> ~(_BYTE)v4;
    }
    return 0;
  }
  return ((0xFFFFFFFF >> (32 - a3) << v3) & v8) == 0xFFFFFFFF >> (32 - a3) << v3;
}
