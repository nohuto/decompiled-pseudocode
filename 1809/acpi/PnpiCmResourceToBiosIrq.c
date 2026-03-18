/*
 * XREFs of PnpiCmResourceToBiosIrq @ 0x1C008E64C
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C008E450 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosIrq(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // r9d
  __int64 i; // rdx
  unsigned __int16 v6; // cx
  char v8; // cl

  *(_WORD *)(a1 + 1) = 0;
  v3 = 0;
  v4 = *(_DWORD *)(a2 + 16);
  if ( v4 )
  {
    for ( i = a2 + 20; ; i += 20LL )
    {
      if ( *(_BYTE *)i == 2 )
      {
        v6 = *(_WORD *)(i + 4);
        if ( v6 < 0x10u )
          break;
      }
      if ( ++v3 >= v4 )
        return 0LL;
    }
    *(_WORD *)(a1 + 1) = 1 << v6;
    if ( (*(_BYTE *)a1 & 7) == 3 )
    {
      *(_BYTE *)(a1 + 3) = 0;
      v8 = (*(_BYTE *)(i + 2) & 1) != 0 ? 1 : 8;
      *(_BYTE *)(a1 + 3) = v8;
      if ( *(_BYTE *)(i + 1) == 3 )
        *(_BYTE *)(a1 + 3) = v8 | 0x10;
    }
    *(_BYTE *)i = 0;
  }
  return 0LL;
}
