/*
 * XREFs of PnpiCmResourceToBiosIoPort @ 0x1C008E6AC
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C008E450 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosIoPort(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // r8d
  __int64 i; // rdx
  __int16 v5; // ax
  __int16 v6; // ax
  bool v7; // zf
  char v8; // al

  *(_BYTE *)(a1 + 1) = 0;
  v2 = 0;
  *(_DWORD *)(a1 + 2) = 0;
  *(_WORD *)(a1 + 6) = 0;
  v3 = *(_DWORD *)(a2 + 16);
  if ( v3 )
  {
    for ( i = a2 + 20; *(_BYTE *)i != 1; i += 20LL )
    {
      if ( ++v2 >= v3 )
        return 0LL;
    }
    v5 = *(_WORD *)(i + 4);
    *(_WORD *)(a1 + 2) = v5;
    *(_WORD *)(a1 + 4) = v5;
    *(_BYTE *)(a1 + 6) = 1;
    *(_BYTE *)(a1 + 7) = *(_BYTE *)(i + 12);
    *(_BYTE *)(a1 + 1) = 0;
    v6 = *(_WORD *)(i + 2);
    if ( (v6 & 4) != 0 )
    {
      *(_BYTE *)(a1 + 1) = 0;
      v6 = *(_WORD *)(i + 2);
    }
    v7 = (v6 & 0x10) == 0;
    v8 = *(_BYTE *)(a1 + 1);
    if ( !v7 )
      v8 = 1;
    *(_BYTE *)(a1 + 1) = v8;
    *(_BYTE *)i = 0;
  }
  return 0LL;
}
