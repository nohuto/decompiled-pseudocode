/*
 * XREFs of FormInquiryDeviceIdentifiersData @ 0x1C000E7C8
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0001328 (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     GetNamespaceId @ 0x1C0003844 (GetNamespaceId.c)
 *     GUIDToSCSINameString @ 0x1C000EDE0 (GUIDToSCSINameString.c)
 *     NVMeSetSenseData @ 0x1C00189CC (NVMeSetSenseData.c)
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
  unsigned __int64 v19; // r8
  unsigned __int16 NamespaceId; // ax
  __int64 v21; // r10
  unsigned __int64 v22; // rcx
  __int64 v23; // r9
  unsigned int v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+38h] [rbp-50h]
  unsigned __int16 *v27; // [rsp+40h] [rbp-48h]

  v27 = *(unsigned __int16 **)(a1 + 1536);
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
  v9 = *(_QWORD *)(a1 + 8LL * v8 + 1648);
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
  if ( (unsigned int)v16 >= v14 )
  {
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
        v19 = *v27;
        *((_BYTE *)v7 + 11) = `HexFromUchar'::`2'::hexDigits[*v27 & 0xF];
        *((_BYTE *)v7 + 10) = `HexFromUchar'::`2'::hexDigits[(unsigned __int8)v19 >> 4];
        *((_BYTE *)v7 + 9) = `HexFromUchar'::`2'::hexDigits[((unsigned int)v19 >> 8) & 0xF];
        *((_BYTE *)v7 + 8) = `HexFromUchar'::`2'::hexDigits[v19 >> 12];
        *(_OWORD *)(v7 + 6) = *(_OWORD *)(v27 + 12);
        *(_OWORD *)(v7 + 14) = *(_OWORD *)(v27 + 20);
        *(_QWORD *)(v7 + 22) = *((_QWORD *)v27 + 7);
        NamespaceId = GetNamespaceId(a1, v25);
        *((_BYTE *)v7 + 55) = *(_BYTE *)((NamespaceId & 0xF) + v21);
        *((_BYTE *)v7 + 54) = *(_BYTE *)((((unsigned __int64)NamespaceId >> 4) & 0xF) + v21);
        v22 = (unsigned __int64)NamespaceId >> 12;
        LOBYTE(NamespaceId) = *(_BYTE *)((((unsigned __int64)NamespaceId >> 8) & 0xF) + v21);
        *((_BYTE *)v7 + 52) = *(_BYTE *)(v22 + v21);
        *((_BYTE *)v7 + 53) = NamespaceId;
        *(_OWORD *)(v7 + 28) = *(_OWORD *)(v23 + 4);
        *((_DWORD *)v7 + 18) = *(_DWORD *)(v23 + 20);
        goto LABEL_19;
      }
      v18 = v26;
    }
    GUIDToSCSINameString(v18, v7 + 4, v17, (unsigned __int8)(v14 - 8));
LABEL_19:
    *v6 = v14;
    *(_BYTE *)(a2 + 3) = 1;
    return v12;
  }
  LOBYTE(a4) = 36;
  LOBYTE(v16) = 6;
  NVMeSetSenseData(a2, v16, 0LL, a4);
  return (unsigned int)-1056964602;
}
