/*
 * XREFs of FormInquiryBlockLimitsData @ 0x1C00013BC
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0001328 (ScsiInquiryRequest.c)
 * Callees:
 *     IsDeallocateSupported @ 0x1C0004018 (IsDeallocateSupported.c)
 *     memset @ 0x1C0005980 (memset.c)
 *     NVMeSetSenseData @ 0x1C001891C (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryBlockLimitsData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  _DWORD *v8; // rdx
  unsigned __int8 v9; // r8
  __int64 v10; // rbp
  char v11; // al
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  unsigned int v14; // ecx
  unsigned int v15; // r8d

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v6 = *(unsigned int *)(a2 + 52);
    v7 = *(_QWORD *)(a2 + 64);
    v8 = (_DWORD *)(a2 + 60);
    v9 = *(_BYTE *)(v6 + a2 + 10);
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    v8 = (_DWORD *)(a2 + 16);
    v9 = *(_BYTE *)(a2 + 7);
  }
  v10 = v9;
  if ( *v8 < 0x40u )
  {
    LOBYTE(a4) = 36;
    LOBYTE(v8) = 6;
    NVMeSetSenseData(a2, v8, 64LL, a4);
    return (unsigned int)-1056964602;
  }
  else
  {
    memset((void *)v7, 0, 0x40uLL);
    *(_BYTE *)(v7 + 1) = -80;
    v11 = IsDeallocateSupported(a1);
    v12 = 0;
    if ( v11 && (v13 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v10 + 1648) + 52LL)) != 0 )
    {
      v14 = *(_DWORD *)(a1 + 44);
      *(_BYTE *)(v7 + 3) = 60;
      v15 = (0x40000000 / v13) << 6;
      if ( v14 )
        v15 = v14;
      *(_BYTE *)(v7 + 23) = v15;
      *(_BYTE *)(v7 + 22) = BYTE1(v15);
      *(_BYTE *)(v7 + 20) = HIBYTE(v15);
      *(_BYTE *)(v7 + 21) = BYTE2(v15);
      *(_DWORD *)(v7 + 24) = 0x10000;
    }
    else
    {
      *(_BYTE *)(v7 + 3) = 60;
    }
    *(_BYTE *)(a2 + 3) = 1;
  }
  return v12;
}
