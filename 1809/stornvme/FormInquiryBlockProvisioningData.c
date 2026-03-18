/*
 * XREFs of FormInquiryBlockProvisioningData @ 0x1C0005B40
 * Callers:
 *     ScsiInquiryRequest @ 0x1C00054AC (ScsiInquiryRequest.c)
 * Callees:
 *     IsDeallocateSupported @ 0x1C000520C (IsDeallocateSupported.c)
 *     NVMeSetSenseData @ 0x1C000A840 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryBlockProvisioningData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  _DWORD *v5; // rbx
  __int64 v6; // r9
  unsigned __int8 v7; // dl
  __int64 v8; // rsi
  char v9; // al
  __int64 v10; // r9
  __int64 v11; // r10
  unsigned int v12; // r11d
  char v13; // r8
  char v14; // cl
  char v15; // r8
  char v16; // r8
  char v17; // r8

  v3 = a2;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = (_DWORD *)(a2 + 60);
    v6 = *(_QWORD *)(a2 + 64);
    v7 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 24);
    v5 = (_DWORD *)(a2 + 16);
    v7 = *(_BYTE *)(a2 + 7);
  }
  v8 = v7;
  if ( *v5 < 8u )
  {
    LOBYTE(v6) = 36;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v3, a2, a3, v6);
    return (unsigned int)-1056964602;
  }
  else
  {
    *(_WORD *)v6 = -19968;
    *(_BYTE *)(v6 + 3) = 4;
    *(_BYTE *)(v6 + 5) &= 0x98u;
    v9 = IsDeallocateSupported(a1);
    v14 = v13 & 0x7F | (v9 != 0 ? 0x80 : 0);
    v15 = *(_BYTE *)(v10 + 6);
    *(_BYTE *)(v10 + 5) = v14;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 8 * v8 + 1640) + 65LL) == (_BYTE)v12 )
    {
      if ( IsDeallocateSupported(a1) )
        v17 = v16 & 0xF8 | 1;
      else
        v17 = v16 & 0xF8;
    }
    else
    {
      v17 = v15 & 0xF8 | 2;
    }
    *(_BYTE *)(v10 + 6) = v17;
    *v5 = 8;
    *(_BYTE *)(v11 + 3) = 1;
  }
  return v12;
}
