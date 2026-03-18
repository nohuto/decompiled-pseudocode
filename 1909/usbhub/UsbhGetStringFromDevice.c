/*
 * XREFs of UsbhGetStringFromDevice @ 0x1C001DB1C
 * Callers:
 *     UsbhGetProductIdString @ 0x1C001D974 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x1C0021554 (UsbhGetSerialNumber.c)
 *     UsbhGetLanguageIdString @ 0x1C0021C54 (UsbhGetLanguageIdString.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C0021E80 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetBillboardInfo @ 0x1C0048E50 (UsbhGetBillboardInfo.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C0012960 (UsbhSyncSendCommandToDevice.c)
 *     Log @ 0x1C0013360 (Log.c)
 */

__int64 __fastcall UsbhGetStringFromDevice(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        unsigned __int16 a6,
        unsigned __int8 a7)
{
  unsigned __int16 *v10; // rdi
  char v11; // r11
  __int16 v12; // r10
  int v13; // eax
  unsigned int v14; // r10d

  FdoExt(a1);
  v10 = a5;
  if ( !a5 )
    return 3221225485LL;
  Log(a1, 256, 1733514289, *a5, a7);
  Log(a1, 256, 1733514290, a2, a6);
  HIWORD(a5) = *v10;
  LOWORD(a5) = 1664;
  BYTE3(a5) = 3;
  BYTE2(a5) = v11;
  WORD2(a5) = v12;
  v13 = UsbhSyncSendCommandToDevice(a1, a2, &a5, a4, v10);
  Log(a1, 256, 1733514291, *v10, v13);
  return v14;
}
