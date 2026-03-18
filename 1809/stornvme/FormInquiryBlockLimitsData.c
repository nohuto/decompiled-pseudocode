/*
 * XREFs of FormInquiryBlockLimitsData @ 0x1C00055E4
 * Callers:
 *     ScsiInquiryRequest @ 0x1C00054AC (ScsiInquiryRequest.c)
 * Callees:
 *     IsDeallocateSupported @ 0x1C000520C (IsDeallocateSupported.c)
 *     NVMeSetSenseData @ 0x1C000A840 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryBlockLimitsData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  _DWORD *v6; // r11
  __int64 v7; // r8
  unsigned __int8 v8; // dl
  __int64 v9; // rdi
  unsigned int v10; // r9d
  __int64 v11; // rcx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // r11d
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // ebx

  v4 = a2;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v6 = (_DWORD *)(a2 + 60);
    v7 = *(_QWORD *)(a2 + 64);
    v8 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    v6 = (_DWORD *)(a2 + 16);
    v8 = *(_BYTE *)(a2 + 7);
  }
  v9 = v8;
  if ( *v6 < 0x14u )
  {
    LOBYTE(a4) = 36;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v4, a2, v7, a4);
    return (unsigned int)-1056964602;
  }
  else
  {
    v10 = 0;
    *(_WORD *)v7 = -20480;
    if ( *v6 >= 0x24u && IsDeallocateSupported(a1) && (v12 = *(_DWORD *)(*(_QWORD *)(v11 + 8 * v9 + 1640) + 52LL)) != 0 )
    {
      v13 = 0x40000000 / v12;
      v14 = *(_DWORD *)(a1 + 44);
      v15 = v13 << 6;
      v16 = v13 << 6 >> 8;
      v17 = v13 << 6 >> 16;
      v18 = HIBYTE(v15);
      if ( v14 )
      {
        v16 = v14 >> 8;
        LOBYTE(v15) = v14;
        v17 = HIWORD(v14);
        LOBYTE(v18) = HIBYTE(v14);
      }
      *(_BYTE *)(v7 + 3) = 60;
      *(_BYTE *)(v7 + 23) = v15;
      *(_BYTE *)(v7 + 22) = v16;
      *(_BYTE *)(v7 + 21) = v17;
      *(_BYTE *)(v7 + 20) = v18;
      *(_DWORD *)(v7 + 24) = 0x10000;
    }
    else
    {
      *(_BYTE *)(v7 + 3) = 16;
      *v6 = 20;
    }
    *(_BYTE *)(v4 + 3) = 1;
  }
  return v10;
}
