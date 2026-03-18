/*
 * XREFs of ScsiInquiryRequest @ 0x1C0001328
 * Callers:
 *     ScsiToNVMe @ 0x1C0003070 (ScsiToNVMe.c)
 * Callees:
 *     FormInquiryBlockLimitsData @ 0x1C00013BC (FormInquiryBlockLimitsData.c)
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     FormInquiryBlockProvisioningData @ 0x1C000E684 (FormInquiryBlockProvisioningData.c)
 *     FormInquiryDeviceCharacteristicsData @ 0x1C000E764 (FormInquiryDeviceCharacteristicsData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C000E7C8 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquirySerialNumberData @ 0x1C000E9E0 (FormInquirySerialNumberData.c)
 *     FormInquiryStandardData @ 0x1C000EBC0 (FormInquiryStandardData.c)
 *     FormInquiryVpdSupportedPagesData @ 0x1C000ED74 (FormInquiryVpdSupportedPagesData.c)
 *     NVMeSetSenseData @ 0x1C00189CC (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiInquiryRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v14; // rcx

  v5 = a2;
  if ( (*(_BYTE *)(a3 + 1) & 1) == 0 )
  {
    if ( !*(_BYTE *)(a3 + 2) )
      return FormInquiryStandardData();
    goto LABEL_14;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = *(_QWORD *)(a2 + 64);
    v8 = 60LL;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    v8 = 16LL;
  }
  if ( v7 )
  {
    a2 = *(unsigned int *)(a2 + v8);
    if ( (_DWORD)a2 )
      NVMeZeroMemory(v7, a2);
  }
  v9 = *(unsigned __int8 *)(a3 + 2);
  if ( !*(_BYTE *)(a3 + 2) )
    return FormInquiryVpdSupportedPagesData(v9, v5);
  v10 = v9 - 128;
  if ( !v10 )
    return FormInquirySerialNumberData(a1, v5);
  v11 = v10 - 3;
  if ( !v11 )
    return FormInquiryDeviceIdentifiersData(a1, v5);
  v12 = v11 - 45;
  if ( !v12 )
    return FormInquiryBlockLimitsData(a1, v5);
  v14 = (unsigned int)(v12 - 1);
  if ( (_DWORD)v14 )
  {
    if ( (_DWORD)v14 == 1 )
      return FormInquiryBlockProvisioningData(a1, v5);
LABEL_14:
    LOBYTE(a4) = 36;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v5, a2, a3, a4);
    return 3238002694LL;
  }
  return FormInquiryDeviceCharacteristicsData(v14, v5);
}
