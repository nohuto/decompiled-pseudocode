/*
 * XREFs of AlpcFreeCompletionListMessage @ 0x18006C7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AlpcFreeCompletionListMessage(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r8
  int v4; // ecx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r8
  volatile signed __int32 *v8; // r11
  int v9; // r10d
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx

  if ( (a2 & 0x3F) == 0 )
  {
    v3 = a2 + *(unsigned __int16 *)(a2 + 2);
    if ( *(_DWORD *)(a1 + 36) )
    {
      if ( (v3 & 7) != 0 )
        v4 = 8 - (v3 & 7);
      else
        v4 = 0;
      v3 += (unsigned int)(v4 + *(_DWORD *)(a1 + 40));
    }
    if ( a2 < v3 )
    {
      v5 = a1 + *(unsigned int *)(a1 + 28);
      if ( a2 >= v5 && v3 <= v5 + *(unsigned int *)(a1 + 32) )
      {
        v6 = (a2 - v5) >> 6;
        v7 = ((v3 - v5 + 63) >> 6) - v6;
        v8 = (volatile signed __int32 *)(a1 + *(unsigned int *)(a1 + 20) + 4 * ((a2 - v5) >> 11));
        v9 = v6 & 0x1F;
        if ( v9 )
        {
          v10 = v7;
          if ( (unsigned int)(32 - v9) <= v7 )
            v10 = 32 - v9;
          _InterlockedAnd(v8++, ~(((1 << v10) - 1) << v9));
          v7 -= v10;
        }
        if ( v7 >= 0x20 )
        {
          v11 = v7 >> 5;
          v7 += -32LL * (v7 >> 5);
          do
          {
            _InterlockedAnd(v8++, 0);
            --v11;
          }
          while ( v11 );
        }
        if ( v7 )
          _InterlockedAnd(v8, -1 << v7);
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 192));
      }
    }
  }
}
