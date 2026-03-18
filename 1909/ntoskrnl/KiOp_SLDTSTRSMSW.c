/*
 * XREFs of KiOp_SLDTSTRSMSW @ 0x1402B3B20
 * Callers:
 *     <none>
 * Callees:
 *     KiOpRetrieveRegMemAddress @ 0x14019C788 (KiOpRetrieveRegMemAddress.c)
 */

__int64 __fastcall KiOp_SLDTSTRSMSW(__int64 a1)
{
  int v2; // ecx
  unsigned int v3; // edi
  __int64 v4; // rsi
  unsigned int v5; // ecx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v9[6]; // [rsp+28h] [rbp-30h] BYREF
  char v10; // [rsp+68h] [rbp+10h] BYREF
  int v11; // [rsp+70h] [rbp+18h]
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = KiBugCheckActive;
  if ( (KiBugCheckActive & 3) == 0 )
  {
    v2 = 0;
LABEL_5:
    if ( !KiNPIEPEnabled && (KeFeatureBits2 & 4) == 0 || *(_BYTE *)(a1 + 81) != 1 && !v2 )
      return 0LL;
    goto LABEL_9;
  }
  v2 = 1;
  if ( !VslVsmEnabled )
    goto LABEL_5;
LABEL_9:
  if ( (*(_BYTE *)(a1 + 65) & 0x38) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 65) & 0x38) == 8 )
      v3 = 64;
    else
      v3 = __readcr0();
  }
  else
  {
    v3 = 0;
  }
  v4 = *(_QWORD *)(a1 + 32);
  v9[1] = v4;
  *(_DWORD *)v4 = -1073741819;
  if ( (int)KiOpRetrieveRegMemAddress(a1, v9, &v10, &v12) < 0 )
  {
    v6 = -1LL;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 58) )
      v5 = (*(_DWORD *)(a1 + 48) & 0x40) != 0 ? 2 : 4;
    else
      v5 = (*(_BYTE *)(a1 + 48) & 0x40) != 0 ? 2 : 8;
    v6 = v9[0];
    if ( v10 == 1 )
    {
      v7 = v9[0] + v5;
      if ( v7 > 0x7FFFFFFF0000LL || v7 < v9[0] )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( !v12 || v5 == 2 )
    {
      *(_WORD *)v9[0] = v3;
    }
    else if ( v5 == 4 )
    {
      *(_DWORD *)v9[0] = v3;
    }
    else
    {
      *(_QWORD *)v9[0] = v3;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 248LL) += (unsigned int)(*(_DWORD *)(a1 + 16) - *(_DWORD *)a1);
    ++KiOpDescriptorTableStoreSkip;
    *(_BYTE *)(a1 + 96) = 1;
  }
  if ( !*(_BYTE *)(a1 + 96) )
  {
    *(_DWORD *)v4 = -1073741819;
    *(_QWORD *)(v4 + 32) = 1LL;
    *(_QWORD *)(v4 + 40) = v6;
    *(_BYTE *)(a1 + 97) = 1;
  }
  return 0LL;
}
