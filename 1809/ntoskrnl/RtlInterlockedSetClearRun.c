/*
 * XREFs of RtlInterlockedSetClearRun @ 0x140014CE0
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1402BD3C4 (MiDecommitHardwareEnclavePages.c)
 *     MiGetPageFromSlabEntry @ 0x1402C2A38 (MiGetPageFromSlabEntry.c)
 *     EtwpFindUserBufferSpace @ 0x1405C2B98 (EtwpFindUserBufferSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInterlockedSetClearRun(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  volatile signed __int32 *v4; // r10
  unsigned int v5; // r11d
  unsigned __int64 v6; // rbp
  signed __int32 v7; // eax
  int v8; // edx
  signed __int32 v9; // ett
  int v11; // esi
  signed __int32 v12; // eax
  int v13; // edx
  signed __int32 v14; // ett
  signed __int32 v15; // eax
  int v16; // edx
  signed __int32 v17; // ett
  unsigned int v18; // r9d
  volatile signed __int32 *v19; // r10
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax

  v3 = a2 & 0x1F;
  v4 = (volatile signed __int32 *)((*(_QWORD *)(a1 + 8) + ((unsigned __int64)a2 >> 3)) & 0xFFFFFFFFFFFFFFFCuLL);
  v5 = a3;
  v6 = a2;
  if ( v3 + (unsigned __int64)a3 <= 0x20 )
  {
    v7 = *v4;
    if ( a3 == 32 )
      v8 = -1;
    else
      v8 = ((1 << a3) - 1) << v3;
    if ( (v8 & v7) != 0 )
      return 0LL;
    while ( 1 )
    {
      v9 = v7;
      v7 = _InterlockedCompareExchange(v4, v7 | v8, v7);
      if ( v9 == v7 )
        break;
      if ( (v7 & v8) != 0 )
        return 0LL;
    }
    return 1LL;
  }
  v11 = a2 & 0x1F;
  if ( (a2 & 0x1F) == 0 )
    goto LABEL_11;
  v12 = *v4;
  v13 = ((1 << (32 - v11)) - 1) << v3;
  if ( (v13 & *v4) != 0 )
    return 0LL;
  while ( 1 )
  {
    v14 = v12;
    v12 = _InterlockedCompareExchange(v4, v12 | v13, v12);
    if ( v14 == v12 )
      break;
    if ( (v12 & v13) != 0 )
      return 0LL;
  }
  v5 = a3 - (32 - v11);
  for ( ++v4; ; ++v4 )
  {
LABEL_11:
    if ( v5 < 0x20 )
    {
      if ( !v5 )
        return 1LL;
      v15 = *v4;
      v16 = (1 << v5) - 1;
      if ( (v16 & *v4) == 0 )
      {
        do
        {
          v17 = v15;
          v15 = _InterlockedCompareExchange(v4, v15 | v16, v15);
          if ( v17 == v15 )
            return 1LL;
        }
        while ( (v15 & v16) == 0 );
      }
      v18 = a3 - v5;
      v19 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (v6 >> 5));
      if ( v3 + (unsigned __int64)(a3 - v5) > 0x20 )
      {
        if ( v11 )
        {
          _InterlockedAnd(v19, ~(((1 << (32 - v11)) - 1) << v3));
          v18 -= 32 - v11;
          ++v19;
        }
        if ( v18 >= 0x20 )
        {
          v21 = (unsigned __int64)v18 >> 5;
          do
          {
            *v19 = 0;
            v18 -= 32;
            ++v19;
            --v21;
          }
          while ( v21 );
        }
        goto LABEL_38;
      }
LABEL_40:
      if ( v18 == 32 )
        *v19 = 0;
      else
        _InterlockedAnd(v19, ~(((1 << v18) - 1) << v3));
      return 0LL;
    }
    if ( _InterlockedCompareExchange(v4, -1, 0) )
      break;
    v5 -= 32;
  }
  if ( a3 == v5 )
    return 0LL;
  v18 = a3 - v5;
  v19 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (v6 >> 5));
  if ( v3 + (unsigned __int64)(a3 - v5) <= 0x20 )
    goto LABEL_40;
  if ( v11 )
  {
    _InterlockedAnd(v19, ~(((1 << (32 - v11)) - 1) << v3));
    v18 -= 32 - v11;
    ++v19;
  }
  if ( v18 >= 0x20 )
  {
    v20 = (unsigned __int64)v18 >> 5;
    do
    {
      *v19 = 0;
      v18 -= 32;
      ++v19;
      --v20;
    }
    while ( v20 );
  }
LABEL_38:
  if ( v18 )
    _InterlockedAnd(v19, -1 << v18);
  return 0LL;
}
