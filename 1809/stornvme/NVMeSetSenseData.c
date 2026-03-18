/*
 * XREFs of NVMeSetSenseData @ 0x1C000A840
 * Callers:
 *     ScsiModeSenseRequest @ 0x1C0002878 (ScsiModeSenseRequest.c)
 *     ScsiReadCapacityRequest @ 0x1C0003C94 (ScsiReadCapacityRequest.c)
 *     ScsiUnmapRequest @ 0x1C0003E84 (ScsiUnmapRequest.c)
 *     NVMeHwBuildIo @ 0x1C0004040 (NVMeHwBuildIo.c)
 *     ScsiToNVMe @ 0x1C0004140 (ScsiToNVMe.c)
 *     ScsiInquiryRequest @ 0x1C00054AC (ScsiInquiryRequest.c)
 *     FormInquiryBlockLimitsData @ 0x1C00055E4 (FormInquiryBlockLimitsData.c)
 *     FormInquiryStandardData @ 0x1C00058C0 (FormInquiryStandardData.c)
 *     FormInquiryVpdSupportedPagesData @ 0x1C0005AE8 (FormInquiryVpdSupportedPagesData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0005B40 (FormInquiryBlockProvisioningData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0005C10 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquirySerialNumberData @ 0x1C0005E98 (FormInquirySerialNumberData.c)
 *     LogSenseInformationalExceptions @ 0x1C0011954 (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C0011AB8 (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C0011B30 (LogSenseTemperature.c)
 *     ScsiLogSenseRequest @ 0x1C0013CE4 (ScsiLogSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0013D6C (ScsiModeSelectRequest.c)
 *     ScsiSanitizeRequest @ 0x1C0014018 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C00141AC (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C00142C0 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C00143D4 (ScsiStartStopUnitRequest.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     GetSrbScsiData @ 0x1C000526C (GetSrbScsiData.c)
 *     memmove @ 0x1C0007C40 (memmove.c)
 */

void *__fastcall NVMeSetSenseData(__int64 a1, char a2, __int64 a3, char a4)
{
  void *result; // rax
  char *v6; // rsi
  unsigned int v7; // ebx
  unsigned int v8; // edx
  void *v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 Src; // [rsp+38h] [rbp-18h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h]
  __int16 v12; // [rsp+48h] [rbp-8h]
  _BYTE *v13; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int8 v14; // [rsp+80h] [rbp+30h] BYREF

  *(_BYTE *)(a1 + 3) = a2;
  Src = 0xA000000000500F0LL;
  v11 = 0LL;
  v12 = 0;
  BYTE4(v11) = a4;
  v13 = 0LL;
  v9 = 0LL;
  v14 = 0;
  result = (void *)GetSrbScsiData(a1, 0LL, &v13, &v9, &v14);
  if ( v13 )
    *v13 = 2;
  v6 = (char *)v9;
  if ( v9 && v14 )
  {
    v7 = 18;
    if ( v14 <= 0x12u )
      v7 = v14;
    result = memmove(v9, &Src, v7);
    v8 = v14;
    *(_BYTE *)(a1 + 3) |= 0x80u;
    if ( v8 > v7 )
      return NVMeZeroMemory(&v6[v7], v8 - v7);
  }
  return result;
}
