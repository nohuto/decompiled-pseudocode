/*
 * XREFs of KeIdleSpecCtrl @ 0x14013E1F0
 * Callers:
 *     PoIdle @ 0x14005D6B0 (PoIdle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIdleSpecCtrl(__int64 a1, int a2, _DWORD *a3, char a4)
{
  unsigned __int16 v4; // r11
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // r9
  unsigned __int16 v8; // ax
  __int64 v9; // rdx
  signed __int16 v10; // tt
  __int64 result; // rax
  __int64 v12; // rdx
  signed __int16 v13; // tt
  __int16 v14; // cx
  int v15; // [rsp+10h] [rbp+10h]

  v4 = 0;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a1 + 1762) & 1) != 0 )
    {
      v6 = *(_WORD *)(a1 + 1764);
      if ( v6 )
      {
        *(_WORD *)(a1 + 1760) |= 1u;
        *a3 = v6;
      }
    }
    _m_prefetchw((const void *)(a1 + 1772));
    v7 = *(_WORD *)(a1 + 1772);
    if ( (v7 & 4) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 1760) & 1) != 0 )
      {
        v8 = *(_WORD *)(a1 + 1764);
        if ( (v8 & 3) == 0 )
        {
          v4 = 2;
          *(_WORD *)(a1 + 1764) = v8 | 2;
          __writemsr(0x48u, v8 | 2u);
        }
      }
      _InterlockedOr16((volatile signed __int16 *)(a1 + 1772), 2u);
      v9 = *(_QWORD *)(a1 + 11696);
      _m_prefetchw((const void *)(v9 + 1772));
      do
        v10 = *(_WORD *)(v9 + 1772);
      while ( v10 != _InterlockedCompareExchange16((volatile signed __int16 *)(v9 + 1772), v10 & 0xFFE4 | 0xA, v10) );
    }
    v15 = v4;
    if ( (*(_BYTE *)(a1 + 1762) & 0x40) != 0 )
      HIWORD(v15) = *(_WORD *)(a1 + 28316);
    result = v7;
    *a3 = v15;
  }
  else
  {
    if ( (a4 & 4) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 11696);
      _m_prefetchw((const void *)(v12 + 1772));
      do
        v13 = *(_WORD *)(v12 + 1772);
      while ( v13 != _InterlockedCompareExchange16((volatile signed __int16 *)(v12 + 1772), v13 & 0xFFF5 | 2, v13) );
      if ( (*(_WORD *)(a1 + 1772) & 0x10) == 0 )
      {
        v14 = *(_WORD *)(a1 + 1764);
        if ( (v14 & 2) != 0 )
        {
          *(_WORD *)(a1 + 1764) = v14 & 0xFFFD;
          __writemsr(0x48u, v14 & 0xFFFD);
        }
      }
    }
    *(_WORD *)(a1 + 1760) &= ~1u;
    return 0LL;
  }
  return result;
}
