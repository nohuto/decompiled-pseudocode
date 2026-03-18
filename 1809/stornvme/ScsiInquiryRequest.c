/*
 * XREFs of ScsiInquiryRequest @ 0x1C00054AC
 * Callers:
 *     ScsiToNVMe @ 0x1C0004140 (ScsiToNVMe.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     FormInquiryBlockLimitsData @ 0x1C00055E4 (FormInquiryBlockLimitsData.c)
 *     FormInquiryStandardData @ 0x1C00058C0 (FormInquiryStandardData.c)
 *     FormInquiryVpdSupportedPagesData @ 0x1C0005AE8 (FormInquiryVpdSupportedPagesData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0005B40 (FormInquiryBlockProvisioningData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0005C10 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquirySerialNumberData @ 0x1C0005E98 (FormInquirySerialNumberData.c)
 *     NVMeSetSenseData @ 0x1C000A840 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiInquiryRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v7; // r14
  __int64 v8; // rbp
  void *v9; // rcx
  unsigned int *v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v18; // ecx
  __int64 v19; // rax

  v4 = a3;
  v5 = a2;
  if ( (*(_BYTE *)(a3 + 1) & 1) == 0 )
  {
    if ( !*(_BYTE *)(a3 + 2) )
      return (unsigned int)FormInquiryStandardData();
LABEL_27:
    LOBYTE(a4) = 36;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v5, a2, a3, a4);
    return (unsigned int)-1056964602;
  }
  v7 = a2 + 16;
  v8 = a2 + 60;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v9 = *(void **)(a2 + 64);
    v10 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v9 = *(void **)(a2 + 24);
    v10 = (unsigned int *)(a2 + 16);
  }
  v11 = 0;
  a2 += 60LL;
  a3 = v7;
  if ( v9 )
  {
    a4 = *v10;
    if ( (_DWORD)a4 )
    {
      NVMeZeroMemory(v9, a4);
      a2 = v8;
      a3 = v7;
    }
  }
  v12 = *(unsigned __int8 *)(v4 + 2);
  if ( !*(_BYTE *)(v4 + 2) )
    return (unsigned int)FormInquiryVpdSupportedPagesData(v12, v5, a3);
  v13 = v12 - 128;
  if ( !v13 )
    return (unsigned int)FormInquirySerialNumberData(a1, v5, a3);
  v14 = v13 - 3;
  if ( !v14 )
    return (unsigned int)FormInquiryDeviceIdentifiersData(a1, v5, a3);
  v15 = v14 - 45;
  if ( v15 )
  {
    v18 = v15 - 1;
    if ( v18 )
    {
      if ( v18 == 1 )
        return (unsigned int)FormInquiryBlockProvisioningData(a1, v5, a3);
    }
    else
    {
      if ( *(_BYTE *)(v5 + 2) == 40 )
      {
        v19 = *(_QWORD *)(v5 + 64);
      }
      else
      {
        v19 = *(_QWORD *)(v5 + 24);
        a2 = a3;
      }
      if ( *(_DWORD *)a2 >= 8u )
      {
        *(_BYTE *)(v19 + 7) &= 0xF0u;
        *(_WORD *)v19 = -20224;
        *(_WORD *)(v19 + 3) = 60;
        *(_BYTE *)(v19 + 5) = 1;
        *(_BYTE *)(v5 + 3) = 1;
        return v11;
      }
    }
    goto LABEL_27;
  }
  return (unsigned int)FormInquiryBlockLimitsData(a1, v5, a3);
}
