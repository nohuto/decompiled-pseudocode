/*
 * XREFs of VfPnpIsSystemRestrictedIrp @ 0x140941360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfPnpIsSystemRestrictedIrp(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // eax
  int v3; // eax
  bool v5; // zf
  int v6; // eax

  v1 = *(unsigned __int8 *)(a1 + 1);
  if ( v1 > 0x12 )
  {
    if ( v1 == 19 )
    {
      v6 = *(_DWORD *)(a1 + 8);
      if ( !v6 )
        return 0LL;
      if ( v6 <= 2 )
        return 1LL;
      v5 = v6 == 3;
    }
    else
    {
      if ( v1 <= 0x15 )
        return 1LL;
      v5 = v1 == 22;
    }
    return !v5;
  }
  if ( v1 >= 0x11 )
    return 1LL;
  if ( v1 > 0xB )
  {
    if ( v1 <= 0xD )
      return 1LL;
    v2 = v1 - 15;
  }
  else
  {
    if ( v1 >= 0xA || v1 <= 6 )
      return 1LL;
    if ( v1 == 7 )
    {
      v3 = *(_DWORD *)(a1 + 8);
      return !v3 || v3 != 1 && (v3 <= 2 || v3 > 4);
    }
    v2 = v1 - 8;
  }
  return v2 > 1;
}
