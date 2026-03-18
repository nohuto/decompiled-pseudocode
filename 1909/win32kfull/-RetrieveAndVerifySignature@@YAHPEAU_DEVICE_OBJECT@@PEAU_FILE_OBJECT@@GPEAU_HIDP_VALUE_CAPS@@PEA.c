/*
 * XREFs of ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1C01EDA94
 * Callers:
 *     ValidateDeviceSignature @ 0x1C01EFED0 (ValidateDeviceSignature.c)
 * Callees:
 *     ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1C01ECB7C (-BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_.c)
 *     ?CoreSignatureVerify@@YAHGGPEAEPEAK@Z @ 0x1C01ECE10 (-CoreSignatureVerify@@YAHGGPEAEPEAK@Z.c)
 *     ?RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x1C01EDCC8 (-RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HI.c)
 */

_BOOL8 __fastcall RetrieveAndVerifySignature(
        PDEVICE_OBJECT DeviceObject,
        struct _FILE_OBJECT *a2,
        USAGE a3,
        struct _HIDP_VALUE_CAPS *a4,
        struct _HIDP_CAPS *a5,
        PHIDP_PREPARSED_DATA PreparsedData,
        struct _HID_COLLECTION_INFORMATION *a7,
        unsigned __int16 a8,
        unsigned int *a9)
{
  BOOL v10; // edi
  USHORT ProductID; // r14
  USHORT VendorID; // r13
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  unsigned __int8 *UsageValue; // rbx
  unsigned int v18; // r14d
  USAGE UsagePage; // dx
  PCHAR v20; // [rsp+58h] [rbp-51h] BYREF
  PCHAR Report; // [rsp+60h] [rbp-49h] BYREF
  struct _HIDP_VALUE_CAPS v22; // [rsp+68h] [rbp-41h] BYREF
  USHORT v24; // [rsp+118h] [rbp+6Fh]

  v20 = 0LL;
  Report = 0LL;
  v10 = 0;
  ProductID = a7->ProductID;
  VendorID = a7->VendorID;
  v24 = ProductID;
  if ( a3 == 199 )
  {
    v13 = *(_OWORD *)&a4[a8].HasNull;
    *(_OWORD *)&v22.UsagePage = *(_OWORD *)&a4[a8].UsagePage;
    v14 = *(_OWORD *)&a4[a8].UnitsExp;
    *(_OWORD *)&v22.HasNull = v13;
    v15 = *(_OWORD *)&a4[a8].PhysicalMin;
    *(_OWORD *)&v22.UnitsExp = v14;
    *(_QWORD *)&v22.NotRange.DesignatorIndex = *(_QWORD *)&a4[a8].NotRange.DesignatorIndex;
    *(_OWORD *)&v22.PhysicalMin = v15;
    if ( (int)RetrieveSegmentedBlob(DeviceObject, a2, &v20, &Report, a5, PreparsedData, &v22) < 0 )
    {
LABEL_3:
      *a9 = 0;
LABEL_4:
      UsageValue = (unsigned __int8 *)v20;
      goto LABEL_5;
    }
    UsageValue = (unsigned __int8 *)v20;
    v10 = CoreSignatureVerify(VendorID, ProductID, (unsigned __int8 *)v20, a9);
  }
  else
  {
    if ( (int)BuildSignatureFeatureReport(a5, a4, DeviceObject, a2, &Report, &v20) < 0 )
      goto LABEL_3;
    v18 = 0;
    if ( !a5->NumberFeatureValueCaps )
      goto LABEL_4;
    UsageValue = (unsigned __int8 *)v20;
    do
    {
      UsagePage = a4[v18].UsagePage;
      if ( UsagePage >= 0xFF00u && a4[v18].BitSize == 8 && a4[v18].ReportCount == 256 )
      {
        if ( HidP_GetUsageValueArray(
               HidP_Feature,
               UsagePage,
               0,
               a3,
               (PCHAR)UsageValue,
               0x100u,
               PreparsedData,
               Report,
               a5->FeatureReportByteLength) >= 0 )
        {
          v10 = CoreSignatureVerify(VendorID, v24, UsageValue, a9);
          if ( v10 )
            break;
        }
        else
        {
          v10 = 0;
          *a9 = 0;
        }
      }
      ++v18;
    }
    while ( v18 < a5->NumberFeatureValueCaps );
  }
LABEL_5:
  if ( UsageValue )
    Win32FreePool(UsageValue);
  if ( Report )
    Win32FreePool(Report);
  return v10;
}
