/*
 * XREFs of FormInquiryDeviceIdentifiersData @ 0x1C0005C10
 * Callers:
 *     ScsiInquiryRequest @ 0x1C00054AC (ScsiInquiryRequest.c)
 * Callees:
 *     GetNamespaceId @ 0x1C0005144 (GetNamespaceId.c)
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     GUIDToSCSINameString @ 0x1C0005DF4 (GUIDToSCSINameString.c)
 *     NVMeSetSenseData @ 0x1C000A840 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryDeviceIdentifiersData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v6; // r15
  _WORD *v7; // rsi
  unsigned __int8 v8; // cl
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned int v12; // edi
  BOOL v13; // r14d
  unsigned int v14; // ebp
  int v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int64 v20; // r8
  unsigned __int16 NamespaceId; // ax
  __int64 v22; // r10
  unsigned __int64 v23; // rcx
  __int64 v24; // r9
  unsigned int v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+38h] [rbp-50h]
  unsigned __int16 *v27; // [rsp+40h] [rbp-48h]

  v27 = *(unsigned __int16 **)(a1 + 1528);
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v6 = (unsigned int *)(a2 + 60);
    v7 = *(_WORD **)(a2 + 64);
    v8 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v7 = *(_WORD **)(a2 + 24);
    v6 = (unsigned int *)(a2 + 16);
    v8 = *(_BYTE *)(a2 + 7);
  }
  v25 = v8;
  v9 = *(_QWORD *)(a1 + 8LL * v8 + 1640);
  v10 = v9 + 68;
  v11 = *(_QWORD *)(v9 + 68);
  if ( !v11 )
    v11 = *(_QWORD *)(v9 + 76);
  v12 = 0;
  v26 = v9 + 84;
  v13 = v11 != 0;
  if ( !*(_QWORD *)(v9 + 84) || v11 )
  {
    v15 = 0;
    v14 = 44;
    if ( !v11 )
      v14 = 76;
  }
  else
  {
    v14 = 28;
    v15 = 1;
  }
  v16 = *v6;
  if ( (unsigned int)v16 < v14 )
  {
    LOBYTE(a4) = 36;
    LOBYTE(v16) = 6;
    NVMeSetSenseData(a2, v16, 0LL, a4);
    return (unsigned int)-1056964602;
  }
  NVMeZeroMemory(v7, v16);
  *v7 = -32000;
  *((_BYTE *)v7 + 3) = v14 - 4;
  v17 = 8LL;
  *((_BYTE *)v7 + 4) = v7[2] & 0xF0 | 3;
  *((_BYTE *)v7 + 5) = *((_BYTE *)v7 + 5) & 0xC0 | 8;
  *((_BYTE *)v7 + 7) = v14 - 8;
  if ( v13 )
  {
    v17 = 16LL;
    v18 = v10;
  }
  else
  {
    if ( !v15 )
    {
      v20 = *v27;
      *((_BYTE *)v7 + 11) = `HexFromUshort'::`2'::hexDigits[*v27 & 0xF];
      *((_BYTE *)v7 + 10) = `HexFromUshort'::`2'::hexDigits[(unsigned __int8)v20 >> 4];
      *((_BYTE *)v7 + 9) = `HexFromUshort'::`2'::hexDigits[((unsigned int)v20 >> 8) & 0xF];
      *((_BYTE *)v7 + 8) = `HexFromUshort'::`2'::hexDigits[v20 >> 12];
      *(_OWORD *)(v7 + 6) = *(_OWORD *)(v27 + 12);
      *(_OWORD *)(v7 + 14) = *(_OWORD *)(v27 + 20);
      *(_QWORD *)(v7 + 22) = *((_QWORD *)v27 + 7);
      NamespaceId = GetNamespaceId(a1, v25);
      *((_BYTE *)v7 + 55) = *(_BYTE *)((NamespaceId & 0xF) + v22);
      *((_BYTE *)v7 + 54) = *(_BYTE *)((((unsigned __int64)NamespaceId >> 4) & 0xF) + v22);
      v23 = (unsigned __int64)NamespaceId >> 12;
      LOBYTE(NamespaceId) = *(_BYTE *)((((unsigned __int64)NamespaceId >> 8) & 0xF) + v22);
      *((_BYTE *)v7 + 52) = *(_BYTE *)(v23 + v22);
      *((_BYTE *)v7 + 53) = NamespaceId;
      *(_OWORD *)(v7 + 28) = *(_OWORD *)(v24 + 4);
      *((_DWORD *)v7 + 18) = *(_DWORD *)(v24 + 20);
      goto LABEL_13;
    }
    v18 = v26;
  }
  GUIDToSCSINameString(v18, v7 + 4, v17, (unsigned __int8)(v14 - 8));
LABEL_13:
  *v6 = v14;
  *(_BYTE *)(a2 + 3) = 1;
  return v12;
}
