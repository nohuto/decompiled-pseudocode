/*
 * XREFs of UsbhValidateStringDescriptor @ 0x1C001DAE0
 * Callers:
 *     UsbhGetProductIdString @ 0x1C001D974 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x1C0021554 (UsbhGetSerialNumber.c)
 *     UsbhGetLanguageIdString @ 0x1C0021C54 (UsbhGetLanguageIdString.c)
 *     UsbhGetBillboardInfo @ 0x1C0048E50 (UsbhGetBillboardInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 */

char __fastcall UsbhValidateStringDescriptor(__int64 a1, unsigned __int8 *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // r10d
  int v5; // r10d
  PDEVICE_OBJECT v7; // rcx
  int v8; // r9d

  v4 = *a2;
  if ( v4 > a3 )
  {
    if ( a4 )
      *a4 = -1072693247;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v8 = 10;
LABEL_21:
    WPP_RECORDER_SF_(v7->DeviceExtension, 0, 1, v8, (__int64)&WPP_65ba9c319ebf3ca6864be494501f8c6f_Traceguids);
    return 0;
  }
  if ( (unsigned __int8)v4 <= 2u )
  {
    if ( a4 )
      *a4 = -1072693247;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v8 = 11;
    goto LABEL_21;
  }
  if ( a2[1] != 3 )
  {
    if ( a4 )
      *a4 = -1072693246;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v8 = 12;
    goto LABEL_21;
  }
  v5 = v4 & 1;
  if ( !v5 )
    return 1;
  if ( a4 )
    *a4 = -1072693247;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        13,
        (__int64)&WPP_65ba9c319ebf3ca6864be494501f8c6f_Traceguids,
        v5);
  }
  return 0;
}
