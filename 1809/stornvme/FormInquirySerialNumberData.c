/*
 * XREFs of FormInquirySerialNumberData @ 0x1C0005E98
 * Callers:
 *     ScsiInquiryRequest @ 0x1C00054AC (ScsiInquiryRequest.c)
 * Callees:
 *     SerialNumberFromNvmeId @ 0x1C0005D4C (SerialNumberFromNvmeId.c)
 *     NVMeSetSenseData @ 0x1C000A840 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquirySerialNumberData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // rdx
  unsigned __int8 v7; // cl
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r11
  _QWORD *v11; // r15
  __int64 v12; // rax
  bool v13; // r14
  bool v14; // dl
  unsigned __int8 v15; // al
  __int64 v16; // r9
  unsigned int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned int v20; // r10d
  __int64 v21; // r8
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 result; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx

  v3 = *(_QWORD *)(a1 + 1528);
  v5 = 0LL;
  LOBYTE(a3) = *(_BYTE *)(a2 + 2);
  if ( (_BYTE)a3 == 40 )
    v7 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v7 = *(_BYTE *)(a2 + 7);
  v8 = v7;
  v9 = *(_QWORD *)(a1 + 8LL * v7 + 1640);
  v10 = v9 + 68;
  v11 = (_QWORD *)(v9 + 84);
  v12 = *(_QWORD *)(v9 + 68);
  if ( !v12 )
    v12 = *(_QWORD *)(v10 + 8);
  v13 = v12 != 0;
  v14 = *v11 != 0LL;
  if ( v12 )
  {
    v15 = 40;
    v16 = 40LL;
  }
  else if ( *v11 )
  {
    v15 = 20;
    v16 = 20LL;
  }
  else
  {
    v16 = 30LL;
    v15 = 30;
  }
  v17 = v15 + 4;
  if ( (_BYTE)a3 == 40 )
  {
    v18 = *(_QWORD *)(a2 + 64);
    v19 = 60LL;
  }
  else
  {
    v18 = *(_QWORD *)(a2 + 24);
    v19 = 16LL;
  }
  if ( *(_DWORD *)(a2 + v19) < v17 )
  {
    LOBYTE(v16) = 36;
    LOBYTE(v5) = 6;
    NVMeSetSenseData(a2, v5, a3, v16);
    return 3238002694LL;
  }
  v20 = 0;
  *(_WORD *)v18 = 0x8000;
  *(_BYTE *)(v18 + 3) = v15;
  v21 = v18 + 4;
  if ( v13 )
  {
    v22 = 16;
    v23 = v10;
    goto LABEL_14;
  }
  if ( v14 )
  {
    v22 = 8;
    v23 = (__int64)v11;
LABEL_14:
    v20 = SerialNumberFromNvmeId(v23, v22, v21, v16);
    goto LABEL_15;
  }
  *(_OWORD *)v21 = *(_OWORD *)(v3 + 4);
  *(_DWORD *)(v18 + 20) = *(_DWORD *)(v3 + 20);
  *(_BYTE *)(v18 + 24) = 95;
  v25 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8 * v8 + 1640) + 18LL);
  *(_BYTE *)(v21 + 24) = `HexFromUshort'::`2'::hexDigits[*(_WORD *)(*(_QWORD *)(a1 + 8 * v8 + 1640) + 18LL) & 0xF];
  *(_BYTE *)(v21 + 23) = `HexFromUshort'::`2'::hexDigits[(unsigned __int8)v25 >> 4];
  *(_BYTE *)(v21 + 22) = `HexFromUshort'::`2'::hexDigits[((unsigned int)v25 >> 8) & 0xF];
  *(_BYTE *)(v21 + 21) = `HexFromUshort'::`2'::hexDigits[v25 >> 12];
  v26 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8 * v8 + 1640) + 16LL);
  *(_BYTE *)(v21 + 28) = `HexFromUshort'::`2'::hexDigits[*(_WORD *)(*(_QWORD *)(a1 + 8 * v8 + 1640) + 16LL) & 0xF];
  *(_BYTE *)(v21 + 27) = `HexFromUshort'::`2'::hexDigits[(unsigned __int8)v26 >> 4];
  *(_BYTE *)(v21 + 26) = `HexFromUshort'::`2'::hexDigits[((unsigned int)v26 >> 8) & 0xF];
  *(_BYTE *)(v21 + 25) = `HexFromUshort'::`2'::hexDigits[v26 >> 12];
  *(_BYTE *)(v21 + 29) = 46;
LABEL_15:
  if ( v20 )
    return v20;
  *(_DWORD *)(a2 + v19) = v17;
  result = 0LL;
  *(_BYTE *)(a2 + 3) = 1;
  return result;
}
