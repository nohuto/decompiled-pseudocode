/*
 * XREFs of GetPackedName @ 0x1C001EA48
 * Callers:
 *     EnumerateControlMethods @ 0x1C001E7F0 (EnumerateControlMethods.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPackedName(_BYTE *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v4; // r9d
  unsigned int v5; // ecx
  unsigned int v6; // eax
  _BYTE *v7; // r10
  unsigned int v8; // ecx
  unsigned __int8 *v9; // rdx
  __int64 v10; // rax
  int v11; // ecx

  v2 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( a2 )
  {
    v7 = a1;
    do
    {
      if ( *v7 == 46 )
      {
        v4 = v6;
      }
      else if ( !*v7 )
      {
        v5 = v6;
        break;
      }
      ++v6;
      ++v7;
    }
    while ( v6 < a2 );
  }
  if ( v5 > v4 && v5 - v4 - 1 <= 4 )
  {
    v8 = v5 - 1;
    if ( v8 > v4 )
    {
      v9 = &a1[v8];
      v10 = v8 - v4;
      do
      {
        v11 = *v9--;
        v2 = v11 + (v2 << 8);
        --v10;
      }
      while ( v10 );
    }
  }
  return v2;
}
