/*
 * XREFs of MiFindClearVadBitsAligned @ 0x1406A587C
 * Callers:
 *     MiFindEmptyAddressRange @ 0x1405F3500 (MiFindEmptyAddressRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFindClearVadBitsAligned(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // eax
  unsigned __int64 v5; // r10
  unsigned int v6; // ebx
  unsigned int v7; // edx
  unsigned int v8; // r11d
  __int64 v9; // r9
  _DWORD *v10; // rcx
  unsigned int i; // eax

  v4 = *(_DWORD *)a1;
  v5 = a2 >> 16;
  v6 = -1;
  if ( a3 < *(_DWORD *)a1 )
  {
    v7 = a2 >> 16;
    v8 = v4 - a3;
    if ( a4 > (unsigned int)v5 && a4 < v4 )
      v7 = -(int)v5 & (v5 + a4 - 1);
    if ( v7 <= v8 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      while ( 1 )
      {
        v10 = (_DWORD *)(v9 + 4 * ((unsigned __int64)v7 >> 5));
        for ( i = 0; i < a3; ++v10 )
        {
          if ( *v10 )
            break;
          i += 32;
        }
        if ( i == a3 )
          break;
        v7 = v5 + (-(int)v5 & (i + v7));
        if ( v7 > v8 )
          return v6;
      }
      return v7;
    }
  }
  return v6;
}
