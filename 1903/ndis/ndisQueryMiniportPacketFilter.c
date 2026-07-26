/*
 * XREFs of ndisQueryMiniportPacketFilter @ 0x1C006F3AC
 * Callers:
 *     ndisOidPrePacketFilter @ 0x1C0026540 (ndisOidPrePacketFilter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisQueryMiniportPacketFilter(__int64 a1, __int64 a2)
{
  int v2; // r9d
  unsigned int v3; // r8d
  int v4; // eax

  v2 = 0;
  v3 = 0;
  if ( (*(_DWORD *)(a2 + 4) & 0xFFFFFFFD) == 0 )
  {
    if ( *(_DWORD *)(a2 + 48) >= 4u )
    {
      v4 = *(_DWORD *)(a1 + 1836);
      if ( v4 )
      {
        if ( v4 == 16 )
          v3 = 259;
      }
      else
      {
        v2 = *(_DWORD *)(*(_QWORD *)(a1 + 400) + 312LL);
      }
      **(_DWORD **)(a2 + 40) = v2;
      *(_DWORD *)(a2 + 56) = 0;
      *(_DWORD *)(a2 + 52) = 4;
    }
    else
    {
      *(_DWORD *)(a2 + 56) = 4;
      return (unsigned int)-1073676268;
    }
  }
  return v3;
}
