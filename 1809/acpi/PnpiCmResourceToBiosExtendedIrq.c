/*
 * XREFs of PnpiCmResourceToBiosExtendedIrq @ 0x1C00B0BC4
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C008E450 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C000DF28 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 */

__int64 __fastcall PnpiCmResourceToBiosExtendedIrq(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v5; // edx
  int v6; // eax
  __int64 i; // rdi
  char Polarity; // al
  char v9; // dl
  __int16 v10; // r8
  char v11; // cl
  char v12; // dl
  char v13; // cl
  char v14; // r8
  char v15; // dl
  int v17; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(a3 + 16);
  v6 = 0;
  if ( v5 )
  {
    for ( i = a3 + 20; *(_BYTE *)i != 2; i += 20LL )
    {
      if ( ++v6 >= v5 )
        return v3 == 0 ? 0xC0000001 : 0;
    }
    *(_DWORD *)(a2 + 5) = *(unsigned __int16 *)(i + 4);
    *(_BYTE *)(a2 + 3) = 0;
    Polarity = ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(a1 + 736), *(_DWORD *)(i + 8), &v17);
    v9 = *(_BYTE *)(a2 + 3);
    v10 = *(_WORD *)(i + 2) & 1;
    if ( Polarity )
    {
      v11 = v9 | 2;
      if ( !v10 )
        v11 = *(_BYTE *)(a2 + 3);
      v12 = v11;
      v13 = v17;
      *(_BYTE *)(a2 + 3) = v12;
      v14 = v12 | 4;
      if ( (v13 & 2) == 0 )
        v14 = v12;
    }
    else
    {
      if ( v10 )
        v15 = v9 | 2;
      else
        v15 = v9 | 4;
      v14 = v15;
    }
    *(_BYTE *)(a2 + 3) = v14;
    if ( *(_BYTE *)(i + 1) == 3 )
    {
      v14 |= 8u;
      *(_BYTE *)(a2 + 3) = v14;
    }
    *(_BYTE *)(a2 + 3) = v14 | 1;
    *(_BYTE *)i = 0;
    v3 = 1;
  }
  return v3 == 0 ? 0xC0000001 : 0;
}
